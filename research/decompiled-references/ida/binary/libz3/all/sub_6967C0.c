__int64 __fastcall sub_6967C0(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  _OWORD *v5; // rbx
  unsigned int v6; // r14d
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rbp
  void *v10; // rdi
  __int64 *v12; // rcx
  __int64 *v13; // r12
  __int64 *v14; // rbp
  _QWORD *v15; // rdx
  unsigned int v16; // esi
  __int64 v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // ecx
  __int32 v20; // r12d
  int v21; // r9d
  __m128i *v22; // rsi
  __m128i *v23; // rbp
  __int64 v24; // rax
  __m128i *v25; // rsi
  __m128i *v26; // rax
  __m128i *v27; // rdi
  __int32 v28; // edx
  _QWORD *v29; // rax
  __int64 *v30; // rbp
  void *v31; // rax
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // r12
  __int32 v35; // edx
  __m128i *v36; // rax
  int v37; // r8d
  __m128i *v38; // r10
  __m128i *v39; // rdx
  const __m128i *v40; // rax
  const __m128i *v41; // r11
  __int64 v42; // rdx
  __m128i *v43; // rsi
  __m128i *v44; // rdx
  __int64 *v45; // [rsp+0h] [rbp-128h]
  __m128i *v46; // [rsp+0h] [rbp-128h]
  void *v48; // [rsp+8h] [rbp-120h]
  void *v49; // [rsp+8h] [rbp-120h]
  int v50; // [rsp+10h] [rbp-118h]
  unsigned int v51; // [rsp+10h] [rbp-118h]
  unsigned int v52; // [rsp+10h] [rbp-118h]
  int v54[2]; // [rsp+18h] [rbp-110h]
  int v55; // [rsp+20h] [rbp-108h]
  int v56; // [rsp+20h] [rbp-108h]
  int v57; // [rsp+2Ch] [rbp-FCh]
  char *ptr; // [rsp+30h] [rbp-F8h]
  void *ptra; // [rsp+30h] [rbp-F8h]
  unsigned int v60; // [rsp+38h] [rbp-F0h]
  __m128i *v61; // [rsp+38h] [rbp-F0h]
  __int64 *v62; // [rsp+40h] [rbp-E8h]
  int v63; // [rsp+40h] [rbp-E8h]
  __int64 v64; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD *v65; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+78h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+80h] [rbp-A8h] BYREF
  void *v68; // [rsp+88h] [rbp-A0h]
  _QWORD v69[2]; // [rsp+90h] [rbp-98h] BYREF
  int v70; // [rsp+A0h] [rbp-88h]
  __m128i *v71; // [rsp+B0h] [rbp-78h] BYREF
  unsigned int v72; // [rsp+B8h] [rbp-70h]
  int v73; // [rsp+BCh] [rbp-6Ch]
  int v74; // [rsp+C0h] [rbp-68h]
  _QWORD v75[2]; // [rsp+D0h] [rbp-58h] BYREF
  int v76; // [rsp+E0h] [rbp-48h]

  v50 = (int)a2;
  sub_68ED00(a1);
  v64 = 0;
  v65 = nullptr;
  sub_6940A0(a1 + 4840);
  v5 = (_OWORD *)sub_186B270(0x80u);
  v69[0] = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v70 = 0;
  v69[1] = 8;
  sub_11C7890(a1 + 96);
  v6 = sub_692550(a1, (__m128)0LL);
  if ( v6 == 1 )
  {
    v12 = *(__int64 **)(a3 + 8);
    if ( v12 )
    {
      v13 = &v12[*((unsigned int *)v12 - 1)];
      if ( v12 != v13 )
      {
        v14 = *(__int64 **)(a3 + 8);
        v45 = &v64;
        do
          sub_691980(a1, *v14++, (unsigned int **)&v64);
        while ( v13 != v14 );
      }
    }
    v15 = (_QWORD *)a2[1];
    v16 = v15 ? *((_DWORD *)v15 - 1) : 0;
    v6 = sub_695B60(a1, v16, v15, (__m128)0LL);
    if ( v6 == 1 )
    {
      v6 = sub_11CE460((int)a1 + 96, (int)a1 + 4552, (int)v45, a3, v50, a4, a1 + 96);
      if ( v6 == -1 )
      {
        v17 = *(_QWORD *)(a1 + 4552);
        if ( v17 && *(_DWORD *)(v17 - 4) )
          sub_695100(a1, (__int64)v69);
        goto LABEL_2;
      }
      v46 = (__m128i *)sub_186B270(0x80u);
      v46->m128i_i64[0] = 0;
      v46[1].m128i_i64[0] = 0;
      v46[2].m128i_i64[0] = 0;
      v46[3].m128i_i64[0] = 0;
      v46[4].m128i_i64[0] = 0;
      v46[5].m128i_i64[0] = 0;
      v46[6].m128i_i64[0] = 0;
      v46[7].m128i_i64[0] = 0;
      v18 = v65;
      v55 = 0;
      v57 = 0;
      v51 = 8;
      if ( !v65 )
        goto LABEL_41;
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= *((_DWORD *)v18 - 1) )
          goto LABEL_41;
        v20 = *(_DWORD *)v18[v19] >> 1;
        if ( 3 * v51 < 4 * (v57 + v55) )
          break;
        v21 = v51 - 1;
        v22 = v46;
        ptr = (char *)(16LL * v51);
        v23 = (__m128i *)&ptr[(_QWORD)v46];
LABEL_31:
        v24 = 16LL * (v20 & (unsigned int)v21);
        v25 = &v22[(unsigned __int64)v24 / 0x10];
        if ( (char *)v24 == ptr )
        {
          v27 = nullptr;
LABEL_53:
          v26 = v46;
          if ( v25 == v46 )
          {
LABEL_65:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          while ( 1 )
          {
            v35 = v26->m128i_i32[1];
            if ( v35 == 2 )
            {
              if ( v20 == v26->m128i_i32[0] && v20 == v26->m128i_i32[2] )
                goto LABEL_39;
            }
            else
            {
              if ( !v35 )
                goto LABEL_62;
              v27 = v26;
            }
            if ( v25 == ++v26 )
              goto LABEL_65;
          }
        }
        v26 = v25;
        v27 = nullptr;
        while ( 1 )
        {
          v28 = v26->m128i_i32[1];
          if ( v28 != 2 )
            break;
          if ( v20 == v26->m128i_i32[0] && v20 == v26->m128i_i32[2] )
          {
LABEL_39:
            v26->m128i_i32[2] = v20;
            v26->m128i_i32[3] = v19;
            v26->m128i_i32[1] = 2;
            goto LABEL_40;
          }
LABEL_35:
          if ( ++v26 == v23 )
            goto LABEL_53;
        }
        if ( v28 )
        {
          v27 = v26;
          goto LABEL_35;
        }
LABEL_62:
        if ( v27 )
          --v55;
        else
          v27 = v26;
        v27->m128i_i32[2] = v20;
        v27->m128i_i32[3] = v19;
        v27->m128i_i32[1] = 2;
        v27->m128i_i32[0] = v20;
        ++v57;
LABEL_40:
        v18 = v65;
        ++v19;
        if ( !v65 )
        {
LABEL_41:
          v29 = (_QWORD *)sub_186B270(0xC0u);
          *v29 = 0;
          v29[3] = 0;
          v29[6] = 0;
          v29[9] = 0;
          v29[12] = 0;
          v29[15] = 0;
          v29[18] = 0;
          v29[21] = 0;
          v75[0] = v29;
          v75[1] = 8;
          v76 = 0;
          sub_68DF00(a1, (__int64)v75);
          ptra = (void *)v75[0];
          v30 = *((__int64 **)v48 + 1);
          if ( v30 )
          {
            v62 = &v30[*((unsigned int *)v30 - 1)];
            while ( v62 != v30 )
            {
              v31 = *(void **)(a1 + 8);
              v32 = *v30;
              v67 = 0;
              v75[0] = ptra;
              v68 = v31;
              v71 = v46;
              v72 = v51;
              v73 = v57;
              v74 = v55;
              v33 = sub_694910(a1, (__int64)v75, v32, (__int64)&v71, &v65, &v67);
              v34 = v67;
              v49 = v68;
              if ( v33 )
              {
                v66 = v67;
                if ( v67 )
                  ++*(_DWORD *)(v67 + 8);
                sub_68D130((unsigned int **)(*(_QWORD *)v54 + 8LL), &v66);
              }
              ++v30;
              sub_68CF60(v34, (__int64)v49);
            }
          }
          if ( ptra )
            sub_186B220(ptra);
          if ( v46 )
            sub_186B220(v46);
          goto LABEL_2;
        }
      }
      v60 = v19;
      ptr = (char *)(32LL * v51);
      v36 = (__m128i *)sub_186B270((size_t)ptr);
      v37 = 2 * v51;
      v19 = v60;
      v38 = v36;
      if ( 2 * v51 )
      {
        v39 = &v36[2 * (v51 & 0x7FFFFFFE)];
        do
        {
          v36->m128i_i64[0] = 0;
          v36 += 2;
          v36[-1].m128i_i64[0] = 0;
        }
        while ( v39 != v36 );
        v21 = v37 - 1;
        v40 = &v46[v51];
        v23 = (__m128i *)&ptr[(_QWORD)v38];
      }
      else
      {
        v23 = v36;
        v21 = -1;
        v40 = &v46[v51];
        if ( v40 == v46 )
        {
LABEL_79:
          if ( v46 )
          {
            v63 = 2 * v51;
            v61 = v38;
            v56 = v21;
            v52 = v19;
            sub_186B220(v46);
            v37 = v63;
            v38 = v61;
            v21 = v56;
            v19 = v52;
          }
          v51 = v37;
          v22 = v38;
          v46 = v38;
          v55 = 0;
          goto LABEL_31;
        }
      }
      v41 = v46;
      do
      {
        if ( v41->m128i_i32[1] == 2 )
        {
          v42 = 16LL * (v41->m128i_i32[0] & (unsigned int)v21);
          v43 = &v38[(unsigned __int64)v42 / 0x10];
          if ( ptr == (char *)v42 )
          {
LABEL_82:
            if ( v38 == v43 )
            {
LABEL_88:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v44 = v38;
            while ( v44->m128i_i32[1] )
            {
              if ( v43 == ++v44 )
                goto LABEL_88;
            }
          }
          else
          {
            v44 = &v38[(unsigned __int64)v42 / 0x10];
            while ( v44->m128i_i32[1] )
            {
              if ( ++v44 == v23 )
                goto LABEL_82;
            }
          }
          *v44 = _mm_loadu_si128(v41);
        }
        ++v41;
      }
      while ( v40 != v41 );
      goto LABEL_79;
    }
  }
LABEL_2:
  sub_186B220(v5);
  v7 = v65;
  if ( v65 )
  {
    v8 = *((unsigned int *)v65 - 1);
    if ( (_DWORD)v8 )
    {
      v9 = &v65[v8];
      do
      {
        while ( *v7 )
        {
          v10 = (void *)(*v7++ - 8LL);
          sub_186B220(v10);
          if ( v7 == v9 )
          {
            v7 = v65;
            goto LABEL_8;
          }
        }
        ++v7;
      }
      while ( v7 != v9 );
      v7 = v65;
    }
LABEL_8:
    sub_186B220(v7 - 1);
  }
  if ( v64 )
    sub_186B220((void *)(v64 - 8));
  return v6;
}

