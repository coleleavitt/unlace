__int64 __fastcall sub_2ABC40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rbx
  unsigned __int8 (__fastcall **v5)(_QWORD, __int64); // rdx
  __m128i v7; // kr00_16
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  char v14; // ah
  int v15; // eax
  int v16; // esi
  int v17; // r15d
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  int v20; // r9d
  char v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 i; // rax
  unsigned __int64 v25; // r13
  unsigned int v26; // ebp
  _QWORD *v27; // r12
  __int64 *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // r14
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  int v38; // eax
  int v39; // [rsp+20h] [rbp-118h]
  unsigned __int8 (__fastcall *v40)(_QWORD, __int64); // [rsp+28h] [rbp-110h]
  __int64 v41; // [rsp+60h] [rbp-D8h]
  char v42; // [rsp+6Fh] [rbp-C9h]
  int v43; // [rsp+74h] [rbp-C4h] BYREF
  __int64 v44[3]; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v47[2]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 tinfo_property; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-80h]
  __m128i v50; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-68h]
  unsigned __int8 (__fastcall **v52[11])(_QWORD, __int64); // [rsp+E0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  v52[3] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))__readfsqword(0x28u);
  v4 = *(__int64 **)a2;
  v41 = *(_QWORD *)(v2 + 216);
  if ( !(48 * v3) )
    return *(unsigned int *)(a1 + 76);
  v5 = *(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v2 + 216);
  v7 = 0u;
  while ( 1 )
  {
    v9 = *v4;
    v52[1] = v5;
    v52[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))&off_4E0EB8;
    v52[2] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))v9;
    v10 = *(_QWORD *)(v2 + 8);
    v44[0] = 0;
    if ( (unsigned __int8)sub_2A3210((__int64)v44, &v43, v10, (__int64)v4, v52) )
    {
      sub_299900(*(_QWORD *)(*(_QWORD *)a1 + 112LL), v44, &v43, v11, v12, v13);
      v40 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64))v9;
      if ( *(int *)(v9 + 8) < 0 )
        goto LABEL_16;
    }
    else
    {
      v8 = *(int *)(v9 + 8);
      if ( (int)v8 < 0
        || !(unsigned __int8)sub_299900(
                               *(_QWORD *)(*(_QWORD *)a1 + 112LL),
                               (__int64 *)(**(_QWORD **)(*(_QWORD *)v9 + 32LL) + 72 * v8 + 64),
                               &v43,
                               *(_QWORD *)(*(_QWORD *)v9 + 32LL),
                               v12,
                               v13) )
      {
        goto LABEL_4;
      }
      v40 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64))v9;
      if ( *(int *)(v9 + 8) < 0 )
      {
LABEL_16:
        if ( (get_tinfo_property() & 0xF) == 0xB )
          goto LABEL_4;
        v14 = BYTE1(v44[0]);
        if ( (v44[0] & 0xF) != 0xD )
          goto LABEL_9;
        goto LABEL_18;
      }
    }
    v14 = BYTE1(v44[0]);
    if ( (v44[0] & 0xF) != 0xD )
      goto LABEL_9;
LABEL_18:
    if ( (v14 & 1) == 0 )
      goto LABEL_4;
