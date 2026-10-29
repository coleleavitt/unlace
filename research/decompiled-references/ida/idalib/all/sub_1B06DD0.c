__int64 __fastcall sub_1B06DD0(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned int *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  _DWORD *v7; // r8
  int v12; // r15d
  _WORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rbp
  __int16 v18; // ax
  unsigned __int64 v19; // rdi
  _WORD *v20; // rax
  _WORD *v21; // rbp
  __int16 v22; // ax
  __int64 v23; // rdi
  __int64 *v24; // rsi
  int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  __int16 v29; // ax
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbp
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+18h] [rbp-E0h]
  __int64 v40; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v41[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v43; // [rsp+50h] [rbp-A8h] BYREF
  char v44; // [rsp+A8h] [rbp-50h]
  unsigned int v45; // [rsp+B0h] [rbp-48h]
  char v46; // [rsp+B4h] [rbp-44h]

  v38 = a5;
  v7 = (_DWORD *)*a2;
  v39 = a6;
  if ( ((*v7 >> 14) & 0xD) != 0 )
    return 0;
  v12 = -1;
  v13 = (_WORD *)sub_BFB9F0((__int64)v7);
  v17 = (unsigned __int64)v13;
  *a2 = (unsigned __int64)v13;
  if ( v13 )
  {
    v18 = *v13 & 0x1FF;
    if ( v18 == 123 )
    {
      do
      {
        if ( sub_9ECBA0(v17, (__int64)a2, v14, v15, v16) )
          v19 = *(_QWORD *)(v17 + 16);
        else
          v19 = *(_QWORD *)(v17 + 24);
        v17 = sub_BFBAE0(v19);
      }
      while ( (*(_WORD *)v17 & 0x1FF) == 0x7B );
      *a2 = v17;
      v12 = 0;
    }
    else if ( v18 == 124 )
    {
      do
      {
        v17 = sub_BFBAE0(*(_QWORD *)(v17 + 24));
        v29 = *(_WORD *)v17 & 0x1FF;
      }
      while ( v29 == 124 );
      while ( v29 == 123 )
      {
        if ( sub_9ECBA0(v17, (__int64)a2, v14, v15, v16) )
          v30 = *(_QWORD *)(v17 + 16);
        else
          v30 = *(_QWORD *)(v17 + 24);
        v17 = sub_BFBAE0(v30);
        v29 = *(_WORD *)v17 & 0x1FF;
      }
      *a2 = v17;
      v12 = 1;
    }
  }
  *a3 = sub_C00A40(v17, (__int64)a2, v14, v15, v16);
  *a4 = sub_EEC8C0(v17, (__int64)a2, a7);
  v20 = (_WORD *)sub_BFBAE0(v17);
  v21 = v20;
  *a2 = (unsigned __int64)v20;
  if ( !v20 )
    goto LABEL_12;
  v22 = *v20 & 0x1FF;
  if ( v22 != 71 )
  {
    if ( v22 != 46 )
      goto LABEL_12;
    if ( (sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_13;
    if ( (*(_WORD *)sub_BFBAE0(*((_QWORD *)v21 + 2)) & 0x1FF) != 0x62 )
      goto LABEL_13;
    v23 = *((_QWORD *)v21 + 3);
    if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 49 > 2 )
      goto LABEL_13;
    return sub_1AEE450(v23);
  }
  v23 = *((_QWORD *)v21 + 2);
  if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 40 <= 6 )
    return sub_1AEE450(v23);
LABEL_12:
  sub_19A27D0(a1);
LABEL_13:
  v24 = (__int64 *)(a1 + 8);
  if ( v12 == -1 )
  {
    if ( v39 )
    {
      v25 = 0;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
      {
        v24 = (__int64 *)(a1 + 8);
        v25 = ((sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL) != 0) + 1;
      }
      v26 = *a3;
      LODWORD(v40) = v25;
      sub_168B9F0((__int64)v41, v24, v26, 0x1190u, 0);
      v27 = sub_1588370((__int64)v41, (unsigned int *)&v40);
      v28 = sub_1682BA0(v27, (__int64)&v38);
    }
    else
    {
      sub_168B9F0((__int64)v41, v24, *a3, 0x118Fu, 0);
      LODWORD(v40) = (sub_19A27D0(a1) & 0xFFFFFFFFFFFFFFF0LL) != 0;
      v28 = sub_1587D10((__int64)v41, (int *)&v40);
    }
    sub_15884C0(v28, a4);
    sub_15F7200(v41);
  }
  else
  {
    sub_168B9F0((__int64)v41, v24, *a3, 0x1185u, 0);
    if ( v44 )
    {
      sub_AE9DF0(&v43, v12, 2u);
    }
    else if ( v46 )
    {
      v33 = sub_168B9E0(v41);
      v36 = v42;
      if ( v42 )
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 32LL))(v42);
      v40 = v36;
      v37 = sub_1587BC0(v33, &v40, v31, v32, v34, v35);
      sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v45 + 8), v12, 2u);
    }
    sub_15884C0((__int64)v41, a4);
    sub_15F7200(v41);
  }
  return 0;
}
