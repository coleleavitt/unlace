unsigned __int64 __fastcall sub_371760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  _QWORD *v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rdi
  __int32 *v13; // rax
  __int32 *v14; // rdx
  __int32 *v15; // rcx
  __int32 *v16; // rdx
  __int32 *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rbp
  unsigned __int64 v20; // r15
  __m128 *v21; // rbp
  _QWORD *v22; // rax
  __m128 v23; // xmm0
  __int32 *v24; // rdx
  _QWORD **v25; // rbp
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rsi
  _QWORD *v30; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r14
  __int64 v38; // rbp
  __int64 v39; // rax
  __m128 v40; // xmm0
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // r15
  void *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rdi
  struct _Unwind_Exception *v48; // rbp
  __int64 v49; // rdi
  __int64 v50; // r12
  __int64 i; // r15
  __int64 v52; // rdi
  __int64 v53; // r13
  __int64 j; // r13
  __int64 v55; // r14
  __int64 v56; // rbx
  __int64 v57; // rdi
  __int64 v58; // [rsp+0h] [rbp-D0h]
  __int64 v59; // [rsp+10h] [rbp-C0h]
  _QWORD *v60; // [rsp+20h] [rbp-B0h]
  __int64 v61; // [rsp+30h] [rbp-A0h]
  __int64 v62; // [rsp+38h] [rbp-98h]
  __int64 v63; // [rsp+40h] [rbp-90h]
  char v64[8]; // [rsp+48h] [rbp-88h] BYREF
  __int32 v65; // [rsp+50h] [rbp-80h] BYREF
  void *v66; // [rsp+58h] [rbp-78h]
  __int32 *v67; // [rsp+60h] [rbp-70h] BYREF
  __int32 *v68; // [rsp+68h] [rbp-68h]
  unsigned __int64 v69; // [rsp+70h] [rbp-60h]
  __int64 v70; // [rsp+78h] [rbp-58h] BYREF
  unsigned __int64 v71; // [rsp+80h] [rbp-50h]
  unsigned __int64 v72; // [rsp+90h] [rbp-40h]

  v72 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_4D8D28;
  *(_QWORD *)(a1 + 8) = 4278190084LL;
  *(_QWORD *)(a1 + 40) = a3;
  v7 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  v8 = _mm_loadl_epi64(&off_4D3560);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 72) = -1;
  v62 = a1 + 80;
  v63 = a1 + 176;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)&off_4D3540);
  do
  {
    *v7 = 0;
    v7 += 3;
    *((_OWORD *)v7 - 1) = 0;
  }
  while ( v7 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v9 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v46 = interr(3449, a2, v9, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, a5);
        v47 = *(_QWORD **)(v5 + 16);
        v48 = (struct _Unwind_Exception *)v46;
        sub_367A50(v47);
        sub_3709E0((__int64)v64);
        v49 = *(_QWORD *)(a1 + 216);
        if ( v49 )
        {
          *(_QWORD *)(a1 + 224) = 0;
          qfree(v49);
        }
        if ( *(_QWORD *)(a1 + 192) )
        {
          v50 = *(_QWORD *)(a1 + 200);
          for ( i = 0; ; ++i )
          {
            v52 = *(_QWORD *)(a1 + 192);
            if ( v50 == i )
              break;
            v53 = v52 + (i << 6);
            clear_tinfo_t(v53 + 48);
            for ( j = *(_QWORD *)(v53 + 16); j; j = v55 )
            {
              sub_367A50(*(_QWORD **)(j + 24));
              v55 = *(_QWORD *)(j + 16);
              operator delete((void *)j, 0x28u);
            }
          }
          *(_QWORD *)(a1 + 200) = 0;
          qfree(v52);
        }
        *(_QWORD *)a1 = &unk_4D8D28;
        v56 = v63;
        while ( 1 )
        {
          v57 = *(_QWORD *)(v56 - 24);
          v56 -= 24;
          if ( v57 )
          {
            *(_QWORD *)(v56 + 8) = 0;
            qfree(v57);
          }
          if ( v56 == v62 )
            _Unwind_Resume(v48);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v9 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)a1 = off_4D3458;
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v10 = *(_QWORD *)(a2 + 1128);
  *(_QWORD *)(a1 + 184) = a2;
  v60 = *(_QWORD **)(v10 + 8);
  if ( v60 )
  {
    if ( *(_QWORD *)(v10 + 16) )
    {
      v11 = (_QWORD *)v60[1];
      if ( v60 != v11 )
      {
        while ( 1 )
        {
LABEL_9:
          if ( (v11[10] & 0x3F) != 0x30 )
          {
            v69 = 0;
            v65 = 0;
            v67 = &v65;
            v68 = &v65;
            v12 = v11[6];
            v66 = nullptr;
            if ( v12 )
            {
              v13 = (__int32 *)sub_367E70(v12, (__int64)&v65);
              v14 = v13;
              do
              {
                v15 = v14;
                v14 = *((__int32 **)v14 + 2);
              }
              while ( v14 );
              v67 = v15;
              v16 = v13;
              do
              {
                v17 = v16;
                v16 = *((__int32 **)v16 + 3);
              }
              while ( v16 );
              v18 = v11[9];
              v68 = v17;
              v66 = v13;
              v69 = v18;
            }
            v70 = 0;
            copy_tinfo_t(&v70, v11 + 10);
            v19 = *(_QWORD *)(a1 + 200);
            v20 = *(_QWORD *)(a1 + 208);
            v71 = v11[11];
            if ( v20 < v19 + 1 )
            {
              v35 = qvector_reserve(a1 + 192, 0, v19 + 1, 64);
              v36 = *(_QWORD *)(a1 + 208);
              v59 = v35;
              *(_QWORD *)(a1 + 208) = v20;
              v37 = *(_QWORD *)(a1 + 192);
              v61 = v36;
              v58 = *(_QWORD *)(a1 + 200) - 1LL;
              if ( v58 >= 0 )
              {
                v38 = v35 + 8;
                do
                {
                  v39 = *(_QWORD *)(v37 + 16);
                  if ( v39 )
                  {
                    v40 = _mm_loadh_ps((const double *)(v37 + 24));
                    *(_DWORD *)v38 = *(_DWORD *)(v37 + 8);
                    v41 = *(_QWORD *)(v37 + 32);
                    *(__m128 *)(v38 + 8) = v40;
                    *(_QWORD *)(v38 + 24) = v41;
                    *(_QWORD *)(v39 + 8) = v38;
                    v42 = *(_QWORD *)(v37 + 40);
                    *(_QWORD *)(v37 + 16) = 0;
                    *(_QWORD *)(v38 + 32) = v42;
                    *(_QWORD *)(v37 + 24) = v37 + 8;
                    *(_QWORD *)(v37 + 32) = v37 + 8;
                    *(_QWORD *)(v37 + 40) = 0;
                  }
                  else
                  {
                    *(_DWORD *)v38 = 0;
                    *(_QWORD *)(v38 + 8) = 0;
                    *(_QWORD *)(v38 + 16) = v38;
                    *(_QWORD *)(v38 + 24) = v38;
                    *(_QWORD *)(v38 + 32) = 0;
                  }
                  *(_QWORD *)(v38 + 40) = 0;
                  copy_tinfo_t(v38 + 40, v37 + 48);
                  *(_DWORD *)(v38 + 48) = *(_DWORD *)(v37 + 56);
                  *(_DWORD *)(v38 + 52) = *(_DWORD *)(v37 + 60);
                  clear_tinfo_t(v37 + 48);
                  v43 = *(_QWORD *)(v37 + 16);
                  while ( v43 )
                  {
                    sub_367A50(*(_QWORD **)(v43 + 24));
                    v44 = (void *)v43;
                    v43 = *(_QWORD *)(v43 + 16);
                    operator delete(v44, 0x28u);
                  }
                  --v58;
                  v37 += 64;
                  v38 += 64;
                }
                while ( v58 != -1 );
                v37 = *(_QWORD *)(a1 + 192);
              }
              qfree(v37);
              v19 = *(_QWORD *)(a1 + 200);
              *(_QWORD *)(a1 + 192) = v59;
              *(_QWORD *)(a1 + 208) = v61;
            }
            else
            {
              v59 = *(_QWORD *)(a1 + 192);
            }
            v21 = (__m128 *)((v19 << 6) + v59);
            v22 = v66;
            if ( v66 )
            {
              v23 = _mm_loadh_ps((const double *)&v67);
              v21->m128_i32[2] = v65;
              v24 = v68;
              v21[1] = v23;
              v21[2].m128_u64[0] = (unsigned __int64)v24;
              v22[1] = &v21->m128_u64[1];
              v66 = nullptr;
              v21[2].m128_u64[1] = v69;
              v69 = 0;
              v67 = &v65;
              v68 = &v65;
            }
            else
            {
              v21->m128_i32[2] = 0;
              v21[1].m128_u64[0] = 0;
              v21[1].m128_u64[1] = (unsigned __int64)&v21->m128_u64[1];
              v21[2].m128_u64[0] = (unsigned __int64)&v21->m128_u64[1];
              v21[2].m128_u64[1] = 0;
            }
            v21[3].m128_u64[0] = 0;
            copy_tinfo_t(&v21[3], &v70);
            v21[3].m128_u64[1] = v71;
            ++*(_QWORD *)(a1 + 200);
            clear_tinfo_t(&v70);
            v25 = (_QWORD **)v66;
            if ( v66 )
            {
              do
              {
                sub_367A50(v25[3]);
                v26 = v25;
                v25 = (_QWORD **)v25[2];
                operator delete(v26, 0x28u);
              }
              while ( v25 );
            }
            v27 = *(_QWORD *)(a1 + 224);
            v28 = v11[3];
            v29 = *(_QWORD *)(a1 + 216);
            if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v27 + 1) )
            {
              v45 = qvector_reserve(a1 + 216, v29, v27 + 1, 8);
              *(_QWORD *)(a1 + 216) = v45;
              v29 = v45;
              v27 = *(_QWORD *)(a1 + 224);
            }
            *(_QWORD *)(v29 + 8 * v27) = v28;
            ++*(_QWORD *)(a1 + 224);
          }
          if ( (*v11 & 2) != 0 )
            goto LABEL_28;
          v30 = (_QWORD *)v11[2];
          if ( (*(_BYTE *)v30 & 2) != 0 )
          {
            v32 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFFCLL);
            v33 = *v32;
            if ( (*v32 & 2) == 0 )
            {
              while ( v11 == (_QWORD *)v32[2] )
              {
                v11 = v32;
                v34 = v33 & 0xFFFFFFFFFFFFFFFCLL;
                v33 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v33 & 2) != 0 )
                {
                  v11 = (_QWORD *)v34;
                  if ( v60 != (_QWORD *)v34 )
                    goto LABEL_9;
                  return v72 - __readfsqword(0x28u);
                }
                v32 = (_QWORD *)v34;
              }
            }
            v11 = v32;
            if ( v60 == v32 )
              return v72 - __readfsqword(0x28u);
          }
          else
          {
            do
            {
              v11 = v30;
              v30 = (_QWORD *)v30[1];
            }
            while ( (*(_BYTE *)v30 & 2) == 0 );
LABEL_28:
            if ( v60 == v11 )
              return v72 - __readfsqword(0x28u);
          }
        }
      }
    }
  }
  return v72 - __readfsqword(0x28u);
}
