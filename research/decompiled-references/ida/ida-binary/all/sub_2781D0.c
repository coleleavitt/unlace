unsigned __int64 *__fastcall sub_2781D0(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v3; // rcx
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rax
  __int64 v6; // rdi

  v3 = *(unsigned __int64 **)(a1 + 112);
  if ( !v3 )
    return v3;
  v4 = v3[13];
  if ( v4 )
  {
    v5 = (unsigned __int64 *)v3[12];
    v6 = 0;
    while ( 1 )
    {
      v3 = v5;
      if ( a2 >= *v5 && a2 < v5[1] )
        break;
      ++v6;
      v5 += 4;
      if ( v6 == v4 )
        return nullptr;
    }
    if ( a3 )
      *a3 = v6;
    return v3;
  }
  return nullptr;
}
