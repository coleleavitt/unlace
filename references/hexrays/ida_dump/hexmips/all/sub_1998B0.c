__int64 __fastcall sub_1998B0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r15
  unsigned int v6; // ebx
  __int64 v7; // rbp
  int v8; // ebp
  __int64 v9; // r13
  __int64 v10; // r15
  unsigned int v11; // ebx
  int tinfo_size; // ebp
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 func; // rax
  __int64 v17; // rsi
  __int64 v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  __int64 v22; // rdi
  int tinfo_udt_member; // eax
  __int64 v24; // [rsp+10h] [rbp-128h]
  __int64 v25; // [rsp+18h] [rbp-120h]
  __int64 v26; // [rsp+20h] [rbp-118h]
  unsigned __int64 v29; // [rsp+30h] [rbp-108h]
  __int64 v30; // [rsp+38h] [rbp-100h]
  __int64 v33; // [rsp+58h] [rbp-E0h] BYREF
  unsigned __int64 v34; // [rsp+60h] [rbp-D8h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-D0h]
  __int64 v36; // [rsp+70h] [rbp-C8h]
  __int128 v37; // [rsp+78h] [rbp-C0h]
  __int64 v38; // [rsp+88h] [rbp-B0h]
  __int128 v39; // [rsp+90h] [rbp-A8h]
  _OWORD v40[3]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-68h]
  int v42; // [rsp+D8h] [rbp-60h]
  __int64 v43; // [rsp+E0h] [rbp-58h]
  char v44; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 40 + 24);
  v26 = *(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 40;
  v29 = v5;
  v30 = *(_QWORD *)(a1 + 104);
  v24 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v34 = 0;
  v35 = 0;
  v25 = v7;
  cleanup_argloc(&v34);
  LODWORD(v34) = 1;
  v35 = v5;
  v8 = sub_1EBE40(v7 + 432, &v34, v6, 0);
  cleanup_argloc(&v34);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)(v25 + 432) + 104LL * v8;
    if ( *(_DWORD *)v9 == 1 )
      v10 = *(_QWORD *)(v9 + 8);
    else
      v10 = -1;
    if ( a2 && (*(_QWORD *)(v26 + 24) != v10 || *(_DWORD *)(v9 + 88) != 1) )
      return 0;
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL), 0);
    if ( *(_QWORD *)(v26 + 24) != v10 || *(_DWORD *)(v9 + 88) > (signed int)v6 )
    {
      sub_CBD70(0x7DBu, v9, *(_QWORD *)(a1 + 8) + 248LL, 0xFFFFFFFFLL);
      if ( *(_DWORD *)v9 == 1 )
        v14 = *(_QWORD *)(v9 + 8);
      else
        v14 = -1;
      v15 = *(_QWORD *)(v26 + 24);
      if ( *(_BYTE *)(*(_QWORD *)(v25 + 1496) + 145LL) && (int)v6 > tinfo_size && v14 > v15 )
      {
        if ( v14 - v15 < (int)v6 && !(v15 % (int)v6) )
        {
          cleanup_argloc(v9);
          *(_DWORD *)v9 = 1;
          *(_QWORD *)(v9 + 8) = v15;
LABEL_15:
          sub_1EAE00(v9, *(_QWORD *)(v25 + 1504), v6, 0);
          goto LABEL_16;
        }
        if ( !under_debugger )
          sub_37E160(52821);
      }
      else
      {
        if ( v14 == v15 || v15 - v14 >= (int)v6 )
          goto LABEL_15;
        if ( !under_debugger )
          sub_37E160(51569);
      }
      BUG();
    }
  }
LABEL_16:
  func = get_func(*(_QWORD *)(v25 + 40));
  v33 = 0;
  get_func_frame(&v33, func);
  v17 = *(_QWORD *)(v26 + 24);
  if ( v17 < 0 )
    v17 = 0;
  v18 = sub_1CB990(v25, v17);
  v19 = v6 - 1;
  if ( (int)(v6 - 1) >= 0 )
  {
    v20 = 8 * ((int)v19 + v18);
    v21 = 8 * (v18 + (int)v19 - (unsigned __int64)v19);
    while ( 1 )
    {
      v35 = 0;
      v36 = 0;
      v38 = 0;
      v41 = 1;
      v42 = -1;
      v43 = 0;
      v44 = 0;
      v34 = v20;
      v37 = 0;
      v39 = 0;
      v40[0] = 0;
      tinfo_udt_member = find_tinfo_udt_member(&v34, v33, 0);
      if ( tinfo_udt_member == -1 )
      {
        clear_tinfo_t(v40);
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38);
        }
        v22 = v36;
        if ( v36 )
          goto LABEL_24;
      }
      else
      {
        if ( v34 >> 3 == v18 && v24 >= v35 >> 3 )
        {
          clear_tinfo_t(v40);
          if ( v38 )
          {
            *(_QWORD *)&v39 = 0;
            qfree(v38);
          }
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            qfree(v36);
          }
          break;
        }
        if ( a2 )
        {
          clear_tinfo_t(v40);
          if ( v38 )
          {
            *(_QWORD *)&v39 = 0;
            qfree(v38);
          }
          if ( v36 )
          {
            *(_QWORD *)&v37 = 0;
            qfree(v36);
          }
LABEL_50:
          v11 = 0;
          clear_tinfo_t(&v33);
          return v11;
        }
        set_tinfo_property4(&v33, 10, tinfo_udt_member, tinfo_udt_member + 1LL, 0, 0);
        clear_tinfo_t(v40);
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38);
        }
        v22 = v36;
        if ( v36 )
        {
LABEL_24:
          *(_QWORD *)&v37 = 0;
          qfree(v22);
        }
      }
      if ( v21 == v20 )
        break;
      v20 -= 8;
    }
  }
  if ( !*(_BYTE *)(v25 + 320)
    && ((int)((__int64)(v29 - v30) / v24 - *(_DWORD *)(a1 + 112)) > 16 || *(_QWORD *)(v26 + 24) < a3) )
  {
    goto LABEL_50;
  }
  v11 = 1;
  if ( a2 )
  {
    if ( *(int *)(v25 + 68) > 0 || (*(_BYTE *)(v26 + 32) & 1) == 0 )
      goto LABEL_50;
    LOBYTE(v11) = *(_QWORD *)(v26 + 24) >= a4;
  }
  clear_tinfo_t(&v33);
  return v11;
}
