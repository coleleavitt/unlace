__int64 __fastcall sub_1D38E60(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // r12
  unsigned int v13; // r9d
  __int64 (__fastcall *v14)(__int64); // rax
  __int64 v15; // rax
  __m128i *v16; // rcx
  const __m128i *v17; // rax
  __int64 v18; // rax
  int v19; // r15d
  _QWORD *v20; // r11
  char v21; // bp
  __int64 v22; // rsi
  __int64 v23; // r8
  unsigned __int64 v24; // rax
  unsigned int v25; // ebp
  _DWORD *v26; // rdi
  __int64 *v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // r12
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  _QWORD *v35; // rcx
  unsigned __int64 v36; // r12
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  _QWORD *v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned __int64 v50; // [rsp+0h] [rbp-128h]
  _QWORD *v51; // [rsp+0h] [rbp-128h]
  _QWORD *v52; // [rsp+0h] [rbp-128h]
  __int64 v53; // [rsp+8h] [rbp-120h]
  __int64 v54; // [rsp+10h] [rbp-118h]
  _BYTE *v55; // [rsp+10h] [rbp-118h]
  char v56; // [rsp+18h] [rbp-110h]
  __int64 v57; // [rsp+20h] [rbp-108h]
  char v58; // [rsp+20h] [rbp-108h]
  char v60; // [rsp+4Fh] [rbp-D9h] BYREF
  __int64 v61; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-D0h]
  __int64 v63; // [rsp+60h] [rbp-C8h]
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+78h] [rbp-B0h]
  _DWORD v66[25]; // [rsp+80h] [rbp-A8h] BYREF
  char v67; // [rsp+E4h] [rbp-44h]

  v8 = (__int64)a2;
  v9 = a4;
  v10 = a5;
  v13 = a3;
  v53 = a5;
  LOBYTE(a5) = a4;
  ptr = v66;
  v65 = 0x400000000LL;
  v66[24] = 0;
  v67 = 0;
  if ( !a2 )
  {
    v15 = 4;
    goto LABEL_4;
  }
  v14 = *(__int64 (__fastcall **)(__int64))(*a2 + 32LL);
  if ( v14 == sub_6EE8E0 )
  {
    v15 = a2[9] | 4LL;
LABEL_4:
    v62 = a7;
    v16 = (__m128i *)v66;
    v63 = a8;
    v61 = v15;
    v17 = (const __m128i *)&v61;
    goto LABEL_5;
  }
  v58 = a4;
  v48 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64, __int64 (__fastcall *)(__int64), __int64, _QWORD))v14)(
          a2,
          a2,
          a7,
          sub_6EE8E0,
          a4,
          a3);
  v63 = a8;
  v8 = (__int64)a2;
  v55 = ptr;
  LOBYTE(a5) = v58;
  v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v65);
  v61 = v48 | 4;
  v13 = a3;
  v17 = (const __m128i *)&v61;
  v9 = a4;
  v62 = a7;
  if ( (unsigned __int64)(unsigned int)v65 + 1 > HIDWORD(v65) )
  {
    if ( ptr > &v61 || v16 <= (__m128i *)&v61 )
    {
      sub_2237220(&ptr, v66, (unsigned int)v65 + 1LL, 24);
      LOBYTE(a5) = v58;
      v13 = a3;
      v8 = (__int64)a2;
      v9 = a4;
      v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v65);
      v17 = (const __m128i *)&v61;
    }
    else
    {
      sub_2237220(&ptr, v66, (unsigned int)v65 + 1LL, 24);
      LOBYTE(a5) = v58;
      v17 = (const __m128i *)((char *)ptr + (char *)&v61 - v55);
      v13 = a3;
      v8 = (__int64)a2;
      v16 = (__m128i *)((char *)ptr + 24 * (unsigned int)v65);
      v9 = a4;
    }
  }
