void __fastcall sub_16D6F70(__int64 a1, unsigned __int64 a2, __m128i a3, double a4)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // ax
  __int64 v12; // r12
  __int16 v13; // ax
  __int64 v14; // r13
  __int16 v15; // ax
  unsigned int v16; // r14d
  void *v17; // rax
  unsigned int v18; // r15d
  char *v19; // rax
  bool v20; // r14
  unsigned __int16 v21; // dx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r13
  __int16 v25; // ax
  __int64 v26; // r14
  __int16 v27; // ax
  bool v28; // r13
  char v29; // r15
  __int16 v30; // ax
  size_t v31; // r14
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned int v35; // [rsp+0h] [rbp-1A8h]
  __int64 v36; // [rsp+0h] [rbp-1A8h]
  size_t v37; // [rsp+8h] [rbp-1A0h]
  void *v38; // [rsp+10h] [rbp-198h] BYREF
  unsigned int v39; // [rsp+18h] [rbp-190h]
  void *v40; // [rsp+28h] [rbp-180h]
  __int64 v41; // [rsp+38h] [rbp-170h] BYREF
  void *v42; // [rsp+50h] [rbp-158h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-150h]
  void *v44; // [rsp+68h] [rbp-140h]
  __int64 v45; // [rsp+78h] [rbp-130h] BYREF
  void *v46; // [rsp+90h] [rbp-118h] BYREF
  __int64 v47; // [rsp+98h] [rbp-110h]
  unsigned int v48; // [rsp+A0h] [rbp-108h] BYREF
  char v49; // [rsp+A4h] [rbp-104h]
  __int64 v50; // [rsp+A8h] [rbp-100h] BYREF
  void *v51; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned int v52; // [rsp+E8h] [rbp-C0h]

  v4 = sub_BFBAE0(a2);
  v8 = sub_C00A40(v4, a2, v5, v6, v7);
  v11 = *(_WORD *)v4 & 0x1FF;
  if ( ((v11 + 394) & 0x1FFu) > 1 )
    goto LABEL_2;
  v21 = *(_WORD *)(v4 + 2);
  v22 = 0;
  v49 &= ~1u;
  LOWORD(v46) = 0;
  v47 = 0;
  v48 = 0;
  v23 = (v21 >> 3) & 0x3F;
  if ( (_BYTE)v23 != 7 )
    goto LABEL_2;
  v24 = *(_QWORD *)(v4 + 16);
  v25 = *(_WORD *)v24 & 0x1FF;
  if ( v25 == 52
    || v25 == 4 && *(_BYTE *)(v24 + 2) >> 3 == 7 && (v24 = *(_QWORD *)(v24 + 16), (*(_WORD *)v24 & 0x1FF) == 0x34) )
  {
    v26 = *(_QWORD *)(v4 + 24);
    v27 = *(_WORD *)v26 & 0x1FF;
    if ( v27 != 52 )
    {
      if ( v27 == 4 && *(_BYTE *)(v26 + 2) >> 3 == 7 && (v26 = *(_QWORD *)(v26 + 16), (*(_WORD *)v26 & 0x1FF) == 0x34) )
      {
        if ( !v24 )
          goto LABEL_71;
      }
      else
      {
        v26 = 0;
      }
    }
    a2 = *(_QWORD *)(v24 + 16);
    sub_16B6640((__int64)&v51, a2, *(_DWORD *)(v24 + 24));
    if ( sub_16B9670((__int64)&v51) )
    {
      if ( v52 > 0x40 && v51 )
        operator delete[](v51);
      sub_168B9F0((__int64)&v51, (__int64 *)(a1 + 8), v8, 0x1B9Fu, 0);
      LODWORD(v42) = 0;
      sub_1587D10((__int64)&v51, (int *)&v42);
      sub_15F7200(&v51);
      goto LABEL_79;
    }
    if ( v52 > 0x40 && v51 )
      operator delete[](v51);
  }
  else
  {
    v26 = *(_QWORD *)(v4 + 24);
    v30 = *(_WORD *)v26 & 0x1FF;
    if ( v30 == 52 )
    {
LABEL_70:
      v24 = 0;
      goto LABEL_71;
    }
    if ( v30 != 4 || *(_BYTE *)(v26 + 2) >> 3 != 7 )
    {
      v26 = 0;
      goto LABEL_70;
    }
    v26 = *(_QWORD *)(v26 + 16);
    v24 = 0;
    if ( (*(_WORD *)v26 & 0x1FF) != 0x34 )
      v26 = 0;
  }
