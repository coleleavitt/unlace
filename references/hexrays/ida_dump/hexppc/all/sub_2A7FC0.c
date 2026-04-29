__int64 __fastcall sub_2A7FC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v5; // rbx
  unsigned __int8 (__fastcall **v6)(_QWORD, __int64); // rdx
  __m128i v8; // kr00_16
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  char v15; // ah
  __int64 v16; // r15
  int v17; // eax
  int v18; // esi
  __int64 v19; // rdi
  int v20; // r15d
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // r9d
  char v25; // r15
  __int64 v26; // rax
  unsigned __int64 *v27; // rbx
  unsigned __int64 *v28; // rdx
  unsigned __int64 *i; // rax
  unsigned __int64 v30; // r13
  unsigned int v31; // ebp
  _QWORD *v32; // r12
  unsigned __int64 *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // r14
  _QWORD *v39; // rdi
  _QWORD *v40; // rdi
  _QWORD *v41; // rdi
  _QWORD *v42; // rdi
  int v43; // eax
  int v44; // [rsp+20h] [rbp-118h]
  unsigned __int64 v45; // [rsp+20h] [rbp-118h]
  unsigned __int8 (__fastcall *v46)(_QWORD, __int64); // [rsp+28h] [rbp-110h]
  __int64 v47; // [rsp+60h] [rbp-D8h]
  char v48; // [rsp+6Fh] [rbp-C9h]
  int v49; // [rsp+74h] [rbp-C4h] BYREF
  __int64 v50; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+98h] [rbp-A0h] BYREF
  unsigned __int8 (__fastcall *v55)(_QWORD, __int64); // [rsp+A0h] [rbp-98h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-90h] BYREF
  __int64 tinfo_property; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-80h] BYREF
  __m128i v59; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-68h]
  unsigned __int8 (__fastcall **v61[11])(_QWORD, __int64); // [rsp+E0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a2 + 8);
  v61[3] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))__readfsqword(0x28u);
  v5 = *(__int64 **)a2;
  v47 = *(_QWORD *)(v2 + 216);
  if ( !(48 * v3) )
    return *(unsigned int *)(a1 + 76);
  v6 = *(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v2 + 216);
  v8 = 0u;
  while ( 1 )
  {
    v10 = *v5;
    v61[1] = v6;
    v61[0] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))&off_4CDFD8;
    v61[2] = (unsigned __int8 (__fastcall **)(_QWORD, __int64))v10;
    v11 = *(_QWORD *)(v2 + 8);
    v50 = 0;
    if ( (unsigned __int8)sub_29F590((__int64)&v50, &v49, v11, (__int64)v5, v61) )
    {
      sub_295C80(*(_QWORD *)(*(_QWORD *)a1 + 112LL), &v50, &v49, v12, v13, v14);
      v46 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64))v10;
      if ( *(int *)(v10 + 8) < 0 )
        goto LABEL_16;
    }
    else
    {
      v9 = *(int *)(v10 + 8);
      if ( (int)v9 < 0
        || !(unsigned __int8)sub_295C80(
                               *(_QWORD *)(*(_QWORD *)a1 + 112LL),
                               (_QWORD *)(**(_QWORD **)(*(_QWORD *)v10 + 32LL) + 72 * v9 + 64),
                               &v49,
                               *(_QWORD *)(*(_QWORD *)v10 + 32LL),
                               v13,
                               v14) )
      {
        goto LABEL_4;
      }
      v46 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64))v10;
      if ( *(int *)(v10 + 8) < 0 )
      {
LABEL_16:
        if ( (get_tinfo_property(v50, 2) & 0xF) == 0xB )
          goto LABEL_4;
        v15 = BYTE1(v50);
        if ( (v50 & 0xF) != 0xD )
          goto LABEL_9;
        goto LABEL_18;
      }
    }
    v15 = BYTE1(v50);
    if ( (v50 & 0xF) != 0xD )
      goto LABEL_9;
LABEL_18:
    if ( (v15 & 1) == 0 )
      goto LABEL_4;
