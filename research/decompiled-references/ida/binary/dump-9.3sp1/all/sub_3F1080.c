__int64 __fastcall sub_3F1080(_DWORD *a1, __int64 *a2, __int64 *a3, _QWORD *a4, unsigned __int64 a5, double a6)
{
  char v9; // al
  unsigned __int8 v11; // al
  int v12; // eax
  char v13; // dl
  int v14; // eax
  unsigned int v16; // edx
  unsigned int v17; // r15d
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r15d
  int tinfo_size; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdi
  int v30; // [rsp+Ch] [rbp-6Ch]
  __int64 v31[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 *v32; // [rsp+20h] [rbp-58h] BYREF
  __int128 v33; // [rsp+28h] [rbp-50h]
  unsigned __int64 v34; // [rsp+38h] [rbp-40h]

  v9 = *((_BYTE *)a3 + 88);
  v34 = __readfsqword(0x28u);
  v11 = v9 & 0xF0;
  if ( v11 == 0xC0 )
  {
    v16 = *((_DWORD *)a3 + 7);
    if ( v16 > 0x10 )
      goto LABEL_14;
  }
  else if ( v11 > 0x10u )
  {
    if ( v11 != 0xB0 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v16 = getinf();
  if ( v16 <= 0x10 )
    v16 = getinf();
LABEL_14:
  if ( v16 == 176 )
  {
LABEL_17:
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        return 0;
      netnode_check();
      v17 = netnode_altval();
      if ( v17 <= 0x74 )
        return 0;
      v18 = *(_DWORD *)(get_ph() + 4);
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 13);
        if ( (unsigned int)v19 > 0x3B )
          return 0;
        v20 = 0x800000000000005LL;
        if ( !_bittest64(&v20, v19) || v17 == 117 )
          return 0;
      }
    }
    goto LABEL_4;
  }
  if ( v16 == 256 )
    return 0;
LABEL_4:
  v12 = *((_DWORD *)a3 + 10);
  if ( (unsigned int)(v12 - 3) > 1 )
  {
    if ( a4 && *(_BYTE *)(a4[187] + 144LL) )
      return 0;
    v13 = *((_BYTE *)a3 + 88);
    v14 = v13 & 0xF0;
    if ( (v13 & 0xF0) == 0xC0 )
      v14 = *((_DWORD *)a3 + 7);
    if ( (unsigned int)(v14 - 208) <= 0x2F )
      return 0;
    if ( !under_debugger )
      sub_383060(0xC763u, a6);
LABEL_47:
    BUG();
  }
  if ( v12 != 3 )
    return 0;
  v21 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *((unsigned __int16 *)a3 + 24));
  if ( v21 == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xC559u, a6);
    goto LABEL_47;
  }
  tinfo_size = get_tinfo_size();
  if ( v21 == a1[130] )
  {
    tinfo_size = a1[112];
    if ( a4 )
    {
      if ( a5 != -1 )
      {
        v25 = a4[115];
        if ( (*(_BYTE *)(v25 + 176) & 0x20) == 0 )
        {
          v30 = a1[112];
          v26 = sub_3E9AE0((__int64 *)(v25 + 104), a5);
          tinfo_size = v30;
          v27 = v26;
          if ( v26 != -1 )
          {
            v28 = *a3;
            v29 = *a3 + 80 * a3[1];
            if ( *a3 != v29 )
            {
              do
              {
                if ( *(_DWORD *)v28 == 3 )
                  v27 = (__PAIR64__(v27, (unsigned int)*(unsigned __int16 *)(v28 + 8) - 45) - 8) >> 32;
                v28 += 80;
              }
              while ( v29 != v28 );
            }
            if ( v27 < 0 || 7 - v27 < 0 )
            {
              sub_3311F0(a4, a5, 0x12u);
              tinfo_size = v30;
            }
            else
            {
              v21 = a1[123] + v30 * (7 - v27);
            }
          }
        }
      }
    }
  }
  v31[0] = 0;
  v31[1] = 0;
  sub_63E80(v31, v21, tinfo_size);
  v32 = nullptr;
  v33 = 0;
  sub_64280(a2, v31);
  sub_316CB0(a2 + 2, &v32, v23, v24);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree((__int64)v32);
  }
  qfree(v31[0]);
  return 1;
}