LABEL_71:
  if ( (*(_DWORD *)v4 & 0x20000) == 0 && v24 && v26 )
  {
    sub_16B6640((__int64)&v51, *(_QWORD *)(v26 + 16), *(_DWORD *)(v26 + 24));
    a2 = v52;
    v22 = v52 - 1;
    v23 = 1LL << ((unsigned __int8)v52 - 1);
    if ( v52 <= 0x40 )
    {
      if ( ((1LL << ((unsigned __int8)v52 - 1)) & (unsigned __int64)v51) != 0 )
        goto LABEL_78;
    }
    else
    {
      v22 = (unsigned int)v22 >> 6;
      if ( (v23 & *((_QWORD *)v51 + (unsigned int)v22)) != 0 )
      {
LABEL_76:
        if ( v51 )
          operator delete[](v51);
        goto LABEL_78;
      }
    }
    a2 = (unsigned __int64)&v46;
    if ( (unsigned __int8)sub_C3F220(v4, (__int64)&v46, *(_QWORD *)(a1 + 248), 2, 0, v10) )
    {
      if ( v52 > 0x40 && v51 )
        operator delete[](v51);
      sub_168B9F0((__int64)&v51, (__int64 *)(a1 + 8), v8, 0x1B9Fu, 0);
      LOBYTE(v42) = sub_142BC90((__int64)&v50, nullptr);
      sub_1588420((__int64)&v51, (unsigned __int8 *)&v42);
      sub_15F7200(&v51);
      goto LABEL_79;
    }
    if ( v52 > 0x40 )
      goto LABEL_76;
  }
LABEL_78:
  if ( sub_F65140(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v23, v22, v9, v10) )
  {
    sub_168B9F0((__int64)&v51, (__int64 *)(a1 + 8), v8, 0x1BA0u, 0);
    v31 = j__strlen("(");
    v32 = sub_EEB7E0(v4, a1 + 8, *(double *)a3.m128i_i64);
    sub_9EC740((__int64)&v38, v32, "(", v31, 0);
    v36 = sub_1589170((__int64)&v51, &v38);
    v37 = j__strlen(") != 0");
    v33 = sub_EEC140(v4);
    v34 = sub_15F0EF0(a1, v33, 0, a3, a4);
    sub_9EC740((__int64)&v42, v34, ") != 0", v37, 0);
    sub_1589170(v36, &v42);
    if ( v44 != &v45 )
      operator delete(v44);
    if ( v40 != &v41 )
      operator delete(v40);
    sub_15F7200(&v51);
  }
LABEL_79:
  if ( v48 > 1 )
    sub_A4F8E0((int *)&v48);
  v11 = *(_WORD *)v4 & 0x1FF;
