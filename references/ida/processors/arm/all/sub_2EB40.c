__int64 __fastcall sub_2EB40(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  __int64 *v5; // rdi
  __int64 v6; // r13
  __int64 *v7; // rax
  unsigned int v8; // r15d
  __int64 v9; // r13
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // r9
  __int64 **v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  bool v17; // zf
  unsigned __int64 v18; // rax
  __int16 v19; // r14
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // [rsp+8h] [rbp-250h]
  __int64 v24; // [rsp+10h] [rbp-248h]
  __int64 v25; // [rsp+28h] [rbp-230h]
  __int64 v26; // [rsp+38h] [rbp-220h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-218h] BYREF
  __int128 v28; // [rsp+48h] [rbp-210h]
  char v29; // [rsp+58h] [rbp-200h]
  __int64 v30; // [rsp+60h] [rbp-1F8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-1F0h]
  __int64 v32; // [rsp+70h] [rbp-1E8h] BYREF
  __int128 v33; // [rsp+78h] [rbp-1E0h]
  _BYTE v34[8]; // [rsp+88h] [rbp-1D0h]
  __int64 v35; // [rsp+90h] [rbp-1C8h] BYREF
  __int128 v36; // [rsp+98h] [rbp-1C0h]
  char v37; // [rsp+A8h] [rbp-1B0h]
  __int128 v38; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-198h]
  __int64 v40; // [rsp+C8h] [rbp-190h]
  __int64 v41; // [rsp+D0h] [rbp-188h]
  char v42; // [rsp+D8h] [rbp-180h] BYREF
  char v43; // [rsp+D9h] [rbp-17Fh]
  __int16 v44; // [rsp+DEh] [rbp-17Ah]
  _BYTE v45[8]; // [rsp+100h] [rbp-158h] BYREF
  __int64 v46; // [rsp+108h] [rbp-150h]
  unsigned __int64 v47; // [rsp+218h] [rbp-40h] BYREF

  v47 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a2 + 34) & 4) != 0 || (getinf(3) & 0x1006) == 0x1002 )
    return sub_2B170(a1, a2);
  v4 = *(_QWORD *)(a2 + 16);
  v29 = 0;
  v27 = 0;
  v28 = 0;
  sub_81F70(a1, &v27, v4, 14, 0, 0);
  v5 = v27;
  if ( (unsigned __int8)(v29 - 10) > 1u )
  {
LABEL_10:
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree((__int64)v27);
    }
    if ( v4 <= 0xB || *(_WORD *)(a2 + 26) != 4 )
      return 0;
    v39 = -1;
    v10 = (unsigned __int64 *)&v42;
    v40 = 0;
    v41 = 0;
    v38 = -1;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 5;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *(v10 - 2) = 0;
    }
    while ( v10 != &v47 );
    if ( (int)decode_insn() <= 0
      || (_WORD)v40 != 18
      || (v41 & 0xF) != 0xE
      || v43 != 1
      || *(_WORD *)(a2 + 46) != v44
      || v45[1] != 5
      || v46 != 1 )
    {
      return 0;
    }
    v33 = 0;
    v32 = 0;
    v34[0] = 0;
    v37 = 0;
    v23 = 2;
    v35 = 0;
    v36 = 0;
    while ( 1 )
    {
      if ( (int)decode_insn() <= 0 )
        goto LABEL_32;
      if ( (unsigned __int16)v40 > 0x2Cu )
        goto LABEL_32;
      v11 = 0xFFFFEFFFBF7FFFFFLL;
      if ( _bittest64((const __int64 *)&v11, (unsigned __int16)v40) )
        goto LABEL_32;
      if ( v43 != 1 )
        goto LABEL_32;
      if ( v44 != 14 )
        goto LABEL_32;
      v12 = v41 & 0xF;
      if ( (v41 & 0xE) != 0 )
        goto LABEL_32;
      v24 = v41 & 0xF;
      if ( v34[32 * v24] )
        goto LABEL_32;
      v25 = v12;
      v13 = (__int64 **)(&v32 + 4 * v12);
      sub_83660(a1, v13, &v38, v45, 0);
      v8 = sub_23CA0(v13, &v30 + v25);
      if ( !(_BYTE)v8 )
        goto LABEL_32;
      v14 = *(&v30 + v24);
      if ( v14 == -1 )
        goto LABEL_32;
      v15 = *(_QWORD *)(a1 + 32);
      *(&v30 + v24) = *(_QWORD *)(v15 + 16) & v14;
      if ( v23 == 1 )
        break;
      v23 = 1;
    }
    if ( v31 == v4 + 5 )
    {
      v21 = 0x100000000LL;
      if ( *(_DWORD *)(v15 + 24) == 8 )
        v21 = -1;
      v17 = v21 == 0x100000000LL;
      v22 = 4294967288LL;
      if ( !v17 )
        v22 = -9;
      if ( v22 < v4 || v30 != v4 + 8 || (unsigned __int16)get_word(v4 + 4) != 18296 )
        goto LABEL_32;
      sub_25A70(a1, v4, v4 + 4, 1);
      sub_25A70(a1, v4, v4 + 8, 0);
    }
    else
    {
      if ( v30 != v4 + 4 )
        goto LABEL_32;
      v16 = 0x100000000LL;
      if ( *(_DWORD *)(v15 + 24) == 8 )
        v16 = -1;
      v17 = v16 == 0x100000000LL;
      v18 = 4294967284LL;
      if ( !v17 )
        v18 = -13;
      if ( v18 < v4 )
        goto LABEL_32;
      if ( v31 != v4 + 13 )
        goto LABEL_32;
      if ( (int)decode_insn() <= 0 )
        goto LABEL_32;
      if ( (_WORD)v40 != 41 )
        goto LABEL_32;
      if ( (v41 & 0xF) != 0xE )
        goto LABEL_32;
      v19 = *(_WORD *)(a2 + 46);
      if ( (int)decode_insn() <= 0 )
        goto LABEL_32;
      if ( (unsigned __int16)v40 > 0x2Cu )
        goto LABEL_32;
      v20 = 0xFFFFEFFFBF7FFFFFLL;
      if ( _bittest64((const __int64 *)&v20, (unsigned __int16)v40) || (v41 & 0xF) != 0xE || v43 != 1 || v19 != v44 )
        goto LABEL_32;
      v27 = 0;
      v29 = 0;
      v28 = 0;
      sub_83660(a1, &v27, &v38, v45, 0);
      if ( !(unsigned __int8)sub_23CA0(&v27, &v26)
        || v26 == -1
        || v26 != (v26 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)) )
      {
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree((__int64)v27);
        }
