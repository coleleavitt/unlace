/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A110
// Address: 0x000000000006A110

//----- (000000000006A110) ----------------------------------------------------
__int64 __fastcall sub_6A110(char **a1, char a2)
{
  char *v3; // rax
  char *v4; // r15
  char *v5; // rdi
  char *v6; // rax
  char *v7; // rbp

  v3 = a1[1];
  if ( (unsigned __int64)(v3 - 1) >= 0x400 && v3 )
  {
    v4 = nullptr;
    sub_390A0((int)"%s", *a1);
    v5 = *a1;
    if ( *a1 )
    {
      a1[1] = nullptr;
      qfree(v5);
      *a1 = nullptr;
      a1[2] = nullptr;
      v4 = nullptr;
    }
  }
  else
  {
    v4 = *a1;
  }
  v6 = a1[1];
  v7 = v6 - 1;
  if ( !v6 )
    v7 = nullptr;
  if ( a1[2] < v7 + 2 )
  {
    v4 = (char *)qvector_reserve((__int64)a1, v4, (unsigned __int64)(v7 + 2), 1u);
    *a1 = v4;
  }
  a1[1] = v7 + 2;
  v7[(_QWORD)v4] = a2;
  v7[(_QWORD)*a1 + 1] = 0;
  return 0;
}
// 6A134: conditional instruction was optimized away because rax.8>=401u
