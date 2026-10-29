__int64 __fastcall sub_19075A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        __int64 a12)
{
  unsigned __int8 v18; // al
  int v19; // r9d
  unsigned int v20; // edx
  char v21; // al
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int8 v28; // al
  int v29; // edx
  __int64 v30; // rbp
  unsigned int v32; // ecx
  bool v33; // dl
  unsigned __int64 v34; // rbp
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // r12
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 *v45; // rbp
  int v46; // eax
  unsigned int v47; // r12d
  char *v48; // rax
  char *v49; // r9
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // edx
  __int64 v53; // rdi
  int v54; // ecx
  unsigned int v55; // edx
  __int64 *v56; // rsi
  __int64 v57; // r8
  _QWORD *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // r12
  _QWORD *v61; // rax
  int v62; // r9d
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  int v67; // esi
  int v68; // r9d
  __int64 v69; // r8
  __int64 *v70; // rax
  __int64 v71; // rdx
  unsigned int v72; // esi
  unsigned int v73; // edi
  __int64 v74; // rcx
  __m128i si128; // xmm1
  __int64 v76; // [rsp+8h] [rbp-70h] BYREF
  __int64 v77; // [rsp+10h] [rbp-68h]
  unsigned int v78; // [rsp+1Ch] [rbp-5Ch]
  __int64 *v79; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v80; // [rsp+28h] [rbp-50h] BYREF
  __m128i v81[4]; // [rsp+30h] [rbp-48h] BYREF

  v76 = a9;
  v77 = a10;
  v18 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)v18 - 40 <= 6 || (v19 = 0, v18 == 52) )
  {
    v20 = *(_DWORD *)(a5 + 8);
    v80 = nullptr;
    v81[0].m128i_i64[0] = 0;
    v19 = (unsigned __int8)sub_1903850(a1, a2, v20, 0, 0, 0, (__int64 *)&v80, v81[0].m128i_i64, nullptr) ^ 1;
  }
  v78 = v19;
  v21 = sub_18C0FD0(a1, a2);
  v22 = sub_C0C310(*(_QWORD **)(a1 + 248), v76, v77, a11, a2, v78, a5, a3, a4, a6, a12, v21);
  v23 = v22;
  sub_1911920(a1, v22, 0);
  v27 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v27 + 16) == 26
    || (v51 = *(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v51 + 16) == 26)
    && (v27 = sub_F63050(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), v22, v51, v24)) != 0 )
  {
    if ( ((*(_BYTE *)(v27 + 19) >> 1) & 0xFu) - 9 <= 1 )
    {
      v63 = sub_18B0530(a1, *(_DWORD *)(a5 + 8), v27, a7, a8);
      if ( v63 )
      {
        v64 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
        v65 = ((unsigned __int8)v64 | (unsigned __int8)a3) & 7;
        if ( (v64 & 8) != 0
          && (v65 = a3 & 7
                  | *(__int64 *)((char *)&qword_18
                               + (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
                  | *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 7LL,
              (*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
             & 0xFFFFFFFFFFFFFFF8LL) != 0) )
        {
          v66 = sub_A70C40(*(_QWORD *)(a1 + 248), v63, v65);
        }
        else
        {
          v66 = v65 | v63 & 0xFFFFFFFFFFFFFFF0LL;
        }
        *(_QWORD *)(v22 + 8) = v66;
      }
    }
  }
  v28 = *(_BYTE *)(a2 + 28) & 0x7F;
  v29 = v28;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 0x10) != 0 && (unsigned int)v28 - 40 <= 6 )
  {
    if ( (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 8) == 0 )
      goto LABEL_9;
    if ( (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
        & 7) != 3 )
      goto LABEL_9;
    v32 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
    v33 = v32 == 3 || v32 <= 1;
    if ( v33 )
      goto LABEL_9;
    v34 = *(_QWORD *)(a1 + 264);
    if ( (*(_QWORD *)v22 & 0x80000LL) != 0 )
    {
      v35 = *(_QWORD *)(v22 + 32);
      if ( v35 )
      {
        v76 = *(_QWORD *)(v22 + 40);
        v81[0] = (__m128i)_mm_loadh_ps((const double *)&v76);
        v36 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v36 )
        {
          v81[0].m128i_i64[0] = v36;
          while ( (*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v33 = 1;
            v36 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v33 )
            v81[0].m128i_i64[0] = v36;
        }
        v37 = (unsigned int)sub_E90530(v81[0].m128i_i64);
      }
      else
      {
        v37 = 0;
      }
    }
    else
    {
      v37 = *(unsigned int *)(v22 + 4);
    }
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v34 + 32), 0x1968u, v37, v34, v25, v26) == 1 )
      goto LABEL_30;
    v38 = *(unsigned int *)(a1 + 40);
    v39 = 0;
    if ( (_DWORD)v38 )
      v39 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v38 - 8);
    sub_15EE8E0(v81, v22);
    if ( (unsigned __int8)sub_18C70B0(v39 + 760, (unsigned __int64 *)v81, &v79) )
    {
      v42 = v79;
      v43 = v22 | 2;
      v44 = *((unsigned int *)v79 + 6);
      v45 = v79 + 2;
      if ( v44 + 1 > (unsigned __int64)*((unsigned int *)v79 + 7) )
      {
        sub_2237220(v79 + 2, v79 + 4, v44 + 1, 8);
        v44 = *((unsigned int *)v42 + 6);
      }
LABEL_29:
      *(_QWORD *)(*v45 + 8 * v44) = v43;
      ++*((_DWORD *)v45 + 2);
LABEL_30:
      v28 = *(_BYTE *)(a2 + 28) & 0x7F;
      v29 = v28;
      goto LABEL_31;
    }
    v70 = v79;
    v80 = v79;
    v71 = (unsigned int)((*(_DWORD *)(v39 + 760) >> 1) + 1);
    if ( (*(_BYTE *)(v39 + 760) & 1) != 0 )
    {
      v73 = 24;
      v72 = 8;
    }
    else
    {
      v72 = *(_DWORD *)(v39 + 776);
      v73 = 3 * v72;
    }
    v74 = (unsigned int)(4 * v71);
    if ( (unsigned int)v74 >= v73 )
    {
      v72 *= 2;
    }
    else
    {
      v74 = v72 >> 3;
      if ( v72 - ((_DWORD)v71 + *(_DWORD *)(v39 + 764)) > (unsigned int)v74 )
        goto LABEL_68;
    }
    sub_15EF470((unsigned __int8 *)(v39 + 760), v72, v71, v74, v40, v41);
    sub_18C70B0(v39 + 760, (unsigned __int64 *)v81, &v80);
    v70 = v80;
    LODWORD(v71) = (*(_DWORD *)(v39 + 760) >> 1) + 1;
