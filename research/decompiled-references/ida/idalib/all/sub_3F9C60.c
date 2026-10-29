__int64 __fastcall sub_3F9C60(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rsi
  void *v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r9
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 *v20; // rax
  int v21; // ebp
  __int64 v22; // rsi
  __int64 *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rax
  void *v27; // rax
  __int64 v28; // rsi
  int i; // ebp
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  const char *v33; // rdx
  unsigned int v35; // ebp
  __int64 v36; // [rsp+0h] [rbp-528h]
  int *v37; // [rsp+8h] [rbp-520h]
  void *v38; // [rsp+10h] [rbp-518h] BYREF
  unsigned __int64 v39; // [rsp+18h] [rbp-510h] BYREF
  char *v40; // [rsp+20h] [rbp-508h] BYREF
  int v41; // [rsp+28h] [rbp-500h]
  _BYTE v42[16]; // [rsp+30h] [rbp-4F8h] BYREF
  void *v43; // [rsp+40h] [rbp-4E8h] BYREF
  __int128 v44; // [rsp+48h] [rbp-4E0h]
  void *v45; // [rsp+60h] [rbp-4C8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-4C0h]
  void *v47[3]; // [rsp+78h] [rbp-4B0h] BYREF
  __int64 v48; // [rsp+90h] [rbp-498h]
  __int64 v49; // [rsp+98h] [rbp-490h]
  __int64 v50; // [rsp+A0h] [rbp-488h]
  __int64 v51; // [rsp+A8h] [rbp-480h]
  __int64 v52; // [rsp+B0h] [rbp-478h]
  __int64 v53; // [rsp+B8h] [rbp-470h]
  void *ptr; // [rsp+C0h] [rbp-468h]
  __int128 v55; // [rsp+C8h] [rbp-460h]
  int v56; // [rsp+E0h] [rbp-448h] BYREF
  unsigned __int64 v57; // [rsp+4E8h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v4 = 0;
  v38 = nullptr;
  v37 = &v56;
  do
  {
    v5 = (void *)sub_3BDD60(a1, v4);
    v6 = *a1;
    v45 = v5;
    if ( sub_7BE950(&v45, v6, 37, v37, 1024, 83) != 4 )
      goto LABEL_19;
    v20 = (__int64 *)a1[193];
    v21 = v56;
    if ( v20 )
    {
      v22 = (__int64)v38;
      v23 = a1 + 192;
      do
      {
        while ( 1 )
        {
          v24 = v20[2];
          v25 = v20[3];
          if ( v20[4] < (unsigned __int64)v38 )
            break;
          v23 = v20;
          v20 = (__int64 *)v20[2];
          if ( !v24 )
            goto LABEL_41;
        }
        v20 = (__int64 *)v20[3];
      }
      while ( v25 );
LABEL_41:
      if ( a1 + 192 != v23 && (unsigned __int64)v38 >= v23[4] )
        goto LABEL_44;
    }
    else
    {
      v23 = a1 + 192;
    }
    v45 = &v38;
    v26 = sub_3EEC00(a1 + 191, v23, (unsigned __int64 **)&v45);
    v22 = (__int64)v38;
    v23 = v26;
LABEL_44:
    *((_DWORD *)v23 + 10) = v21;
    v27 = (void *)sub_3BDD60(a1, v22);
    v28 = *a1;
    v45 = v27;
    sub_7BE7C0(&v45, v28, 37, v37, 4, 83);
LABEL_19:
    v7 = sub_3BE900(a1, (unsigned __int64)v38, 0);
    v39 = v7;
    v8 = v7;
    if ( (v7 & 0x400) == 0 )
      goto LABEL_11;
    if ( (v7 & 0x600) == 0x400 )
    {
      sub_3F9920(a1, a2, v38, 0, v7 & 0xF0000600);
      v8 = v39;
    }
    sub_3F9920(a1, a2, v38, 0, v8 & 0xF00000);
    v9 = v39;
    if ( (~(_WORD)v39 & 0x600) == 0 )
    {
      v35 = 1;
      while ( 1 )
      {
        if ( (unsigned __int8)is_off(v9, v35)
          || (unsigned __int8)is_enum(v9, v35)
          || (unsigned __int8)is_stroff(v9, v35)
          || (unsigned __int8)is_custfmt(v9, v35) )
        {
          sub_3F9920(a1, a2, v38, v35, v39 & (15LL << (4 * ((unsigned __int8)v35 + (v35 != 1) + 5))));
        }
        if ( ++v35 == 8 )
          break;
        v9 = v39;
      }
    }
    v10 = sub_3BE900(a1, (unsigned __int64)v38, 0);
    v39 = v10;
    if ( (v10 & 0x600) == 0x400 && (v10 & 0xF0000000) == 0xB0000000 )
    {
      v11 = ea2node(v38);
      v12 = netnode_supval(v11, 17, &v45, 4, 65);
      v13 = 0;
      if ( v12 > 0 )
        v13 = (int)v45;
      LODWORD(v45) = v13;
      v14 = ea2node(v38);
      netnode_supset(v14, 17, &v45, 4, 65, v15);
    }
    v41 = -1;
    v40 = (char *)&dword_0 + 1;
    if ( get_array_parameters(&v40, v38) != -1 )
      set_array_parameters(v38, &v40);
    v43 = nullptr;
    v44 = 0;
    if ( (unsigned __int8)get_arg_addrs(&v43, v38) )
      sub_60C450(v38, &v43);
    if ( (unsigned __int8)is_manual(v39, 15) )
    {
      for ( i = 0; i != 8; ++i )
      {
        v45 = nullptr;
        si128 = 0;
        if ( sub_3C8200((__int64)&v45, (__int64)v38, i) > 0 )
        {
          v33 = haystack;
          if ( si128.m128i_i64[0] )
            v33 = (const char *)v45;
          sub_3C8250((__int64)v38, i, (__int64)v33, v30, v31, v32, v36, (__int64)v37);
        }
        if ( v45 )
        {
          si128.m128i_i64[0] = 0;
          qfree(v45);
        }
      }
    }
    if ( (*(_BYTE *)(*a1 + 939) & 2) != 0 )
    {
      v17 = sub_3C58C0(a1, (unsigned __int64)v38);
      if ( v17 != -1 )
      {
        v45 = (void *)(v17 + 1);
        v18 = ea2node(v38);
        netnode_supset(v18, 15, &v45, 8, 65, v19);
      }
    }
    if ( (~(_WORD)v39 & 0x600) == 0 && (v39 & 0x80000000) != 0LL )
    {
      v45 = &loc_800000;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
      *(_OWORD *)v47 = -1;
      v47[2] = nullptr;
      v48 = 0;
      v49 = 0;
      v50 = 0xFFFFFFFFLL;
      v51 = 0;
      v52 = 2;
      v53 = -1;
      ptr = nullptr;
      v55 = 0;
      if ( get_switch_info(&v45, v38) > 0 )
        set_switch_info(v38, &v45);
      if ( get_jumptable_info(v42, v38) <= 0 )
      {
        v16 = ptr;
        if ( !ptr )
          goto LABEL_9;
LABEL_33:
        *(_QWORD *)&v55 = 0;
        qfree(v16);
        goto LABEL_9;
      }
      set_jumptable_info(v38, v42);
      v16 = ptr;
      if ( ptr )
        goto LABEL_33;
    }
LABEL_9:
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
LABEL_11:
    LOBYTE(v44) = 0;
    v43 = (void *)-1LL;
    if ( get_xrefpos(&v43, v38) > 0 )
      set_xrefpos(v38, &v43);
    v45 = nullptr;
    memset(v47, 0, sizeof(v47));
    LOBYTE(v48) = 0;
    si128 = 0;
    sub_3C5AF0((__int64)&v45, (__int64)v38, v39);
    sub_3F3C10((__int64)&v45);
    sub_3D2050((__int64)&v45, (__int64 *)&v39, v38);
    if ( v47[0] )
    {
      v47[1] = nullptr;
      qfree(v47[0]);
    }
    if ( v45 )
    {
      si128.m128i_i64[0] = 0;
      qfree(v45);
    }
    v38 = (void *)sub_3C1900(
                    a1,
                    (__int64)v38,
                    0xFFFFFFFFFFFFFFFFLL,
                    (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3ED9D0,
                    nullptr);
    v4 = (__int64)v38;
  }
  while ( v38 != (void *)-1LL );
  return 1;
}
