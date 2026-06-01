__int64 __fastcall sub_B414F0(__int64 **a1, unsigned __int8 *a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbp
  __int64 v12[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( a3 )
  {
    v6 = 0;
    v7 = (__int64)&a2[a3 - 1 + 1];
    do
    {
      v8 = *a2++;
      v6 = word_23E43C0[v8] + 16 * v6;
    }
    while ( (unsigned __int8 *)v7 != a2 );
  }
  else
  {
    v6 = 0;
  }
  v9 = *a1;
  v10 = *v9;
  v9[10] += 4;
  if ( v9[1] >= (unsigned __int64)(v10 + 4) && v10 )
    *v9 = v10 + 4;
  else
    v10 = sub_986170((__int64)v9, 4, 4, 0, a5, a6);
  v12[0] = v10;
  if ( (unsigned __int8)sub_2219190(v6, v12) )
    return v10;
  else
    return 0;
}
