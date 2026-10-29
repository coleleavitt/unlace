/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D050
// Address: 0x000000000040D050

//----- (000000000040D050) ----------------------------------------------------
__int64 __fastcall sub_40D050(_DWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // r13d
  FILE *v4; // rax
  FILE *v5; // rbx
  int v6; // eax
  size_t v8; // rax
  size_t v9; // rbp
  void *v10; // rdi
  size_t v11; // r15
  void *v12; // rax
  char v13; // [rsp+Bh] [rbp-145Dh] BYREF
  char v14; // [rsp+Ch] [rbp-145Ch] BYREF
  char s[1040]; // [rsp+10h] [rbp-1458h] BYREF
  char v16[4104]; // [rsp+420h] [rbp-1048h] BYREF
  unsigned __int64 v17; // [rsp+1428h] [rbp-40h]

  v3 = 0;
  v17 = __readfsqword(0x28u);
  sub_485490(v16, 4096, "/proc/%u/stat", a3);
  v4 = sub_47F960(v16, "r");
  if ( v4 )
  {
    *a1 = 0;
    v5 = v4;
    v6 = sub_40CEA0(v4, "%d %1024s %c %d", (unsigned int)&v14, s, &v13, (_DWORD)a1);
    LOBYTE(v3) = v6 == 4;
    if ( a2 && v6 == 4 )
    {
      v8 = strlen(s);
      v9 = v8;
      if ( v8 )
      {
        v10 = *(void **)a2;
        v11 = v8 + 1;
        if ( *(_QWORD *)(a2 + 16) < v8 + 1 )
        {
          v12 = sub_481540(a2, *(void **)a2, v8 + 1, 1u);
          *(_QWORD *)a2 = v12;
          v10 = v12;
        }
        *(_QWORD *)(a2 + 8) = v11;
        memmove(v10, s, v9);
        *(_BYTE *)(*(_QWORD *)a2 + v9) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    sub_480D70(v5);
  }
  return v3;
}
