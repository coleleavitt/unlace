_QWORD *__fastcall sub_36DC60(_QWORD *a1, __int64 a2, __int64 a3)
{
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbp
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r15
  int v17; // eax
  signed int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-C0h]
  __int64 v26; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-B0h]
  __int64 tinfo_property; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-A0h]
  __int64 v30; // [rsp+38h] [rbp-90h]
  __int64 v31; // [rsp+40h] [rbp-88h] BYREF
  __int64 v32; // [rsp+48h] [rbp-80h] BYREF
  __int128 v33; // [rsp+50h] [rbp-78h]
  __int64 v34; // [rsp+60h] [rbp-68h]
  __int128 v35; // [rsp+68h] [rbp-60h]
  char v36; // [rsp+78h] [rbp-50h]
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  *a1 = 0;
  v5 = *(_BYTE *)(a2 + 320) == 0;
  v26 = 0;
  v27 = 0;
  if ( v5 )
  {
    v20 = *(int *)(a2 + 480);
    if ( (_DWORD)v20 == -1 )
    {
      if ( !a3 )
        goto LABEL_28;
      v17 = 0;
      v19 = 0;
      goto LABEL_30;
    }
    v16 = *(_QWORD *)(a2 + 432) + 104 * v20;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 328);
    tinfo_property = 0;
    if ( a3 )
    {
      v30 = 0;
      v36 = 16;
      v31 = 0;
      v32 = 0;
      v34 = 0;
      v29 = 0;
      v33 = 0;
      v35 = 0;
      if ( !(unsigned __int8)get_tinfo_details(v6, 12, &tinfo_property) )
      {
        if ( !under_debugger )
          sub_3835A0(51020);
        goto LABEL_44;
      }
      v7 = *a1;
      v8 = v34;
      *a1 = v31;
      v31 = v7;
      v9 = v27;
      v27 = v33;
      *(_QWORD *)&v33 = v9;
      LODWORD(v9) = v26;
      LODWORD(v26) = v32;
      LODWORD(v32) = v9;
      if ( v8 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v8);
      }
      cleanup_argloc(&v32);
      clear_tinfo_t(&v31);
      v10 = tinfo_property;
      if ( tinfo_property )
      {
        v25 = v29;
        if ( (_QWORD)v29 )
        {
          v11 = 0;
          do
          {
            v12 = (_QWORD *)(v10 + 80 * v11);
            clear_tinfo_t(v12 + 8);
            v13 = v12[5];
            if ( v13 )
            {
              v12[6] = 0;
              qfree(v13);
            }
            v14 = v12[2];
            if ( v14 )
            {
              v12[3] = 0;
              qfree(v14);
            }
            ++v11;
            cleanup_argloc(v12);
            v10 = tinfo_property;
          }
          while ( v25 != v11 );
        }
        *(_QWORD *)&v29 = 0;
        qfree(v10);
      }
      v15 = *(int *)(a2 + 480);
      if ( (_DWORD)v15 == -1 )
      {
        v19 = v27;
        v17 = v26;
LABEL_30:
        v23 = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v19;
        v27 = v23;
        LODWORD(v23) = *(_DWORD *)a3;
        *(_DWORD *)a3 = v17;
        LODWORD(v26) = v23;
        goto LABEL_28;
      }
      v16 = *(_QWORD *)(a2 + 432) + 104 * v15;
      if ( *(_BYTE *)(a2 + 320) )
      {
LABEL_17:
        sub_1C7180(&tinfo_property, a2, v16, *(_DWORD *)(v16 + 88));
        copy_argloc(&v26, &tinfo_property);
        cleanup_argloc(&tinfo_property);
        v17 = v26;
        if ( (_DWORD)v26 || (v17 = *(_DWORD *)(v16 + 88) & (*(_DWORD *)(v16 + 88) - 1)) == 0 )
        {
          v19 = v27;
        }
        else
        {
          if ( (get_tinfo_property(*a1, 2) & 0x2F) == 0xD )
          {
            v18 = round_up_power2(*(unsigned int *)(v16 + 88));
            sub_1C7180(&tinfo_property, a2, v16, v18);
            copy_argloc(&v26, &tinfo_property);
            cleanup_argloc(&tinfo_property);
          }
          v19 = v27;
          v17 = v26;
        }
        goto LABEL_30;
      }
    }
    else
    {
      tinfo_property = get_tinfo_property(v6, 24);
      copy_tinfo_t(a1, &tinfo_property);
      clear_tinfo_t(&tinfo_property);
      v24 = *(_DWORD *)(a2 + 480);
      if ( v24 == -1 || *(_BYTE *)(a2 + 320) )
        goto LABEL_28;
      v16 = *(_QWORD *)(a2 + 432) + 104LL * v24;
    }
  }
  if ( (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(a2 + 464) )
    {
      v21 = sub_13CCC0((_QWORD *)a2, 0);
      copy_tinfo_t(a1, v21 + 80);
      goto LABEL_27;
    }
    if ( !under_debugger )
      sub_3835A0(52092);
LABEL_44:
    BUG();
  }
  copy_tinfo_t(a1, v16 + 80);
LABEL_27:
  sub_36DBB0(a2, a1, v16);
  if ( a3 )
    goto LABEL_17;
LABEL_28:
  set_tinfo_property(a1, 6, 192);
  cleanup_argloc(&v26);
  return a1;
}
