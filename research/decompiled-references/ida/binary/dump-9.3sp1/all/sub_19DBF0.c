__int64 __fastcall sub_19DBF0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r15
  unsigned int v6; // ebx
  int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned int v10; // ebx
  int tinfo_size; // ebp
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // r13
  unsigned int v17; // eax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbp
  __int64 v20; // rdi
  __int64 v21; // [rsp+10h] [rbp-128h]
  __int64 v22; // [rsp+18h] [rbp-120h]
  __int64 v23; // [rsp+20h] [rbp-118h]
  unsigned __int64 v26; // [rsp+30h] [rbp-108h]
  __int64 v27; // [rsp+38h] [rbp-100h]
  unsigned __int64 v30; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int64 v31; // [rsp+68h] [rbp-D0h]
  __int64 v32; // [rsp+70h] [rbp-C8h]
  __int128 v33; // [rsp+78h] [rbp-C0h]
  __int64 v34; // [rsp+88h] [rbp-B0h]
  __int128 v35; // [rsp+90h] [rbp-A8h]
  __int128 v36; // [rsp+A0h] [rbp-98h]
  __int64 v37; // [rsp+D0h] [rbp-68h]
  int v38; // [rsp+D8h] [rbp-60h]
  __int64 v39; // [rsp+E0h] [rbp-58h]
  char v40; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v41; // [rsp+F8h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 40 + 24);
  v23 = *(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 40;
  v26 = v5;
  v27 = *(_QWORD *)(a1 + 104);
  v21 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  cleanup_argloc();
  v30 = 1;
  v31 = v5;
  v7 = sub_1F06C0(v22 + 432, &v30, v6, 0);
  cleanup_argloc();
  if ( v7 >= 0 )
  {
    v8 = *(_QWORD *)(v22 + 432) + 104LL * v7;
    if ( *(_DWORD *)v8 == 1 )
      v9 = *(_QWORD *)(v8 + 8);
    else
      v9 = -1;
    if ( a2 && (*(_QWORD *)(v23 + 24) != v9 || *(_DWORD *)(v8 + 88) != 1) )
      return 0;
    tinfo_size = get_tinfo_size();
    if ( *(_QWORD *)(v23 + 24) != v9 || *(_DWORD *)(v8 + 88) > (signed int)v6 )
    {
      sub_CFF70();
      if ( *(_DWORD *)v8 == 1 )
        v13 = *(_QWORD *)(v8 + 8);
      else
        v13 = -1;
      v14 = *(_QWORD *)(v23 + 24);
      if ( *(_BYTE *)(*(_QWORD *)(v22 + 1496) + 145LL) && (int)v6 > tinfo_size && v13 > v14 )
      {
        if ( v13 - v14 < (int)v6 && !(v14 % (int)v6) )
        {
          cleanup_argloc();
          *(_DWORD *)v8 = 1;
          *(_QWORD *)(v8 + 8) = v14;
LABEL_15:
          sub_1EF680(v8, *(_QWORD *)(v22 + 1504), v6, 0);
          goto LABEL_16;
        }
        if ( !under_debugger )
          sub_383060(52821);
      }
      else
      {
        if ( v13 == v14 || v14 - v13 >= (int)v6 )
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
  v15 = *(_QWORD *)(v23 + 24);
  if ( v15 < 0 )
    v15 = 0;
  v16 = sub_1CFD50(v22, v15);
  v17 = v6 - 1;
  if ( (int)(v6 - 1) >= 0 )
  {
    v18 = 8 * ((int)v17 + v16);
    v19 = 8 * (v16 + (int)v17 - (unsigned __int64)v17);
    while ( 1 )
    {
      v31 = 0;
      v32 = 0;
      v34 = 0;
      v37 = 1;
      v38 = -1;
      v39 = 0;
      v40 = 0;
      v30 = v18;
      v33 = 0;
      v35 = 0;
      v36 = 0;
      if ( (unsigned int)find_tinfo_udt_member() == -1 )
      {
        clear_tinfo_t();
        if ( v34 )
        {
          *(_QWORD *)&v35 = 0;
          qfree(v34);
        }
        v20 = v32;
        if ( v32 )
          goto LABEL_24;
      }
      else
      {
        if ( v30 >> 3 == v16 && v21 >= v31 >> 3 )
        {
          clear_tinfo_t();
          if ( v34 )
          {
            *(_QWORD *)&v35 = 0;
            qfree(v34);
          }
          if ( v32 )
          {
            *(_QWORD *)&v33 = 0;
            qfree(v32);
          }
          break;
        }
        if ( a2 )
        {
          clear_tinfo_t();
          if ( v34 )
          {
            *(_QWORD *)&v35 = 0;
            qfree(v34);
          }
          if ( v32 )
          {
            *(_QWORD *)&v33 = 0;
            qfree(v32);
          }
LABEL_50:
          v10 = 0;
          clear_tinfo_t();
          return v10;
        }
        set_tinfo_property4();
        clear_tinfo_t();
        if ( v34 )
        {
          *(_QWORD *)&v35 = 0;
          qfree(v34);
        }
        v20 = v32;
        if ( v32 )
        {
LABEL_24:
          *(_QWORD *)&v33 = 0;
          qfree(v20);
        }
      }
      if ( v19 == v18 )
        break;
      v18 -= 8LL;
    }
  }
  if ( !*(_BYTE *)(v22 + 320)
    && ((int)((__int64)(v26 - v27) / v21 - *(_DWORD *)(a1 + 112)) > 16 || *(_QWORD *)(v23 + 24) < a3) )
  {
    goto LABEL_50;
  }
  v10 = 1;
  if ( a2 )
  {
    if ( *(int *)(v22 + 68) > 0 || (*(_BYTE *)(v23 + 32) & 1) == 0 )
      goto LABEL_50;
    LOBYTE(v10) = *(_QWORD *)(v23 + 24) >= a4;
  }
  clear_tinfo_t();
  return v10;
}
