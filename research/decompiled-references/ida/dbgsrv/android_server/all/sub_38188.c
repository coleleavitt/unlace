/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38188
// Address: 0x0000000000038188

//----- (0000000000038188) ----------------------------------------------------
bool __fastcall sub_38188(_DWORD *a1, __int64 a2, int a3)
{
  FILE *v5; // x0
  FILE *v6; // x20
  int v7; // w0
  _BOOL4 v8; // w21
  __int64 v9; // x0
  unsigned __int64 v10; // x23
  size_t v11; // x22
  void *v12; // x0
  _BYTE v14[4]; // [xsp+Ch] [xbp-1464h] BYREF
  char v15; // [xsp+10h] [xbp-1460h] BYREF
  char src[1028]; // [xsp+14h] [xbp-145Ch] BYREF
  pthread_mutex_t v17[102]; // [xsp+418h] [xbp-1058h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  qsnprintf(v17, 4096, "/proc/%u/stat", a3);
  v5 = qfopen((const char *)v17, "r");
  if ( v5 )
  {
    v6 = v5;
    *a1 = 0;
    v7 = sub_390A4(v5, "%d %1024s %c %d", (unsigned int)&v15, src, v14, (_DWORD)a1);
    v8 = v7 == 4;
    if ( a2 && v7 == 4 )
    {
      v9 = __strlen_chk(src, 1025);
      if ( v9 )
      {
        v10 = v9 + 1;
        v11 = v9;
        if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v9 + 1) )
        {
          v12 = *(void **)a2;
        }
        else
        {
          v12 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, v10, 1u);
          *(_QWORD *)a2 = v12;
        }
        *(_QWORD *)(a2 + 8) = v10;
        memmove(v12, src, v11);
        *(_BYTE *)(*(_QWORD *)a2 + v11) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    qfclose(v6);
  }
  else
  {
    return 0;
  }
  return v8;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