LABEL_5:
  *v16 = _mm_loadu_si128(v17);
  v18 = v17[1].m128i_i64[0];
  LODWORD(v65) = v65 + 1;
  v16[1].m128i_i64[0] = v18;
  if ( a3 )
  {
    v57 = v9;
    v56 = a5;
    v54 = v8;
    v44 = sub_1D36A50(a1, v8, (__int64)&ptr, a3 - 1);
    v9 = v57;
    LOBYTE(a5) = v56;
    v13 = v44;
    v8 = v54;
  }
  v19 = *(_DWORD *)(a1 + 12632);
  v60 = 0;
  v20 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
  *(_DWORD *)(a1 + 12632) = v13;
  v21 = *(_BYTE *)(*(_QWORD *)(v8 + 48) + 28LL) & 0x7F;
  if ( v21 == 39 )
  {
    v43 = *(_QWORD *)(*(_QWORD *)(*v20 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v43 + 16) == 29 )
    {
      a5 = *(_QWORD *)(v43 + 32);
      v20 = (_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  v22 = sub_1DD1D30(
          a1,
          v20[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v20[1] | (unsigned __int8)a5) & 7,
          &ptr,
          *(unsigned int *)(v8 + 24),
          *(_QWORD *)(v8 + 40),
          &v60);
  v24 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    if ( !a6 )
      goto LABEL_11;
    if ( v60 )
    {
      v25 = 3;
      goto LABEL_12;
    }
    v28 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    v29 = *(_QWORD *)v24;
    v30 = *v28;
    v50 = (unsigned __int64)v28;
    v31 = *(unsigned __int8 *)(*(_QWORD *)v24 + 16LL);
    v32 = *(_QWORD **)(a1 + 248);
    if ( *(_BYTE *)(v30 + 16) == 38 )
    {
      if ( (_BYTE)v31 == 38 )
      {
LABEL_28:
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1
          || (v29 = sub_F63050(v29, v22, v31, v30)) == 0 )
        {
LABEL_22:
          v61 = 0;
          v33 = sub_A725A0(v32, v22, &v61, v30, v23);
          v35 = *(_QWORD **)(a1 + 248);
          v36 = v33;
          v37 = *(_QWORD *)v50;
          v38 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v50 + 16LL) - 43;
          if ( (unsigned int)v38 <= 1
            || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
            && (v52 = *(_QWORD **)(a1 + 248), v45 = sub_F63050(v37, v22, v38, v35), v35 = v52, (v37 = v45) != 0) )
          {
            v51 = v35;
            v39 = sub_9B4870(v37, v22, v38, (__int64)v35, v34);
            v35 = v51;
            v53 = v39;
          }
          v61 = 0;
          v40 = sub_A725A0(v35, v53, &v61, (__int64)v35, v34);
          v41 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
          if ( v21 == 39 )
          {
            v46 = *(_QWORD *)(*(_QWORD *)(*v41 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v46 + 16) == 29 )
            {
              v36 = *(_QWORD *)(v46 + 32);
              v41 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
            }
            v42 = v40 & 0xFFFFFFFFFFFFFFF0LL;
            v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v47 + 16) != 29 )
            {
LABEL_26:
              v25 = 10;
              if ( (v41[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v41[1] | (unsigned __int8)v36) & 7) != (((unsigned __int8)*(_QWORD *)(v42 + 8) | (unsigned __int8)v40) & 7 | *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL) )
                goto LABEL_12;
LABEL_11:
              v25 = 0;
              goto LABEL_12;
            }
            v40 = *(_QWORD *)(v47 + 32);
          }
          v42 = v40 & 0xFFFFFFFFFFFFFFF0LL;
          goto LABEL_26;
        }
LABEL_21:
        v22 = sub_9B4870(v29, v22, v31, v30, v23);
        goto LABEL_22;
      }
      v53 = *(_QWORD *)(v30 + 32);
      v50 = v53 & 0xFFFFFFFFFFFFFFF0LL;
    }
    v31 = (unsigned int)(v31 - 43);
    if ( (unsigned int)v31 <= 1 )
      goto LABEL_21;
    goto LABEL_28;
  }
  v25 = 7;
  if ( v60 )
  {
    v25 = 3;
    if ( !a6 )
      goto LABEL_11;
  }
LABEL_12:
  v26 = ptr;
  *(_DWORD *)(a1 + 12632) = v19;
  if ( v26 != v66 )
    free(v26);
  return v25;
}
