__int64 __fastcall sub_248660(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rcx
  int v12; // r12d
  __int64 v14; // rdi
  __int64 v15; // r12
  int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // r12
  int tinfo_size; // edx
  int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rdi
  __int64 v26; // rsi
  char v27; // al
  char v28; // al
  char v29; // r12
  char v30; // al
  __int64 v31; // r13
  __int64 v32; // r12
  char v33; // r12
  char v34; // r12
  __int64 v35; // [rsp+28h] [rbp-80h] BYREF
  __int64 v36; // [rsp+30h] [rbp-78h] BYREF
  __int64 tinfo_property; // [rsp+38h] [rbp-70h] BYREF
  __int128 v38; // [rsp+40h] [rbp-68h] BYREF
  __int64 v39; // [rsp+50h] [rbp-58h]
  int v40; // [rsp+58h] [rbp-50h]
  __int16 v41; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v42; // [rsp+68h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 24);
  v42 = __readfsqword(0x28u);
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
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      v10 = 0;
      goto LABEL_8;
    }
    tinfo_property = get_tinfo_property();
    tinfo_size = get_tinfo_size();
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
    if ( v21 == tinfo_size )
    {
      if ( (get_tinfo_property() & 0xF) == 9 )
      {
        sub_32C270(&v38, *(_QWORD *)(a2 + 112), *(unsigned int *)(*(_QWORD *)(a1 + 24) + 40LL));
        copy_tinfo_t();
        clear_tinfo_t();
      }
    }
    else
    {
      if ( v21 != *(unsigned __int8 *)(a2 + 137) && v21 != *(_QWORD *)(get_ph() + 120)
        || (get_tinfo_property() & 0xF) != 9 )
      {
        v10 = 0;
LABEL_35:
        clear_tinfo_t();
        goto LABEL_8;
      }
      sub_32C150(&v38, *(_QWORD *)(a2 + 112), *(unsigned int *)(*(_QWORD *)(a1 + 24) + 40LL));
      copy_tinfo_t();
      clear_tinfo_t();
    }
    sub_32C540(&v38, *(_QWORD *)(a2 + 112), &tinfo_property);
    copy_tinfo_t();
    clear_tinfo_t();
    sub_2441C0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 0);
    sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0);
    goto LABEL_35;
  }
