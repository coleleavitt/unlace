__int64 __fastcall sub_165D180(_QWORD *a1, unsigned int a2, __int64 a3)
{
  char v3; // r8
  char v4; // r9
  __int64 v5; // rbx
  __int64 *v8; // rax
  int v9; // edx
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edx
  __m128i *v29; // r14
  __m128i *v30; // rbx
  const __m128i *v31; // r15
  const __m128i *v32; // r13
  _BYTE *v33; // rsi
  _BYTE *v34; // rax
  size_t v35; // r9
  unsigned __int64 v36; // rbp
  __int64 v37; // rbp
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int32 v41; // ebx
  _BYTE *v42; // rdi
  char *v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r9
  char *v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // r12
  const __m128i *v52; // rbp
  unsigned __int64 v53; // rdx
  __m128i *v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // rbp
  __int64 v59; // rbx
  void *v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // [rsp+8h] [rbp-C0h]
  __int64 v68; // [rsp+8h] [rbp-C0h]
  size_t v69; // [rsp+10h] [rbp-B8h]
  size_t v70; // [rsp+10h] [rbp-B8h]
  _BYTE *v71; // [rsp+18h] [rbp-B0h]
  __int64 v72; // [rsp+20h] [rbp-A8h] BYREF
  void *v73; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+30h] [rbp-98h]
  _QWORD v75[2]; // [rsp+38h] [rbp-90h] BYREF
  __m128i *v76; // [rsp+48h] [rbp-80h]
  __int64 v77; // [rsp+50h] [rbp-78h]
  void *ptr; // [rsp+58h] [rbp-70h] BYREF
  __int64 v79; // [rsp+60h] [rbp-68h]
  _BYTE v80[96]; // [rsp+68h] [rbp-60h] BYREF

  v3 = *(_BYTE *)a3;
  v4 = *(_BYTE *)a3 & 3;
  if ( !v4 )
    return 0;
  v5 = a1[64];
  if ( !v5 )
    goto LABEL_6;
  v8 = (__int64 *)a1[76];
  if ( v8 )
  {
    do
    {
      v9 = *((_DWORD *)v8 + 2);
      v8 = (__int64 *)*v8;
    }
    while ( v9 >= 0 && v8 != nullptr );
    if ( v9 < 0 )
    {
LABEL_6:
      v10 = a1[68];
      v73 = v75;
      v72 = v10;
      v74 = 0x400000000LL;
      ptr = v80;
      v79 = 0x400000000LL;
      v80[32] = sub_B8E180(v10);
      v11 = *(_BYTE *)(v10 + 8) & 0x7F;
      if ( v11 == 39 )
      {
        if ( v10 == 72 )
        {
          v11 = 0;
        }
        else if ( (*(_BYTE *)(v10 - 43) & 2) != 0 )
        {
          v24 = *(_QWORD *)(v10 + 96);
          if ( v24 )
          {
            v10 = v24 + 72;
            v11 = *(_BYTE *)(v24 + 80) & 0x7F;
          }
          else
          {
            if ( (*(_DWORD *)(v10 - 32) & 7) != 7
              || (v55 = *(_QWORD *)(v10 - 32) & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v55) )
            {
              BUG();
            }
            v10 = sub_B8D340(*(_QWORD *)(*(_QWORD *)(v55 + 16) + 48LL));
            v11 = *(_BYTE *)(v10 + 8) & 0x7F;
          }
        }
      }
      while ( (unsigned int)v11 - 59 > 2 )
      {
        if ( (unsigned int)v11 - 34 > 5 )
        {
          if ( v11 == 24 || !v11 )
          {
            v22 = dword_263D990[(unsigned int)sub_165BA60((__int64)a1, &v72, a2, a3)];
            if ( ptr != v80 )
              free(ptr);
            if ( v73 != v75 )
              free(v73);
            return v22;
          }
          v17 = *(_QWORD *)(sub_B8C1B0(v10) + 16);
          if ( (v17 & 4) == 0 )
          {
LABEL_15:
            v10 = v17 & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_16;
          }
          goto LABEL_27;
        }
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 - 72) + 32LL))(v10 - 72);
        v19 = (unsigned int)v74;
        v20 = (unsigned int)v74 + 1LL;
        if ( v20 > HIDWORD(v74) )
        {
          v68 = v18;
          sub_2237220(&v73, v75, v20, 8);
          v19 = (unsigned int)v74;
          v18 = v68;
        }
        *((_QWORD *)v73 + v19) = v18;
        LODWORD(v74) = v74 + 1;
        v21 = *(_QWORD *)(v10 - 56);
        if ( (*(_WORD *)(v10 - 42) & 0x180) != 0 )
        {
          v10 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v21 & 4) != 0 )
            v10 = *(_QWORD *)(v10 + 8);
        }
        else
        {
          v10 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v21 & 4) != 0 )
            goto LABEL_28;
        }
