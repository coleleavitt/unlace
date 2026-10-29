__int64 __fastcall sub_CC1F70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // r14
  __m128 v8; // xmm0
  char v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // si
  _BOOL8 v12; // rcx
  unsigned int v13; // r13d
  __int64 v14; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rdi
  unsigned __int8 v24; // cl
  double v25[2]; // [rsp+0h] [rbp-6E8h] BYREF
  int v26[16]; // [rsp+10h] [rbp-6D8h] BYREF
  _BYTE v27[64]; // [rsp+50h] [rbp-698h] BYREF
  unsigned __int8 v28; // [rsp+90h] [rbp-658h]
  int v29; // [rsp+98h] [rbp-650h]
  _QWORD v30[158]; // [rsp+B0h] [rbp-638h] BYREF
  __m128 v31; // [rsp+5A0h] [rbp-148h]
  __int64 v32; // [rsp+5B0h] [rbp-138h]
  __int64 v33; // [rsp+5B8h] [rbp-130h]
  unsigned int v34; // [rsp+5C0h] [rbp-128h]
  __int64 v35; // [rsp+5C8h] [rbp-120h]
  __int64 v36; // [rsp+5D0h] [rbp-118h]
  int v37; // [rsp+5D8h] [rbp-110h]
  __int64 v38; // [rsp+5E0h] [rbp-108h]
  char v39; // [rsp+5F0h] [rbp-F8h]
  __int64 v40; // [rsp+5F8h] [rbp-F0h]
  __int16 v41; // [rsp+600h] [rbp-E8h]
  char v42; // [rsp+602h] [rbp-E6h]
  __int64 v43; // [rsp+608h] [rbp-E0h]
  void *ptr; // [rsp+610h] [rbp-D8h]
  __int64 v45; // [rsp+618h] [rbp-D0h]
  _BYTE v46[64]; // [rsp+620h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+660h] [rbp-88h]
  __int64 v48; // [rsp+668h] [rbp-80h]
  int v49; // [rsp+670h] [rbp-78h]
  __int64 v50; // [rsp+678h] [rbp-70h]
  char v51; // [rsp+684h] [rbp-64h]
  __int64 v52; // [rsp+688h] [rbp-60h]
  char v53; // [rsp+694h] [rbp-54h]
  char v54; // [rsp+69Ch] [rbp-4Ch]
  __int64 v55; // [rsp+6A0h] [rbp-48h]

  v5 = a1 + 8;
  ++*(_DWORD *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 16);
  v25[0] = *(double *)(a1 + 24);
  sub_CDB240(v30, a1, *(_QWORD *)&v25[0], a2, a1 + 8);
  *(_QWORD *)&v25[1] = a1;
  v32 = 0;
  v33 = 0;
  v41 = 0;
  v8 = _mm_loadh_ps(v25);
  ptr = v46;
  v45 = 0x300000000LL;
  v9 = *(_BYTE *)(a3 + 28);
  v30[0] = &off_2BDAB80;
  v10 = v9 & 0x7F;
  v31 = v8;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v42 = 0;
  v43 = 0;
  v46[48] = 0;
  v46[56] = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  if ( (unsigned int)v10 - 40 > 6 )
    goto LABEL_8;
  v11 = *(_BYTE *)(a3 + 96) & 7;
  if ( v11 )
  {
    if ( v11 != 5 )
      goto LABEL_4;
    if ( v10 != 40 && v10 != 46 )
      goto LABEL_50;
    v23 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v23 = *(_QWORD *)(v23 + 8);
    if ( !v23 )
    {
LABEL_50:
      if ( v10 == 43 )
        goto LABEL_8;
      goto LABEL_31;
    }
    v24 = *(_BYTE *)(sub_B6AD60(v23) + 8) & 0x7F;
    if ( v24 > 0x12u )
    {
      if ( ((v24 + 94) & 0x7Fu) > 5 )
      {
LABEL_46:
        if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x2B )
          goto LABEL_31;
      }
    }
    else if ( ((1LL << v24) & 0x40182) == 0 )
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
    v16 = *(_QWORD *)(a3 + 48);
    goto LABEL_32;
  }
  v16 = *(_QWORD *)(a3 + 48);
  v17 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v17 & 8) == 0
    || (*(_DWORD *)((char *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v17 & 7)) >> 9 != 3 )
  {
    if ( ((v10 + 85) & 0x7D) != 0 )
    {
      v18 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v18 = *(_QWORD *)(v18 + 8);
      v19 = *(_BYTE *)(sub_B6AD60(v18) + 8) & 0x7F;
      if ( v19 && v19 != 24 )
      {
        if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x2B )
        {
          if ( (*(_BYTE *)(a3 + 96) & 0x18) == 0 )
            goto LABEL_8;
        }
        else
        {
          v20 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
            v20 = *(_QWORD *)v20;
          if ( ((*(_BYTE *)(v20 + 8) + 70) & 0x7Fu) > 3 && (*(_BYTE *)(a3 + 96) & 0x18) == 0 )
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
  v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v21 + 16) != 48 )
    v12 = (unsigned __int8)(*(_BYTE *)(v21 + 16) - 2) <= 4u;
LABEL_9:
  sub_D29CF0(v27, v30, a3, v12);
  if ( v29 == 3 )
  {
    sub_CDB380(v30);
    v22 = v5;
    v13 = 0;
    sub_DFD8C0(v22, v7);
  }
  else
  {
    if ( !v7 )
      sub_CDB380(v30);
    sub_D86A00(v26, v27);
    sub_A2BFE0(a4, (__int64)v26);
    if ( v26[0] > 1u )
      sub_A2BBA0(v26);
    v13 = 1;
  }
  if ( v28 != 0xFF )
    funcs_CC1BB6[v28]();
  v30[0] = &off_2BDAB80;
  operator delete();
  if ( ptr != v46 )
    free(ptr);
  operator delete();
  v14 = 24LL * v34;
  operator delete();
  sub_D65B70(v30, v14);
  return v13;
}

