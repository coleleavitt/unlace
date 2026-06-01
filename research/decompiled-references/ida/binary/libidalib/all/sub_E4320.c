__int64 __fastcall sub_E4320(__int64 *a1, int *a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx
  int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __m128 v11; // xmm0
  unsigned int v12; // ebx
  _QWORD *v14; // rdi
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+8h] [rbp-50h]
  __int128 v17; // [rsp+10h] [rbp-48h] BYREF
  int v18; // [rsp+20h] [rbp-38h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v18 = -1;
  v16 = 0;
  v17 = 0;
  v15 = &off_2306B8;
  if ( !dword_252588 )
    return 0;
  v2 = qword_252590;
  v5 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
  if ( qword_252590 == v5 )
    return 0;
  while ( dword_252588 != *(_DWORD *)v2 )
  {
    v2 += 256;
    if ( v5 == v2 )
      return 0;
  }
  if ( !v2 )
    return 0;
  v6 = *(_QWORD *)(v2 + 40);
  if ( !v6 )
    goto LABEL_22;
  v7 = dword_245174;
  v8 = *(_QWORD *)(v6 + 32LL * dword_245174 + 8);
  if ( !dbg )
    goto LABEL_10;
  if ( (*(_BYTE *)(dbg + 37LL) & 0x40) == 0 )
    goto LABEL_10;
  v14 = qword_252758;
  if ( !qword_252758 )
    goto LABEL_10;
  *(_QWORD *)qword_252758 = v8;
  v14[1] = v6;
  *((_DWORD *)v14 + 4) = v7;
  if ( (unsigned int)sub_CDCF0((__int64)v14, 11) == 1 )
    v8 = *(_QWORD *)qword_252758;
  else
LABEL_22:
    v8 = -1;
LABEL_10:
  sub_E3740(nullptr, v8, 3u, (__int64)&v15, 0);
  v9 = v16;
  if ( (unsigned __int64)v17 <= 1 )
  {
    v12 = 0;
  }
  else
  {
    if ( a1 )
    {
      v9 = *a1;
      v10 = a1[2];
      *a1 = v16;
      v11 = _mm_loadh_ps((const double *)&v17 + 1);
      v16 = v9;
      *((_QWORD *)&v17 + 1) = v10;
      *(__m128 *)(a1 + 1) = v11;
    }
    if ( a2 )
      *a2 = v18;
    v12 = 1;
  }
  v15 = &off_2306B8;
  if ( v9 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  return v12;
}