LABEL_16:
        v11 = *(_BYTE *)(v10 + 8) & 0x7F;
      }
      v12 = v10 - 64;
      v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 - 64) + 32LL);
      if ( v13 == sub_A01140 )
        v14 = sub_B70A60(v12);
      else
        v14 = v13(v12);
      v15 = (unsigned int)v79;
      v16 = (unsigned int)v79 + 1LL;
      if ( v16 > HIDWORD(v79) )
      {
        v67 = v14;
        sub_2237220(&ptr, v80, v16, 8);
        v15 = (unsigned int)v79;
        v14 = v67;
      }
      *((_QWORD *)ptr + v15) = v14;
      LODWORD(v79) = v79 + 1;
      v17 = *(_QWORD *)(v10 - 48);
      if ( (v17 & 4) == 0 )
        goto LABEL_15;
LABEL_27:
      v10 = v17 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_28:
      v10 = *(_QWORD *)v10;
      goto LABEL_16;
    }
  }
  HIDWORD(v72) = a2;
  LOWORD(v72) = 1;
  v76 = nullptr;
  v25 = *(_QWORD *)(a3 + 32) == 0;
  v74 = *(_QWORD *)(a3 + 8);
  v26 = *(_QWORD *)(a3 + 16);
  LOBYTE(v73) = (unsigned __int8)v73 & 0xF8 | v4 | v3 & 4;
  v75[0] = v26;
  v75[1] = *(_QWORD *)(a3 + 24);
  LODWORD(ptr) = *(_DWORD *)(a3 + 48);
  v27 = *(_QWORD *)(a3 + 40);
  v77 = v27;
  if ( !v25 )
  {
    v28 = *(_DWORD *)(v27 + 14976);
    if ( v28 )
    {
      v56 = (unsigned int)(v28 - 1);
      *(_DWORD *)(v27 + 14976) = v56;
      v29 = *(__m128i **)(v27 + 8 * v56 + 14848);
      v57 = v29[33].m128i_u32[2];
      v29->m128i_i8[0] = 0;
      v58 = v29[33].m128i_i64[0];
      v29[26].m128i_i32[2] = 0;
      v59 = v58 + (v57 << 6);
      while ( v58 != v59 )
      {
        while ( 1 )
        {
          v59 -= 64;
          v60 = *(void **)(v59 + 24);
          if ( v60 == (void *)(v59 + 40) )
            break;
          operator delete(v60);
          if ( v58 == v59 )
            goto LABEL_87;
        }
      }
LABEL_87:
      v29[33].m128i_i32[2] = 0;
      v30 = v29 + 6;
    }
    else
    {
      v29 = (__m128i *)operator new(0x3A0u);
      v29->m128i_i8[0] = 0;
      v30 = v29 + 6;
      v29[6].m128i_i64[0] = (__int64)v29[7].m128i_i64;
      v29[8].m128i_i64[0] = (__int64)v29[9].m128i_i64;
      v29[10].m128i_i64[0] = (__int64)v29[11].m128i_i64;
      v29[12].m128i_i64[0] = (__int64)v29[13].m128i_i64;
      v29[14].m128i_i64[0] = (__int64)v29[15].m128i_i64;
      v29[16].m128i_i64[0] = (__int64)v29[17].m128i_i64;
      v29[18].m128i_i64[0] = (__int64)v29[19].m128i_i64;
      v29[20].m128i_i64[0] = (__int64)v29[21].m128i_i64;
      v29[22].m128i_i64[0] = (__int64)v29[23].m128i_i64;
      v29[24].m128i_i64[0] = (__int64)v29[25].m128i_i64;
      v29[26].m128i_i64[0] = (__int64)v29[27].m128i_i64;
      v29[6].m128i_i64[1] = 0;
      v29[7].m128i_i8[0] = 0;
      v29[8].m128i_i64[1] = 0;
      v29[9].m128i_i8[0] = 0;
      v29[10].m128i_i64[1] = 0;
      v29[11].m128i_i8[0] = 0;
      v29[12].m128i_i64[1] = 0;
      v29[13].m128i_i8[0] = 0;
      v29[14].m128i_i64[1] = 0;
      v29[15].m128i_i8[0] = 0;
      v29[16].m128i_i64[1] = 0;
      v29[17].m128i_i8[0] = 0;
      v29[18].m128i_i64[1] = 0;
      v29[19].m128i_i8[0] = 0;
      v29[20].m128i_i64[1] = 0;
      v29[21].m128i_i8[0] = 0;
      v29[22].m128i_i64[1] = 0;
      v29[23].m128i_i8[0] = 0;
      v29[24].m128i_i64[1] = 0;
      v29[25].m128i_i8[0] = 0;
      v29[26].m128i_i64[1] = 0x800000000LL;
      v29[33].m128i_i64[0] = (__int64)v29[34].m128i_i64;
      v29[33].m128i_i64[1] = 0x600000000LL;
    }
    v31 = *(const __m128i **)(a3 + 32);
    v76 = v29;
    v29->m128i_i8[0] = v31->m128i_i8[0];
    v29->m128i_i8[1] = v31->m128i_i8[1];
    v29->m128i_i8[2] = v31->m128i_i8[2];
    v29->m128i_i8[3] = v31->m128i_i8[3];
    v29->m128i_i8[4] = v31->m128i_i8[4];
    v29->m128i_i8[5] = v31->m128i_i8[5];
    v29->m128i_i8[6] = v31->m128i_i8[6];
    v29->m128i_i8[7] = v31->m128i_i8[7];
    v29->m128i_i8[8] = v31->m128i_i8[8];
    v29->m128i_i8[9] = v31->m128i_i8[9];
    v29->m128i_i8[10] = v31->m128i_i8[10];
    if ( &v31[1] < &v29[2] && &v29[1] < &v31[2] )
    {
      v29[1].m128i_i64[0] = v31[1].m128i_i64[0];
      v29[1].m128i_i64[1] = v31[1].m128i_i64[1];
      v29[2].m128i_i64[0] = v31[2].m128i_i64[0];
      v29[2].m128i_i64[1] = v31[2].m128i_i64[1];
      v29[3].m128i_i64[0] = v31[3].m128i_i64[0];
      v29[3].m128i_i64[1] = v31[3].m128i_i64[1];
      v29[4].m128i_i64[0] = v31[4].m128i_i64[0];
      v29[4].m128i_i64[1] = v31[4].m128i_i64[1];
      v29[5].m128i_i64[0] = v31[5].m128i_i64[0];
      v29[5].m128i_i64[1] = v31[5].m128i_i64[1];
    }
    else
    {
      v29[1] = _mm_loadu_si128(v31 + 1);
      v29[2] = _mm_loadu_si128(v31 + 2);
      v29[3] = _mm_loadu_si128(v31 + 3);
      v29[4] = _mm_loadu_si128(v31 + 4);
      v29[5] = _mm_loadu_si128(v31 + 5);
    }
    v32 = v31 + 6;
    do
    {
      if ( v30 != v32 )
      {
        v34 = (_BYTE *)v30->m128i_i64[0];
        v35 = v32->m128i_u64[1];
        if ( (__m128i *)v30->m128i_i64[0] == &v30[1] )
          v36 = 15;
        else
          v36 = v30[1].m128i_u64[0];
        if ( v35 > v36 )
        {
          if ( (v35 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v37 = 2 * v36;
          if ( v35 < v37 )
          {
            v38 = v37 + 1;
            if ( v37 < 0 )
            {
              v38 = 0x8000000000000000LL;
              v37 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v38 = v35 + 1;
            v37 = v32->m128i_i64[1];
          }
          v70 = v32->m128i_u64[1];
          v34 = (_BYTE *)operator new(v38);
          v35 = v70;
          if ( (__m128i *)v30->m128i_i64[0] != &v30[1] )
          {
            v71 = v34;
            operator delete((void *)v30->m128i_i64[0]);
            v34 = v71;
            v35 = v70;
          }
          v30->m128i_i64[0] = (__int64)v34;
          v30[1].m128i_i64[0] = v37;
        }
        if ( v35 )
        {
          v33 = (_BYTE *)v32->m128i_i64[0];
          if ( v35 == 1 )
          {
            *v34 = *v33;
            v34 = (_BYTE *)v30->m128i_i64[0];
          }
          else
          {
            v69 = v35;
            memcpy(v34, v33, v35);
            v34 = (_BYTE *)v30->m128i_i64[0];
            v35 = v69;
          }
        }
        v30->m128i_i64[1] = v35;
        v34[v35] = 0;
      }
      v32 += 2;
      v30 += 2;
    }
    while ( v32 != &v31[26] );
    if ( &v29[26] != v32 )
    {
      v39 = v31[26].m128i_u32[2];
      v40 = v29[26].m128i_u32[2];
      v41 = v31[26].m128i_i32[2];
      if ( v39 <= v40 )
      {
        if ( v31[26].m128i_i32[2] )
        {
          v61 = v29[26].m128i_i64[0];
          v62 = v31[26].m128i_i64[0];
          v63 = 0;
          do
          {
            *(_QWORD *)(v61 + v63) = *(_QWORD *)(v62 + v63);
            *(_BYTE *)(v61 + v63 + 8) = *(_BYTE *)(v62 + v63 + 8);
            v63 += 12;
          }
          while ( 12 * v39 != v63 );
        }
      }
      else
      {
        if ( v39 > v29[26].m128i_u32[3] )
        {
          v29[26].m128i_i32[2] = 0;
          sub_2237220(&v29[26], &v29[27], v39, 12);
          v43 = (char *)v31[26].m128i_i64[0];
          v42 = (_BYTE *)v29[26].m128i_i64[0];
          v47 = 0;
          v39 = v31[26].m128i_u32[2];
          v48 = v43;
        }
        else
        {
          v42 = (_BYTE *)v29[26].m128i_i64[0];
          v43 = (char *)v31[26].m128i_i64[0];
          if ( v29[26].m128i_i32[2] )
          {
            v44 = 3 * v40;
            v45 = 0;
            v46 = 4 * v44;
            v47 = v46;
            do
            {
              *(_QWORD *)&v42[v45] = *(_QWORD *)&v43[v45];
              v42[v45 + 8] = v43[v45 + 8];
              v45 += 12;
            }
            while ( v46 != v45 );
            v39 = v31[26].m128i_u32[2];
            v42 += v46;
            v48 = &v43[v46];
          }
          else
          {
            v48 = (char *)v31[26].m128i_i64[0];
            v47 = 0;
          }
        }
        v49 = 12 * v39;
        if ( v48 != &v43[v49] )
          memcpy(v42, v48, v49 - v47);
      }
      v29[26].m128i_i32[2] = v41;
    }
    sub_9EED30((__int64)v29[33].m128i_i64, v31[33].m128i_i64);
    v5 = a1[64];
  }
  v50 = *(unsigned int *)(v5 + 16);
  v51 = *(_QWORD *)(v5 + 8);
  v52 = (const __m128i *)&v72;
  v53 = v50 + 1;
  v54 = (__m128i *)(v51 + 80 * v50);
  if ( v53 > *(unsigned int *)(v5 + 20) )
  {
    v64 = v5 + 8;
    v65 = v5 + 24;
    if ( v51 > (unsigned __int64)&v72 || v54 <= (__m128i *)&v72 )
    {
      sub_2237220(v64, v65, v53, 80);
      v54 = (__m128i *)(*(_QWORD *)(v5 + 8) + 80LL * *(unsigned int *)(v5 + 16));
    }
    else
    {
      sub_2237220(v64, v65, v53, 80);
      v66 = *(_QWORD *)(v5 + 8);
      v52 = (const __m128i *)((char *)&v72 + v66 - v51);
      v54 = (__m128i *)(80LL * *(unsigned int *)(v5 + 16) + v66);
    }
  }
  *v54 = _mm_loadu_si128(v52);
  v54[1] = _mm_loadu_si128(v52 + 1);
  v54[2] = _mm_loadu_si128(v52 + 2);
  v54[3] = _mm_loadu_si128(v52 + 3);
  v54[4] = _mm_loadu_si128(v52 + 4);
  ++*(_DWORD *)(v5 + 16);
  return 3;
}
