__int64 __fastcall sub_61C6C0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r12
  __m128i v13; // [rsp+20h] [rbp-38h] BYREF
  __m128i v14[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)v3 )
  {
    if ( (unsigned __int8)sub_61B740(a1, *(_QWORD *)v3, *(_QWORD *)(v3 + 8)) )
      return 1;
    v3 = *(_QWORD *)(a2 + 8);
  }
  v4 = *(_QWORD *)(v3 + 56);
  if ( v4 )
  {
    sub_639D40(&v13, v4, *(unsigned int *)(v3 + 32), *a1);
    if ( !(unsigned __int8)sub_619180(
                             (__int64)a1,
                             v4,
                             v5,
                             v6,
                             v7,
                             v8,
                             (__int128)_mm_load_si128(&v13),
                             (__int128)_mm_load_si128(v14)) )
    {
      v3 = *(_QWORD *)(a2 + 8);
      goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  v9 = *(_QWORD *)(v3 + 64);
  if ( v9 )
  {
    v10 = v9 + 16;
    v11 = v9 + 16 + 32LL * *(unsigned int *)(v9 + 8);
    if ( v11 != v9 + 16 )
    {
      while ( !(unsigned __int8)sub_61C470(a1, v10) )
      {
        v10 += 32;
        if ( v11 == v10 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}

