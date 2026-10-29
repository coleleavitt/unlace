__int64 __fastcall sub_20C2D80(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rdx
  __int64 ***v6; // rax
  __int64 **v7; // rbx
  unsigned __int64 v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // r12
  size_t v11; // rdx

  v2 = std::_Hash_bytes(*(const void **)a2, *(_QWORD *)(a2 + 8), 0xC70F6907);
  v3 = a1[1];
  v4 = v2;
  v5 = v2 % v3;
  v6 = *(__int64 ****)(*a1 + 8 * (v2 % v3));
  if ( v6 )
  {
    v7 = *v6;
    if ( *v6 )
    {
      v8 = v5;
      v9 = v7[5];
      v10 = 0;
      while ( 1 )
      {
        if ( (__int64 *)v4 == v9
          && (v11 = *(_QWORD *)(a2 + 8), (__int64 *)v11 == v7[2])
          && (!v11 || !memcmp(*(const void **)a2, v7[1], v11)) )
        {
          v7 = (__int64 **)*v7;
          ++v10;
          if ( !v7 )
            return v10;
        }
        else
        {
          if ( v10 )
            return v10;
          v7 = (__int64 **)*v7;
          if ( !v7 )
            return v10;
        }
        v9 = v7[5];
        if ( v8 != (unsigned __int64)v9 % v3 )
          return v10;
      }
    }
  }
  return 0;
}