LABEL_8:
  if ( (unsigned int)lexcompare_tinfo() )
  {
    v4 = *(_QWORD *)(a1 + 24);
    v18 = *(_QWORD *)(v4 + 48);
    if ( (v18 & 0xE) == 0 && (v18 & 0x30) != 0 )
    {
      v19 = get_tinfo_size();
      if ( v19 != get_tinfo_size() || (get_tinfo_property() & 0xF) == 0xB )
      {
        v4 = *(_QWORD *)(a1 + 24);
      }
      else
      {
        v28 = get_tinfo_property();
        v4 = *(_QWORD *)(a1 + 24);
        if ( (v28 & 0x2F) == 0xD )
        {
          v29 = get_tinfo_property();
          v30 = get_tinfo_property();
          v4 = *(_QWORD *)(a1 + 24);
          if ( ((v30 & 0xF) == 9) == ((v29 & 0xF) == 9) )
          {
            v31 = *(_QWORD *)(v4 + 24);
            tinfo_property = 0;
            copy_tinfo_t();
            sub_245240(&v38);
            sub_246B40(v31, a2, &v38);
            clear_tinfo_t();
            clear_tinfo_t();
            sub_2441C0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 1);
            sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0);
            return 1;
          }
        }
      }
    }
  }
  else
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 51 && (get_tinfo_property() & 0xF) == 0xA )
    {
      *(_QWORD *)&v38 = 0;
      *(_QWORD *)&v38 = get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) != 0xB
        && !(unsigned int)verify_tinfo()
        && (unsigned __int8)sub_248500(a2, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), (_QWORD *)(v9 + 48)) )
      {
        sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0);
        clear_tinfo_t();
        return 1;
      }
      clear_tinfo_t();
    }
    if ( v8 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) == 51 && (get_tinfo_property() & 0xF) == 0xA )
      {
        v27 = get_tinfo_property();
        if ( (v27 & 0xE) == 0 && (v27 & 0x30) != 0 )
        {
          get_tinfo_property();
          if ( (get_tinfo_property() & 0xF) != 0xB && !(unsigned int)verify_tinfo() )
          {
            v35 = 0;
            copy_tinfo_t();
            set_tinfo_property();
            v36 = 0;
            tinfo_property = 0;
            v38 = 0;
            copy_tinfo_t();
            v39 = 0;
            copy_tinfo_t();
            v40 = 0;
            v41 = 0;
            clear_tinfo_t();
            clear_tinfo_t();
            copy_tinfo_t();
            create_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            *(_QWORD *)&v38 = 0;
            copy_tinfo_t();
            v34 = sub_248500(a2, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 24), &v38);
            clear_tinfo_t();
            clear_tinfo_t();
            if ( v34 )
            {
              sub_2441C0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a2 + 112), 1);
              sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0);
              clear_tinfo_t();
              return 1;
            }
          }
          clear_tinfo_t();
        }
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) == 48
      && (v22 = get_tinfo_size(), v22 == get_tinfo_size())
      && (get_tinfo_property() & 0xF) != 0xB
      && ((v23 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 48LL), (v23 & 0xE) == 0) && (v23 & 0x30) != 0
       || (v33 = get_tinfo_property(), ((get_tinfo_property() & 0xF) == 9) == ((v33 & 0xF) == 9))) )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
      v35 = 0;
      copy_tinfo_t();
      set_tinfo_property();
      v36 = 0;
      tinfo_property = 0;
      v38 = 0;
      copy_tinfo_t();
      v39 = 0;
      copy_tinfo_t();
      v40 = 0;
      v41 = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      *(_QWORD *)&v38 = 0;
      copy_tinfo_t();
      LOBYTE(v24) = sub_246B40(v24, a2, &v38);
      clear_tinfo_t();
      clear_tinfo_t();
      v4 = *(_QWORD *)(a1 + 24);
      if ( (_BYTE)v24 )
      {
        sub_2441C0(v4, *(_QWORD *)(a2 + 112), 1);
        v25 = *(_QWORD *)(a1 + 32);
        v26 = *(_QWORD *)(v25 + 24);
        goto LABEL_46;
      }
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 24);
    }
  }
LABEL_15:
  LODWORD(v35) = 0;
  v12 = sub_245140(v4, &v35, &tinfo_property);
  if ( v12 != -1 )
  {
    v14 = *(_QWORD *)(a1 + 32);
    LODWORD(v36) = 0;
    if ( v12 == (unsigned int)sub_245140(v14, &v36, &v38) )
    {
      v15 = get_tinfo_size();
      if ( v15 == get_tinfo_size() )
      {
        v16 = v36;
        if ( (int)v35 <= 0 )
        {
          if ( (int)v36 <= 0 )
            return v10;
        }
        else
        {
          v17 = *(_QWORD *)(a1 + 24);
          if ( *(_DWORD *)(v17 + 8) == 51 )
          {
            sub_255850(*(_QWORD *)(a1 + 24), *(_QWORD *)(v17 + 24));
            sub_255850(v17, *(_QWORD *)(v17 + 24));
            sub_255850(v17, *(_QWORD *)(v17 + 24));
          }
          if ( v16 <= 0 )
            goto LABEL_23;
        }
        v32 = *(_QWORD *)(a1 + 32);
        if ( *(_DWORD *)(v32 + 8) != 51 )
        {
LABEL_23:
          sub_2441C0(a1, *(_QWORD *)(a2 + 112), 0);
          return 1;
        }
        sub_255850(*(_QWORD *)(a1 + 32), *(_QWORD *)(v32 + 24));
        sub_255850(v32, *(_QWORD *)(v32 + 24));
        v26 = *(_QWORD *)(v32 + 24);
        v25 = v32;
LABEL_46:
        sub_255850(v25, v26);
        goto LABEL_23;
      }
    }
  }
  return v10;
}
