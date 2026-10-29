__int64 __fastcall sub_3E6480(_DWORD *a1, __int64 *a2, __int64 *a3, __int64 a4, unsigned __int64 a5)
{
  char v8; // al
  unsigned __int8 v10; // al
  int v11; // eax
  char v12; // dl
  int v13; // eax
  unsigned int v15; // edx
  unsigned int v16; // r15d
  int v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r15d
  int tinfo_size; // ecx
  __int64 v22; // rax
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rdi
  int v29; // [rsp+Ch] [rbp-6Ch]
  __int64 v30[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v31; // [rsp+20h] [rbp-58h] BYREF
  __int128 v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v8 = *((_BYTE *)a3 + 88);
  v33 = __readfsqword(0x28u);
  v10 = v8 & 0xF0;
  if ( v10 == 0xC0 )
  {
    v15 = *((_DWORD *)a3 + 7);
    if ( v15 > 0x10 )
      goto LABEL_14;
  }
  else if ( v10 > 0x10u )
  {
    if ( v10 != 0xB0 )
      goto LABEL_4;
    goto LABEL_17;
  }
  v15 = getinf();
  if ( v15 <= 0x10 )
    v15 = getinf();
LABEL_14:
  if ( v15 == 176 )
  {
LABEL_17:
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        return 0;
      netnode_check();
      v16 = netnode_altval();
      if ( v16 <= 0x74 )
        return 0;
      v17 = *(_DWORD *)(get_ph() + 4);
      if ( v17 )
      {
        v18 = (unsigned int)(v17 - 13);
        if ( (unsigned int)v18 > 0x3B )
          return 0;
        v19 = 0x800000000000005LL;
        if ( !_bittest64(&v19, v18) || v16 == 117 )
          return 0;
      }
    }
    goto LABEL_4;
  }
  if ( v15 == 256 )
    return 0;
LABEL_4:
  v11 = *((_DWORD *)a3 + 10);
  if ( (unsigned int)(v11 - 3) > 1 )
  {
    if ( a4 && *(_BYTE *)(*(_QWORD *)(a4 + 1496) + 144LL) )
      return 0;
    v12 = *((_BYTE *)a3 + 88);
    v13 = v12 & 0xF0;
    if ( (v12 & 0xF0) == 0xC0 )
      v13 = *((_DWORD *)a3 + 7);
    if ( (unsigned int)(v13 - 208) <= 0x2F )
      return 0;
    if ( !under_debugger )
      sub_37EA20(51043);
LABEL_47:
    BUG();
  }
  if ( v11 != 3 )
    return 0;
  v20 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *((unsigned __int16 *)a3 + 24));
  if ( v20 == -1 )
  {
    if ( !under_debugger )
      sub_37EA20(50521);
    goto LABEL_47;
  }
  tinfo_size = get_tinfo_size();
  if ( v20 == a1[130] )
  {
    tinfo_size = a1[112];
    if ( a4 )
    {
      if ( a5 != -1 )
      {
        v22 = *(_QWORD *)(a4 + 920);
        if ( (*(_BYTE *)(v22 + 176) & 0x20) == 0 )
        {
          v29 = a1[112];
          v23 = sub_3DEE70((__int64 *)(v22 + 104), a5);
          tinfo_size = v29;
          v26 = v23;
          if ( v23 != -1 )
          {
            v27 = *a3;
            v28 = *a3 + 80 * a3[1];
            if ( *a3 != v28 )
            {
              do
              {
                if ( *(_DWORD *)v27 == 3 )
                  v26 = (__PAIR64__(v26, (unsigned int)*(unsigned __int16 *)(v27 + 8) - 45) - 8) >> 32;
                v27 += 80;
              }
              while ( v28 != v27 );
            }
            if ( v26 < 0 || 7 - v26 < 0 )
            {
              sub_32DD50(a4, a5, 18, v29, v24, v25);
              tinfo_size = v29;
            }
            else
            {
              v20 = a1[123] + v29 * (7 - v26);
            }
          }
        }
      }
    }
  }
  v30[0] = 0;
  v30[1] = 0;
  sub_63580(v30, v20, tinfo_size);
  v31 = 0;
  v32 = 0;
  sub_63980(a2, v30);
  sub_313730(a2 + 2, &v31);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree();
  }
  qfree();
  return 1;
}
