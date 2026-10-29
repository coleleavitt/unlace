__int64 __fastcall sub_1806880(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  int v9; // eax
  char v10; // r15
  unsigned int v11; // esi
  char v12; // r14
  _QWORD *v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r12
  __int64 *v22; // r14
  unsigned __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rsi
  _QWORD *v27; // rbp
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v31; // rdx
  char v32; // bl
  unsigned __int64 v33; // rbp
  __int64 v34; // r14
  int v35; // r13d
  _QWORD *v36; // r15
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rax
  int v40; // esi
  int v42; // [rsp+8h] [rbp-F0h]
  __int64 v43; // [rsp+10h] [rbp-E8h]
  __int64 v44; // [rsp+10h] [rbp-E8h]
  __int64 v45; // [rsp+10h] [rbp-E8h]
  __int64 v47; // [rsp+18h] [rbp-E0h]
  __int64 v48; // [rsp+20h] [rbp-D8h]
  __m128i *v49; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C0h]
  _QWORD v52[23]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v6 - 34) > 5 )
  {
    v16 = 0;
    if ( (unsigned int)(v6 - 40) <= 6 )
    {
      v32 = *(_BYTE *)(a2 + 96) & 7;
      v33 = *(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 56) & 4) != 0 )
        v33 = *(_QWORD *)(v33 + 32);
      v34 = *(_QWORD *)(a2 + 48);
      v35 = *(_DWORD *)(a2 + 24);
      v42 = *(_DWORD *)(a2 + 64);
      v36 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v36 = (_QWORD *)*v36;
      v37 = sub_B8C330(a2);
      v16 = sub_B731A0(v37, (__int64)v36, v42, v35, (__int64)a3, v34, v33, v32);
      v38 = *(_QWORD *)(a2 + 56);
      if ( (v38 & 4) != 0 )
      {
        v39 = (__int64 *)(v38 & 0xFFFFFFFFFFFFFFF8LL);
        if ( *v39 )
          sub_B7BD70(v16, *v39, v39[1]);
      }
    }
    return v16;
  }
  v7 = *(_QWORD *)(a2 + 56);
  v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = (v7 >> 2) & 1;
  if ( v9 )
    v49 = (__m128i *)(v8 + 40);
  else
    v49 = &xmmword_23DED40;
  v10 = 1;
  if ( (*(_QWORD *)(a2 + 80) & 0x200000LL) == 0 )
    v10 = (*(_QWORD *)(a2 + 80) & 0x100000LL) != 0;
  v11 = *(_DWORD *)(a1 + 224);
  if ( ((v11 >> 3) & 7) == 7 )
  {
    v12 = 1;
    if ( (v11 & 0x104) != 0 )
      goto LABEL_8;
LABEL_43:
    v12 = 1;
    if ( (unsigned __int8)v11 >> 6 == 3 )
    {
      v40 = v11 & 0x100;
      if ( v40 )
        goto LABEL_8;
    }
    else
    {
      if ( (unsigned __int8)v11 >> 6 )
        goto LABEL_8;
      v40 = v11 & 0x100;
    }
    v12 = v40 != 0;
    goto LABEL_8;
  }
  v12 = 1;
  if ( ((v11 >> 3) & 7) == 1 )
    goto LABEL_43;
LABEL_8:
  if ( v9 )
    v8 = *(_QWORD *)(v8 + 32);
  v13 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v13 = (_QWORD *)*v13;
  v48 = *(_QWORD *)(a2 + 48);
  v47 = v8;
  LODWORD(v51) = a4;
  v43 = sub_B8C330(a2);
  ptr = a3;
  sub_B85890(v52, (__int64)a3);
  v14 = (__int64)v13;
  v16 = sub_B7CBC0(v43, (__int64)v13, a4, (__int64 *)&ptr, v48, v47, 0, v12, 0, v10, 0, (__int64)v49);
  v17 = *(_QWORD *)(a2 + 56);
  if ( (v17 & 4) != 0 )
  {
    v18 = (__int64 *)(v17 & 0xFFFFFFFFFFFFFFF8LL);
    v14 = *v18;
    if ( *v18 )
      sub_B7BD70(v16, v14, v18[1]);
  }
  v19 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 26 )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v31 + 16) != 26 )
      return v16;
    v19 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), v14, v31, v15);
    if ( !v19 )
      return v16;
  }
  ptr = v52;
  v51 = 0x1000000000LL;
  v20 = v19 + 48 + 8LL * *(unsigned __int16 *)(v19 + 22);
  if ( v20 == v19 + 48 )
  {
    v28 = 0;
    v27 = v52;
    goto LABEL_28;
  }
  v21 = v16 + 72;
  v22 = (__int64 *)(v19 + 48);
  if ( !v16 )
    v21 = 0;
  do
  {
    v25 = sub_17A5990(a1, v21, a4, *v22);
    v26 = (unsigned int)v51;
    *(_DWORD *)(v25 + 96) &= 0xFFF01FFF;
    if ( (unsigned int)v26 <= 0xFE )
    {
      *(_WORD *)(v25 + 98) = (16 * (unsigned __int8)v26) | *(_WORD *)(v25 + 98) & 0xF00F;
      v23 = v26 + 1;
      if ( v26 + 1 <= (unsigned __int64)HIDWORD(v51) )
        goto LABEL_21;
    }
    else
    {
      v44 = v25;
      sub_B74850(v25, v26);
      v26 = (unsigned int)v51;
      v25 = v44;
      v23 = (unsigned int)v51 + 1LL;
      if ( v23 <= HIDWORD(v51) )
      {
LABEL_21:
        *((_QWORD *)ptr + v26) = v25;
        goto LABEL_22;
      }
    }
    v45 = v25;
    sub_2237220(&ptr, v52, v23, 8);
    *((_QWORD *)ptr + (unsigned int)v51) = v45;
LABEL_22:
    ++v22;
    v24 = v51 + 1;
    LODWORD(v51) = v51 + 1;
  }
  while ( (__int64 *)v20 != v22 );
  v27 = ptr;
  v28 = v24;
LABEL_28:
  v29 = sub_B8C330(v16);
  sub_B7C440(v16, v29, v27, v28);
  if ( ptr != v52 )
    free(ptr);
  return v16;
}
