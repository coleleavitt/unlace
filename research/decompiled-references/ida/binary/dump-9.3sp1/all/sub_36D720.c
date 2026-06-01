__int64 *__fastcall sub_36D720(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rbp
  _QWORD *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r15
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v18; // eax
  __int64 v19; // [rsp+8h] [rbp-C0h]
  int v20; // [rsp+10h] [rbp-B8h]
  __int64 v21; // [rsp+18h] [rbp-B0h]
  __int64 tinfo_property; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+28h] [rbp-A0h]
  __int64 v24; // [rsp+38h] [rbp-90h]
  __int64 v25; // [rsp+40h] [rbp-88h]
  __int64 v26; // [rsp+48h] [rbp-80h]
  __int128 v27; // [rsp+50h] [rbp-78h]
  __int64 v28; // [rsp+60h] [rbp-68h]
  __int128 v29; // [rsp+68h] [rbp-60h]
  char v30; // [rsp+78h] [rbp-50h]
  unsigned __int64 v31; // [rsp+88h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  *a1 = 0;
  v20 = 0;
  v21 = 0;
  if ( *(_BYTE *)(a2 + 320) )
  {
    tinfo_property = 0;
    if ( a3 )
    {
      v24 = 0;
      v30 = 16;
      v25 = 0;
      v26 = 0;
      v28 = 0;
      v23 = 0;
      v27 = 0;
      v29 = 0;
      if ( !(unsigned __int8)get_tinfo_details() )
      {
        if ( !under_debugger )
          sub_383060(51020);
        goto LABEL_42;
      }
      v5 = *a1;
      *a1 = v25;
      v25 = v5;
      v21 = v27;
      *(_QWORD *)&v27 = 0;
      v20 = v26;
      LODWORD(v26) = 0;
      cleanup_argloc();
      clear_tinfo_t();
      v6 = tinfo_property;
      if ( tinfo_property )
      {
        v19 = v23;
        if ( (_QWORD)v23 )
        {
          v7 = 0;
          do
          {
            v8 = (_QWORD *)(v6 + 80 * v7);
            clear_tinfo_t();
            v9 = v8[5];
            if ( v9 )
            {
              v8[6] = 0;
              qfree(v9);
            }
            v10 = v8[2];
            if ( v10 )
            {
              v8[3] = 0;
              qfree(v10);
            }
            ++v7;
            cleanup_argloc();
            v6 = tinfo_property;
          }
          while ( v19 != v7 );
        }
        *(_QWORD *)&v23 = 0;
        qfree(v6);
      }
      v11 = *(int *)(a2 + 480);
      if ( (_DWORD)v11 == -1 )
      {
        v15 = v21;
        v13 = v20;
LABEL_28:
        *(_QWORD *)(a3 + 8) = v15;
        *(_DWORD *)a3 = v13;
        goto LABEL_26;
      }
      v12 = *(_QWORD *)(a2 + 432) + 104 * v11;
      if ( *(_BYTE *)(a2 + 320) )
      {
LABEL_15:
        sub_1C7740(&tinfo_property, a2, v12, *(unsigned int *)(v12 + 88));
        copy_argloc();
        cleanup_argloc();
        v13 = v20;
        if ( v20 || (v13 = *(_DWORD *)(v12 + 88) & (*(_DWORD *)(v12 + 88) - 1)) == 0 )
        {
          v15 = v21;
        }
        else
        {
          if ( (get_tinfo_property() & 0x2F) == 0xD )
          {
            v14 = round_up_power2();
            sub_1C7740(&tinfo_property, a2, v12, v14);
            copy_argloc();
            cleanup_argloc();
          }
          v15 = v21;
          v13 = 0;
        }
        goto LABEL_28;
      }
    }
    else
    {
      tinfo_property = get_tinfo_property();
      copy_tinfo_t();
      clear_tinfo_t();
      v18 = *(_DWORD *)(a2 + 480);
      if ( v18 == -1 || *(_BYTE *)(a2 + 320) )
        goto LABEL_26;
      v12 = *(_QWORD *)(a2 + 432) + 104LL * v18;
    }
  }
  else
  {
    v16 = *(int *)(a2 + 480);
    if ( (_DWORD)v16 == -1 )
    {
      if ( !a3 )
        goto LABEL_26;
      v13 = 0;
      v15 = 0;
      goto LABEL_28;
    }
    v12 = *(_QWORD *)(a2 + 432) + 104 * v16;
  }
  if ( (*(_BYTE *)(a2 + 4) & 0x10) != 0 )
  {
    if ( *(_QWORD *)(a2 + 464) )
    {
      sub_13D280((_QWORD *)a2, 0);
      copy_tinfo_t();
      goto LABEL_25;
    }
    if ( !under_debugger )
      sub_383060(52092);
LABEL_42:
    BUG();
  }
  copy_tinfo_t();
LABEL_25:
  sub_36D670(a2, (__int64)a1, v12);
  if ( a3 )
    goto LABEL_15;
LABEL_26:
  set_tinfo_property();
  cleanup_argloc();
  return a1;
}
