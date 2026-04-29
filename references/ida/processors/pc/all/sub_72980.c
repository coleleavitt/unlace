__int64 __fastcall sub_72980(__int64 a1, __int64 a2, char *a3)
{
  int v5; // r15d
  unsigned __int128 v6; // rax
  __int64 v7; // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 v9; // rsi
  __int64 *flags; // rdi
  __int64 v11; // rbx
  __int64 v13; // rax
  char v14; // dl
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rax
  char v20; // al
  __int64 v21; // rdx
  int v22; // edx
  __int64 v23; // [rsp+8h] [rbp-230h]
  __int64 v24; // [rsp+18h] [rbp-220h]
  char v26; // [rsp+3Bh] [rbp-1FDh]
  int v27; // [rsp+3Ch] [rbp-1FCh] BYREF
  __int64 v28; // [rsp+40h] [rbp-1F8h] BYREF
  __int128 v29; // [rsp+48h] [rbp-1F0h]
  __int64 v30; // [rsp+60h] [rbp-1D8h] BYREF
  int v31; // [rsp+68h] [rbp-1D0h]
  __int128 v32; // [rsp+70h] [rbp-1C8h]
  __int64 v33; // [rsp+80h] [rbp-1B8h]
  __int128 v34; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-198h]
  __int64 v36; // [rsp+A8h] [rbp-190h]
  __int64 v37; // [rsp+B0h] [rbp-188h]
  char v38; // [rsp+B8h] [rbp-180h] BYREF
  char v39; // [rsp+B9h] [rbp-17Fh]
  unsigned __int16 v40; // [rsp+BEh] [rbp-17Ah]
  unsigned __int8 v41; // [rsp+E0h] [rbp-158h] BYREF
  char v42; // [rsp+E1h] [rbp-157h]
  unsigned __int16 v43; // [rsp+E6h] [rbp-152h]
  __int64 v44; // [rsp+E8h] [rbp-150h]
  __int64 v45; // [rsp+F0h] [rbp-148h]
  __int16 v46; // [rsp+FAh] [rbp-13Eh]
  char v47; // [rsp+100h] [rbp-138h]
  char v48; // [rsp+101h] [rbp-137h]
  unsigned __int64 v49; // [rsp+1F8h] [rbp-40h] BYREF

  v5 = *(unsigned __int16 *)(a2 + 46);
  v49 = __readfsqword(0x28u);
  *(_QWORD *)&v6 = get_func();
  *((_QWORD *)&v6 + 1) = *(_QWORD *)(a2 + 16);
  v30 = 0;
  v31 = -1;
  v32 = 0;
  if ( v6 <= __PAIR128__(-1, 0) )
    v7 = *((_QWORD *)&v6 + 1);
  else
    v7 = *(_QWORD *)v6;
  v33 = v7;
  func_tail_iterator_set();
  v28 = 0;
  v8 = (unsigned __int64 *)&v38;
  v35 = -1;
  v36 = 0;
  v37 = 0;
  v29 = 0;
  v34 = -1;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 5;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *(v8 - 2) = 0;
  }
  while ( &v49 != v8 );
  v24 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v9 = (unsigned __int64)&v28;
          flags = &v30;
          if ( !(unsigned __int8)func_item_iterator_decode_preceding_insn() )
            goto LABEL_14;
        }
        while ( v26 );
        if ( (_WORD)v36 != 92 )
          break;
        if ( v39 != 1 || v5 != v40 )
          goto LABEL_13;
        if ( v43 == 28 )
          goto LABEL_64;
        if ( v42 == 2 )
        {
          v9 = v41;
          flags = (__int64 *)get_flags_ex();
          if ( !(unsigned __int8)is_defarg() )
          {
            if ( (_WORD)v36 != 92
              || v46 == 30
              || (v9 = v41, flags = (__int64 *)get_flags_ex(), (unsigned __int8)is_off()) )
            {
LABEL_64:
              v21 = sub_7F350(a1, &v34, &v41);
              goto LABEL_65;
            }
          }
          if ( v42 != 4 )
            goto LABEL_14;
        }
        else if ( v42 != 4 )
        {
          goto LABEL_14;
        }
        if ( v47 )
        {
          v18 = v48 & 7;
          if ( (v36 & 0x1000000000LL) != 0 )
          {
            if ( (v37 & 0x100) != 0 )
            {
              if ( v5 != (v48 & 7 | 8) )
                goto LABEL_14;
            }
            else if ( v5 != v18 )
            {
              goto LABEL_14;
            }
            if ( (v37 & 0x200) != 0 )
              goto LABEL_14;
          }
          else if ( v5 != v18 )
          {
            goto LABEL_14;
          }
          if ( (unsigned __int16)v36 > 0x374u || ((v48 >> 3) & 7) != 4 )
            goto LABEL_14;
        }
        else
        {
          v22 = WORD2(v36) & 0x1018;
          if ( v22 == 4096 || v22 == 8 )
          {
            if ( v43 == 0xFFFF )
            {
              if ( v5 == 4 )
              {
                sub_69270();
LABEL_91:
                sub_69250(flags, v9, 0.0);
              }
              goto LABEL_14;
            }
            if ( v43 > 7u )
              goto LABEL_91;
            if ( v5 != dword_1598C0[v43] || v43 <= 3u )
              goto LABEL_14;
          }
          else if ( v5 != v43 )
          {
            goto LABEL_14;
          }
        }
        if ( (_WORD)v36 != 92 )
          goto LABEL_14;
        if ( v46 == 30 )
          goto LABEL_14;
        get_flags_ex();
        if ( (unsigned __int8)is_off() )
          goto LABEL_14;
        v14 = BYTE4(v36);
        v13 = v45;
        if ( (v36 & 0x1800000000LL) == 0 )
          goto LABEL_30;
