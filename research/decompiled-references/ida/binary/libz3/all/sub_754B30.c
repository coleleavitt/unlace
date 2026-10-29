__int64 __fastcall sub_754B30(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  bool v6; // zf
  _DWORD *v9; // rdx
  int v11; // esi
  unsigned int v13; // r12d
  void *v14; // rbx
  __int64 v16; // r12
  __int64 v17; // rdi
  _DWORD *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned int v21; // r13d
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // r13
  int v25; // r8d
  int v26; // r9d
  _DWORD *v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  int v30; // r8d
  int v31; // r9d
  _DWORD *v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rax
  unsigned int v36; // r13d
  int *v37; // r12
  __m128i v38; // xmm0
  __int64 v39; // rax
  char *v40; // rdi
  __m128i v41; // xmm0
  __int64 v42; // rax
  int v43; // et0
  unsigned int v44; // [rsp+0h] [rbp-138h]
  unsigned int v45; // [rsp+0h] [rbp-138h]
  void *v46; // [rsp+8h] [rbp-130h]
  unsigned int v47; // [rsp+1Ch] [rbp-11Ch] BYREF
  unsigned int v48; // [rsp+20h] [rbp-118h] BYREF
  int v49; // [rsp+24h] [rbp-114h] BYREF
  __int64 v50; // [rsp+28h] [rbp-110h] BYREF
  int v51[2]; // [rsp+30h] [rbp-108h] BYREF
  __int64 v52; // [rsp+38h] [rbp-100h]
  _QWORD v53[2]; // [rsp+40h] [rbp-F8h] BYREF
  char v54[32]; // [rsp+50h] [rbp-E8h] BYREF
  int v55[8]; // [rsp+70h] [rbp-C8h] BYREF
  int v56; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v57[21]; // [rsp+98h] [rbp-A0h] BYREF
  int v58[8]; // [rsp+B0h] [rbp-88h] BYREF
  char v59[104]; // [rsp+D0h] [rbp-68h] BYREF

  v6 = *(_WORD *)(a2 + 4) == 0;
  *(_QWORD *)v51 = 0;
  v52 = 0;
  v53[0] = 1;
  v53[1] = 0;
  if ( !v6 )
    goto LABEL_5;
  v9 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v9 )
    goto LABEL_5;
  v11 = *(_DWORD *)(a1 + 16);
  if ( v11 == *v9 )
  {
    if ( v9[1] == 22 && *(_DWORD *)(a2 + 24) == 2 )
    {
      v24 = *(_QWORD *)(a2 + 40);
      v46 = *(void **)(a2 + 32);
      if ( (unsigned __int8)sub_1673B50((int)a1 + 16, (_DWORD)v46, (unsigned int)v51, (unsigned int)&v47, a5, a6) )
      {
        if ( !*(_WORD *)(v24 + 4) )
        {
          v32 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
          if ( v32 )
          {
            if ( *(_DWORD *)(a1 + 16) == *v32 && !v32[1] )
              goto LABEL_5;
          }
        }
        v45 = v47;
        sub_17F6290(v54, v47);
        sub_7542A0((__int64)v55, (__int64)v54, 1u);
        sub_754890((__int64)&v56, v51, v55, v45, 1);
LABEL_27:
        v28 = _mm_loadu_si128((const __m128i *)v57);
        *(_BYTE *)a4 = v56;
        v29 = *(_QWORD *)&v57[13];
        *(__m128i *)(a4 + 8) = v28;
        *(_QWORD *)(a4 + 21) = v29;
        sub_751900((int *)(a4 + 32), v58);
        sub_25A130(v59);
        sub_25A130((char *)v58);
        sub_25A130((char *)v55);
        sub_25A130(v54);
        *a3 = v24;
LABEL_28:
        v13 = 1;
        goto LABEL_6;
      }
      if ( !(unsigned __int8)sub_1673B50((int)a1 + 16, v24, (unsigned int)v51, (unsigned int)&v47, v30, v31) )
        goto LABEL_5;
      sub_754890((__int64)&v56, &qword_1C7F2A0, v51, v47, 1);
      v37 = v58;
      v41 = _mm_loadu_si128((const __m128i *)v57);
      *(_BYTE *)a4 = v56;
      v42 = *(_QWORD *)&v57[13];
      *(__m128i *)(a4 + 8) = v41;
      *(_QWORD *)(a4 + 21) = v42;
      sub_751900((int *)(a4 + 32), v58);
      v40 = v59;
    }
    else
    {
      if ( v9[1] != 23 )
        goto LABEL_4;
      if ( *(_DWORD *)(a2 + 24) != 2 )
        goto LABEL_5;
      v24 = *(_QWORD *)(a2 + 40);
      v46 = *(void **)(a2 + 32);
      if ( (unsigned __int8)sub_1673B50((int)a1 + 16, (_DWORD)v46, (unsigned int)v51, (unsigned int)&v47, a5, a6) )
      {
        if ( !*(_WORD *)(v24 + 4) )
        {
          v27 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
          if ( v27 )
          {
            if ( *(_DWORD *)(a1 + 16) == *v27 && !v27[1] )
              goto LABEL_5;
          }
        }
        v44 = v47;
        sub_17F6290(v54, v47 - 1);
        sub_7542A0((__int64)v55, (__int64)v54, 1u);
        sub_754890((__int64)&v56, v51, v55, v44, 1);
        goto LABEL_27;
      }
      if ( !(unsigned __int8)sub_1673B50((int)a1 + 16, v24, (unsigned int)v51, (unsigned int)&v47, v25, v26) )
        goto LABEL_5;
      v36 = v47;
      v37 = v55;
      sub_17F6290(v55, v47 - 1);
      sub_754890((__int64)&v56, v55, v51, v36, 1);
      v38 = _mm_loadu_si128((const __m128i *)v57);
      *(_BYTE *)a4 = v56;
      v39 = *(_QWORD *)&v57[13];
      *(__m128i *)(a4 + 8) = v38;
      *(_QWORD *)(a4 + 21) = v39;
      sub_751900((int *)(a4 + 32), v58);
      sub_25A130(v59);
      v40 = (char *)v58;
    }
    sub_25A130(v40);
    sub_25A130((char *)v37);
    *a3 = v46;
    goto LABEL_28;
  }
