void __fastcall sub_1E6D7A0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, double a5, __int64 a6, __int64 a7)
{
  bool v8; // r13
  unsigned int v9; // r12d
  _BYTE *v12; // rax
  char *v13; // r8
  unsigned int *v14; // rdi
  __int64 (*v15)(); // rax
  __int64 (*v16)(); // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edx
  _BYTE *v21; // rdi
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 *v25; // rsi
  unsigned int v26; // ecx
  char v27; // al
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  bool v32; // cc
  bool v33; // zf
  unsigned __int16 v34; // ax
  __int16 v35; // ax
  __int64 v36; // [rsp+8h] [rbp-F0h]
  __int64 v37; // [rsp+10h] [rbp-E8h]
  void *v38; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v39; // [rsp+28h] [rbp-D0h]
  char v40; // [rsp+2Ch] [rbp-CCh]
  void *v41[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v42[16]; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v43; // [rsp+50h] [rbp-A8h]
  __int64 v44; // [rsp+60h] [rbp-98h]

  v8 = 1;
  v9 = a4;
  v12 = (_BYTE *)a3[29];
  if ( (v12[68] & 8) == 0 && (v12[89] & 4) == 0 )
    v8 = (v12[96] & 0x10) != 0;
  v13 = "mve";
  v14 = *(unsigned int **)(a3[31] + 17448);
  v15 = *(__int64 (**)())(*(_QWORD *)v14 + 584LL);
  if ( v15 == sub_A55EE0
    || (v27 = ((__int64 (__fastcall *)(unsigned int *, char *, __int64))v15)(v14, "mve", 3),
        v13 = "mve",
        v14 = *(unsigned int **)(a3[31] + 17448),
        !v27) )
  {
    if ( v9 == 4 )
    {
      a4 = v14[63];
      if ( (unsigned int)a4 <= 0x1D && ((1LL << a4) & 0x21B80000) != 0 )
        goto LABEL_22;
      v16 = *(__int64 (**)())(*(_QWORD *)v14 + 584LL);
      if ( v16 == sub_A55EE0 )
      {
        if ( *(_WORD *)(a2 + 56) != 1 )
          goto LABEL_9;
        goto LABEL_11;
      }
      goto LABEL_33;
    }
    v16 = *(__int64 (**)())(*(_QWORD *)v14 + 584LL);
    if ( v16 != sub_A55EE0 )
    {
LABEL_33:
      if ( ((unsigned __int8 (__fastcall *)(unsigned int *, char *, __int64))v16)(v14, "mve", 3) )
      {
        if ( *(_WORD *)(a2 + 56) != 1 )
          goto LABEL_9;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v16 = *(__int64 (**)())(*(_QWORD *)v14 + 584LL);
    if ( v16 != sub_A55EE0 )
      goto LABEL_33;
  }
  if ( v9 != 5
    || (a4 = *(unsigned int *)(*(_QWORD *)(a3[31] + 17448) + 252LL), (unsigned int)a4 > 0x1D)
    || ((1LL << a4) & 0x21B80000) == 0 )
  {
    if ( *(_WORD *)(a2 + 56) != 1 )
    {
LABEL_9:
      sub_168B9F0((__int64)v41, a3 + 1, *(_DWORD *)(a2 + 24), 0xCAAu, 0);
      v17 = sub_15DD120((__int64)v41, a2);
      LODWORD(v38) = 1;
      sub_1587D10(v17, (int *)&v38);
      sub_15F7200(v41);
      *(_BYTE *)(a2 + 58) |= 1u;
      return;
    }
LABEL_11:
    v40 = 1;
    v39 = 32;
    v38 = nullptr;
    if ( !(unsigned __int8)sub_1E6CDD0((__int64)a3, a2, (__int64)&v38, a5, a4, (__int64)v13, a7) )
      goto LABEL_28;
    v18 = *(_QWORD *)(*(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v36 = *(_QWORD *)v18;
    if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) != 13 )
      goto LABEL_49;
    v19 = *(_QWORD *)(a3[31] + 17448);
    v41[0] = v42;
    v37 = v19;
    sub_1E5E3F0(v41, *(_BYTE **)(v19 + 216), *(_QWORD *)(v19 + 216) + *(_QWORD *)(v19 + 224));
    v20 = *(_DWORD *)(v37 + 248);
    v43 = _mm_loadu_si128((const __m128i *)(v37 + 248));
    v44 = *(_QWORD *)(v37 + 264);
    if ( (unsigned int)(v20 - 3) <= 2 )
    {
      if ( v9 == 5 )
      {
        v21 = v41[0];
        v28 = (*(_WORD *)(v36 + 18) >> 3) & 0x1FF;
        if ( v28 == 438 || v28 == 443 || v28 == 445 || v28 == 446 )
        {
LABEL_18:
          if ( v21 == v42 )
            goto LABEL_50;
          goto LABEL_77;
        }
LABEL_47:
        if ( v21 == v42 )
          goto LABEL_49;
        goto LABEL_48;
      }
    }
    else if ( v9 == 5 )
    {
      v21 = v41[0];
      v22 = (*(_WORD *)(v36 + 18) >> 3) & 0x1FF;
      if ( v22 == 449 || v22 == 451 || v22 == 454 )
        goto LABEL_18;
      goto LABEL_47;
    }
    v33 = (unsigned __int8)sub_22B7EA0(v41) == 0;
    v34 = *(_WORD *)(v36 + 18);
    if ( v33 )
    {
      v21 = v41[0];
      v35 = (v34 >> 3) & 0x1FF;
      if ( v43.m128i_i32[0] != 5 )
      {
LABEL_57:
        if ( v35 != 449
          && v35 != 438
          && v35 != 451
          && v35 != 443
          && v35 != 452
          && v35 != 444
          && v35 != 453
          && v35 != 445
          && v35 != 454
          && v35 != 446
          && v35 != 481
          && v35 != 480
          && v35 != 485
          && v35 != 104 )
        {
          if ( v21 != v42 )
LABEL_48:
            operator delete(v21);
LABEL_49:
          if ( !v8 )
          {
            v24 = *(_DWORD *)(a2 + 24);
            v25 = a3 + 1;
            v26 = 3193;
LABEL_27:
            sub_168B9F0((__int64)v41, v25, v24, v26, 0);
            sub_1605D30((__int64)v41, a1);
            sub_15F7200(v41);
            *(_BYTE *)(a2 + 58) |= 1u;
LABEL_28:
            if ( v39 <= 0x40 )
              return;
LABEL_29:
            if ( v38 )
              operator delete[](v38);
            return;
          }
          goto LABEL_50;
        }
LABEL_76:
        if ( v21 != v42 )
LABEL_77:
          operator delete(v21);
LABEL_50:
        v29 = sub_A97D20(a3[31], *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL));
        if ( v39 <= 0x40 )
          LODWORD(v30) = (_DWORD)v38;
        else
          v30 = *(_QWORD *)v38;
        if ( (((_DWORD)v30 * v29 - 64) & 0xFFFFFFBF) == 0 )
        {
          v31 = sub_A70300(a3[31], *a1, v30, v9);
          v32 = v39 <= 0x40;
          *a1 = v31;
          if ( v32 )
            return;
          goto LABEL_29;
        }
        v24 = *(_DWORD *)(a2 + 24);
        v25 = a3 + 1;
        v26 = 3164;
        goto LABEL_27;
      }
    }
    else
    {
      v21 = v41[0];
      v35 = (v34 >> 3) & 0x1FF;
    }
    if ( v35 == 482 )
      goto LABEL_76;
    goto LABEL_57;
  }
LABEL_22:
  sub_168B9F0((__int64)v41, a3 + 1, *(_DWORD *)(a2 + 24), 0xC9Fu, 0);
  v23 = sub_15DD120((__int64)v41, a2);
  if ( *(_BYTE *)(v23 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v23 + 32), (__int64)"'mve'", 1u);
  }
  else if ( *(_BYTE *)(v23 + 132) )
  {
    sub_1E63E10(v23, (__int64)"'mve'");
  }
  sub_15F7200(v41);
  *(_BYTE *)(a2 + 58) |= 1u;
}