LABEL_54:
        if ( (v14 & 8) != 0 )
          v13 = (int)v13;
        v24 = v13;
      }
      if ( (unsigned __int16)v36 > 0x5Cu )
        break;
      if ( (_WORD)v36 == 6 )
      {
LABEL_23:
        if ( v39 != 1 || v5 != v40 )
          goto LABEL_13;
        if ( v42 != 5 || !sub_697C0() )
          goto LABEL_14;
        v13 = v44;
        if ( (_WORD)v36 != 6 )
          v13 = -v44;
        v14 = BYTE4(v36);
        if ( (v36 & 0x1800000000LL) != 0 )
          goto LABEL_54;
LABEL_30:
        v24 = (__int16)v13;
      }
      else
      {
        if ( (unsigned __int16)(v36 - 17) > 1u || v39 != 1 || v5 != v40 )
          goto LABEL_13;
        v19 = netnode_altval();
        v17 = v19;
        if ( v19 != -1 )
        {
          if ( a3 )
          {
            v23 = v19;
            v20 = netnode_charval();
            v17 = v23;
            *a3 = v20 != 0;
          }
          goto LABEL_37;
        }
      }
    }
    if ( (_WORD)v36 == 122 )
      break;
    if ( (_WORD)v36 == 209 )
      goto LABEL_23;
LABEL_13:
    v27 = v5;
    if ( (unsigned int)sub_72130(a1, (__int64)&v34, &v27, 1) != -1 )
      goto LABEL_14;
  }
  if ( v39 != 1 || v5 != v40 )
    goto LABEL_13;
  v15 = v42;
  if ( v42 != 5 )
    goto LABEL_34;
  if ( !sub_697C0() )
  {
    v15 = v42;
LABEL_34:
    if ( v15 == 2 )
    {
      v16 = sub_6DEB0(a1, (__int64)&v34, (__int64)&v41, a2, a3);
      goto LABEL_36;
    }
    goto LABEL_14;
  }
  v21 = v44;
  if ( (v36 & 0x1800000000LL) != 0 )
  {
    if ( (v36 & 0x800000000LL) != 0 )
      v21 = (unsigned int)v44;
  }
  else
  {
    v21 = (unsigned __int16)v44;
  }
LABEL_65:
  v16 = sub_6DDF0(a1, a2, v21);
LABEL_36:
  v17 = v16;
  if ( v16 == -1 )
  {
LABEL_14:
    v11 = -1;
    goto LABEL_15;
  }
LABEL_37:
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v17 + v24);
LABEL_15:
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  if ( v30 )
    lock_func_range();
  return v11;
}