LABEL_9:
    v39 = *(_DWORD *)(v9 + 8);
    if ( v39 >= (int)get_tinfo_property() )
    {
      v15 = get_tinfo_property() & 0xFFFFFFF0;
      if ( v15 == 64 || v15 == 208 )
        goto LABEL_4;
      if ( !under_debugger )
        sub_383060(52453);
      goto LABEL_94;
    }
    v16 = *(_DWORD *)(v9 + 8);
    tinfo_property = 0;
    if ( (unsigned int)(v16 + 1) <= 0x100 )
      tinfo_property = get_tinfo_property();
    v17 = lexcompare_tinfo();
    clear_tinfo_t();
    if ( v17 )
    {
      if ( !v7.m128i_i64[0] )
        goto LABEL_29;
      v18 = *(_QWORD *)v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v18 )
        goto LABEL_30;
      if ( (*(_BYTE *)(*(_QWORD *)v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_29;
      while ( 1 )
      {
        v19 = *(_QWORD *)(v18 + 24);
        if ( (unsigned __int64)v40 >= v19 )
        {
          if ( v19 >= (unsigned __int64)v40 )
          {
            if ( v18 == v7.m128i_i64[0] )
            {
LABEL_29:
              v47[1] = 0;
              v47[0] = (__int64)v40;
              copy_tinfo_t();
              v49 = 0;
              tinfo_property = v47[0];
              copy_tinfo_t();
              v50 = v7;
              v51 = v41;
              LODWORD(v18) = sub_2ABAA0(&v50, &tinfo_property);
              v7 = v50;
              v41 = v51;
              clear_tinfo_t();
              clear_tinfo_t();
            }
LABEL_30:
            v44[2] = 0;
            copy_tinfo_t();
            v44[1] = 0;
            copy_tinfo_t();
            v47[0] = 0;
            copy_tinfo_t();
            sub_299470(&tinfo_property, v47);
            v45 = 0;
            copy_tinfo_t();
            sub_299470(&v46, &v45);
            v42 = compare_tinfo();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            clear_tinfo_t();
            if ( !v42 )
            {
              tinfo_property = 0;
              v49 = 0;
              v21 = sub_32DC20(
                      v41,
                      (int)v18 + 32,
                      *(_DWORD *)(v9 + 8),
                      (unsigned int)v44,
                      (unsigned int)&tinfo_property,
                      v20);
              cleanup_argloc();
              if ( v21 )
              {
                if ( *(int *)(v9 + 8) >= 0 )
                  copy_tinfo_t();
                break;
              }
              tinfo_property = 0;
              tinfo_property = get_tinfo_property();
              if ( (_BYTE)tinfo_property && !(unsigned __int8)sub_32CB80(&tinfo_property, v41, -1)
                || (get_tinfo_property() & 0x3F) == 9
                || ((v38 = get_tinfo_property(), v38 == 176) || v38 == 256)
                && (get_tinfo_property() || (get_tinfo_property() & 0x3F) == 0x1D) )
              {
                clear_tinfo_t();
                break;
              }
              if ( !under_debugger )
                sub_383060(50477);
LABEL_94:
              BUG();
            }
            break;
          }
          v18 = *(_QWORD *)(v18 + 16);
        }
        else
        {
          v18 = *(_QWORD *)(v18 + 8);
        }
        if ( (*(_BYTE *)v18 & 2) != 0 )
          goto LABEL_29;
      }
    }
LABEL_4:
    v4 += 6;
    clear_tinfo_t();
    if ( v4 == (__int64 *)(*(_QWORD *)a2 + 48LL * *(_QWORD *)(a2 + 8)) )
      break;
    v2 = *(_QWORD *)(a1 + 8);
    v5 = *(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v2 + 216);
  }
  if ( !v7.m128i_i64[0] )
    return *(unsigned int *)(a1 + 76);
  if ( !v7.m128i_i64[1] )
  {
    v26 = *(_DWORD *)(a1 + 76);
    qfree(v7.m128i_i64[0]);
    return v26;
  }
  v22 = *(_QWORD *)(v7.m128i_i64[0] + 8);
  while ( v7.m128i_i64[0] != v22 )
  {
    if ( (unsigned int)lexcompare_tinfo() )
      sub_2A6CC0((__int64 *)a1, *(unsigned __int64 **)(v22 + 24), v22 + 32);
    if ( (*(_QWORD *)v22 & 2) == 0 )
    {
      v23 = *(_QWORD *)(v22 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        v29 = (__int64 *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFFCLL);
        v30 = *v29;
        if ( (*v29 & 2) == 0 )
        {
          while ( v29[2] == v22 )
          {
            v22 = (__int64)v29;
            v31 = v30 & 0xFFFFFFFFFFFFFFFCLL;
            v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v30 & 2) != 0 )
            {
              v22 = v31;
              goto LABEL_44;
            }
            v29 = (__int64 *)v31;
          }
        }
        v22 = (__int64)v29;
      }
      else
      {
        for ( i = *(_QWORD *)(v23 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v23 = i;
        v22 = v23;
      }
    }
LABEL_44:
    ;
  }
  v25 = *(_QWORD *)v22;
  v26 = *(_DWORD *)(a1 + 76);
  v27 = (_QWORD *)(*(_QWORD *)v22 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)v27 & 2) == 0 )
  {
    v32 = v27[1];
    if ( (*(_BYTE *)v32 & 2) != 0 )
    {
      v33 = v27[2];
      if ( (*(_BYTE *)v33 & 2) != 0 )
      {
LABEL_89:
        clear_tinfo_t();
        *v27 |= 2uLL;
LABEL_69:
        if ( v25 > 3 )
          qfree((__int64)v27);
        goto LABEL_46;
      }
      goto LABEL_62;
    }
    v36 = *(_QWORD **)(v32 + 8);
    if ( (*(_BYTE *)v36 & 2) != 0 )
    {
      v37 = *(_QWORD **)(v32 + 16);
      if ( (*(_BYTE *)v37 & 2) != 0 )
      {
LABEL_91:
        clear_tinfo_t();
        *(_QWORD *)v32 |= 2uLL;
LABEL_79:
        if ( v32 )
          qfree(v32);
        v33 = v27[2];
        if ( (*(_BYTE *)v33 & 2) != 0 )
        {
LABEL_68:
          if ( (*(_BYTE *)v27 & 2) != 0 )
            goto LABEL_69;
          goto LABEL_89;
        }
LABEL_62:
        v34 = *(_QWORD **)(v33 + 8);
        if ( (*(_BYTE *)v34 & 2) != 0 )
        {
          v35 = *(_QWORD **)(v33 + 16);
          if ( (*(_BYTE *)v35 & 2) != 0 )
          {
LABEL_93:
            clear_tinfo_t();
            *(_QWORD *)v33 |= 2uLL;
LABEL_66:
            if ( v33 )
              qfree(v33);
            goto LABEL_68;
          }
        }
        else
        {
          sub_299540(v34);
          v35 = *(_QWORD **)(v33 + 16);
          if ( (*(_BYTE *)v35 & 2) != 0 )
            goto LABEL_65;
        }
        sub_299540(v35);
LABEL_65:
        if ( (*(_BYTE *)v33 & 2) != 0 )
          goto LABEL_66;
        goto LABEL_93;
      }
    }
    else
    {
      sub_299540(v36);
      v37 = *(_QWORD **)(v32 + 16);
      if ( (*(_BYTE *)v37 & 2) != 0 )
        goto LABEL_78;
    }
    sub_299540(v37);
LABEL_78:
    if ( (*(_BYTE *)v32 & 2) != 0 )
      goto LABEL_79;
    goto LABEL_91;
  }
LABEL_46:
  qfree(v22);
  return v26;
}
