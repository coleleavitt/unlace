unsigned __int64 __fastcall sub_7D2AE0(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _DWORD *v7; // rdx
  int v8; // r12d
  __int64 *v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h]

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 5) & 0x1FFFFFFF;
  if ( !*a1 )
  {
    v5 = a2[274];
    a2[284] += 24 * v3;
    v2 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v6 = 24 * v3 + v2;
    if ( a2[275] >= v6 && v5 )
      a2[274] = v6;
    else
      v2 = sub_7CF9B0((__int64)(a2 + 274), 24 * v3, 3);
    v7 = (_DWORD *)v2;
    if ( v3 )
    {
      do
      {
        *v7 = 0;
        v7 += 6;
        *((_QWORD *)v7 - 2) = 0;
      }
      while ( (_DWORD *)(v2 + 24 * v3) != v7 );
    }
    v8 = *((_DWORD *)a1 + 5);
    *a1 = v2;
    v9 = a1 + 3;
    v10 = v8 & 0x1FFFFFFF;
    if ( 8 * v10 )
    {
      do
      {
        v11 = *v9++;
        v2 += 24LL;
        sub_6E9810((__int64)&v13, a2, v11);
        v12 = v14;
        *(__m128i *)(v2 - 24) = _mm_load_si128(&v13);
        *(_QWORD *)(v2 - 8) = v12;
      }
      while ( &a1[v10 + 3] != v9 );
      return *a1;
    }
  }
  return v2;
}

