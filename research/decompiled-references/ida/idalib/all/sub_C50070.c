__int64 __fastcall sub_C50070(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // r13
  __int64 *v4; // rbx
  __int64 v5; // r14
  __int64 *v6; // r15
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  __int64 (__fastcall **v13)(__int64); // r12
  __int64 (__fastcall *v14)(__int64); // rdi
  __int64 (__fastcall **v15)(__int64); // r13
  __int64 (__fastcall *v16)(__int64); // rax
  _QWORD *v17; // rdi
  __int64 *v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int8 v21; // al
  char v22; // r8
  unsigned __int8 v23; // di
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rax
  char v27; // cl
  char v28; // al
  char v29; // al
  __int64 (__fastcall *v30)(__int64); // rdi
  __int64 (__fastcall *v31)(__int64); // rax
  _QWORD *v32; // rdi
  __int64 v34; // rax
  char v35; // al
  unsigned __int64 v36; // rcx
  char v37; // si
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int8 v40; // cl
  __int64 v41; // [rsp+8h] [rbp-C0h]
  __int64 v42; // [rsp+10h] [rbp-B8h] BYREF
  __int64 *v43; // [rsp+18h] [rbp-B0h]
  __int64 v44; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+28h] [rbp-A0h]
  __m128 v46; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v47; // [rsp+40h] [rbp-88h]
  __int64 *v48; // [rsp+48h] [rbp-80h]
  __m128 v49; // [rsp+50h] [rbp-78h]
  __int64 (__fastcall *v50)(__int64); // [rsp+60h] [rbp-68h] BYREF
  __int64 v51; // [rsp+68h] [rbp-60h]
  __int64 (__fastcall *v52)(__int64); // [rsp+70h] [rbp-58h]
  __int64 v53; // [rsp+78h] [rbp-50h]
  __int64 (__fastcall *v54)(__int64 *); // [rsp+80h] [rbp-48h]
  __int64 v55; // [rsp+88h] [rbp-40h]

  v2 = (__int64 *)(a2 + 104);
  v3 = *(unsigned int *)(a2 + 100);
  v44 = a1;
  v4 = (__int64 *)(a2 + 104 + 8 * v3);
  v5 = (8 * v3) >> 3;
  if ( (8 * v3) >> 5 )
  {
    v6 = (__int64 *)(a2 + 104);
    while ( !sub_B799A0(*v6) )
    {
      if ( sub_B799A0(v6[1]) )
      {
        v4 = v6 + 1;
        v5 = v6 + 1 - v2;
        goto LABEL_9;
      }
      if ( sub_B799A0(v6[2]) )
      {
        v4 = v6 + 2;
        v5 = v6 + 2 - v2;
        goto LABEL_9;
      }
      if ( sub_B799A0(v6[3]) )
      {
        v4 = v6 + 3;
        v5 = v6 + 3 - v2;
        goto LABEL_9;
      }
      v6 += 4;
      if ( (__int64 *)(a2 + 32 * ((8 * v3) >> 5) + 104) == v6 )
      {
        v34 = v4 - v6;
        goto LABEL_48;
      }
    }
    goto LABEL_8;
  }
  v34 = (8 * v3) >> 3;
  v6 = (__int64 *)(a2 + 104);
