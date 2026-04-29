__int64 __fastcall sub_243DE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // r12d
  __int64 v15; // rdi
  __int64 v16; // r12
  int v17; // r12d
  __int64 v18; // r13
  __int64 v19; // rsi
  __int64 v20; // r12
  char tinfo_property; // al
  int tinfo_size; // edx
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 v30; // rsi
  char v31; // al
  char v32; // al
  char v33; // r12
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r12
  char v38; // r12
  char v39; // r12
  __int64 v40; // [rsp+20h] [rbp-88h] BYREF
  __int64 v41; // [rsp+28h] [rbp-80h] BYREF
  __int64 v42; // [rsp+30h] [rbp-78h] BYREF
  __int64 v43; // [rsp+38h] [rbp-70h] BYREF
  __int128 v44; // [rsp+40h] [rbp-68h] BYREF
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  int v46; // [rsp+58h] [rbp-50h]
  __int16 v47; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v48; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 24);
  v48 = __readfsqword(0x28u);
  if ( *(_DWORD *)(v4 + 8) != 51 )
    goto LABEL_14;
  v6 = *(_QWORD *)(v4 + 24);
  if ( *(_DWORD *)(v6 + 8) != 48 )
    goto LABEL_14;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = 0;
  v9 = *(_QWORD *)(v6 + 24);
  v10 = a3;
  if ( *(_DWORD *)(v7 + 8) == 51 )
  {
    v11 = *(_QWORD *)(v7 + 24);
    if ( *(_DWORD *)(v11 + 8) == 48 )
      v8 = *(_QWORD *)(v11 + 24);
  }
  if ( !v9 )
  {
LABEL_14:
    v10 = 0;
    goto LABEL_15;
  }
  if ( (_BYTE)a3 )
  {
    tinfo_property = get_tinfo_property(*(_QWORD *)(v4 + 48), 2);
    v4 = *(_QWORD *)(a1 + 24);
    if ( (tinfo_property & 0xF) != 0xB )
    {
      v7 = *(_QWORD *)(a1 + 32);
      v10 = 0;
      goto LABEL_8;
    }
    v43 = get_tinfo_property(*(_QWORD *)(v4 + 48), 11);
    tinfo_size = get_tinfo_size(0, v43, 0);
    v23 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
    if ( v23 == tinfo_size )
    {
      if ( (get_tinfo_property(v43, 2) & 0xF) == 9 )
      {
        sub_327340(&v44, *(_QWORD *)(a2 + 112), *(unsigned int *)(*(_QWORD *)(a1 + 24) + 40LL));
        copy_tinfo_t(&v43, &v44);
        clear_tinfo_t(&v44);
      }
    }
    else
    {
      if ( v23 != *(unsigned __int8 *)(a2 + 137) && v23 != *(_QWORD *)(get_ph(0) + 120)
        || (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 2) & 0xF) != 9 )
      {
        v10 = 0;
LABEL_35:
        clear_tinfo_t(&v43);
        v7 = *(_QWORD *)(a1 + 32);
        v4 = *(_QWORD *)(a1 + 24);
        goto LABEL_8;
      }
      sub_327220(&v44, *(_QWORD *)(a2 + 112), *(unsigned int *)(*(_QWORD *)(a1 + 24) + 40LL));
      copy_tinfo_t(&v43, &v44);
      clear_tinfo_t(&v44);
    }
    sub_327610(&v44, *(_QWORD *)(a2 + 112), &v43);
    copy_tinfo_t(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL) + 48LL, &v44);
    clear_tinfo_t(&v44);
    sub_23F940(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 0);
    sub_23F940(a1, *(_QWORD *)(a2 + 112), 0);
    goto LABEL_35;
  }
