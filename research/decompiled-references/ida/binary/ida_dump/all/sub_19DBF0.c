__int64 __fastcall sub_19DBF0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r15
  unsigned int v5; // ebx
  int v6; // ebp
  __int64 v7; // r13
  __int64 v8; // r15
  unsigned int v9; // ebx
  int tinfo_size; // ebp
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // r13
  unsigned int v16; // eax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbp
  __int64 v19; // [rsp+10h] [rbp-128h]
  __int64 v20; // [rsp+18h] [rbp-120h]
  __int64 v21; // [rsp+20h] [rbp-118h]
  unsigned __int64 v24; // [rsp+30h] [rbp-108h]
  __int64 v25; // [rsp+38h] [rbp-100h]
  unsigned __int64 v28; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp-D0h]
  __int64 v30; // [rsp+70h] [rbp-C8h]
  __int128 v31; // [rsp+78h] [rbp-C0h]
  __int64 v32; // [rsp+88h] [rbp-B0h]
  __int128 v33; // [rsp+90h] [rbp-A8h]
  __int128 v34; // [rsp+A0h] [rbp-98h]
  __int64 v35; // [rsp+D0h] [rbp-68h]
  int v36; // [rsp+D8h] [rbp-60h]
  __int64 v37; // [rsp+E0h] [rbp-58h]
  char v38; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+F8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 40 + 24);
  v21 = *(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 40;
  v24 = v4;
  v25 = *(_QWORD *)(a1 + 104);
  v19 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  cleanup_argloc();
  v28 = 1;
  v29 = v4;
  v6 = sub_1F06C0(v20 + 432, &v28, v5, 0);
  cleanup_argloc();
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)(v20 + 432) + 104LL * v6;
    if ( *(_DWORD *)v7 == 1 )
      v8 = *(_QWORD *)(v7 + 8);
    else
      v8 = -1;
    if ( a2 && (*(_QWORD *)(v21 + 24) != v8 || *(_DWORD *)(v7 + 88) != 1) )
      return 0;
    tinfo_size = get_tinfo_size();
    if ( *(_QWORD *)(v21 + 24) != v8 || *(_DWORD *)(v7 + 88) > (signed int)v5 )
    {
      sub_CFF70();
      if ( *(_DWORD *)v7 == 1 )
        v12 = *(_QWORD *)(v7 + 8);
      else
        v12 = -1;
      v13 = *(_QWORD *)(v21 + 24);
      if ( *(_BYTE *)(*(_QWORD *)(v20 + 1496) + 145LL) && (int)v5 > tinfo_size && v12 > v13 )
      {
        if ( v12 - v13 < (int)v5 && !(v13 % (int)v5) )
        {
          cleanup_argloc();
          *(_DWORD *)v7 = 1;
          *(_QWORD *)(v7 + 8) = v13;
LABEL_15:
          sub_1EF680(v7, *(_QWORD *)(v20 + 1504), v5, 0);
          goto LABEL_16;
        }
        if ( !under_debugger )
          sub_383060(52821);
      }
      else
      {
        if ( v12 == v13 || v13 - v12 >= (int)v5 )
          goto LABEL_15;
        if ( !under_debugger )
          sub_383060(51569);
      }
      BUG();
    }
  }
LABEL_16:
  get_func();
  get_func_frame();
  v14 = *(_QWORD *)(v21 + 24);
  if ( v14 < 0 )
    v14 = 0;
  v15 = sub_1CFD50(v20, v14);
  v16 = v5 - 1;
  if ( (int)(v5 - 1) >= 0 )
  {
    v17 = 8 * ((int)v16 + v15);
    v18 = 8 * (v15 + (int)v16 - (unsigned __int64)v16);
    while ( 1 )
    {
      v29 = 0;
      v30 = 0;
      v32 = 0;
      v35 = 1;
      v36 = -1;
      v37 = 0;
      v38 = 0;
      v28 = v17;
      v31 = 0;
      v33 = 0;
      v34 = 0;
      if ( (unsigned int)find_tinfo_udt_member() == -1 )
      {
        clear_tinfo_t();
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree();
        }
        if ( v30 )
          goto LABEL_24;
      }
      else
      {
        if ( v28 >> 3 == v15 && v19 >= v29 >> 3 )
        {
          clear_tinfo_t();
          if ( v32 )
          {
            *(_QWORD *)&v33 = 0;
            qfree();
          }
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree();
          }
          break;
        }
        if ( a2 )
        {
          clear_tinfo_t();
          if ( v32 )
          {
            *(_QWORD *)&v33 = 0;
            qfree();
          }
          if ( v30 )
          {
            *(_QWORD *)&v31 = 0;
            qfree();
          }
LABEL_50:
          v9 = 0;
          clear_tinfo_t();
          return v9;
        }
        set_tinfo_property4();
        clear_tinfo_t();
        if ( v32 )
        {
          *(_QWORD *)&v33 = 0;
          qfree();
        }
        if ( v30 )
        {
LABEL_24:
          *(_QWORD *)&v31 = 0;
          qfree();
        }
      }
      if ( v18 == v17 )
        break;
      v17 -= 8LL;
    }
  }
  if ( !*(_BYTE *)(v20 + 320)
    && ((int)((__int64)(v24 - v25) / v19 - *(_DWORD *)(a1 + 112)) > 16 || *(_QWORD *)(v21 + 24) < a3) )
  {
    goto LABEL_50;
  }
  v9 = 1;
  if ( a2 )
  {
    if ( *(int *)(v20 + 68) > 0 || (*(_BYTE *)(v21 + 32) & 1) == 0 )
      goto LABEL_50;
    LOBYTE(v9) = *(_QWORD *)(v21 + 24) >= a4;
  }
  clear_tinfo_t();
  return v9;
}
