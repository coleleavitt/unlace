__int64 __fastcall sub_8331A0(_WORD *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // r12
  unsigned __int16 v8; // ax
  bool v9; // cc
  char v10; // al
  void **v12; // rdi
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  void *v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  void *v25; // rcx
  char v26; // r13
  __int64 v27; // rsi
  __int64 v28; // r13
  void *v29; // r12
  char v30; // al
  unsigned int v31; // eax
  int v32; // r12d
  char v33; // r14
  void *v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // [rsp+8h] [rbp-C0h]
  __int64 v38[4]; // [rsp+10h] [rbp-B8h] BYREF
  void *v39; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-90h]
  char v41; // [rsp+3Ch] [rbp-8Ch]
  void *v42; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-70h] BYREF
  _QWORD *v44; // [rsp+60h] [rbp-68h]

  v5 = (__int64)a1;
  v8 = *a1 & 0x1FF;
  v9 = v8 <= 0x3Fu;
  if ( v8 == 63 )
  {
LABEL_13:
    v12 = (void **)(*(_BYTE *)(v5 + 2) >> 3);
    v13 = sub_2575940(v12);
    v14 = *(void **)(v5 + 16);
    v15 = v13;
    v16 = *(unsigned int *)(v5 + 24);
    v17 = (unsigned __int64)(v16 + 63) >> 6;
    if ( (unsigned __int64)(v16 + 63) > 0x7F )
    {
      v12 = &v42;
      sub_2585D40(&v42, v16, v17, v14);
    }
    else
    {
      LODWORD(v43) = *(_DWORD *)(v5 + 24);
      v42 = v14;
    }
    v18 = sub_2575D20(v12, v16, v17);
    v19 = (void *)v18;
    if ( v15 == v18 )
      sub_2581430(v38, v18, &v42);
    else
      sub_2583C60(v38, v15, &v42);
    if ( (unsigned int)v43 > 0x40 && v42 )
      operator delete[](v42);
    BYTE4(v42) &= ~1u;
    LODWORD(v42) = 0;
    v37 = sub_2575D00();
    sub_2580BE0(&v39, 0.0);
    sub_257EDC0(&v43, &v39, v37);
    sub_25769A0(&v39);
    LODWORD(v42) = 3;
    if ( v19 == (void *)v38[0] )
      sub_257D000(&v39, v38, v20, v21);
    else
      sub_2576960(&v39, v38);
    if ( v19 == (void *)v43 )
    {
      if ( v39 == v19 )
      {
        if ( v44 )
          sub_832F90(v44, (__int64)v38, v22);
        v44 = nullptr;
        sub_257D000(&v43, &v39, v22, v23);
        goto LABEL_25;
      }
    }
    else if ( v39 != v19 )
    {
      sub_2576350(&v43, &v39, v22, v23);
LABEL_25:
      sub_5FF3B0((__int64 *)&v39);
      sub_6A01B0(a2 + 16, (__int64)&v42);
      if ( (unsigned int)v42 > 1 )
        sub_69F740((__int64)&v42);
      sub_5FF3B0(v38);
      *a4 = 1;
      return 1;
    }
    sub_5FF3B0((__int64 *)&v43);
    if ( v19 == v39 )
      sub_257D000(&v43, &v39, v35, v36);
    else
      sub_2576960(&v43, &v39);
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( !v9 )
    {
      if ( v8 == 79 )
      {
        v28 = *(_QWORD *)(v5 + 8);
        v29 = (void *)*(unsigned int *)(v5 + 16);
        v30 = sub_B10310(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL));
        v39 = v29;
        v40 = 64;
        v41 = v30 ^ 1;
        v31 = sub_70B280(a3, v28);
        v32 = 64;
        v33 = v41;
        if ( v31 == 64 )
        {
          v34 = v39;
        }
        else
        {
          if ( v41 )
            sub_2587E20(&v42, &v39, v31);
          else
            sub_2587E80(&v42, &v39, v31);
          v32 = v43;
          v34 = v42;
          if ( v40 > 0x40 && v39 )
            operator delete[](v39);
        }
        BYTE4(v42) &= ~1u;
        LODWORD(v42) = 2;
        v43 = (unsigned __int64)v34;
        LODWORD(v44) = v32;
        BYTE4(v44) = v33;
        sub_6A01B0(a2 + 16, (__int64)&v42);
        if ( (unsigned int)v42 > 1 )
          sub_69F740((__int64)&v42);
      }
      else
      {
        if ( v8 != 116 )
        {
LABEL_28:
          if ( (*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
          {
            *a4 = 0;
            return 1;
          }
          return 0;
        }
        v10 = *(_BYTE *)(v5 + 2);
        BYTE4(v42) &= ~1u;
        LODWORD(v44) = 1;
        BYTE4(v44) = 1;
        LODWORD(v42) = 2;
        v43 = (v10 & 8) != 0;
        sub_6A01B0(a2 + 16, (__int64)&v42);
        if ( (unsigned int)v42 > 1 )
          sub_69F740((__int64)&v42);
      }
LABEL_7:
      *a4 = 1;
      return 1;
    }
    if ( v8 == 53 )
    {
      v24 = sub_B0FF70(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v25 = *(void **)(v5 + 16);
      v26 = v24;
      v27 = *(unsigned int *)(v5 + 24);
      if ( (unsigned __int64)(v27 + 63) > 0x7F )
      {
        sub_2585D40(&v39, v27, (unsigned __int64)(v27 + 63) >> 6, v25);
        v25 = v39;
        LODWORD(v27) = v40;
      }
      else
      {
        v39 = *(void **)(v5 + 16);
      }
      LODWORD(v44) = v27;
      BYTE4(v42) &= ~1u;
      v40 = 0;
      LODWORD(v42) = 2;
      v43 = (unsigned __int64)v25;
      BYTE4(v44) = v26;
      sub_6A01B0(a2 + 16, (__int64)&v42);
      if ( (unsigned int)v42 > 1 )
        sub_69F740((__int64)&v42);
      if ( v40 > 0x40 && v39 )
        operator delete[](v39);
      goto LABEL_7;
    }
    if ( v8 != 62 )
      goto LABEL_28;
    if ( (*(_WORD *)(v5 + 2) & 0x1E0) != 0 )
      break;
LABEL_12:
    v5 = *(_QWORD *)(v5 + 16);
    v8 = *(_WORD *)v5 & 0x1FF;
    v9 = v8 <= 0x3Fu;
    if ( v8 == 63 )
      goto LABEL_13;
  }
  sub_805700((__int64)&v42, v5);
  if ( (_DWORD)v42 == 7 )
  {
    sub_69F740((__int64)&v42);
    goto LABEL_12;
  }
  sub_6A01B0(a2 + 16, (__int64)&v42);
  v9 = (unsigned int)v42 <= 1;
  *a4 = 1;
  if ( !v9 )
    sub_69F740((__int64)&v42);
  return 1;
}