LABEL_68:
    *(_DWORD *)(v39 + 760) = *(_DWORD *)(v39 + 760) & 1 | (2 * v71);
    if ( *v70 || v70[1] )
      --*(_DWORD *)(v39 + 764);
    si128 = _mm_load_si128(v81);
    v45 = v70 + 2;
    v70[2] = (__int64)(v70 + 4);
    v43 = v23 | 2;
    *(__m128i *)v70 = si128;
    v70[3] = 0x400000000LL;
    v44 = 0;
    goto LABEL_29;
  }
LABEL_31:
  if ( (unsigned int)(v29 - 49) <= 2 )
  {
    if ( v28 != 32 )
    {
      v30 = a2;
      goto LABEL_34;
    }
LABEL_10:
    v30 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL * *(unsigned int *)(a2 + 64) - 8);
    if ( !v30 )
      return v23;
LABEL_34:
    v46 = *(_DWORD *)(a1 + 3936);
    v81[0].m128i_i64[0] = v30;
    if ( !v46 )
    {
      v47 = *(_DWORD *)(a1 + 3960);
      v48 = (char *)sub_18BC2E0(*(_QWORD **)(a1 + 3952), *(_QWORD *)(a1 + 3952) + 8LL * v47, v81[0].m128i_i64);
      if ( v49 != v48 )
      {
        if ( v49 != v48 + 8 )
        {
          memmove(v48, v48 + 8, v49 - (v48 + 8));
          v47 = *(_DWORD *)(a1 + 3960);
        }
        *(_DWORD *)(a1 + 3960) = v47 - 1;
      }
      goto LABEL_39;
    }
    v52 = *(_DWORD *)(a1 + 3944);
    v53 = *(_QWORD *)(a1 + 3928);
    if ( v52 )
    {
      v54 = v52 - 1;
      v55 = (v52 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
      v56 = (__int64 *)(v53 + 8LL * v55);
      v57 = *v56;
      if ( *v56 == v30 )
      {
LABEL_50:
        *v56 = -8192;
        v58 = *(_QWORD **)(a1 + 3952);
        *(_DWORD *)(a1 + 3936) = v46 - 1;
        v59 = *(unsigned int *)(a1 + 3960);
        ++*(_DWORD *)(a1 + 3940);
        v60 = (__int64)&v58[v59];
        v61 = sub_18BC2E0(v58, v60, v81[0].m128i_i64);
        if ( (_QWORD *)v60 != v61 + 1 )
        {
          memmove(v61, v61 + 1, v60 - (_QWORD)(v61 + 1));
          v62 = *(_DWORD *)(a1 + 3960);
        }
        *(_DWORD *)(a1 + 3960) = v62 - 1;
        goto LABEL_39;
      }
      v67 = 1;
      if ( v57 != -4096 )
      {
        do
        {
          v68 = v67 + 1;
          v55 = v54 & (v67 + v55);
          v56 = (__int64 *)(v53 + 8LL * v55);
          v69 = *v56;
          if ( *v56 == v30 )
            goto LABEL_50;
          v67 = v68;
        }
        while ( v69 != -4096 );
      }
    }
LABEL_39:
    if ( (*(_BYTE *)(v30 + 68) & 1) != 0 )
      *(_BYTE *)(v23 + 1) = *(_BYTE *)(v23 + 1) & 0xC7 | 8;
    v28 = *(_BYTE *)(a2 + 28) & 0x7F;
    goto LABEL_42;
  }
LABEL_9:
  if ( v28 == 32 )
    goto LABEL_10;
LABEL_42:
  if ( v28 == 52 )
  {
    v50 = *(_QWORD *)(a2 + 64);
    if ( v50 )
      *(_BYTE *)(v23 + 1) = *(_BYTE *)(v50 + 1) & 0x38 | *(_BYTE *)(v23 + 1) & 0xC7;
  }
  return v23;
}
