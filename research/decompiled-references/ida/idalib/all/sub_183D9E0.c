void __fastcall sub_183D9E0(__int64 a1, __int64 a2, __int64 a3, double a4, double a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned __int64 i; // r8
  __int64 v16; // rbx
  _WORD *v17; // r8
  _WORD *v18; // r15
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  bool v27; // zf
  unsigned __int64 v28; // rax
  unsigned __int8 v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int8 v31; // al
  __int64 v33; // [rsp+10h] [rbp-100h]
  __int64 v34; // [rsp+28h] [rbp-E8h] BYREF
  _OWORD *v35; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-D8h]
  _OWORD v37[5]; // [rsp+40h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+90h] [rbp-80h]
  __int64 v39; // [rsp+98h] [rbp-78h]
  __int64 v40; // [rsp+A0h] [rbp-70h]
  int v41; // [rsp+A8h] [rbp-68h]
  __int64 v42; // [rsp+B0h] [rbp-60h] BYREF
  __int128 v43; // [rsp+B8h] [rbp-58h]
  __int64 v44; // [rsp+C8h] [rbp-48h]

  v7 = *(_QWORD *)(a3 + 40);
  v39 = a1;
  v35 = v37;
  v36 = 0x800000000LL;
  v37[4] = 0;
  v34 = 0;
  v38 = 0;
  v40 = v7;
  v41 = 0;
  sub_B85890(&v42, v7);
  v44 = 65793;
  v43 = 0;
  sub_1A395A0(&v34);
  v10 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
  if ( (v10 & 4) != 0 )
    v13 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v7;
  for ( i = sub_B94670(v13, v7, v8, v9, v11, v12); i; i = *((_QWORD *)v18 + 1) )
  {
    v16 = i;
    v17 = (_WORD *)(i & 0xFFFFFFFFFFFFFFF8LL);
    v18 = v17;
    v19 = (v16 >> 2) & 1;
    if ( (_DWORD)v19 && v17 )
    {
      v20 = *(_QWORD *)v17;
      if ( (WORD6(v43) & *(_WORD *)(*(_QWORD *)v17 + 30LL) & 0x3FFF) == 0 )
        continue;
    }
    else
    {
      v20 = (__int64)v17;
      if ( (WORD6(v43) & v17[15] & 0x3FFF) == 0 )
        goto LABEL_14;
    }
    if ( (unsigned __int8)sub_1A423D0(v39, v20) || BYTE5(v44) )
      goto LABEL_11;
    if ( BYTE1(v44) )
    {
      v31 = sub_B81B70(v20);
      if ( !v31 )
        goto LABEL_37;
      if ( v31 > 3u )
      {
        if ( v31 > 6u )
LABEL_37:
          BUG();
        if ( !sub_B72C70(v20) )
          goto LABEL_11;
      }
    }
    v14 = v20;
    v20 = sub_1A47350(&v34, v20);
    if ( v20 )
    {
LABEL_11:
      v21 = (unsigned int)v36;
      v14 = HIDWORD(v36);
      v22 = (unsigned int)v36 + 1LL;
      v23 = v20 | (*(_BYTE *)(v20 + 29) >> 5) & 3;
      if ( v22 > HIDWORD(v36) )
      {
        v14 = (__int64)v37;
        v33 = v20 | (*(_BYTE *)(v20 + 29) >> 5) & 3;
        sub_2237220(&v35, v37, v22, 8);
        v21 = (unsigned int)v36;
        v23 = v33;
      }
      *((_QWORD *)v35 + v21) = v23;
      LODWORD(v36) = v36 + 1;
      LODWORD(v34) = 2;
    }
LABEL_14:
    if ( !(_DWORD)v19 || !v18 )
      break;
  }
  sub_1A43500(&v34);
  v27 = (*(_BYTE *)(a3 + 82) & 0x40) == 0;
  *(_WORD *)((char *)&v44 + 3) = 0;
  v28 = *(_QWORD *)(a3 + 80);
  v29 = !v27 && (v28 & 0x2000000) == 0
     || (v28 & 0x2000000) != 0
     || (*(_BYTE *)(a3 + 83) & 8) == 0 && ((*(_BYTE *)(a3 + 128) & 1) != 0 || *(_QWORD *)(a3 + 128))
     || (*(_BYTE *)(a3 + 83) & 0x40) != 0
     || (v30 = HIDWORD(v28), (v30 & 0x20) != 0)
     || (v30 & 0x40) != 0
     || sub_B8CF80(a3, v14, *(_BYTE *)(a3 + 83) & 0x40, v24, v25, v26);
  sub_17F3F10(a1, a2, (_WORD *)a3, (__int64)&v34, 0, v29, (__m128i)0LL, a5);
  sub_169D230((__int64)&v34);
}