LABEL_32:
        v8 = 0;
        goto LABEL_33;
      }
      sub_2A700(a1, (__int64)&v27);
      sub_25A70(a1, v4, v4 + 12, 1);
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree((__int64)v27);
      }
    }
    sub_2A700(a1, (__int64)&v32);
    sub_2A700(a1, (__int64)&v35);
LABEL_33:
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree(v35);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
    return v8;
  }
  v6 = *v27;
  if ( (_QWORD)v28 != 1 )
  {
    v7 = v27 + 3;
    if ( 24LL * (_QWORD)v28 != 24 )
    {
      while ( *v7 == v6 )
      {
        v7 += 3;
        if ( &v27[3 * (_QWORD)v28] == v7 )
          goto LABEL_15;
      }
      goto LABEL_10;
    }
  }
LABEL_15:
  v8 = 0;
  if ( v6 != -1 )
  {
    sub_2A700(a1, (__int64)&v27);
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v6;
    sub_25A70(a1, v4, v9 & 0xFFFFFFFFFFFFFFFELL, v9 & 1);
    v5 = v27;
    LOBYTE(v8) = v4 + *(unsigned __int16 *)(a2 + 26) == (v9 & 0xFFFFFFFFFFFFFFFELL);
    if ( !v27 )
      return v8;
    goto LABEL_17;
  }
  if ( v27 )
  {
LABEL_17:
    *(_QWORD *)&v28 = 0;
    qfree((__int64)v5);
  }
  return v8;
}