LABEL_8:
  if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v4 + 48), *(_QWORD *)(v7 + 48), 0) )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v19 = *(_QWORD *)(v4 + 48);
    if ( (v19 & 0xE) == 0 && (v19 & 0x30) != 0 )
    {
      v20 = get_tinfo_size(0, v19, 0);
      if ( v20 != get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 0)
        || (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 2) & 0xF) == 0xB )
      {
        v4 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v32 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 2);
        v4 = *(_QWORD *)(a1 + 24);
        if ( (v32 & 0x2F) == 0xD )
        {
          v33 = get_tinfo_property(*(_QWORD *)(v4 + 48), 2);
          v34 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), 2);
          v4 = *(_QWORD *)(a1 + 24);
          if ( ((v34 & 0xF) == 9) == ((v33 & 0xF) == 9) )
          {
            v35 = *(_QWORD *)(a1 + 32);
            v36 = *(_QWORD *)(v4 + 24);
            v43 = 0;
            copy_tinfo_t(&v43, v35 + 48);
            sub_2409C0(&v44, (__int64)&v43);
            sub_2422C0(v36, a2, &v44);
            clear_tinfo_t(&v44);
            clear_tinfo_t(&v43);
            sub_23F940(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 1);
            sub_23F940(a1, *(_QWORD *)(a2 + 112), 0);
            return 1;
          }
        }
      }
    }
    goto LABEL_15;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 51 && (get_tinfo_property(*(_QWORD *)(v9 + 48), 2) & 0xF) == 0xA )
  {
    *(_QWORD *)&v44 = 0;
    *(_QWORD *)&v44 = get_tinfo_property(*(_QWORD *)(v9 + 48), 10);
    if ( (get_tinfo_property(v44, 2) & 0xF) != 0xB
      && !(unsigned int)verify_tinfo(v44)
      && (unsigned __int8)sub_243C80(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), (_QWORD *)(v9 + 48)) )
    {
      sub_23F940(a1, *(_QWORD *)(a2 + 112), 0);
      clear_tinfo_t(&v44);
      return 1;
    }
    clear_tinfo_t(&v44);
  }
  if ( v8 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 51 && (get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) == 0xA )
    {
      v31 = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL), 2);
      if ( (v31 & 0xE) == 0 && (v31 & 0x30) != 0 )
      {
        v40 = get_tinfo_property(*(_QWORD *)(v8 + 48), 10);
        if ( (get_tinfo_property(v40, 2) & 0xF) != 0xB && !(unsigned int)verify_tinfo(v40) )
        {
          v41 = 0;
          copy_tinfo_t(&v41, &v40);
          set_tinfo_property(&v41, 6, 192);
          v42 = 0;
          v43 = 0;
          v44 = 0;
          copy_tinfo_t((char *)&v44 + 8, &v43);
          v45 = 0;
          copy_tinfo_t(&v45, &v42);
          v46 = 0;
          v47 = 0;
          clear_tinfo_t(&v43);
          clear_tinfo_t(&v42);
          copy_tinfo_t(&v44, &v41);
          create_tinfo(&v41, 10, 10, &v44);
          clear_tinfo_t(&v45);
          clear_tinfo_t((char *)&v44 + 8);
          clear_tinfo_t(&v44);
          *(_QWORD *)&v44 = 0;
          copy_tinfo_t(&v44, &v41);
          v39 = sub_243C80(a2, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), &v44);
          clear_tinfo_t(&v44);
          clear_tinfo_t(&v41);
          if ( v39 )
          {
            sub_23F940(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 1);
            sub_23F940(a1, *(_QWORD *)(a2 + 112), 0);
            clear_tinfo_t(&v40);
            return 1;
          }
        }
        clear_tinfo_t(&v40);
      }
    }
  }
  v12 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v12 + 8) != 48 )
    goto LABEL_13;
  v24 = get_tinfo_size(0, *(_QWORD *)(v12 + 48), 0);
  if ( v24 != get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) + 48LL), 0)
    || (get_tinfo_property(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) + 48LL), 2) & 0xF) == 0xB )
  {
    goto LABEL_13;
  }
  v25 = *(_QWORD *)(a1 + 32);
  v26 = *(_QWORD *)(v25 + 48);
  if ( (v26 & 0xE) != 0 || (v26 & 0x30) == 0 )
  {
    v38 = get_tinfo_property(v26, 2);
    if ( ((get_tinfo_property(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) + 48LL), 2) & 0xF) == 9) == ((v38 & 0xF) == 9) )
    {
      v25 = *(_QWORD *)(a1 + 32);
      goto LABEL_44;
    }
