__int64 __fastcall sub_1B14030(__int64 *a1, unsigned int a2, __int64 a3, char a4, double a5, double a6)
{
  unsigned int v6; // r13d
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[32]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int8 *v13; // [rsp+20h] [rbp-98h] BYREF
  char v14; // [rsp+78h] [rbp-40h]
  char v15; // [rsp+84h] [rbp-34h]

  v6 = 1;
  if ( (*(_QWORD *)(a3 + 27552) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v10 = sub_6F3470(a1[30] + 552, "omp_depend_t", 0xCu);
    v11 = sub_18013B0((__int64)a1, v10, a2, a1[76], 0, 0, a5, a6, 0, 0, 0, 0, 1u, 0, nullptr);
    if ( v11 && (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      *(_QWORD *)(a3 + 27552) = v11;
    }
    else
    {
      if ( a4 )
      {
        sub_168B9F0((__int64)v12, a1 + 1, a2, 0x1198u, 0);
        if ( v14 )
        {
          sub_AE9DF0(&v13, (__int64)"omp_depend_t", 1u);
        }
        else if ( v15 )
        {
          sub_1B132F0((__int64)v12, (__int64)"omp_depend_t");
        }
        sub_15F7200(v12);
      }
      return 0;
    }
  }
  return v6;
}
