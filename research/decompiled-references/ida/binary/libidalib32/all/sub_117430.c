__int64 __fastcall sub_117430(__int64 a1, __int64 *a2)
{
  __int64 v3; // r14
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  v3 = sub_193170(a1, a2);
  do
    reg_update_strlist();
  while ( (unsigned __int8)sub_193150(a2) );
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  if ( v3 >= 0 )
  {
    v5 = a2[1];
    v6 = *a2;
    if ( a2[2] < (unsigned __int64)(v5 + 1) )
    {
      v7 = qvector_reserve();
      *a2 = v7;
      v6 = v7;
      v5 = a2[1];
    }
    *(_QWORD *)(v6 + 8 * v5) = v3;
    ++a2[1];
  }
  return 1;
}

