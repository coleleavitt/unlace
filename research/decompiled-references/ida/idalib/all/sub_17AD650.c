__int64 __fastcall sub_17AD650(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  void **v7; // rbp
  __int64 v8; // rax
  __int64 **v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // edx
  __int64 v12; // rsi
  __int64 v13; // r9
  __int32 v14; // edx
  unsigned __int64 v15; // rax
  void *v16; // rax
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  void *v21; // r12
  unsigned int v23; // eax
  int v24; // ebx
  __int64 v25; // r11
  int v26; // ebx
  __int64 v27; // r9
  bool v28; // zf
  __int64 v29; // rax
  unsigned __int64 v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // r14
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // r15
  unsigned __int64 v45; // rdx
  __int32 v46; // edx
  unsigned __int64 v47; // rax
  void *v48; // rdi
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // [rsp+8h] [rbp-C0h]
  __int64 *v51; // [rsp+8h] [rbp-C0h]
  __int32 v53; // [rsp+1Ch] [rbp-ACh]
  unsigned __int64 v54; // [rsp+20h] [rbp-A8h]
  void **v55; // [rsp+28h] [rbp-A0h] BYREF
  void *v56; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int32 v57; // [rsp+38h] [rbp-90h]
  void *v58; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int32 v59; // [rsp+48h] [rbp-80h]
  void *v60; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-70h]
  void *v62; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-60h]
  void *v64; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int32 v65; // [rsp+78h] [rbp-50h]
  char v66; // [rsp+7Ch] [rbp-4Ch]
  __m128 v67[4]; // [rsp+80h] [rbp-48h] BYREF

  v6 = a3;
  v7 = (void **)a1;
  v8 = *(unsigned int *)(a1 + 2712);
  v9 = (__int64 **)(a1 + 2696);
  v55 = (void **)a2;
  if ( !(_DWORD)v8 )
  {
    v67[0].m128_u64[0] = 0;
LABEL_80:
    v51 = (__int64 *)v9;
    sub_17AD420(v9, 2 * v8, a3, (__int64)v9, a5, a6);
    goto LABEL_81;
  }
  a5 = *(_QWORD *)(a1 + 2696);
  v10 = a2;
  v11 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = a5 + 24LL * v11;
  v13 = *(_QWORD *)v12;
  if ( v10 == *(_QWORD *)v12 )
  {
LABEL_3:
    sub_17A96F0(v67, (_QWORD *)v12, (_QWORD *)(a5 + 24 * v8), (__int64)v9, 1);
    v50 = v67[0].m128_u64[0] + 8;
    goto LABEL_4;
  }
  v24 = 1;
  v25 = 0;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( v13 == -8192 && !v25 )
        v25 = v12;
      v11 = (v8 - 1) & (v24 + v11);
      v12 = a5 + 24LL * v11;
      v13 = *(_QWORD *)v12;
      if ( v10 == *(_QWORD *)v12 )
        goto LABEL_3;
      if ( v13 == -4096 )
        break;
      ++v24;
    }
    if ( v25 )
      v12 = v25;
  }
  v26 = *((_DWORD *)v7 + 676);
  a6 = (unsigned int)(3 * v8);
  v67[0].m128_u64[0] = v12;
  a3 = (unsigned int)(v26 + 1);
  if ( 4 * (int)a3 >= (unsigned int)a6 )
    goto LABEL_80;
  v27 = (unsigned int)(v8 - *((_DWORD *)v7 + 677) - a3);
  if ( (unsigned int)v27 > (unsigned int)v8 >> 3 )
    goto LABEL_46;
  v51 = (__int64 *)v9;
  sub_17AD420(v9, v8, a3, (__int64)v9, a5, v27);
LABEL_81:
  sub_17A9290(v51, (__int64 *)&v55, v67);
  v10 = (__int64)v55;
  a5 = (__int64)v7[337];
  v12 = v67[0].m128_u64[0];
  LODWORD(a3) = *((_DWORD *)v7 + 676) + 1;
  v9 = (__int64 **)v51;