LABEL_9:
    v16 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
    v44 = *(_DWORD *)(v10 + 8);
    if ( v44 >= (int)get_tinfo_property(*(_QWORD *)(v16 + 48), 23) )
    {
      v17 = get_tinfo_property(*(_QWORD *)(v16 + 48), 20) & 0xFFFFFFF0;
      if ( v17 == 64 || v17 == 208 )
        goto LABEL_4;
      if ( !under_debugger )
        sub_37EEE0(52453);
      goto LABEL_94;
    }
    v18 = *(_DWORD *)(v10 + 8);
    v19 = 0;
    tinfo_property = 0;
    if ( (unsigned int)(v18 + 1) <= 0x100 )
    {
      tinfo_property = get_tinfo_property(*(_QWORD *)(v16 + 48), (unsigned int)(v18 + 25));
      v19 = tinfo_property;
    }
    v20 = lexcompare_tinfo(v19, v50, 0);
    clear_tinfo_t(&tinfo_property);
    if ( v20 )
    {
      if ( !v8.m128i_i64[0] )
        goto LABEL_29;
      v21 = *(_QWORD *)v8.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v21 )
        goto LABEL_30;
      if ( (*(_BYTE *)(*(_QWORD *)v8.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
        goto LABEL_29;
      while ( 1 )
      {
        v22 = *(_QWORD *)(v21 + 24);
        if ( (unsigned __int64)v46 >= v22 )
        {
          if ( v22 >= (unsigned __int64)v46 )
          {
            if ( v21 == v8.m128i_i64[0] )
            {
LABEL_29:
              v23 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
              v56 = 0;
              v55 = v46;
              copy_tinfo_t(&v56, v23 + 48);
              v58 = 0;
              tinfo_property = (__int64)v55;
              copy_tinfo_t(&v58, &v56);
              v59 = v8;
              v60 = v47;
              v21 = sub_2A7E20(&v59, &tinfo_property);
              v8 = v59;
              v47 = v60;
              clear_tinfo_t(&v58);
              clear_tinfo_t(&v56);
            }
LABEL_30:
            v52 = 0;
            copy_tinfo_t(&v52, &v50);
            v51 = 0;
            copy_tinfo_t(&v51, *((_QWORD *)v46 + 3) + 48LL);
            v55 = nullptr;
            copy_tinfo_t(&v55, &v51);
            sub_2957F0(&tinfo_property, &v55);
            v53 = 0;
            copy_tinfo_t(&v53, &v52);
            sub_2957F0(&v54, &v53);
            v48 = compare_tinfo(tinfo_property, v54, 9);
            clear_tinfo_t(&v54);
            clear_tinfo_t(&v53);
            clear_tinfo_t(&tinfo_property);
            clear_tinfo_t(&v55);
            clear_tinfo_t(&v51);
            clear_tinfo_t(&v52);
            if ( !v48 )
            {
              v45 = v21 + 24;
              tinfo_property = 0;
              v58 = 0;
              v25 = sub_3298E0(
                      v47,
                      (int)v21 + 32,
                      *(_DWORD *)(v10 + 8),
                      (unsigned int)&v50,
                      (unsigned int)&tinfo_property,
                      v24);
              cleanup_argloc(&tinfo_property);
              if ( v25 )
              {
                v26 = *(int *)(v10 + 8);
                if ( (int)v26 >= 0 )
                  copy_tinfo_t(**((_QWORD **)v46 + 4) + 72 * v26 + 64, &v50);
                break;
              }
              tinfo_property = 0;
              tinfo_property = get_tinfo_property(*(_QWORD *)(v45 + 8), 9);
              if ( (_BYTE)tinfo_property && !(unsigned __int8)sub_328840(&tinfo_property, v47, -1)
                || (get_tinfo_property(v50, 2) & 0x3F) == 9
                || ((v43 = get_tinfo_property(tinfo_property, 20), v43 == 176) || v43 == 256)
                && (get_tinfo_property(v50, 281) || (get_tinfo_property(v50, 2) & 0x3F) == 0x1D) )
              {
                clear_tinfo_t(&tinfo_property);
                break;
              }
              if ( !under_debugger )
                sub_37EEE0(50477);
LABEL_94:
              BUG();
            }
            break;
          }
          v21 = *(_QWORD *)(v21 + 16);
        }
        else
        {
          v21 = *(_QWORD *)(v21 + 8);
        }
        if ( (*(_BYTE *)v21 & 2) != 0 )
          goto LABEL_29;
      }
    }
LABEL_4:
    v5 += 6;
    clear_tinfo_t(&v50);
    if ( v5 == (__int64 *)(*(_QWORD *)a2 + 48LL * *(_QWORD *)(a2 + 8)) )
      break;
    v2 = *(_QWORD *)(a1 + 8);
    v6 = *(unsigned __int8 (__fastcall ***)(_QWORD, __int64))(v2 + 216);
  }
  if ( !v8.m128i_i64[0] )
    return *(unsigned int *)(a1 + 76);
  if ( !v8.m128i_i64[1] )
  {
    v31 = *(_DWORD *)(a1 + 76);
    qfree(v8.m128i_i64[0]);
    return v31;
  }
  v27 = *(unsigned __int64 **)(v8.m128i_i64[0] + 8);
  while ( (unsigned __int64 *)v8.m128i_i64[0] != v27 )
  {
    if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(*(_QWORD *)(v27[3] + 24) + 48LL), v27[4], 0) )
      sub_2A3040((__int64 *)a1, (unsigned __int64 *)v27[3], (__int64)(v27 + 4));
    if ( (*v27 & 2) == 0 )
    {
      v28 = (unsigned __int64 *)v27[2];
      if ( (*(_BYTE *)v28 & 2) != 0 )
      {
        v34 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFFCLL);
        v35 = *v34;
        if ( (*v34 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v34[2] == v27 )
          {
            v27 = v34;
            v36 = v35 & 0xFFFFFFFFFFFFFFFCLL;
            v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v35 & 2) != 0 )
            {
              v27 = (unsigned __int64 *)v36;
              goto LABEL_44;
            }
            v34 = (unsigned __int64 *)v36;
          }
        }
        v27 = v34;
      }
      else
      {
        for ( i = (unsigned __int64 *)v28[1]; (*(_BYTE *)i & 2) == 0; i = (unsigned __int64 *)i[1] )
          v28 = i;
        v27 = v28;
      }
    }
