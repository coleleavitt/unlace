void __fastcall sub_14FAF70(const __m128i *a1, __int64 *a2, int a3, unsigned int a4, __m128i a5, __m128 a6)
{
  __int8 v9; // al
  __int16 v10; // ax
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  _BYTE *v15; // r14
  _BYTE *v16; // r13
  _BYTE *v17; // rdi
  const __m128i *v18; // r13
  __int64 *v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rax
  __m128i v25; // xmm0
  int v26; // eax
  __int64 *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdi
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  __m128i *v32; // r10
  __m128i *v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int8 *v44; // r13
  __m128i *v45; // [rsp+0h] [rbp-4C8h]
  __int64 v46; // [rsp+0h] [rbp-4C8h]
  int v47; // [rsp+1Ch] [rbp-4ACh] BYREF
  __int64 v48; // [rsp+28h] [rbp-4A0h] BYREF
  _QWORD v49[4]; // [rsp+30h] [rbp-498h] BYREF
  __m128i *v50; // [rsp+50h] [rbp-478h] BYREF
  __int8 v51; // [rsp+58h] [rbp-470h]
  const __m128i *v52; // [rsp+60h] [rbp-468h]
  int v53; // [rsp+68h] [rbp-460h]
  __int16 v54; // [rsp+6Ch] [rbp-45Ch]
  __int64 (__fastcall *v55)(__int64); // [rsp+70h] [rbp-458h]
  __int64 v56; // [rsp+78h] [rbp-450h]
  __int64 v57; // [rsp+80h] [rbp-448h]
  _WORD v58[40]; // [rsp+90h] [rbp-438h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-3E8h] BYREF
  _BYTE v60[256]; // [rsp+F0h] [rbp-3D8h] BYREF
  _DWORD v61[74]; // [rsp+1F0h] [rbp-2D8h] BYREF
  __int64 v62; // [rsp+318h] [rbp-1B0h]
  __int64 v63; // [rsp+320h] [rbp-1A8h] BYREF
  _BYTE *v64; // [rsp+328h] [rbp-1A0h]
  __int64 v65; // [rsp+330h] [rbp-198h]
  _BYTE v66[320]; // [rsp+338h] [rbp-190h] BYREF
  __int64 v67; // [rsp+478h] [rbp-50h]
  char v68; // [rsp+480h] [rbp-48h]

  v47 = a3;
  ptr[0] = v60;
  ptr[1] = (void *)0x2000000000LL;
  sub_146B5E0(&v48, (__int64)a1, 0x28u, 1, 0);
  v52 = a1;
  v50 = (__m128i *)&a1[122];
  v9 = a1[122].m128i_i8[0];
  v53 = 1638424;
  v51 = v9;
  v55 = sub_1478A90;
  v10 = a1[2].m128i_i16[0];
  a1[122].m128i_i8[0] = 1;
  v54 = 63;
  v56 = 0;
  v57 = 0;
  if ( v10 == 24 )
  {
    if ( (unsigned int)a1[5].m128i_u16[6] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
      sub_1568800(&v50);
    else
      LODWORD(v57) = sub_1478A90((__int64)a1);
    v10 = a1[2].m128i_i16[0];
  }
  for ( ; v10 != 25 && v10 != 1 && (unsigned __int16)(v10 - 456) > 2u && v10 != 460; v10 = a1[2].m128i_i16[0] )
  {
    switch ( v10 )
    {
      case 63:
        sub_156E1F0(a1, 2, 0);
        break;
      case 73:
        v18 = a1 + 1;
        v19 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v19, a1[1].m128i_i32);
        if ( a1[2].m128i_i16[0] == 3 )
        {
          v41 = a1->m128i_i64[1];
          if ( *(_QWORD *)(v41 + 760) )
          {
            *(_BYTE *)(v41 + 968) = 1;
            *(_BYTE *)(*(_QWORD *)(v41 + 48) + 6LL) = 1;
          }
          v42 = a1[6].m128i_i64[0];
          a1[2].m128i_i16[0] = 1;
          sub_17113E0(*(_QWORD *)(v42 + 656), *(_QWORD *)(v42 + 608));
          goto LABEL_9;
        }
        v20 = sub_13D0F00((__int64)a1[1].m128i_i64);
        if ( v20 > 0x14 )
          goto LABEL_42;
        v21 = 1LL << v20;
        if ( (v21 & 0x100B00) == 0 )
        {
          if ( (v21 & 0x20) != 0 )
          {
            sub_1564840(v61, a1, &a1[1], 1772);
            sub_AEA040((__int64)v61);
            v23 = a1->m128i_i64[1];
            --a1[1].m128i_i32[0];
            a1[2].m128i_i16[0] = 73;
            a1[1].m128i_i32[1] = 1;
            if ( *(_DWORD *)(v23 + 1012) )
            {
              v24 = operator new[](0x18u);
              v25 = _mm_loadu_si128(a1 + 1);
              *(_DWORD *)(v24 + 16) = a1[2].m128i_i32[0];
              *(__m128i *)v24 = v25;
              sub_14368B0(v23, (char *)v24, 1, 1u, 1u, 1u);
            }
            else
            {
              sub_1417F90((_QWORD *)v23);
              v28 = *(unsigned int *)(v23 + 2912);
              v29 = v23 + 2904;
              v30 = *(_QWORD *)(v23 + 2904);
              v31 = 24 * v28;
              v32 = (__m128i *)(v30 + 24LL * *(_QWORD *)(v23 + 2944));
              v33 = (__m128i *)(v30 + 24 * v28);
              if ( v32 == v33 )
              {
                sub_141B840(v29, a1 + 1);
              }
              else
              {
                v34 = v28 + 1;
                if ( v34 > *(unsigned int *)(v23 + 2916) )
                {
                  v43 = v23 + 2920;
                  v46 = 24LL * *(_QWORD *)(v23 + 2944);
                  if ( v30 > (unsigned __int64)v18 || v33 <= v18 )
                  {
                    sub_2237220(v29, v43, v34, 24);
                    v30 = *(_QWORD *)(v23 + 2904);
                  }
                  else
                  {
                    v44 = &v18->m128i_i8[-v30];
                    sub_2237220(v29, v43, v34, 24);
                    v30 = *(_QWORD *)(v23 + 2904);
                    v18 = (const __m128i *)&v44[v30];
                  }
                  v31 = 24LL * *(unsigned int *)(v23 + 2912);
                  v32 = (__m128i *)(v30 + v46);
                  v33 = (__m128i *)(v30 + v31);
                }
                *v33 = _mm_loadu_si128((const __m128i *)(v30 + v31 - 24));
                v33[1].m128i_i64[0] = *(_QWORD *)(v30 + v31 - 8);
                v35 = *(_QWORD *)(v23 + 2904);
                v36 = *(_DWORD *)(v23 + 2912);
                v37 = 24LL * v36;
                if ( v32 != (__m128i *)(v35 + v37 - 24) )
                {
                  v45 = v32;
                  memmove(&v32[1].m128i_u64[1], v32, v35 + v37 - 24 - (_QWORD)v32);
                  v36 = *(_DWORD *)(v23 + 2912);
                  v35 = *(_QWORD *)(v23 + 2904);
                  v32 = v45;
                }
                v38 = v36 + 1;
                *(_DWORD *)(v23 + 2912) = v38;
                if ( v32 <= v18 && (unsigned __int64)v18 < v35 + 24 * v38 )
                  v18 = (const __m128i *)((char *)v18 + 24);
                *v32 = _mm_loadu_si128(v18);
                v32[1].m128i_i32[0] = v18[1].m128i_i32[0];
              }
            }
            v11 = 1;
            goto LABEL_8;
          }
LABEL_42:
          sub_1564840(v61, a1, &a1[1], 1764);
          sub_AEA040((__int64)v61);
          continue;
        }
        v26 = sub_13D0F00((__int64)a1[1].m128i_i64);
        v27 = (__int64 *)a1->m128i_i64[1];
        v47 = v26;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v27, a1[1].m128i_i32);
        break;
      case 3:
        v39 = a1->m128i_i64[1];
        if ( *(_QWORD *)(v39 + 760) )
        {
          *(_BYTE *)(v39 + 968) = 1;
          *(_BYTE *)(*(_QWORD *)(v39 + 48) + 6LL) = 1;
        }
        v40 = a1[6].m128i_i64[0];
        a1[2].m128i_i16[0] = 1;
        sub_172A9A0(*(_QWORD *)(v40 + 656), *(_QWORD *)(v40 + 608), 4);
        goto LABEL_9;
      case 166:
      case 119:
        v61[0] = 0;
        sub_14A4C70((__int64)a1, v61);
        break;
      default:
        v49[0] = a1;
        v49[2] = ptr;
        v49[1] = &v47;
        sub_147A4A0((__int64)v61, (__int64)&a1[31].m128i_i64[1]);
        v13 = a1[6].m128i_i64[0];
        v67 = 0;
        v64 = v66;
        v62 = v13;
        v63 = 0;
        v14 = *(_QWORD *)(v13 + 512);
        v65 = 0x400000000LL;
        *(_QWORD *)(v13 + 512) = &v63;
        v67 = v14;
        v68 = 0;
        sub_1494F10(
          (__int64)a1,
          (__int64)v61,
          (__int64 (__fastcall *)(__int64, unsigned __int8 *))sub_14F3A70,
          (__int64)v49,
          0,
          a5,
          a6);
        if ( a1[2].m128i_i16[0] == 63 )
        {
          v22 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v22, a1[1].m128i_i32);
        }
        else
        {
          sub_1564840(v58, a1, &a1[1], 1647);
          sub_AEA040((__int64)v58);
          v58[0] = 25;
          sub_15680D0(a1, v58, 1, 3);
        }
        if ( !v68 )
        {
          sub_1818070(v62, v67, 0);
          v68 = 1;
        }
        v15 = v64;
        v16 = &v64[80 * (unsigned int)v65];
        if ( v64 != v16 )
        {
          do
          {
            v17 = v15;
            v15 += 80;
            sub_15B6850(v17);
          }
          while ( v16 != v15 );
          v16 = v64;
        }
        if ( v16 != v66 )
          free(v16);
        sub_147A5F0((__int64)v61);
        break;
    }
  }
  v11 = 0;
LABEL_8:
  sub_14FAEB0((__int64)a1, a2, a4, (__int64)&v50, (__int64)ptr, v11);
LABEL_9:
  v12 = v48;
  v50->m128i_i8[0] = v51;
  if ( v12 )
    sub_1564F70(v12);
  if ( ptr[0] != v60 )
    free(ptr[0]);
}