LABEL_46:
  v28 = *(_QWORD *)v12 == -4096;
  *((_DWORD *)v7 + 676) = a3;
  if ( !v28 )
    --*((_DWORD *)v7 + 677);
  *(_DWORD *)(v12 + 16) = 1;
  v29 = *((unsigned int *)v7 + 678);
  *(_QWORD *)v12 = v10;
  *(_QWORD *)(v12 + 8) = 0;
  sub_17A96F0(v67, (_QWORD *)v12, (_QWORD *)(a5 + 24 * v29), (__int64)v9, 1);
  v7 = v55;
  v30 = v67[0].m128_u64[0];
  sub_B7E870((__int64)v55, v12, v31, v32, v33, v34);
  v39 = sub_B7E870((__int64)v7, v12, v35, v36, v37, v38);
  v50 = v30 + 8;
  if ( !v39 )
    v39 = v7;
  v40 = sub_B8E970((__int64)(v39 + 8));
  v41 = v40;
  if ( !v40 )
    goto LABEL_4;
  if ( (*(_BYTE *)(v40 + 28) & 0x7F) == 0x21 )
  {
LABEL_54:
    LODWORD(v7) = *(unsigned __int8 *)(v41 + 80);
    v43 = *(_QWORD *)(v41 + 56);
    v44 = *(unsigned int *)(v41 + 64);
    v45 = (unsigned __int64)(v44 + 63) >> 6;
    if ( v45 > 1 )
    {
      sub_2205610(v67, (unsigned int)v44, v45, v43);
    }
    else
    {
      v67[0].m128_i32[2] = *(_DWORD *)(v41 + 64);
      if ( (unsigned int)v44 <= 0x40 )
      {
        v65 = v44;
        v64 = (void *)v43;
        v66 = (char)v7;
        goto LABEL_57;
      }
      sub_2205470(v67, v43, 0);
    }
    LODWORD(v44) = v67[0].m128_i32[2];
    v43 = v67[0].m128_u64[0];
    v66 = (char)v7;
    v65 = v67[0].m128_u32[2];
    v64 = (void *)v67[0].m128_u64[0];
    if ( v67[0].m128_i32[2] > 0x40u )
    {
      if ( (unsigned int)sub_22069E0(&v64) != 1 )
        goto LABEL_68;
      goto LABEL_59;
    }
LABEL_57:
    if ( !v43 || (v43 & (v43 - 1)) != 0 )
      goto LABEL_71;
LABEL_59:
    sub_2206CD0(v67, v50, (unsigned int)v44);
    v46 = v67[0].m128_i32[2];
    if ( v67[0].m128_i32[2] > 0x40u )
    {
      sub_2205C10(v67, &v64);
      v46 = v67[0].m128_i32[2];
      v47 = v67[0].m128_u64[0];
    }
    else
    {
      v47 = (unsigned __int64)v64 | v67[0].m128_u64[0];
      v67[0].m128_u64[0] |= (unsigned __int64)v64;
    }
    v67[0].m128_i32[2] = 0;
    if ( *(_DWORD *)(v30 + 16) > 0x40u )
    {
      v48 = *(void **)(v30 + 8);
      if ( v48 )
      {
        v54 = v47;
        v53 = v46;
        operator delete[](v48);
        v47 = v54;
        v46 = v53;
      }
    }
    *(_QWORD *)(v30 + 8) = v47;
    *(_DWORD *)(v30 + 16) = v46;
    if ( v67[0].m128_i32[2] > 0x40u && v67[0].m128_u64[0] )
      operator delete[]((void *)v67[0].m128_u64[0]);
    if ( v65 <= 0x40 )
    {
LABEL_71:
      while ( 1 )
      {
        v49 = *(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v41 = v49;
        if ( !v49 )
          goto LABEL_4;
        if ( (*(_BYTE *)(v49 + 28) & 0x7F) == 0x21 )
          goto LABEL_54;
      }
    }
LABEL_68:
    if ( v64 )
      operator delete[](v64);
    goto LABEL_71;
  }
  while ( 1 )
  {
    v42 = *(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v41 = v42;
    if ( !v42 )
      break;
    if ( (*(_BYTE *)(v42 + 28) & 0x7F) == 0x21 )
      goto LABEL_54;
  }
LABEL_4:
  sub_2206D90(v67, v50, *(unsigned int *)(v6 + 8));
  v14 = v67[0].m128_i32[2];
  if ( v67[0].m128_i32[2] <= 0x40u )
  {
    v57 = v67[0].m128_u32[2];
    v15 = (0xFFFFFFFFFFFFFFFFLL >> -v67[0].m128_i8[8]) & ~v67[0].m128_u64[0];
    if ( !v67[0].m128_i32[2] )
      v15 = 0;
    v56 = (void *)v15;
    goto LABEL_34;
  }
  sub_2205FC0(v67, v50);
  v14 = v67[0].m128_i32[2];
  v15 = v67[0].m128_u64[0];
  v57 = v67[0].m128_u32[2];
  v56 = (void *)v67[0].m128_u64[0];
  v59 = v67[0].m128_u32[2];
  if ( v67[0].m128_i32[2] <= 0x40u )
  {
LABEL_34:
    v16 = (void *)(*(_QWORD *)v6 & v15);
    v61 = v14;
    v58 = v16;
    v60 = v16;
    v59 = 0;
    goto LABEL_35;
  }
  v7 = &v58;
  sub_2205510(&v58);
  v14 = v59;
  if ( v59 <= 0x40 )
  {
    v15 = (unsigned __int64)v58;
    goto LABEL_34;
  }
  sub_2205B60(&v58, v6);
  LODWORD(v7) = v59;
  v16 = v58;
  v59 = 0;
  v61 = (unsigned int)v7;
  v60 = v58;
  if ( (unsigned int)v7 <= 0x40 )
  {
LABEL_35:
    LOBYTE(v7) = v16 == nullptr;
    goto LABEL_9;
  }
  LOBYTE(v7) = (unsigned int)sub_2206780(&v60) == (_DWORD)v7;
LABEL_9:
  if ( (_BYTE)v7 || !a4 )
    goto LABEL_21;
  v17 = *(_DWORD *)(v6 + 8);
  v63 = v17;
  if ( v17 <= 0x40 )
  {
    v18 = *(_QWORD *)v6;
LABEL_13:
    v19 = 0;
    v63 = 0;
    v20 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v17) & ~v18;
    if ( v17 )
      v19 = v20;
    v62 = (void *)v19;
    goto LABEL_16;
  }
  v7 = &v62;
  sub_2205510(&v62);
  v17 = v63;
  if ( v63 <= 0x40 )
  {
    v18 = (unsigned __int64)v62;
    goto LABEL_13;
  }
  sub_2205FC0(&v62, v6);
  v23 = v63;
  v19 = (unsigned __int64)v62;
  v63 = 0;
  v65 = v23;
  v64 = v62;
  if ( v23 <= 0x40 )
  {
LABEL_16:
    v21 = (void *)((unsigned __int64)v56 & v19);
    goto LABEL_17;
  }
  sub_2205B60(&v64, &v56);
  LODWORD(v7) = v65;
  v21 = v64;
  v65 = 0;
  v67[0].m128_i32[2] = (int)v7;
  v67[0].m128_u64[0] = (unsigned __int64)v64;
  if ( (unsigned int)v7 > 0x40 )
  {
    LOBYTE(v7) = (unsigned int)sub_2206780(v67) == (_DWORD)v7;
    if ( v21 )
    {
      operator delete[](v21);
      if ( v65 > 0x40 )
      {
        if ( v64 )
          operator delete[](v64);
      }
    }
    goto LABEL_18;
  }
LABEL_17:
  LOBYTE(v7) = v21 == nullptr;
LABEL_18:
  if ( v63 > 0x40 && v62 )
    operator delete[](v62);
LABEL_21:
  if ( v61 > 0x40 && v60 )
    operator delete[](v60);
  if ( v59 > 0x40 && v58 )
    operator delete[](v58);
  if ( v57 > 0x40 && v56 )
    operator delete[](v56);
  return (unsigned int)v7;
}
