__int64 __fastcall sub_67490(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 *v6; // r12
  __int64 (__fastcall *v7)(_QWORD *); // rax
  __int64 *v8; // rbx
  __int64 v9; // rdi

  result = qfree(a1[66]);
  v3 = (_QWORD *)a1[65];
  for ( a1[66] = 0; v3; v3 = (_QWORD *)v3[1] )
  {
    v4 = v3[46];
    if ( v4 )
    {
      v3[47] = 0;
      result = qfree(v4);
      v3[46] = 0;
      v3[48] = 0;
    }
    v5 = v3[43];
    if ( v5 )
    {
      v3[44] = 0;
      result = qfree(v5);
      v3[43] = 0;
      v3[45] = 0;
    }
  }
  v6 = (__int64 *)a1[98];
  if ( v6 )
  {
    v7 = *(__int64 (__fastcall **)(_QWORD *))(*v6 + 8);
    if ( v7 == sub_66930 )
    {
      v8 = v6 + 31;
      *v6 = (__int64)off_4E8630;
      do
      {
        v8 -= 4;
        sub_66680(v8);
      }
      while ( v8 != v6 + 7 );
      v9 = v6[1];
      *v6 = (__int64)&unk_4E86E8;
      if ( v9 )
      {
        v6[2] = 0;
        qfree(v9);
      }
      result = j__qfree(v6);
    }
    else
    {
      result = v7((_QWORD *)a1[98]);
    }
  }
  a1[98] = 0;
  return result;
}
