_BOOL8 __fastcall sub_5740E0(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v5; // r13
  unsigned int v6; // ebx
  __int64 v7; // rbp
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  bool v14; // [rsp+27h] [rbp-41h]
  _QWORD *v15; // [rsp+28h] [rbp-40h]

  v14 = 0;
  v3 = *a1 + 48LL * a2;
  if ( !*(_DWORD *)(v3 + 40) )
  {
    v5 = 48LL * a3 + *a1;
    v6 = *(_DWORD *)(v5 + 40);
    if ( !v6 )
    {
      v7 = *(_QWORD *)v5;
      if ( ((**(_QWORD **)v5 ^ **(_QWORD **)v3) & 0xFFFFFFFF0000FFFFLL) == 0
        && *(_DWORD *)(*(_QWORD *)v3 + 216LL) == *(_DWORD *)(v7 + 216) )
      {
        v15 = *(_QWORD **)v3;
        v14 = sub_5715E0(*(_QWORD *)(v3 + 24), *(_QWORD *)(v5 + 24));
        if ( v14 )
        {
          v12 = (unsigned __int64)v15;
          if ( *(_WORD *)(v7 + 208) )
          {
            do
            {
              v13 = 3LL * v6++;
              sub_572A30(
                v12,
                a1[9],
                v12,
                v9,
                v10,
                v11,
                (__int128)_mm_loadu_si128((const __m128i *)(v7 + 8 * v13 + 16)),
                *(_QWORD *)(v7 + 8 * v13 + 32));
              v7 = *(_QWORD *)v5;
              v12 = *(_QWORD *)v3;
            }
            while ( v6 < *(unsigned __int16 *)(*(_QWORD *)v5 + 208LL) );
          }
          if ( !*(_WORD *)v12 )
            *(_DWORD *)(v3 + 16) = *(_DWORD *)(v12 + 220);
          sub_56E7E0(a1, a3);
        }
      }
    }
  }
  return v14;
}
