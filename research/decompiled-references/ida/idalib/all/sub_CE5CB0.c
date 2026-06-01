__int64 __fastcall sub_CE5CB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // r14
  __m128 v8; // xmm0
  char v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // si
  _BOOL8 v12; // rcx
  unsigned int v13; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  unsigned __int8 v23; // cl
  double v24[2]; // [rsp+0h] [rbp-6E8h] BYREF
  int v25[16]; // [rsp+10h] [rbp-6D8h] BYREF
  _BYTE v26[64]; // [rsp+50h] [rbp-698h] BYREF
  unsigned __int8 v27; // [rsp+90h] [rbp-658h]
  int v28; // [rsp+98h] [rbp-650h]
  _QWORD v29[158]; // [rsp+B0h] [rbp-638h] BYREF
  __m128 v30; // [rsp+5A0h] [rbp-148h]
  __int64 v31; // [rsp+5B0h] [rbp-138h]
  __int64 v32; // [rsp+5B8h] [rbp-130h]
  unsigned int v33; // [rsp+5C0h] [rbp-128h]
  __int64 v34; // [rsp+5C8h] [rbp-120h]
  __int64 v35; // [rsp+5D0h] [rbp-118h]
  unsigned int v36; // [rsp+5D8h] [rbp-110h]
  __int64 v37; // [rsp+5E0h] [rbp-108h]
  char v38; // [rsp+5F0h] [rbp-F8h]
  __int64 v39; // [rsp+5F8h] [rbp-F0h]
  __int16 v40; // [rsp+600h] [rbp-E8h]
  char v41; // [rsp+602h] [rbp-E6h]
  __int64 v42; // [rsp+608h] [rbp-E0h]
  void *ptr; // [rsp+610h] [rbp-D8h]
  __int64 v44; // [rsp+618h] [rbp-D0h]
  _BYTE v45[64]; // [rsp+620h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+660h] [rbp-88h]
  __int64 v47; // [rsp+668h] [rbp-80h]
  unsigned int v48; // [rsp+670h] [rbp-78h]
  __int64 v49; // [rsp+678h] [rbp-70h]
  char v50; // [rsp+684h] [rbp-64h]
  __int64 v51; // [rsp+688h] [rbp-60h]
  char v52; // [rsp+694h] [rbp-54h]
  char v53; // [rsp+69Ch] [rbp-4Ch]
  __int64 v54; // [rsp+6A0h] [rbp-48h]

  v5 = a1 + 8;
  ++*(_DWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 16);
  v24[0] = *(double *)(a1 + 24);
  sub_CFEF80(v29, a1, *(_QWORD *)&v24[0], a2, a1 + 8);
  *(_QWORD *)&v24[1] = a1;
  v31 = 0;
  v32 = 0;
  v40 = 0;
  v8 = _mm_loadh_ps(v24);
  ptr = v45;
  v44 = 0x300000000LL;
  v9 = *(_BYTE *)(a3 + 28);
  v29[0] = &off_2C04B80;
  v10 = v9 & 0x7F;
  v30 = v8;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v41 = 0;
  v42 = 0;
  v45[48] = 0;
  v45[56] = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  if ( (unsigned int)v10 - 40 > 6 )
    goto LABEL_8;
  v11 = *(_BYTE *)(a3 + 96) & 7;
  if ( v11 )
  {
    if ( v11 != 5 )
      goto LABEL_4;
    if ( v10 != 40 && v10 != 46 )
      goto LABEL_50;
    v22 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v22 = *(_QWORD *)(v22 + 8);
    if ( !v22 )
    {
LABEL_50:
      if ( v10 == 43 )
        goto LABEL_8;
      goto LABEL_31;
    }
    v23 = *(_BYTE *)(sub_B8EAA0(v22) + 8) & 0x7F;
    if ( v23 > 0x12u )
    {
      if ( ((v23 + 94) & 0x7Fu) > 5 )
      {
LABEL_46:
        if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
          goto LABEL_31;
      }
    }
    else if ( ((1LL << v23) & 0x40182) == 0 )
    {
      goto LABEL_46;
    }
    v11 = *(_BYTE *)(a3 + 96) & 7;
LABEL_4:
    if ( v11 > 3u )
    {
      v10 = *(_BYTE *)(a3 + 28) & 0x7F;
      goto LABEL_6;
    }
LABEL_31:
    v15 = *(_QWORD *)(a3 + 48);
    goto LABEL_32;
  }
  v15 = *(_QWORD *)(a3 + 48);
  v16 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v16 & 8) == 0
    || (*(_DWORD *)((char *)&qword_18 + (v16 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v16 & 7)) >> 9 != 3 )
  {
    if ( ((v10 + 85) & 0x7D) != 0 )
    {
      v17 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v17 = *(_QWORD *)(v17 + 8);
      v18 = *(_BYTE *)(sub_B8EAA0(v17) + 8) & 0x7F;
      if ( v18 && v18 != 24 )
      {
        if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x2B )
        {
          if ( (*(_BYTE *)(a3 + 96) & 0x18) == 0 )
            goto LABEL_8;
        }
        else
        {
          v19 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
            v19 = *(_QWORD *)v19;
          if ( ((*(_BYTE *)(v19 + 8) + 70) & 0x7Fu) > 3 && (*(_BYTE *)(a3 + 96) & 0x18) == 0 )
          {
LABEL_7:
            if ( *(char *)(a3 + 97) >= 0 )
              goto LABEL_8;
            goto LABEL_31;
          }
        }
      }
      goto LABEL_31;
    }
    if ( (*(_BYTE *)(a3 + 96) & 0x18) == 0 )
    {
LABEL_6:
      if ( v10 == 43 )
      {
LABEL_8:
        v12 = 0;
        goto LABEL_9;
      }
      goto LABEL_7;
    }
  }
LABEL_32:
  v12 = 1;
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v20 + 16) != 48 )
    v12 = (unsigned __int8)(*(_BYTE *)(v20 + 16) - 2) <= 4u;
LABEL_9:
  sub_D4DA30(v26, v29, a3, v12);
  if ( v28 == 3 )
  {
    sub_CFF0C0(v29);
    v21 = v5;
    v13 = 0;
    sub_E21600(v21, v7);
  }
  else
  {
    if ( !v7 )
      sub_CFF0C0(v29);
    sub_DAA740(v25, v26);
    sub_A4FD20(a4, (__int64)v25);
    if ( v25[0] > 1u )
      sub_A4F8E0(v25);
    v13 = 1;
  }
  if ( v27 != 0xFF )
    funcs_CE58F6[v27]();
  v29[0] = &off_2C04B80;
  operator delete(v46, 16LL * v48, 8);
  if ( ptr != v45 )
    free(ptr);
  operator delete(v34, 16LL * v36, 8);
  operator delete(v31, 24LL * v33, 8);
  sub_D898B0(v29);
  return v13;
}
