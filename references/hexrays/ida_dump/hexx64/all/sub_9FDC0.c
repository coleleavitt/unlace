__int64 __fastcall sub_9FDC0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int *v3; // r15
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // r14
  __int64 v16; // rsi
  int v18; // eax
  int v19; // [rsp+4h] [rbp-10Ch]
  __int64 v20; // [rsp+8h] [rbp-108h]
  int v21; // [rsp+18h] [rbp-F8h]
  int v22; // [rsp+18h] [rbp-F8h]
  int v23; // [rsp+20h] [rbp-F0h]
  int v24; // [rsp+20h] [rbp-F0h]
  _QWORD v25[4]; // [rsp+30h] [rbp-E0h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+60h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-A8h]
  __int64 v29; // [rsp+78h] [rbp-98h]
  int v30; // [rsp+80h] [rbp-90h] BYREF
  __int128 v31; // [rsp+88h] [rbp-88h]
  _QWORD v32[2]; // [rsp+A0h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+B0h] [rbp-60h] BYREF
  _QWORD v34[10]; // [rsp+C0h] [rbp-50h] BYREF

  v34[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v3 = *(unsigned int **)(a2 + 40);
  v5 = *v3;
  if ( (unsigned int)v5 > 0x21 )
    return 0;
  v6 = 0x306385000LL;
  LOBYTE(v2) = _bittest64(&v6, v5);
  if ( (_BYTE)v2 || (_DWORD)v5 == 13 )
  {
    v7 = *(_DWORD *)(a2 + 36);
    v23 = *v3;
    v8 = *(_DWORD *)(a2 + 68);
    v25[2] = 0;
    v21 = v7;
    v9 = *(_QWORD *)(a1 + 480);
    v25[1] = a1;
    v25[0] = &off_4DBDF0;
    v10 = *(_QWORD *)(v9 + 112);
    v28 = 0;
    v25[3] = 0;
    v20 = v10;
    v26[0] = 0xFFFFFFFF00000000LL;
    v27 = 0xFFFFFFFF00000000LL;
    v26[1] = 0;
    v29 = 0x2FFFFFFFFLL;
    v11 = (_DWORD *)sub_954F0((__int64)v25, a2, 0);
    v12 = (__int64)v11;
    if ( !v11 )
      goto LABEL_19;
    if ( *v11 != v23 )
      goto LABEL_19;
    v19 = v23;
    v24 = v21 - v8;
    if ( v11[17] < v21 - v8 )
      goto LABEL_19;
    v13 = sub_958B0((__int64)v25);
    v14 = v21 - v8;
    v15 = v13;
    if ( v13 )
    {
      if ( (_DWORD)v29 )
        goto LABEL_19;
      if ( *((_QWORD *)&v28 + 1) )
        goto LABEL_19;
      if ( v13 != v12 )
        goto LABEL_19;
      if ( v19 != 13 )
        goto LABEL_19;
      if ( *((_BYTE *)v3 + 48) != 14 )
        goto LABEL_19;
      if ( *((_BYTE *)v3 + 32) != 14 )
        goto LABEL_19;
      v16 = *((_QWORD *)v3 + 7);
      if ( !(unsigned __int8)sub_125B60(v13 + 64, v16, 0)
        || !(unsigned __int8)sub_12EA80(v20, a1, v15, (int)v15 + 32, a2, *((_QWORD *)v3 + 5), 0) )
      {
        goto LABEL_19;
      }
      sub_123A40(&v30, v15 + 48);
      if ( !(unsigned __int8)sub_155D40(a1, v15, &v30, v15, v3, 0) || (sub_11CA10(v16, &v30), sub_958B0((__int64)v25)) )
      {
        sub_11CDA0(&v30);
LABEL_19:
        v2 = 0;
LABEL_20:
        v25[0] = &off_4DBDF0;
        sub_11CDA0(&v27);
        sub_11CDA0(v26);
        return v2;
      }
      sub_11CDA0(&v30);
      v14 = v24;
    }
    v22 = v14;
    v32[0] = 0xFFFFFFFF00000000LL;
    v32[1] = 0;
    v33[0] = 0xFFFFFFFF00000000LL;
    v33[1] = 0;
    v34[0] = 0xFFFFFFFF00000000LL;
    v34[1] = 0;
    v31 = 0;
    sub_1253A0(&v30, v12);
    if ( SHIDWORD(v34[0]) > v22 )
      sub_12B6F0(&v30, v20, 10, (unsigned int)v22, 1);
    v2 = sub_132040(a1, v12, &v30, a2, v3);
    if ( (_BYTE)v2
      && (sub_125180(v32),
          sub_125180(v33),
          v30 = *v3,
          sub_1571F0(a1, v12, v34, a2, a2 + 64, 1),
          (unsigned int)sub_944B0(a1, a2, v12, (__int64)&v30, 0)) )
    {
      sub_1253A0(v12, &v30);
      sub_11D5A0(a2);
      v18 = *(_DWORD *)(a1 + 24);
      BYTE1(v18) &= ~2u;
      LOBYTE(v18) = v18 | 0x80;
      *(_DWORD *)(a1 + 24) = v18;
      sub_11D5D0(v12, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
      sub_992D0(a1, v12);
    }
    else
    {
      v2 = 0;
    }
    sub_11CDA0(v34);
    sub_11CDA0(v33);
    sub_11CDA0(v32);
    goto LABEL_20;
  }
  return v2;
}