LABEL_13:
    v4 = *(_QWORD *)(a1 + 24);
    goto LABEL_15;
  }
LABEL_44:
  v27 = *(_QWORD *)(v25 + 24) + 48LL;
  v28 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
  v41 = 0;
  copy_tinfo_t(&v41, v27);
  set_tinfo_property(&v41, 6, 192);
  v42 = 0;
  v43 = 0;
  v44 = 0;
  copy_tinfo_t((char *)&v44 + 8, &v43);
  v45 = 0;
  copy_tinfo_t(&v45, &v42);
  v46 = 0;
  v47 = 0;
  clear_tinfo_t(&v43);
  clear_tinfo_t(&v42);
  copy_tinfo_t(&v44, &v41);
  create_tinfo(&v41, 10, 10, &v44);
  clear_tinfo_t(&v45);
  clear_tinfo_t((char *)&v44 + 8);
  clear_tinfo_t(&v44);
  *(_QWORD *)&v44 = 0;
  copy_tinfo_t(&v44, &v41);
  LOBYTE(v28) = sub_2422C0(v28, a2, &v44);
  clear_tinfo_t(&v44);
  clear_tinfo_t(&v41);
  v4 = *(_QWORD *)(a1 + 24);
  if ( (_BYTE)v28 )
  {
    sub_23F940(v4, *(_QWORD *)(a2 + 112), 1);
    v29 = *(_QWORD *)(a1 + 32);
    v30 = *(_QWORD *)(v29 + 24);
    goto LABEL_46;
  }
LABEL_15:
  LODWORD(v41) = 0;
  v13 = sub_2408C0(v4, &v41, &v43);
  if ( v13 != -1 )
  {
    v15 = *(_QWORD *)(a1 + 32);
    LODWORD(v42) = 0;
    if ( v13 == (unsigned int)sub_2408C0(v15, &v42, &v44) )
    {
      v16 = get_tinfo_size(0, *(_QWORD *)(v43 + 48), 0);
      if ( v16 == get_tinfo_size(0, *(_QWORD *)(v44 + 48), 0) )
      {
        v17 = v42;
        if ( (int)v41 <= 0 )
        {
          if ( (int)v42 <= 0 )
            return v10;
        }
        else
        {
          v18 = *(_QWORD *)(a1 + 24);
          if ( *(_DWORD *)(v18 + 8) == 51 )
          {
            sub_250FD0(*(_QWORD *)(a1 + 24), *(_QWORD *)(v18 + 24));
            sub_250FD0(v18, *(_QWORD *)(v18 + 24));
            sub_250FD0(v18, *(_QWORD *)(v18 + 24));
          }
          if ( v17 <= 0 )
            goto LABEL_23;
        }
        v37 = *(_QWORD *)(a1 + 32);
        if ( *(_DWORD *)(v37 + 8) != 51 )
        {
LABEL_23:
          sub_23F940(a1, *(_QWORD *)(a2 + 112), 0);
          return 1;
        }
        sub_250FD0(*(_QWORD *)(a1 + 32), *(_QWORD *)(v37 + 24));
        sub_250FD0(v37, *(_QWORD *)(v37 + 24));
        v30 = *(_QWORD *)(v37 + 24);
        v29 = v37;
LABEL_46:
        sub_250FD0(v29, v30);
        goto LABEL_23;
      }
    }
  }
  return v10;
}
