__int64 __fastcall sub_1FE2A60(__int64 a1, double a2, double a3)
{
  __m128i si128; // xmm0
  _QWORD *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 *v12; // r12
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  const void *v19; // r14
  size_t v20; // rbx
  _QWORD *v21; // r12
  void *v22; // rdi
  size_t v23; // rsi
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // r15
  __int64 *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned __int64 v34; // r15
  __int64 *v35; // rbx
  __int64 result; // rax
  _QWORD *v37; // rdi
  __int64 v38; // rax
  _QWORD *v39; // rcx
  unsigned int v40; // eax
  unsigned __int64 v41; // rsi
  __int64 v42; // r12
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rsi
  _QWORD *v46; // r14
  _QWORD **v47; // rax
  unsigned __int64 v48; // rdi
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 *v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rax
  _QWORD *v54; // rbp
  int v55; // ebp
  __int64 v56; // rcx
  char v57; // [rsp+0h] [rbp-68h]
  unsigned int v58; // [rsp+Ch] [rbp-5Ch]
  _QWORD *v59; // [rsp+10h] [rbp-58h]
  _QWORD *v60; // [rsp+18h] [rbp-50h]
  _QWORD *v61; // [rsp+20h] [rbp-48h] BYREF
  __int64 *v62[8]; // [rsp+28h] [rbp-40h] BYREF

  *(_QWORD *)(a1 + 48) = a1 + 64;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v60 = (_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 56) = 0x600000000LL;
  *(__m128i *)(a1 + 8) = si128;
  *(__m128i *)(a1 + 32) = si128;
  v5 = (_QWORD *)operator new(8u);
  *v5 = off_2BE4AD8;
  v6 = sub_2244B30("raw", 3);
  v7 = sub_2244CB0(a1, "raw", 3, v6);
  v11 = v7;
  v12 = (__int64 *)(*(_QWORD *)a1 + 8LL * v7);
  if ( *v12 )
  {
    if ( *v12 != -8 )
    {
      sub_13703D0(v62, v12, 0);
      v13 = v62[0];
      goto LABEL_6;
    }
    --*(_DWORD *)(a1 + 16);
  }
  v14 = sub_22300B0(20, 8, v7, v8, v9, v10);
  *(_WORD *)(v14 + 16) = 24946;
  *(_BYTE *)(v14 + 18) = 119;
  *(_BYTE *)(v14 + 19) = 0;
  *(_QWORD *)v14 = 3;
  *(_QWORD *)(v14 + 8) = 0;
  *v12 = v14;
  ++*(_DWORD *)(a1 + 12);
  v15 = sub_22450D0(a1, v11);
  sub_13703D0(v62, (__int64 *)(*(_QWORD *)a1 + 8LL * v15), 0);
  v13 = v62[0];
LABEL_6:
  v16 = *v13;
  v17 = *(_QWORD *)(v16 + 8);
  *(_QWORD *)(v16 + 8) = v5;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = (_QWORD *)operator new(8u);
  v19 = off_2C8EEA0;
  v20 = qword_2C8EEA8;
  v21 = v18;
  v22 = off_2C8EEA0;
  v23 = qword_2C8EEA8;
  v61 = v18;
  *v18 = off_2BE4B08;
  v24 = sub_2244B30(v22, v23);
  v25 = sub_2244CB0(a1 + 24, v19, v20, v24);
  v58 = v25;
  v29 = (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL * v25);
  if ( *v29 )
  {
    if ( *v29 != -8 )
    {
      sub_12DAAD0(v62, v29, 0);
      v30 = v62[0];
      goto LABEL_11;
    }
    --*(_DWORD *)(a1 + 40);
  }
  v38 = sub_22300B0(v20 + 17, 8, v25, v26, v27, v28);
  v39 = (_QWORD *)v38;
  if ( v20 )
  {
    v59 = (_QWORD *)v38;
    memcpy((void *)(v38 + 16), v19, v20);
    v39 = v59;
  }
  *((_BYTE *)v39 + v20 + 16) = 0;
  *v39 = v20;
  v39[1] = 0;
  *v29 = (__int64)v39;
  ++*(_DWORD *)(a1 + 36);
  v40 = sub_22450D0(a1 + 24, v58);
  sub_12DAAD0(v62, (__int64 *)(*(_QWORD *)(a1 + 24) + 8LL * v40), 0);
  v30 = v62[0];
LABEL_11:
  *(_QWORD *)(*v30 + 8) = v21;
  v31 = *(unsigned int *)(a1 + 56);
  v32 = v31 + 1;
  v33 = 8 * v31;
  if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 60) )
  {
    v41 = *(_QWORD *)(a1 + 48);
    v35 = (__int64 *)&v61;
    v42 = -1;
    v57 = 0;
    if ( v41 <= (unsigned __int64)&v61 && (unsigned __int64)&v61 < v41 + v33 )
    {
      v57 = 1;
      v42 = (__int64)((__int64)&v62[-1] - v41) >> 3;
    }
    v43 = sub_2237400(a1 + 48, v60, v32, 8, v62);
    v44 = *(_QWORD *)(a1 + 48);
    v34 = v43;
    v45 = 8LL * *(unsigned int *)(a1 + 56);
    v46 = (_QWORD *)(v44 + v45);
    if ( v44 != v44 + v45 )
    {
      v47 = *(_QWORD ***)(a1 + 48);
      if ( (v44 >= v34 + 16 || v34 >= v44 + 16) && (unsigned __int64)(v45 - 8) > 0x10 )
      {
        v48 = ((unsigned __int64)(v45 - 8) >> 3) + 1;
        v49 = 0;
        a3 = 0.0;
        do
        {
          si128 = _mm_loadu_si128((const __m128i *)(v44 + v49));
          *(_OWORD *)(v44 + v49) = 0;
          *(__m128i *)(v34 + v49) = si128;
          v49 += 16;
        }
        while ( v49 != 16 * (v48 >> 1) );
        v50 = 8 * (v48 & 0xFFFFFFFFFFFFFFFELL);
        v51 = (__int64 *)(v50 + v44);
        v52 = (_QWORD *)(v34 + v50);
        if ( v48 != (v48 & 0xFFFFFFFFFFFFFFFELL) )
        {
          v53 = *v51;
          *v51 = 0;
          *v52 = v53;
        }
      }
      else
      {
        v51 = (__int64 *)v34;
        do
        {
          v52 = *v47;
          *v47++ = nullptr;
          *v51++ = (__int64)v52;
        }
        while ( v46 != v47 );
      }
      v54 = *(_QWORD **)(a1 + 48);
      v46 = &v54[(unsigned __int64)v45 / 8];
      if ( v54 != &v54[(unsigned __int64)v45 / 8] )
      {
        do
        {
          while ( *--v46 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD *, double, double))(*(_QWORD *)*v46 + 8LL))(
              *v46,
              v45,
              v51,
              v52,
              *(double *)si128.m128i_i64,
              a3);
            if ( v54 == v46 )
              goto LABEL_33;
          }
        }
        while ( v54 != v46 );
LABEL_33:
        v46 = *(_QWORD **)(a1 + 48);
      }
    }
    v55 = (int)v62[0];
    if ( v60 != v46 )
      free(v46);
    v56 = *(unsigned int *)(a1 + 56);
    *(_QWORD *)(a1 + 48) = v34;
    *(_DWORD *)(a1 + 60) = v55;
    LODWORD(v31) = v56;
    v33 = 8 * v56;
    if ( v57 )
      v35 = (__int64 *)(v34 + 8 * v42);
  }
  else
  {
    v34 = *(_QWORD *)(a1 + 48);
    v35 = (__int64 *)&v61;
  }
  result = *v35;
  *v35 = 0;
  v37 = v61;
  *(_QWORD *)(v34 + v33) = result;
  *(_DWORD *)(a1 + 56) = v31 + 1;
  if ( v37 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v37 + 8LL))(v37);
  return result;
}
