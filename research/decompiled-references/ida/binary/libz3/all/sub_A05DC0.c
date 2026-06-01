__int64 __fastcall sub_A05DC0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v5; // r13
  _QWORD *v6; // r15
  __int64 result; // rax
  __int64 v10; // rbp
  __int64 *v11; // r13
  __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  int v20; // ebx
  _QWORD *v21; // rax
  __int64 v22; // r13
  __int64 v23; // rsi
  _QWORD *v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned int v28; // r12d
  size_t v29; // rdi
  __int64 v30; // r8
  const __m128i *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  __m128i *v34; // rdx
  const __m128i *i; // rcx
  bool v36; // zf
  __int64 v37; // rax
  __int64 v38; // rbp
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rbx
  const __m128i *v43; // r13
  __int64 v44; // r12
  _DWORD *v45; // rbx
  __m128i v46; // xmm0
  __int64 v47; // rbx
  __m128i *v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rcx
  __m128i *v51; // rcx
  __m128i si128; // xmm3
  unsigned int v53; // r12d
  unsigned int v54; // ecx
  unsigned int v55; // r12d
  unsigned int v56; // ecx
  unsigned int *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rdx
  char **exception; // rbx
  __int64 *v61; // r14
  __int64 *v62; // rsi
  __int64 *v63; // rdi
  _QWORD *v64; // [rsp+0h] [rbp-E8h] BYREF
  _DWORD *v65; // [rsp+8h] [rbp-E0h]
  __m128 v66; // [rsp+10h] [rbp-D8h] BYREF
  __int64 *v67; // [rsp+20h] [rbp-C8h]
  __int64 v68; // [rsp+28h] [rbp-C0h]
  __int64 *v69; // [rsp+30h] [rbp-B8h]
  __int64 v70; // [rsp+38h] [rbp-B0h]
  __int64 v71[4]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v72; // [rsp+60h] [rbp-88h] BYREF
  char v73; // [rsp+68h] [rbp-80h]
  int v74; // [rsp+6Ch] [rbp-7Ch]
  __int64 v75; // [rsp+70h] [rbp-78h]
  int v76; // [rsp+78h] [rbp-70h]
  __int64 v77; // [rsp+80h] [rbp-68h]
  int v78; // [rsp+88h] [rbp-60h]
  const __m128i *v79; // [rsp+90h] [rbp-58h] BYREF
  __m128i v80[5]; // [rsp+98h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD **)(v4 + 8LL * a3);
  v6 = *(_QWORD **)(v4 + 8LL * a2);
  v64 = v5;
  result = v5[1];
  if ( v6[1] != result )
  {
    v10 = sub_15D1F10(*v6);
    result = sub_15D1F10(*v5);
    if ( v10 == result )
    {
      v11 = *(__int64 **)(a4 + 8);
      v68 = *(_QWORD *)(a1 + 16);
      v12 = sub_A039B0(v11, (__int64)"eq-propagate");
      v13 = sub_9986B0(*(_QWORD *)(a4 + 8));
      v14 = v11[1];
      v15 = v13;
      if ( v14 )
        v16 = *(unsigned int *)(v14 - 4);
      else
        v16 = 0;
      v17 = *v11;
      if ( *v11 )
        v18 = *(unsigned int *)(v17 - 4);
      else
        v18 = 0;
      v19 = *(_QWORD *)(a1 + 16);
      v20 = *(_DWORD *)(a1 + 8);
      v69 = (__int64 *)&v72;
      v70 = v19;
      sub_B72D60(&v72, v19, v18, v17, v16, v14);
      v78 = v20;
      v72 = qword_1C6E7C8;
      v79 = nullptr;
      if ( (_DWORD)v15 )
      {
        v21 = (_QWORD *)sub_186B270(0x28u);
        v22 = 16 * v15 + v12;
        v23 = v12;
        v24 = v21 + 1;
        *v21 = 2;
        v79 = (const __m128i *)(v21 + 1);
        v67 = (__int64 *)&v79;
        while ( 1 )
        {
          while ( 1 )
          {
            sub_15D0E50(v24, v23);
            v25 = (__int64)v79;
            v12 += 16;
            v26 = (unsigned int)(v79[-1].m128i_i32[3] + 1);
            v79[-1].m128i_i32[3] = v26;
            if ( v12 == v22 )
              goto LABEL_21;
            v27 = *(_DWORD *)(v25 - 8);
            v23 = v12;
            if ( v27 == (_DWORD)v26 )
              break;
            v24 = (_QWORD *)(16 * v26 + v25);
          }
          v28 = (3 * v27 + 1) >> 1;
          v29 = 16 * v28 + 8;
          if ( 16 * v27 + 8 >= (unsigned int)v29 || v27 >= v28 )
            break;
          v65 = (_DWORD *)v12;
          v23 = v12;
          v30 = sub_186B270(v29);
          v31 = v79;
          v32 = v30 + 8;
          if ( v79 )
          {
            v33 = v79[-1].m128i_u32[3];
            v34 = (__m128i *)(v30 + 8);
            *(_DWORD *)(v30 + 4) = v33;
            for ( i = &v31[v33]; i != v31; ++v34 )
            {
              v36 = v31->m128i_i8[8] == 0;
              *v34 = _mm_loadu_si128(v31);
              v31->m128i_i32[0] = 0;
              if ( !v36 )
                v31->m128i_i8[8] = 0;
              ++v31;
            }
          }
          else
          {
            *(_DWORD *)(v30 + 4) = 0;
          }
          v66.m128_u64[0] = v12;
          v65 = (_DWORD *)v30;
          sub_4EB210(v67);
          v79 = (const __m128i *)v32;
          v37 = (unsigned int)v65[1];
          *v65 = v28;
          v24 = (_QWORD *)(v32 + 16 * v37);
        }
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v71, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v71);
        v63 = v71;
LABEL_44:
        sub_233E40((__int64)v63);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
LABEL_21:
      v66 = _mm_loadh_ps((const double *)&v64);
      v80[0] = (__m128i)v66;
      v72 = (__int64 *)&off_1C579E8;
      nullsub_687(v69, v70);
      v38 = sub_180C100(v68 + 8400, 72);
      *(_BYTE *)(v38 + 8) = v73 & 3 | *(_BYTE *)(v38 + 8) & 0xFC;
      *(_DWORD *)(v38 + 12) = v74;
      *(_QWORD *)(v38 + 16) = v75;
      *(_DWORD *)(v38 + 24) = v76;
      *(_QWORD *)(v38 + 32) = v77;
      *(_QWORD *)v38 = qword_1C6E7C8;
      v39 = v78;
      *(_QWORD *)(v38 + 48) = 0;
      *(_DWORD *)(v38 + 40) = v39;
      if ( !v79 )
      {
        *(__m128i *)(v38 + 56) = _mm_loadu_si128(v80);
        *(_QWORD *)v38 = &off_1C579E8;
        goto LABEL_29;
      }
      v40 = v79[-1].m128i_u32[3];
      LODWORD(v65) = v79[-1].m128i_i32[2];
      v41 = sub_186B270(16LL * (unsigned int)v65 + 8) + 8;
      *(_QWORD *)(v41 - 8) = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v65), _mm_cvtsi32_si128(v40)).m128i_u64[0];
      *(_QWORD *)(v38 + 48) = v41;
      v42 = (__int64)v79;
      v65 = (_DWORD *)v41;
      if ( !v79 || (v43 = &v79[v79[-1].m128i_u32[3]], v79 == v43) )
      {
        *(__m128i *)(v38 + 56) = _mm_loadu_si128(v80);
        *(_QWORD *)v38 = &off_1C579E8;
        v71[0] = v38;
      }
      else
      {
        v44 = v41;
        do
        {
          sub_15D0E50(v44, v42);
          v42 += 16;
          v44 += 16;
        }
        while ( v43 != (const __m128i *)v42 );
        v46 = _mm_loadu_si128(v80);
        v65 = *(_DWORD **)(v38 + 48);
        v45 = v65;
        *(_QWORD *)v38 = &off_1C579E8;
        *(__m128i *)(v38 + 56) = v46;
        v71[0] = v38;
        if ( !v45 )
          goto LABEL_29;
      }
      if ( *(v65 - 1) )
        sub_98C690((_QWORD *)(v68 + 8600), v71);
