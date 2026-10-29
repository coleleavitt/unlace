__int64 __fastcall sub_1920F0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdi

  result = clear_tinfo_t(a1 + 8);
  v7 = a1[5];
  if ( v7 )
  {
    a1[6] = 0;
    result = qfree(v7, a2, v4, v5, v6);
  }
  v8 = a1[2];
  if ( v8 )
  {
    a1[3] = 0;
    return qfree(v8, a2, v4, v5, v6);
  }
  return result;
}
