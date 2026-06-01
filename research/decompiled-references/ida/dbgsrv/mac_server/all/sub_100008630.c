/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008630
// Address: 0x0000000100008630

//----- (0000000100008630) ----------------------------------------------------
__int64 __fastcall sub_100008630(__int64 *a1, int a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 *v9; // rdi
  __int64 result; // rax
  __int64 *v11; // r14
  __int64 *v12; // rdx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  bool v16; // zf

  sub_1000022E0((__int64)a1);
  if ( !a4
    || (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, __int64, _QWORD, _QWORD))(*a1 + 296))(a1, a3, a4, a5, 0) != a5 )
  {
    return (unsigned __int8)sub_100067840((__int64)a1, a3, a2);
  }
  v9 = (__int64 *)a1[55];
  result = 1;
  if ( v9 )
  {
    v11 = a1 + 55;
    v12 = (__int64 *)a1[55];
    do
    {
      if ( v12[4] >= a3 )
        v11 = v12;
      v12 = (__int64 *)v12[v12[4] < a3];
    }
    while ( v12 );
    if ( v11 != a1 + 55 && v11[4] <= a3 )
    {
      v13 = (__int64 *)v11[1];
      if ( v13 )
      {
        do
        {
          v14 = v13;
          v13 = (__int64 *)*v13;
        }
        while ( v13 );
      }
      else
      {
        v15 = v11;
        do
        {
          v14 = (__int64 *)v15[2];
          v16 = *v14 == (_QWORD)v15;
          v15 = v14;
        }
        while ( !v16 );
      }
      if ( (__int64 *)a1[54] == v11 )
        a1[54] = (__int64)v14;
      --a1[56];
      sub_10000C9E0(v9, v11);
      operator delete(v11);
      return 1;
    }
  }
  return result;
}