LABEL_29:
      v72 = qword_1C6E7C8;
      sub_4EB210((__int64 *)&v79);
      result = v64[1];
      if ( v6[1] == result )
        return result;
      v47 = *(_QWORD *)(a1 + 16);
      v48 = *(__m128i **)(v47 + 8760);
      if ( v48 )
      {
        v49 = v48[-1].m128i_u32[3];
        if ( v49 == v48[-1].m128i_i32[2] )
        {
          v53 = 3 * v49 + 1;
          v54 = v53 & 0xFFFFFFFE;
          v55 = v53 >> 1;
          v56 = 8 * (v55 + v54) + 8;
          if ( 24 * v49 + 8 >= v56 || v49 >= v55 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_98B3B0(v69, "Overflow encountered when expanding vector");
            v61 = v69;
            v62 = v69;
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v62);
            v63 = v61;
            goto LABEL_44;
          }
          v57 = (unsigned int *)sub_186B300(&v48[-1].m128i_u64[1], v56);
          v58 = v57[1];
          v48 = (__m128i *)(v57 + 2);
          *(_QWORD *)(v47 + 8760) = v57 + 2;
          *v57 = v55;
          LODWORD(v57) = v58;
          v51 = (__m128i *)((char *)v48 + 24 * v58);
          result = (unsigned int)((_DWORD)v57 + 1);
        }
        else
        {
          v50 = v49;
          result = v49 + 1;
          v51 = (__m128i *)((char *)v48 + 24 * v50);
        }
      }
      else
      {
        v59 = (_QWORD *)sub_186B270(0x38u);
        *v59 = 2;
        result = 1;
        v48 = (__m128i *)(v59 + 1);
        *(_QWORD *)(v47 + 8760) = v48;
        v51 = v48;
      }
      si128 = _mm_load_si128((const __m128i *)&v66);
      v51[1].m128i_i64[0] = v38 | 3;
      *v51 = si128;
      v48[-1].m128i_i32[3] = result;
    }
  }
  return result;
}

