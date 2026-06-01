__int64 __fastcall sub_C209D0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r13
  char v12; // al
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  char *v17; // rdx
  char *v18; // rax
  __int64 v19; // rax
  char v20; // r11
  __int64 v21; // rbx
  unsigned int v22; // eax
  unsigned __int8 **v23; // rax
  unsigned __int8 **v24; // rbx
  void *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // eax
  unsigned int v34; // ecx
  bool v35; // cc
  __int64 v36; // rax
  unsigned int v37; // eax
  __int64 v38; // rax
  char *v39; // rdx
  char *v40; // rax
  char v41; // cl
  void *v42; // r12
  __int64 v43; // rbp
  __int64 v44; // rbx
  char v45; // r15
  char v46; // al
  __int64 v47; // r15
  unsigned int v48; // eax
  unsigned __int8 **v49; // rax
  unsigned __int8 **v50; // rbp
  __int64 v52; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v53; // [rsp+8h] [rbp-F0h]
  __int64 v54; // [rsp+10h] [rbp-E8h]
  char v55; // [rsp+10h] [rbp-E8h]
  __int64 v56; // [rsp+18h] [rbp-E0h]
  char v57; // [rsp+27h] [rbp-D1h]
  void *v58; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v59; // [rsp+38h] [rbp-C0h]
  char v60; // [rsp+3Ch] [rbp-BCh]
  void *v61; // [rsp+40h] [rbp-B8h] BYREF
  unsigned int v62; // [rsp+48h] [rbp-B0h]
  char v63; // [rsp+4Ch] [rbp-ACh]
  void *ptr; // [rsp+60h] [rbp-98h] BYREF
  __m128i si128; // [rsp+68h] [rbp-90h]
  char v66[8]; // [rsp+78h] [rbp-80h] BYREF
  void *v67; // [rsp+80h] [rbp-78h] BYREF
  signed __int64 v68; // [rsp+88h] [rbp-70h]
  __int64 v69; // [rsp+90h] [rbp-68h] BYREF

  v5 = a5;
  v9 = *(_QWORD *)(*a2 + 16);
  v10 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 13 || ((*(_WORD *)(v10 + 18) >> 3) & 0x1FF) != 0x1E8 )
  {
    v11 = sub_AAE470(v9, a3);
    v12 = sub_F58100(a3);
    v14 = a4;
    if ( v12 )
    {
      v36 = sub_A62D20(*(_QWORD **)(*a2 + 16), a3 & 0xFFFFFFFFFFFFFFF0LL);
      v37 = sub_21F9130(v36);
      v14 = a4;
      v11 = v37 >> 3;
    }
    v15 = v11 + v14;
    v16 = a2[1];
    ptr = v66;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
    if ( v11 + v14 == v14 )
    {
LABEL_23:
      v59 = sub_A97D20(
              *(_QWORD *)(*a2 + 16),
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 18648LL) & 0xFFFFFFFFFFFFFFF0LL))
          * v11;
      if ( v59 > 0x40 )
        sub_2205470(&v58, 0, 0);
      else
        v58 = nullptr;
      v26 = ptr;
      v60 = 1;
      sub_220BA80(&v58, ptr, si128.m128i_u32[0]);
      v53 = a3 & 0xFFFFFFFFFFFFFFF0LL;
      if ( !sub_C1C400(a3, (__int64)v26, v27, v28, v29) )
      {
        if ( (unsigned __int8)sub_F58100(a3) )
        {
          v44 = sub_A62D20(*(_QWORD **)(*a2 + 16), v53);
          if ( v44 == sub_21F90D0() )
            sub_21FFDA0(&v61, v44, &v58);
          else
            sub_21FF7D0(&v61, v44, &v58);
          sub_C18B90((__int64)&v67, &v61);
          sub_A4F8A0(a1, (__int64)&v67);
          v35 = (unsigned int)v67 <= 1;
          *(_BYTE *)(a1 + 56) = 1;
          if ( !v35 )
            sub_A4F8E0((int *)&v67);
          sub_9955A0(&v61);
        }
        else
        {
          sub_C13C30(*a2, a2[2], v53);
          *(_BYTE *)(a1 + 56) = 0;
        }
        goto LABEL_34;
      }
      v60 = sub_F65240(a3) ^ 1;
      v33 = sub_AAC1F0(*(_QWORD *)(*a2 + 16), a3 & 0xFFFFFFFFFFFFFFF0LL, v30, v31, v32);
      v34 = v59;
      if ( v33 != v59 )
      {
        v45 = v60;
        sub_2206A40(&v67, &v58);
        v63 = v45;
        v62 = v68;
        v61 = v67;
        sub_C16810((__int64)&v67, (__int64)&v61, v59);
        if ( (unsigned int)v68 <= 0x40 )
        {
          v46 = v67 == v58;
        }
        else
        {
          v46 = sub_2205D70(&v67, &v58);
          if ( v67 )
          {
            v55 = v46;
            operator delete[](v67);
            v46 = v55;
          }
        }
        if ( !v46 )
        {
          v47 = *a2;
          v48 = sub_EEB7E0(a2[2]);
          v49 = (unsigned __int8 **)sub_E33C80(v47, v48, 2389, 0);
          v50 = v49;
          if ( v49 )
          {
            sub_AE9DF0(v49, v53, 8u);
            sub_C1DEB0(&v67, (int)&v58, 10, v60 ^ 1, 0, 1u, 0);
            sub_AEC220(v50, v67, v68);
          }
          else
          {
            sub_C1DEB0(&v67, (int)&v58, 10, v60 ^ 1, 0, 1u, 0);
          }
          if ( v67 != &v69 )
            operator delete(v67);
          v35 = v62 <= 0x40;
          *(_BYTE *)(a1 + 56) = 0;
          if ( v35 )
            goto LABEL_34;
LABEL_32:
          if ( v61 )
            operator delete[](v61);
LABEL_34:
          if ( v59 > 0x40 && v58 )
            operator delete[](v58);
          goto LABEL_19;
        }
        sub_C20980((__int64)&v58, (__int64 *)&v61);
        if ( v62 > 0x40 && v61 )
          operator delete[](v61);
        v34 = v59;
      }
      v62 = v34;
      if ( v34 > 0x40 )
        sub_2205510(&v61);
      else
        v61 = v58;
      v63 = v60;
      sub_B96770((__int64)&v67, (__int64 *)&v61);
      sub_A4F8A0(a1, (__int64)&v67);
      v35 = (unsigned int)v67 <= 1;
      *(_BYTE *)(a1 + 56) = 1;
      if ( !v35 )
        sub_A4F8E0((int *)&v67);
      if ( v62 <= 0x40 )
        goto LABEL_34;
      goto LABEL_32;
    }
    v17 = (char *)(2 * v14);
    v18 = (char *)(2 * v14 + *(_QWORD *)v16);
    if ( v18[1] )
    {
      v66[0] = *v18;
      v19 = ++si128.m128i_i64[0];
      if ( v11 == 1 )
      {
LABEL_22:
        if ( !*(_BYTE *)(v16 + 88) )
        {
          v39 = (char *)ptr;
          v40 = (char *)ptr + v19;
          if ( ptr != v40 )
          {
            while ( v39 < --v40 )
            {
              v41 = *v39++;
              *(v39 - 1) = *v40;
              *v40 = v41;
            }
          }
        }
        goto LABEL_23;
      }
      v17 += *(_QWORD *)v16 + 2;
      if ( v17[1] )
      {
        v13 = v14 + 2;
        do
        {
          v20 = *v17;
          if ( (unsigned __int64)(v19 + 1) > si128.m128i_i64[1] )
          {
            v57 = *v17;
            v56 = v15;
            v54 = v13;
            v52 = v16;
            sub_2236E10(&ptr, v66, v19 + 1, 1);
            v19 = si128.m128i_i64[0];
            v20 = v57;
            v15 = v56;
            v13 = v54;
            v16 = v52;
          }
          *((_BYTE *)ptr + v19) = v20;
          v19 = ++si128.m128i_i64[0];
          if ( v15 == v13 )
            goto LABEL_22;
          v17 = (char *)(*(_QWORD *)v16 + 2 * v13++);
        }
        while ( v17[1] );
      }
    }
    if ( v5 )
    {
      if ( !(unsigned __int8)sub_F61250(v5, v66, v17, v14, v13) )
      {
LABEL_16:
        v21 = *a2;
        v22 = sub_C00A40(a2[2], (__int64)v66, (__int64)v17, v14, v13);
        v23 = (unsigned __int8 **)sub_E33C80(v21, v22, 2385, 0);
        v24 = v23;
        if ( v23 )
        {
          sub_AE9DF0(v23, v5 & 0xFFFFFFFFFFFFFFF0LL, 8u);
          sub_AE9DF0(v24, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a2 + 16) + 2320LL) + 46LL) & 0x40) != 0, 3u);
        }
        *(_BYTE *)(a1 + 56) = 0;
