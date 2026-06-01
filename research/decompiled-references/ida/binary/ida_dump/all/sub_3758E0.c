unsigned __int64 __fastcall sub_3758E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  unsigned int v7; // edx
  __int64 v8; // rax
  _QWORD *v9; // r13
  __int64 v10; // rdi
  __int32 *v11; // rax
  __int32 *v12; // rdx
  __int32 *v13; // rcx
  __int32 *v14; // rdx
  __int32 *v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned __int64 v18; // r15
  __m128 *v19; // rbp
  _QWORD *v20; // rax
  __m128 v21; // xmm0
  __int32 *v22; // rdx
  _QWORD **v23; // rbp
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rsi
  _QWORD *v28; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rbp
  __int64 v37; // rax
  __m128 v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r15
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rdi
  struct _Unwind_Exception *v46; // rbp
  __int64 v47; // r12
  __int64 i; // r15
  __int64 v49; // rdi
  __int64 j; // r13
  __int64 v51; // r14
  __int64 v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // [rsp+0h] [rbp-D0h]
  __int64 v55; // [rsp+10h] [rbp-C0h]
  _QWORD *v56; // [rsp+20h] [rbp-B0h]
  __int64 v57; // [rsp+30h] [rbp-A0h]
  __int64 v58; // [rsp+38h] [rbp-98h]
  __int64 v59; // [rsp+40h] [rbp-90h]
  char v60[8]; // [rsp+48h] [rbp-88h] BYREF
  __int32 v61; // [rsp+50h] [rbp-80h] BYREF
  void *v62; // [rsp+58h] [rbp-78h]
  __int32 *v63; // [rsp+60h] [rbp-70h] BYREF
  __int32 *v64; // [rsp+68h] [rbp-68h]
  unsigned __int64 v65; // [rsp+70h] [rbp-60h]
  __int64 v66; // [rsp+78h] [rbp-58h]
  unsigned __int64 v67; // [rsp+80h] [rbp-50h]
  unsigned __int64 v68; // [rsp+90h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_4EBE48;
  *(_QWORD *)(a1 + 8) = 4278190084LL;
  *(_QWORD *)(a1 + 40) = a3;
  v5 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  v6 = _mm_loadl_epi64(&off_4E6460);
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 72) = -1;
  v58 = a1 + 80;
  v59 = a1 + 176;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)&off_4E6440);
  do
  {
    *v5 = 0;
    v5 += 3;
    *((_OWORD *)v5 - 1) = 0;
  }
  while ( v5 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v7 = *(_DWORD *)(a1 + 12);
  if ( ((v7 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v44 = interr();
        v45 = *(_QWORD **)(v3 + 16);
        v46 = (struct _Unwind_Exception *)v44;
        sub_36BBD0(v45);
        sub_374B60((__int64)v60);
        if ( *(_QWORD *)(a1 + 216) )
        {
          *(_QWORD *)(a1 + 224) = 0;
          qfree();
        }
        if ( *(_QWORD *)(a1 + 192) )
        {
          v47 = *(_QWORD *)(a1 + 200);
          for ( i = 0; ; ++i )
          {
            v49 = *(_QWORD *)(a1 + 192);
            if ( v47 == i )
              break;
            clear_tinfo_t();
            for ( j = *(_QWORD *)(v49 + (i << 6) + 16); j; j = v51 )
            {
              sub_36BBD0(*(_QWORD **)(j + 24));
              v51 = *(_QWORD *)(j + 16);
              operator delete((void *)j, 0x28u);
            }
          }
          *(_QWORD *)(a1 + 200) = 0;
          qfree();
        }
        *(_QWORD *)a1 = &unk_4EBE48;
        v52 = v59;
        while ( 1 )
        {
          v53 = *(_QWORD *)(v52 - 24);
          v52 -= 24;
          if ( v53 )
          {
            *(_QWORD *)(v52 + 8) = 0;
            qfree();
          }
          if ( v52 == v58 )
            _Unwind_Resume(v46);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v7 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v7 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)a1 = off_4E6358;
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v8 = *(_QWORD *)(a2 + 1128);
  *(_QWORD *)(a1 + 184) = a2;
  v56 = *(_QWORD **)(v8 + 8);
  if ( v56 )
  {
    if ( *(_QWORD *)(v8 + 16) )
    {
      v9 = (_QWORD *)v56[1];
      if ( v56 != v9 )
      {
        while ( 1 )
        {
LABEL_9:
          if ( (v9[10] & 0x3F) != 0x30 )
          {
            v65 = 0;
            v61 = 0;
            v63 = &v61;
            v64 = &v61;
            v10 = v9[6];
            v62 = nullptr;
            if ( v10 )
            {
              v11 = (__int32 *)sub_36BFF0(v10, (__int64)&v61);
              v12 = v11;
              do
              {
                v13 = v12;
                v12 = *((__int32 **)v12 + 2);
              }
              while ( v12 );
              v63 = v13;
              v14 = v11;
              do
              {
                v15 = v14;
                v14 = *((__int32 **)v14 + 3);
              }
              while ( v14 );
              v16 = v9[9];
              v64 = v15;
              v62 = v11;
              v65 = v16;
            }
            v66 = 0;
            copy_tinfo_t();
            v17 = *(_QWORD *)(a1 + 200);
            v18 = *(_QWORD *)(a1 + 208);
            v67 = v9[11];
            if ( v18 < v17 + 1 )
            {
              v33 = qvector_reserve();
              v34 = *(_QWORD *)(a1 + 208);
              v55 = v33;
              *(_QWORD *)(a1 + 208) = v18;
              v35 = *(_QWORD *)(a1 + 192);
              v57 = v34;
              v54 = *(_QWORD *)(a1 + 200) - 1LL;
              if ( v54 >= 0 )
              {
                v36 = v33 + 8;
                do
                {
                  v37 = *(_QWORD *)(v35 + 16);
                  if ( v37 )
                  {
                    v38 = _mm_loadh_ps((const double *)(v35 + 24));
                    *(_DWORD *)v36 = *(_DWORD *)(v35 + 8);
                    v39 = *(_QWORD *)(v35 + 32);
                    *(__m128 *)(v36 + 8) = v38;
                    *(_QWORD *)(v36 + 24) = v39;
                    *(_QWORD *)(v37 + 8) = v36;
                    v40 = *(_QWORD *)(v35 + 40);
                    *(_QWORD *)(v35 + 16) = 0;
                    *(_QWORD *)(v36 + 32) = v40;
                    *(_QWORD *)(v35 + 24) = v35 + 8;
                    *(_QWORD *)(v35 + 32) = v35 + 8;
                    *(_QWORD *)(v35 + 40) = 0;
                  }
                  else
                  {
                    *(_DWORD *)v36 = 0;
                    *(_QWORD *)(v36 + 8) = 0;
                    *(_QWORD *)(v36 + 16) = v36;
                    *(_QWORD *)(v36 + 24) = v36;
                    *(_QWORD *)(v36 + 32) = 0;
                  }
                  *(_QWORD *)(v36 + 40) = 0;
                  copy_tinfo_t();
                  *(_DWORD *)(v36 + 48) = *(_DWORD *)(v35 + 56);
                  *(_DWORD *)(v36 + 52) = *(_DWORD *)(v35 + 60);
                  clear_tinfo_t();
                  v41 = *(_QWORD *)(v35 + 16);
                  while ( v41 )
                  {
                    sub_36BBD0(*(_QWORD **)(v41 + 24));
                    v42 = (void *)v41;
                    v41 = *(_QWORD *)(v41 + 16);
                    operator delete(v42, 0x28u);
                  }
                  --v54;
                  v35 += 64;
                  v36 += 64;
                }
                while ( v54 != -1 );
              }
              qfree();
              v17 = *(_QWORD *)(a1 + 200);
              *(_QWORD *)(a1 + 192) = v55;
              *(_QWORD *)(a1 + 208) = v57;
            }
            else
            {
              v55 = *(_QWORD *)(a1 + 192);
            }
            v19 = (__m128 *)((v17 << 6) + v55);
            v20 = v62;
            if ( v62 )
            {
              v21 = _mm_loadh_ps((const double *)&v63);
              v19->m128_i32[2] = v61;
              v22 = v64;
              v19[1] = v21;
              v19[2].m128_u64[0] = (unsigned __int64)v22;
              v20[1] = &v19->m128_u64[1];
              v62 = nullptr;
              v19[2].m128_u64[1] = v65;
              v65 = 0;
              v63 = &v61;
              v64 = &v61;
            }
            else
            {
              v19->m128_i32[2] = 0;
              v19[1].m128_u64[0] = 0;
              v19[1].m128_u64[1] = (unsigned __int64)&v19->m128_u64[1];
              v19[2].m128_u64[0] = (unsigned __int64)&v19->m128_u64[1];
              v19[2].m128_u64[1] = 0;
            }
            v19[3].m128_u64[0] = 0;
            copy_tinfo_t();
            v19[3].m128_u64[1] = v67;
            ++*(_QWORD *)(a1 + 200);
            clear_tinfo_t();
            v23 = (_QWORD **)v62;
            if ( v62 )
            {
              do
              {
                sub_36BBD0(v23[3]);
                v24 = v23;
                v23 = (_QWORD **)v23[2];
                operator delete(v24, 0x28u);
              }
              while ( v23 );
            }
            v25 = *(_QWORD *)(a1 + 224);
            v26 = v9[3];
            v27 = *(_QWORD *)(a1 + 216);
            if ( *(_QWORD *)(a1 + 232) < (unsigned __int64)(v25 + 1) )
            {
              v43 = qvector_reserve();
              *(_QWORD *)(a1 + 216) = v43;
              v27 = v43;
              v25 = *(_QWORD *)(a1 + 224);
            }
            *(_QWORD *)(v27 + 8 * v25) = v26;
            ++*(_QWORD *)(a1 + 224);
          }
          if ( (*v9 & 2) != 0 )
            goto LABEL_28;
          v28 = (_QWORD *)v9[2];
          if ( (*(_BYTE *)v28 & 2) != 0 )
          {
            v30 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
            v31 = *v30;
            if ( (*v30 & 2) == 0 )
            {
              while ( v9 == (_QWORD *)v30[2] )
              {
                v9 = v30;
                v32 = v31 & 0xFFFFFFFFFFFFFFFCLL;
                v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v31 & 2) != 0 )
                {
                  v9 = (_QWORD *)v32;
                  if ( v56 != (_QWORD *)v32 )
                    goto LABEL_9;
                  return v68 - __readfsqword(0x28u);
                }
                v30 = (_QWORD *)v32;
              }
            }
            v9 = v30;
            if ( v56 == v30 )
              return v68 - __readfsqword(0x28u);
          }
          else
          {
            do
            {
              v9 = v28;
              v28 = (_QWORD *)v28[1];
            }
            while ( (*(_BYTE *)v28 & 2) == 0 );
LABEL_28:
            if ( v56 == v9 )
              return v68 - __readfsqword(0x28u);
          }
        }
      }
    }
  }
  return v68 - __readfsqword(0x28u);
}