LABEL_48:
  if ( v34 == 2 )
  {
LABEL_55:
    if ( !sub_B799A0(*v6) )
    {
      ++v6;
LABEL_51:
      if ( !sub_B799A0(*v6) )
        goto LABEL_9;
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  if ( v34 != 3 )
  {
    if ( v34 != 1 )
      goto LABEL_9;
    goto LABEL_51;
  }
  if ( !sub_B799A0(*v6) )
  {
    ++v6;
    goto LABEL_55;
  }
LABEL_8:
  v4 = v6;
  v5 = v6 - v2;
LABEL_9:
  v7 = v3 - v5;
  if ( v7 )
  {
    v8 = *(_QWORD *)(*v4 + 64);
    if ( v8 )
    {
      v8 = sub_B9AE60(*v4);
      --v7;
      v9 = v4 + 1;
      v41 = v8 + 8 * v10;
    }
    else
    {
      v41 = 0;
      v9 = v4;
    }
  }
  else
  {
    v41 = 0;
    v9 = v4;
    v8 = 0;
  }
  v42 = v8;
  v47 = a2 + 104;
  v48 = &v9[v7];
  v11 = _mm_loadh_ps((const double *)&v42);
  v42 = (__int64)v4;
  v46 = v11;
  v43 = v48;
  v12 = _mm_loadh_ps((const double *)&v42);
  LOBYTE(v42) = 1;
  v49 = v12;
LABEL_13:
  if ( v4 != v2
    || __PAIR128__(v41, (unsigned __int64)v43) != *(_OWORD *)&v46
    || __PAIR128__((unsigned __int64)v4, v41) != *(_OWORD *)&v49
    || v43 != v48 )
  {
    v13 = &v50;
    v50 = sub_A56010;
    v14 = nullptr;
    v52 = sub_A56030;
    v15 = &v50;
    v51 = 0;
    v53 = 0;
    v54 = sub_A56050;
    v55 = 0;
    while ( 1 )
    {
      v16 = *v15;
      v17 = (unsigned __int64 *)((char *)v46.m128_u64 + (_QWORD)v14);
      if ( ((unsigned __int8)*v15 & 1) != 0 )
        v16 = *(__int64 (__fastcall **)(__int64))((char *)v16 + *v17 - 1);
      v18 = (__int64 *)v16((__int64)v17);
      if ( v18 )
        break;
      v15 += 2;
      v14 = v15[1];
    }
    v19 = sub_B9AE20(*v18);
    v20 = v19;
    if ( !v19 )
      goto LABEL_32;
    a2 = *(unsigned __int8 *)(v19 + 28);
    v21 = *(_BYTE *)(v19 + 28) & 0x7F;
    if ( (unsigned int)v21 - 40 > 6 )
      goto LABEL_58;
    if ( (a2 & 0x80u) != 0LL )
    {
      v27 = 0;
      goto LABEL_29;
    }
    v22 = *(_BYTE *)(v20 + 96);
    v23 = v22 & 7;
    if ( (v22 & 7) == 0 )
    {
      v24 = *(_QWORD *)&byte_8[*(_QWORD *)(v20 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v24 & 8) != 0 )
      {
        a2 = v24 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (*(_DWORD *)((char *)&qword_18 + (v24 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v24 & 7)) >> 9 == 3 )
          goto LABEL_58;
      }
      if ( ((v21 + 85) & 0x7D) == 0 )
      {
LABEL_69:
        if ( (v22 & 0x18) == 0 )
          goto LABEL_63;
LABEL_58:
        v27 = 1;
        goto LABEL_29;
      }
      v25 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
        v25 = *(_QWORD *)(v25 + 8);
      v45 = v20;
      v26 = sub_B8EAA0(v25);
      v20 = v45;
      v27 = (*(_BYTE *)(v26 + 8) & 0x7F) == 0 || (*(_BYTE *)(v26 + 8) & 0x7F) == 24;
      v28 = *(_BYTE *)(v45 + 28);
      if ( v27 )
        goto LABEL_28;
      v21 = v28 & 0x7F;
      if ( v21 != 43 )
      {
        v36 = *(_QWORD *)(v45 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v45 + 16) & 4) != 0 )
          v36 = *(_QWORD *)v36;
        v37 = *(_BYTE *)(v36 + 8);
        v27 = 1;
        a2 = (v37 + 70) & 0x7F;
        if ( (unsigned __int8)a2 <= 3u )
          goto LABEL_29;
        v22 = *(_BYTE *)(v45 + 96);
        goto LABEL_69;
      }
      if ( (*(_BYTE *)(v45 + 96) & 0x18) != 0 )
      {
LABEL_82:
        v27 = 1;
LABEL_31:
        LOBYTE(v42) = v27 & v42;
LABEL_32:
        v30 = nullptr;
        v51 = 0;
        v50 = sub_A55F80;
        v52 = sub_A55FB0;
        v53 = 0;
        v54 = sub_A55FE0;
        v55 = 0;
        while ( 1 )
        {
          v31 = *v13;
          v32 = (unsigned __int64 *)((char *)v46.m128_u64 + (_QWORD)v30);
          if ( ((unsigned __int8)*v13 & 1) != 0 )
          {
            if ( (*(unsigned __int8 (**)(void))((char *)v31 + *v32 - 1))() )
              goto LABEL_37;
          }
          else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, unsigned __int64, unsigned __int64))v31)(v32, a2, v20) )
          {
LABEL_37:
            v2 = (__int64 *)v47;
            goto LABEL_13;
          }
          v13 += 2;
          v30 = v13[1];
        }
      }
LABEL_63:
      a2 = v20;
      v45 = v20;
      v35 = sub_C4FCB0(v44, v20);
      v20 = v45;
      v27 = v35;
      v28 = *(_BYTE *)(v45 + 28);
LABEL_28:
      v21 = v28 & 0x7F;
      goto LABEL_29;
    }
    if ( v23 != 5 )
    {
LABEL_62:
      if ( v23 > 3u )
        goto LABEL_63;
      v27 = 1;
      v21 = *(_BYTE *)(v20 + 28) & 0x7F;
LABEL_29:
      if ( v21 == 46 )
      {
        a2 = v20;
        LOBYTE(v45) = v27;
        v29 = sub_C50070(v44, v20);
        v27 = v29 & v45;
      }
      goto LABEL_31;
    }
    if ( v21 != 40 && v21 != 46 )
      goto LABEL_79;
    v38 = *(_QWORD *)(v20 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v20 + 16) & 4) != 0 )
      v38 = *(_QWORD *)(v38 + 8);
    if ( !v38 )
    {
LABEL_79:
      v21 = a2 & 0x7F;
      if ( (a2 & 0x7F) == 0x2B )
        goto LABEL_63;
      goto LABEL_58;
    }
    v45 = v20;
    v39 = sub_B8EAA0(v38);
    v20 = v45;
    v40 = *(_BYTE *)(v39 + 8) & 0x7F;
    if ( v40 > 0x12u )
    {
      if ( ((v40 + 94) & 0x7Fu) <= 5 )
        goto LABEL_78;
    }
    else if ( ((1LL << v40) & 0x40182) != 0 )
    {
LABEL_78:
      v23 = *(_BYTE *)(v45 + 96) & 7;
      goto LABEL_62;
    }
    v21 = *(_BYTE *)(v45 + 28) & 0x7F;
    if ( v21 != 43 )
      goto LABEL_58;
    if ( (*(_BYTE *)(v45 + 96) & 7u) > 3 )
      goto LABEL_63;
    goto LABEL_82;
  }
  return (unsigned __int8)v42;
}