LABEL_19:
        if ( ptr != v66 )
          free(ptr);
        return a1;
      }
    }
    else
    {
      v38 = *(_QWORD *)(*(_QWORD *)(a3 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v38 + 16) != 13 || (((*(_WORD *)(v38 + 18) >> 3) + 75) & 0x1FFu) > 1 )
      {
        v5 = a3;
        goto LABEL_16;
      }
    }
    BYTE4(v67) &= ~1u;
    LODWORD(v67) = 1;
    sub_A4F8A0(a1, (__int64)&v67);
    v35 = (unsigned int)v67 <= 1;
    *(_BYTE *)(a1 + 56) = 1;
    if ( !v35 )
      sub_A4F8E0((int *)&v67);
    goto LABEL_19;
  }
  v61 = (void *)sub_A68200(v9, a3 & 0xFFFFFFFFFFFFFFF0LL, *a2, a4, a5);
  sub_A4F2D0((__int64)&ptr, 0, 0, 0);
  v42 = ptr;
  v43 = si128.m128i_i64[0];
  BYTE4(v67) &= ~1u;
  LODWORD(v67) = 0;
  sub_A513D0((__int64)&v67);
  sub_A510D0((__int64)&v67, (__int64)v42, v43, (__int64 *)&v61, 1);
  sub_A4F8A0(a1, (__int64)&v67);
  v35 = (unsigned int)v67 <= 1;
  *(_BYTE *)(a1 + 56) = 1;
  if ( !v35 )
    sub_A4F8E0((int *)&v67);
  return a1;
}