LABEL_2:
  if ( v11 != 128 )
    return;
  v12 = *(_QWORD *)(v4 + 32);
  v13 = *(_WORD *)v12 & 0x1FF;
  if ( v13 == 52
    || v13 == 4 && *(_BYTE *)(v12 + 2) >> 3 == 7 && (v12 = *(_QWORD *)(v12 + 16), (*(_WORD *)v12 & 0x1FF) == 0x34) )
  {
    v14 = *(_QWORD *)(v4 + 40);
    v15 = *(_WORD *)v14 & 0x1FF;
    if ( v15 == 52 )
      goto LABEL_5;
  }
  else
  {
    v14 = *(_QWORD *)(v4 + 40);
    v12 = 0;
    v15 = *(_WORD *)v14 & 0x1FF;
    if ( v15 == 52 )
      return;
  }
  if ( v15 != 4 )
    return;
  if ( *(_BYTE *)(v14 + 2) >> 3 != 7 )
    return;
  v14 = *(_QWORD *)(v14 + 16);
  if ( (*(_WORD *)v14 & 0x1FF) != 0x34 || !v12 )
    return;
LABEL_5:
  sub_16B6640((__int64)&v38, *(_QWORD *)(v12 + 16), *(_DWORD *)(v12 + 24));
  v16 = v39;
  if ( v39 <= 0x40 )
  {
    v17 = v38;
  }
  else
  {
    if ( v16 - (unsigned int)sub_2206780(&v38) > 0x40 )
      goto LABEL_9;
    v17 = *(void **)v38;
  }
  if ( !v17 )
  {
    v29 = 0;
    goto LABEL_50;
  }
LABEL_9:
  sub_16B6640((__int64)&v42, *(_QWORD *)(v12 + 16), *(_DWORD *)(v12 + 24));
  v18 = v43;
  if ( v43 > 0x40 )
  {
    if ( v18 - (unsigned int)sub_2206780(&v42) > 0x40 )
      goto LABEL_12;
    v19 = *(char **)v42;
  }
  else
  {
    v19 = (char *)v42;
  }
  if ( v19 != (_BYTE *)&dword_0 + 1 )
  {
LABEL_12:
    v20 = 0;
    goto LABEL_13;
  }
  v29 = 1;
LABEL_50:
  sub_16B6640((__int64)&v46, *(_QWORD *)(v14 + 16), *(_DWORD *)(v14 + 24));
  v20 = sub_16B9670((__int64)&v46);
  if ( v20 )
  {
LABEL_51:
    v20 = 1;
    goto LABEL_52;
  }
  sub_16B6640((__int64)&v51, *(_QWORD *)(v14 + 16), *(_DWORD *)(v14 + 24));
  v35 = v52;
  if ( v52 <= 0x40 )
  {
    if ( v51 == (char *)&dword_0 + 1 )
      goto LABEL_51;
  }
  else
  {
    if ( v35 - (unsigned int)sub_2206780(&v51) <= 0x40 && *(_QWORD *)v51 == 1 )
    {
      v20 = 1;
    }
    else if ( !v51 )
    {
      goto LABEL_52;
    }
    operator delete[](v51);
  }
LABEL_52:
  if ( (unsigned int)v47 > 0x40 && v46 )
    operator delete[](v46);
  if ( !v29 )
    goto LABEL_16;
  v18 = v43;
LABEL_13:
  if ( v18 > 0x40 && v42 )
    operator delete[](v42);
LABEL_16:
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( !v20 )
  {
    sub_16B6640((__int64)&v46, *(_QWORD *)(v12 + 16), *(_DWORD *)(v12 + 24));
    if ( sub_16B9670((__int64)&v46) )
    {
      if ( (unsigned int)v47 > 0x40 )
      {
        if ( v46 )
          operator delete[](v46);
      }
    }
    else
    {
      sub_16B6640((__int64)&v51, *(_QWORD *)(v14 + 16), *(_DWORD *)(v14 + 24));
      v28 = sub_16B9670((__int64)&v51);
      if ( v52 > 0x40 && v51 )
        operator delete[](v51);
      if ( (unsigned int)v47 > 0x40 && v46 )
        operator delete[](v46);
      if ( !v28 )
      {
        sub_168B9F0((__int64)&v51, (__int64 *)(a1 + 8), v8, 0x1B92u, 0);
        sub_15F7200(&v51);
      }
    }
  }
}
