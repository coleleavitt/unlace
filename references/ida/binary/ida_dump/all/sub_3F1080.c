__int64 __fastcall sub_3F1080(
        _DWORD *a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4,
        unsigned __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  char v16; // al
  unsigned __int8 v18; // al
  int v19; // eax
  char v20; // dl
  int v21; // eax
  unsigned int v23; // edx
  unsigned int v24; // r15d
  int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // r15d
  int tinfo_size; // ecx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned int v39; // [rsp+Ch] [rbp-6Ch]
  __int64 v40[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v41; // [rsp+20h] [rbp-58h] BYREF
  __int128 v42; // [rsp+28h] [rbp-50h]
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v16 = *((_BYTE *)a3 + 88);
  v43 = __readfsqword(0x28u);
  v18 = v16 & 0xF0;
  if ( v18 == 0xC0 )
  {
    v23 = *((_DWORD *)a3 + 7);
    if ( v23 > 0x10 )
      goto LABEL_14;
  }
  else if ( v18 > 0x10u )
  {
    if ( v18 != 0xB0 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v23 = getinf();
  if ( v23 <= 0x10 )
    v23 = getinf();
LABEL_14:
  if ( v23 == 176 )
  {
LABEL_17:
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        return 0;
      netnode_check();
      v24 = netnode_altval();
      if ( v24 <= 0x74 )
        return 0;
      v25 = *(_DWORD *)(get_ph() + 4);
      if ( v25 )
      {
        v26 = (unsigned int)(v25 - 13);
        if ( (unsigned int)v26 > 0x3B )
          return 0;
        v27 = 0x800000000000005LL;
        if ( !_bittest64(&v27, v26) || v24 == 117 )
          return 0;
      }
    }
    goto LABEL_4;
  }
  if ( v23 == 256 )
    return 0;
LABEL_4:
  v19 = *((_DWORD *)a3 + 10);
  if ( (unsigned int)(v19 - 3) > 1 )
  {
    if ( a4 && *(_BYTE *)(a4[187] + 144LL) )
      return 0;
    v20 = *((_BYTE *)a3 + 88);
    v21 = v20 & 0xF0;
    if ( (v20 & 0xF0) == 0xC0 )
      v21 = *((_DWORD *)a3 + 7);
    if ( (unsigned int)(v21 - 208) <= 0x2F )
      return 0;
    if ( !under_debugger )
      sub_383060(0xC763u, *(double *)a6.m128_u64);
LABEL_47:
    BUG();
  }
  if ( v19 != 3 )
    return 0;
  v28 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *((unsigned __int16 *)a3 + 24));
  if ( v28 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xC559u, *(double *)a6.m128_u64);
    goto LABEL_47;
  }
  tinfo_size = get_tinfo_size();
  if ( v28 == a1[130] )
  {
    tinfo_size = a1[112];
    if ( a4 )
    {
      if ( a5 != -1 )
      {
        v30 = a4[115];
        if ( (*(_BYTE *)(v30 + 176) & 0x20) == 0 )
        {
          v39 = a1[112];
          v31 = sub_3E9AE0((__int64 *)(v30 + 104), a5);
          tinfo_size = v39;
          v36 = v31;
          if ( v31 != -1 )
          {
            v37 = *a3;
            v38 = *a3 + 80 * a3[1];
            if ( *a3 != v38 )
            {
              do
              {
                if ( *(_DWORD *)v37 == 3 )
                  v36 = (__PAIR64__(v36, (unsigned int)*(unsigned __int16 *)(v37 + 8) - 45) - 8) >> 32;
                v37 += 80;
              }
              while ( v38 != v37 );
            }
            if ( v36 < 0 || 7 - v36 < 0 )
            {
              sub_3311F0(a4, a5, 0x12u, v39, v32, v33, a6, a7, a8, a9, v34, v35, a12, a13);
              tinfo_size = v39;
            }
            else
            {
              v28 = a1[123] + v39 * (7 - v36);
            }
          }
        }
      }
    }
  }
  v40[0] = 0;
  v40[1] = 0;
  sub_63E80(v40, v28, tinfo_size);
  v41 = nullptr;
  v42 = 0;
  sub_64280(a2, v40);
  sub_316CB0(a2 + 2, &v41);
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree();
  }
  qfree();
  return 1;
}