LABEL_44:
    ;
  }
  v30 = *v27;
  v31 = *(_DWORD *)(a1 + 76);
  v32 = (_QWORD *)(*v27 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)v32 & 2) == 0 )
  {
    v37 = v32[1];
    if ( (*(_BYTE *)v37 & 2) != 0 )
    {
      v38 = v32[2];
      if ( (*(_BYTE *)v38 & 2) != 0 )
      {
LABEL_89:
        clear_tinfo_t(v32 + 4);
        *v32 |= 2uLL;
LABEL_69:
        if ( v30 > 3 )
          qfree(v32);
        goto LABEL_46;
      }
      goto LABEL_62;
    }
    v41 = *(_QWORD **)(v37 + 8);
    if ( (*(_BYTE *)v41 & 2) != 0 )
    {
      v42 = *(_QWORD **)(v37 + 16);
      if ( (*(_BYTE *)v42 & 2) != 0 )
      {
LABEL_91:
        clear_tinfo_t(v37 + 32);
        *(_QWORD *)v37 |= 2uLL;
LABEL_79:
        if ( v37 )
          qfree(v37);
        v38 = v32[2];
        if ( (*(_BYTE *)v38 & 2) != 0 )
        {
LABEL_68:
          if ( (*(_BYTE *)v32 & 2) != 0 )
            goto LABEL_69;
          goto LABEL_89;
        }
LABEL_62:
        v39 = *(_QWORD **)(v38 + 8);
        if ( (*(_BYTE *)v39 & 2) != 0 )
        {
          v40 = *(_QWORD **)(v38 + 16);
          if ( (*(_BYTE *)v40 & 2) != 0 )
          {
LABEL_93:
            clear_tinfo_t(v38 + 32);
            *(_QWORD *)v38 |= 2uLL;
LABEL_66:
            if ( v38 )
              qfree(v38);
            goto LABEL_68;
          }
        }
        else
        {
          sub_2958C0(v39);
          v40 = *(_QWORD **)(v38 + 16);
          if ( (*(_BYTE *)v40 & 2) != 0 )
            goto LABEL_65;
        }
        sub_2958C0(v40);
LABEL_65:
        if ( (*(_BYTE *)v38 & 2) != 0 )
          goto LABEL_66;
        goto LABEL_93;
      }
    }
    else
    {
      sub_2958C0(v41);
      v42 = *(_QWORD **)(v37 + 16);
      if ( (*(_BYTE *)v42 & 2) != 0 )
        goto LABEL_78;
    }
    sub_2958C0(v42);
LABEL_78:
    if ( (*(_BYTE *)v37 & 2) != 0 )
      goto LABEL_79;
    goto LABEL_91;
  }
LABEL_46:
  qfree(v27);
  return v31;
}
