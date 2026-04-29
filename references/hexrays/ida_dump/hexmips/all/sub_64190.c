unsigned __int64 __fastcall sub_64190(int **a1, __int64 a2)
{
  int *v2; // r12
  int *v3; // rbx
  __int64 v4; // r12
  int v5; // eax
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  char v10; // [rsp+9h] [rbp-3Fh] BYREF
  char v11; // [rsp+Ah] [rbp-3Eh] BYREF
  char v12; // [rsp+Bh] [rbp-3Dh] BYREF
  int v13; // [rsp+Ch] [rbp-3Ch] BYREF
  int v14; // [rsp+10h] [rbp-38h] BYREF
  int v15; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v2 = a1[1];
  v16 = __readfsqword(0x28u);
  v3 = *a1;
  v4 = (__int64)&(*a1)[4 * (_QWORD)v2];
  if ( (int *)v4 != *a1 )
  {
    do
    {
      v5 = *v3;
      v6 = *(_QWORD *)(a2 + 16) == 0;
      v12 = 0;
      v15 = v5;
      if ( v6
        || (v7 = (*(__int64 (__fastcall **)(__int64, int *, char *))(a2 + 24))(a2, &v15, &v12),
            v11 = 1,
            *v3 = v7,
            v6 = *(_QWORD *)(a2 + 16) == 0,
            v14 = v3[1],
            v6)
        || (v8 = (*(__int64 (__fastcall **)(__int64, int *, char *))(a2 + 24))(a2, &v14, &v11),
            v10 = 0,
            v3[1] = v8,
            v6 = *(_QWORD *)(a2 + 16) == 0,
            v13 = v3[2],
            v6) )
      {
        std::__throw_bad_function_call();
      }
      v3 += 4;
      *(v3 - 2) = (*(__int64 (__fastcall **)(__int64, int *, char *))(a2 + 24))(a2, &v13, &v10);
    }
    while ( (int *)v4 != v3 );
  }
  return v16 - __readfsqword(0x28u);
}
