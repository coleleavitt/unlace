/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4076F8
// Address: 0x00000000004076F8

//----- (00000000004076F8) ----------------------------------------------------
bool __fastcall sub_4076F8(_DWORD *a1, __int64 a2, int a3)
{
  _BOOL4 v5; // w20
  FILE *v6; // x0
  FILE *v7; // x21
  bool v8; // zf
  size_t v10; // x0
  size_t v11; // x22
  unsigned __int64 v12; // x25
  void *v13; // x0
  char v14; // [xsp+4Bh] [xbp-1415h] BYREF
  char v15; // [xsp+4Ch] [xbp-1414h] BYREF
  char v16[1032]; // [xsp+50h] [xbp-1410h] BYREF
  char v17[4096]; // [xsp+458h] [xbp-1008h] BYREF

  sub_49B748(v17, 0x1000u, "/proc/%u/stat", a3);
  v5 = 0;
  v6 = sub_48DCD0(v17, (unsigned __int8 *)"r");
  if ( v6 )
  {
    *a1 = 0;
    v7 = v6;
    v5 = sub_407548(v6, "%d %1024s %c %d", (unsigned int)&v15, v16, &v14, (_DWORD)a1) == 4;
    if ( a2 )
      v8 = !v5;
    else
      v8 = 1;
    if ( !v8 )
    {
      v10 = strlen(v16);
      v11 = v10;
      if ( v10 )
      {
        v12 = v10 + 1;
        v13 = *(void **)a2;
        if ( v12 > *(_QWORD *)(a2 + 16) )
        {
          v13 = sub_491288(a2, *(void **)a2, v12, 1u);
          *(_QWORD *)a2 = v13;
        }
        *(_QWORD *)(a2 + 8) = v12;
        memmove(v13, v16, v11);
        *(_BYTE *)(*(_QWORD *)a2 + v11) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    sub_4906A0(v7);
  }
  return v5;
}
