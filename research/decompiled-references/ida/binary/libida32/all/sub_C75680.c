unsigned __int64 __fastcall sub_C75680(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        int a10,
        unsigned int a11)
{
  __int64 v11; // r11
  char v12; // r13
  __int64 v14; // r14
  __int64 v15; // r9
  unsigned __int64 v16; // r14
  _QWORD *v17; // r10
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  __int16 v22; // ax
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 (__fastcall *v32)(__int64); // rcx
  __int64 v33; // rax
  unsigned __int8 v34; // al
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  char v38; // [rsp+0h] [rbp-68h]
  _QWORD *v40; // [rsp+0h] [rbp-68h]
  _QWORD *v41; // [rsp+8h] [rbp-60h]
  unsigned int v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+10h] [rbp-58h]
  int v45; // [rsp+10h] [rbp-58h]
  int v46; // [rsp+1Ch] [rbp-4Ch]
  char v47; // [rsp+1Ch] [rbp-4Ch]
  __int64 v48[8]; // [rsp+28h] [rbp-40h] BYREF

  v11 = a3;
  v12 = a4;
  v14 = *(_QWORD *)(a2 + 48);
  v15 = a11;
  if ( v14 )
  {
    v16 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    v17 = (_QWORD *)v16;
  }
  else
  {
    v42 = a5;
    v36 = sub_A56D30((__int64)a1, a2, a3, a4, a5, a11);
    v15 = a11;
    a5 = v42;
    v16 = v36;
    v11 = a3;
    v17 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v18 = a1[294];
  v19 = (unsigned int)(8 * a9 + 40);
  a1[304] += v19;
  v20 = v19 + ((v18 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[295] >= v20 && v18 )
  {
    a1[294] = v20;
    v21 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v47 = v15;
    v45 = a5;
    v43 = v11;
    v40 = v17;
    v37 = sub_962430((__int64)(a1 + 294), v19, (unsigned int)(8 * a9 + 40), 3, a5, v15);
    LOBYTE(v15) = v47;
    LODWORD(a5) = v45;
    v21 = v37;
    v11 = v43;
    v17 = v40;
  }
  v38 = v15;
  *(_WORD *)v21 = *(_WORD *)v21 & 0xFE00 | 0x33;
  if ( unk_2CAD564 )
  {
    v46 = a5;
    v44 = v11;
    v41 = v17;
    sub_EC5E10(51);
    LODWORD(a5) = v46;
    v11 = v44;
    v17 = v41;
  }
  v22 = *(_WORD *)(v21 + 1);
  *(_QWORD *)(v21 + 8) = v16;
  *(_QWORD *)(v21 + 16) = v11;
  v22 &= 0xF801u;
  *(_DWORD *)(v21 + 24) = a5;
  *(_WORD *)(v21 + 1) = v22;
  *(_DWORD *)(v21 + 28) = a10;
  *(_WORD *)(v21 + 4) = a9;
  LOBYTE(v22) = (32 * (a6 & 1)) | (8 * (v12 & 3)) & 0x9F | HIBYTE(v22) & 0x87;
  v23 = (__int64 *)(v21 + 32);
  *(_BYTE *)(v21 + 2) = ((a7 & 1) << 6) | v22;
  sub_F3F530(*v17);
  if ( (_DWORD)a9 )
  {
    if ( (_DWORD)a9 == 1 )
    {
      v26 = (__int64 *)(v21 + 32);
      v25 = 0;
    }
    else
    {
      v24 = 0;
      do
      {
        *(__m128i *)(v21 + v24 + 32) = _mm_loadu_si128((const __m128i *)(a8 + v24));
        v24 += 16;
      }
      while ( 16LL * ((unsigned int)a9 >> 1) != v24 );
      v25 = (unsigned int)a9 & 0xFFFFFFFE;
      v26 = &v23[v25];
      if ( (a9 & 0xFFFFFFFE) == (_DWORD)a9 )
        goto LABEL_14;
    }
    *v26 = *(_QWORD *)(a8 + 8 * v25);
LABEL_14:
    v23 += (unsigned int)(a9 - 1) + 1;
  }
  v27 = sub_F3F530(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v28 = (_QWORD *)sub_B73220(v27);
  v32 = *(__int64 (__fastcall **)(__int64))(*v28 + 64LL);
  if ( v32 == sub_6CEBD0 )
    v33 = sub_B5BA10(v28, v48, v29, (__int64)v32, v30, v31);
  else
    v33 = v32((__int64)v28);
  *v23 = v33;
  v34 = sub_B41840(v21, v38);
  *(_BYTE *)(v21 + 1) = (v34 << 6) | *(_BYTE *)(v21 + 1) & 0x3F;
  *(_BYTE *)(v21 + 2) = *(_BYTE *)(v21 + 2) & 0xF8 | (v34 >> 2) & 7;
  return v21;
}

