__int64 __fastcall sub_3F1080(_DWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4, unsigned __int64 a5, double a6)
{
  __int64 *v8; // rbp
  char v10; // al
  unsigned __int8 v12; // al
  int v13; // eax
  char v14; // dl
  int v15; // eax
  unsigned int v17; // edx
  __int64 v18; // rdi
  unsigned int v19; // r15d
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // r15d
  int tinfo_size; // ecx
  __int64 v26; // rax
  int v27; // eax
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rdi
  int v31; // [rsp+Ch] [rbp-6Ch]
  __int64 v32[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v33; // [rsp+20h] [rbp-58h] BYREF
  __int128 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v8 = (__int64 *)a2;
  v10 = *((_BYTE *)a3 + 88);
  v35 = __readfsqword(0x28u);
  v12 = v10 & 0xF0;
  if ( v12 == 0xC0 )
  {
    v17 = *((_DWORD *)a3 + 7);
    if ( v17 > 0x10 )
      goto LABEL_14;
  }
  else if ( v12 > 0x10u )
  {
    if ( v12 != 0xB0 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v17 = getinf(99);
  if ( v17 <= 0x10 )
    v17 = getinf(99);
LABEL_14:
  if ( v17 == 176 )
  {
LABEL_17:
    if ( (unsigned __int64)getinf(88) <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag(3, 4) )
        return 0;
      netnode_check(v32, "$ golang", 0, 0);
      v18 = v32[0];
      a2 = 0;
      v19 = netnode_altval(v32[0], 0, 65);
      if ( v19 <= 0x74 )
        return 0;
      v20 = *(_DWORD *)(get_ph(v18) + 4);
      if ( v20 )
      {
        v21 = (unsigned int)(v20 - 13);
        if ( (unsigned int)v21 > 0x3B )
          return 0;
        v22 = 0x800000000000005LL;
        if ( !_bittest64(&v22, v21) || v19 == 117 )
          return 0;
      }
    }
    goto LABEL_4;
  }
  if ( v17 == 256 )
    return 0;
LABEL_4:
  v13 = *((_DWORD *)a3 + 10);
  if ( (unsigned int)(v13 - 3) > 1 )
  {
    if ( a4 && *(_BYTE *)(a4[187] + 144LL) )
      return 0;
    v14 = *((_BYTE *)a3 + 88);
    v15 = v14 & 0xF0;
    if ( (v14 & 0xF0) == 0xC0 )
      v15 = *((_DWORD *)a3 + 7);
    if ( (unsigned int)(v15 - 208) <= 0x2F )
      return 0;
    if ( !under_debugger )
      sub_383060(0xC763u, a2, a6);
LABEL_47:
    BUG();
  }
  if ( v13 != 3 )
    return 0;
  v23 = *((unsigned __int16 *)a3 + 24);
  v24 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 168LL))(a1, v23);
  if ( v24 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xC559u, v23, a6);
    goto LABEL_47;
  }
  tinfo_size = get_tinfo_size(0, a3[4], 0);
  if ( v24 == a1[130] )
  {
    tinfo_size = a1[112];
    if ( a4 )
    {
      if ( a5 != -1 )
      {
        v26 = a4[115];
        if ( (*(_BYTE *)(v26 + 176) & 0x20) == 0 )
        {
          v31 = a1[112];
          v27 = sub_3E9AE0((__int64 *)(v26 + 104), a5);
          tinfo_size = v31;
          v28 = v27;
          if ( v27 != -1 )
          {
            v29 = *a3;
            v30 = *a3 + 80 * a3[1];
            if ( *a3 != v30 )
            {
              do
              {
                if ( *(_DWORD *)v29 == 3 )
                  v28 = (__PAIR64__(v28, (unsigned int)*(unsigned __int16 *)(v29 + 8) - 45) - 8) >> 32;
                v29 += 80;
              }
              while ( v30 != v29 );
            }
            if ( v28 < 0 || 7 - v28 < 0 )
            {
              sub_3311F0(a4, a5, 0x12u);
              tinfo_size = v31;
            }
            else
            {
              v24 = a1[123] + v31 * (7 - v28);
            }
          }
        }
      }
    }
  }
  v32[0] = 0;
  v32[1] = 0;
  sub_63E80(v32, v24, tinfo_size);
  v33 = nullptr;
  v34 = 0;
  sub_64280(v8, v32);
  sub_316CB0(v8 + 2, &v33);
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33);
  }
  qfree(v32[0]);
  return 1;
}