LABEL_4:
  if ( *v9 || v9[1] != 2 || *(_DWORD *)(a2 + 24) != 2 )
    goto LABEL_5;
  v16 = *(_QWORD *)(a2 + 40);
  v17 = *(_QWORD *)(a2 + 32);
  if ( *(_WORD *)(v16 + 4) )
    goto LABEL_12;
  v18 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL);
  if ( !v18 || v11 != *v18 )
    goto LABEL_12;
  if ( v18[1] )
  {
LABEL_36:
    if ( !v18[1] )
      goto LABEL_5;
    goto LABEL_12;
  }
  if ( !*(_WORD *)(v17 + 4) )
  {
    v18 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( v18 )
    {
      if ( v11 == *v18 )
      {
        v33 = v17;
        LODWORD(v17) = v16;
        v16 = v33;
        goto LABEL_36;
      }
    }
  }
  v43 = v16;
  v16 = v17;
  LODWORD(v17) = v43;
LABEL_12:
  v19 = a1 + 16;
  if ( (unsigned __int8)sub_1673B50(v19, v17, (unsigned int)v51, (unsigned int)&v47, a5, a6) )
  {
    if ( !(unsigned __int8)sub_1674350(v19, v16, &v48, &v49, &v50) || !(unsigned __int8)sub_753DF0((__int64)v51, 0) )
      goto LABEL_17;
    v20 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v50) + 24) + 8LL);
    if ( *(_BYTE *)(v20 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    v21 = *(_DWORD *)v20;
    if ( *(_DWORD *)v20 - 1 == v49 )
    {
      sub_17F6290(v54, v48);
      sub_7542A0((__int64)v55, (__int64)v54, 1u);
      sub_754890((__int64)&v56, &qword_1C7F2A0, v55, v21, 0);
      v34 = _mm_loadu_si128((const __m128i *)v57);
      *(_BYTE *)a4 = v56;
      v35 = *(_QWORD *)&v57[13];
      *(__m128i *)(a4 + 8) = v34;
      *(_QWORD *)(a4 + 21) = v35;
      sub_751900((int *)(a4 + 32), v58);
      sub_25A130(v59);
      sub_25A130((char *)v58);
      sub_25A130((char *)v55);
      sub_25A130(v54);
      v16 = v50;
    }
    else
    {
LABEL_17:
      sub_754890((__int64)&v56, v51, v51, v47, 1);
      v22 = _mm_loadu_si128((const __m128i *)v57);
      *(_BYTE *)a4 = v56;
      v23 = *(_QWORD *)&v57[13];
      *(__m128i *)(a4 + 8) = v22;
      *(_QWORD *)(a4 + 21) = v23;
      sub_751900((int *)(a4 + 32), v58);
      sub_25A130(v59);
      sub_25A130((char *)v58);
    }
    *a3 = v16;
    goto LABEL_28;
  }
LABEL_5:
  v13 = 0;
LABEL_6:
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v51);
  sub_182CBA0(v14, v53);
  return v13;
}

