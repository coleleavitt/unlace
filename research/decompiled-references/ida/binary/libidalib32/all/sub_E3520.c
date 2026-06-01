__int64 __fastcall sub_E3520(__int64 *a1, int *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __m128 v12; // xmm0
  unsigned int v13; // ebx
  _QWORD *v15; // rax
  __int64 (__fastcall **v16)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int128 v18; // [rsp+10h] [rbp-48h] BYREF
  int v19; // [rsp+20h] [rbp-38h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v19 = -1;
  v17 = 0;
  v18 = 0;
  v16 = &off_22F638;
  if ( !dword_251408 )
    return 0;
  v2 = qword_251410;
  v5 = qword_251410 + 232 * xmmword_251418;
  if ( qword_251410 == v5 )
    return 0;
  while ( dword_251408 != *(_DWORD *)v2 )
  {
    v2 += 232;
    if ( v5 == v2 )
      return 0;
  }
  if ( !v2 )
    return 0;
  v6 = *(_QWORD *)(v2 + 40);
  if ( !v6 )
    goto LABEL_22;
  v7 = dword_24411C;
  v8 = *(_QWORD *)(v6 + 32LL * dword_24411C + 8);
  v9 = v8;
  if ( !dbg )
    goto LABEL_10;
  if ( (*(_BYTE *)(dbg + 37LL) & 0x40) == 0 )
    goto LABEL_10;
  v15 = qword_2515B0;
  if ( !qword_2515B0 )
    goto LABEL_10;
  *(_DWORD *)qword_2515B0 = v8;
  v15[1] = v6;
  *((_DWORD *)v15 + 4) = v7;
  if ( (unsigned int)sub_CC780((__int64)v15, 11) == 1 )
    v9 = *(_DWORD *)qword_2515B0;
  else
LABEL_22:
    v9 = -1;
LABEL_10:
  sub_E1F40(nullptr, v9, 3u, (__int64)&v16, 0);
  v10 = v17;
  if ( (unsigned __int64)v18 <= 1 )
  {
    v13 = 0;
  }
  else
  {
    if ( a1 )
    {
      v10 = *a1;
      v11 = a1[2];
      *a1 = v17;
      v12 = _mm_loadh_ps((const double *)&v18 + 1);
      v17 = v10;
      *((_QWORD *)&v18 + 1) = v11;
      *(__m128 *)(a1 + 1) = v12;
    }
    if ( a2 )
      *a2 = v19;
    v13 = 1;
  }
  v16 = &off_22F638;
  if ( v10 )
  {
    *(_QWORD *)&v18 = 0;
    qfree();
  }
  return v13;
}

