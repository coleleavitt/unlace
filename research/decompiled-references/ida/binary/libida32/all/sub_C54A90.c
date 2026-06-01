__int64 __fastcall sub_C54A90(__int64 *a1, __int64 *a2, const __m128i *a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // r14
  unsigned int v17; // eax
  __int64 v18; // rax
  __int16 v19; // dx
  unsigned __int8 **v20; // rax
  unsigned int v21; // ecx
  __int64 v23; // r15
  unsigned int v24; // ebp
  __int64 v25; // r13
  int *v26; // rsi
  int *v27; // rdi
  int *v28; // r12
  __int64 v29; // rdi
  __int64 v30; // r13
  unsigned __int64 v31; // rbp
  __int64 v32; // rdi
  __int64 v33; // r13
  unsigned __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // r15
  __int64 v37; // rdi
  __int64 i; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  char v41; // al
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rdx
  _QWORD *v48; // rdx
  int v49; // ecx
  const __m128i *v50; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 *v51; // [rsp+10h] [rbp-1B8h]
  __int64 v52; // [rsp+18h] [rbp-1B0h]
  __m128 *v53; // [rsp+20h] [rbp-1A8h]
  int *v54; // [rsp+28h] [rbp-1A0h]
  void **v55; // [rsp+30h] [rbp-198h]
  unsigned __int64 v56; // [rsp+38h] [rbp-190h]
  unsigned int v57; // [rsp+40h] [rbp-188h]
  char v58; // [rsp+46h] [rbp-182h]
  char v59; // [rsp+47h] [rbp-181h]
  int *v60; // [rsp+48h] [rbp-180h]
  __int64 v61; // [rsp+50h] [rbp-178h]
  int v62; // [rsp+58h] [rbp-170h]
  unsigned int v63; // [rsp+5Ch] [rbp-16Ch]
  int v64; // [rsp+68h] [rbp-160h]
  int v65; // [rsp+6Ch] [rbp-15Ch] BYREF
  void *v66; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-150h]
  char v68; // [rsp+7Ch] [rbp-14Ch]
  unsigned int v69; // [rsp+80h] [rbp-148h] BYREF
  char v70; // [rsp+84h] [rbp-144h]
  unsigned int v71; // [rsp+C0h] [rbp-108h] BYREF
  char v72; // [rsp+C4h] [rbp-104h]
  __int64 v73; // [rsp+C8h] [rbp-100h]
  __m128 v74; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+110h] [rbp-B8h]
  unsigned int v76; // [rsp+118h] [rbp-B0h]
  _QWORD *v77; // [rsp+120h] [rbp-A8h]
  __int64 v78; // [rsp+128h] [rbp-A0h]
  void *ptr; // [rsp+130h] [rbp-98h]
  unsigned int v80; // [rsp+138h] [rbp-90h]
  unsigned int v81; // [rsp+13Ch] [rbp-8Ch]
  __int16 v82; // [rsp+180h] [rbp-48h]

  v8 = *(_DWORD *)a4;
  v51 = a2;
  v57 = v8;
  v9 = sub_A4E300(*(_QWORD **)(*a1 + 16), a5);
  if ( !v9 || (v10 = v9, (unsigned int)*(unsigned __int8 *)(v9 + 16) - 2 > 1) )
  {
    v32 = *a1;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
      return sub_BF05D0(v32, (__int64)v51);
    v50 = a3;
    v75 = a4;
    v74 = _mm_loadh_ps((const double *)&v50);
    return sub_C54890((__int64)&v74, (unsigned __int64)v51, a5);
  }
  v11 = *(_QWORD **)(v9 + 40);
  if ( (*(_BYTE *)(v10 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v11 + 2) <= 0x40u )
      v11 = (_QWORD *)*v11;
    else
      v11 = *(_QWORD **)*v11;
  }
  LODWORD(v50) = (_DWORD)v11;
  if ( v57 <= 1 || (v12 = *(unsigned int *)(a4 + 16), *(_DWORD *)(a4 + 20) == (_DWORD)v12) )
  {
    v70 &= ~1u;
    v69 = 0;
  }
  else
  {
    sub_A2FF00((__int64)&v69, (int *)(*(_QWORD *)(a4 + 8) + 56 * v12));
  }
  v74.m128_i8[4] &= ~1u;
  v53 = &v74;
  v74.m128_i32[0] = 0;
  sub_A2D6C0((__int64)&v74, 0, (int)v50);
  sub_A2BFE0(a4, (__int64)&v74);
  if ( v74.m128_i32[0] > 1u )
    sub_A2BBA0((int *)&v74);
  result = 1;
  if ( !(_DWORD)v50 )
    goto LABEL_37;
  v16 = v51[2];
  v52 = *v51;
  v17 = sub_BDCD00((unsigned __int64)v51, (unsigned int)v50, v13, v52, v14);
  v59 = sub_BF5260(*a1, v17, v16, BYTE2(v52) >> 7);
  v18 = a3[1].m128i_i64[0];
  v74 = (__m128)_mm_loadu_si128(a3);
  v75 = v18;
  sub_BEF6B0((__int64)&v53[1].m128_i64[1], (__int64)&a3[1].m128i_i64[1]);
  v19 = a3[8].m128i_i16[0];
  LOBYTE(v19) = v19 & 3;
  v82 = v19 | v82 & 0xFC;
  if ( (v76 & 1) == 0 )
  {
    if ( (v76 & 2) != 0
      || (v80 != 1 || (v76 & 4) == 0) && (v76 & 8) != 0 && *((_QWORD **)ptr + (int)((v76 >> 4) - 1)) == v77 )
    {
      v20 = (unsigned __int8 **)sub_E0FF50(*a1, v51, 2466, 0);
      if ( v20 )
        sub_BED5E0(v20, 3);
      LOBYTE(v76) = v76 | 1;
      v80 = 0;
    }
    else
    {
      v44 = v80;
      v45 = v80 + 1LL;
      if ( v45 > v81 )
      {
        sub_22134E0(&v53[3], &v53[4], v45, 8);
        v44 = v80;
      }
      *((_QWORD *)ptr + v44) = 0;
      v46 = ++v80;
      v47 = *(_QWORD *)(v10 + 32);
      LOBYTE(v76) = v76 | 8;
      v78 = v47;
      v48 = *(_QWORD **)(v10 + 40);
      if ( (*(_BYTE *)(v10 + 19) & 2) != 0 )
      {
        if ( *((_DWORD *)v48 + 2) <= 0x40u )
          v48 = (_QWORD *)*v48;
        else
          v48 = *(_QWORD **)*v48;
      }
      v77 = v48;
      v76 = v76 & 0xF | (16 * v46);
    }
  }
  v21 = *(_DWORD *)(a4 + 16);
  v64 = 1;
  v65 = (int)v50;
  if ( v21 == 1 )
  {
LABEL_34:
    result = 1;
    goto LABEL_35;
  }
  v56 = 0;
  v54 = (int *)&v71;
  v62 = (_DWORD)v50 - 1;
  v55 = &v66;
  v60 = &v65;
  LODWORD(v52) = 1;
  v23 = v10;
  v24 = v21;
  while ( 1 )
  {
    v71 = 0;
    v72 &= ~1u;
    sub_A2D6C0((__int64)v54, v52, (int)v50);
    if ( v24 )
    {
      v25 = 0;
      do
      {
        v26 = (int *)(v25 + *(_QWORD *)(a4 + 8));
        v27 = (int *)(v25 + v73);
        v25 += 56;
        sub_A2C150(v27, v26);
      }
      while ( 56 * (v24 - 1 + 1LL) != v25 );
    }
    sub_A2C150((int *)a4, v54);
    v58 = ((_DWORD)v50 == (_DWORD)v52) & v59 & ((_DWORD)v50 != 1);
    if ( v57 <= 1 )
      break;
    if ( (unsigned int)v52 > v24 )
    {
      v33 = v24;
      v61 = v23;
      v63 = v24;
      v34 = 7 * ((_DWORD)v52 - 1 - v24 + (unsigned __int64)v24 + 1);
      v35 = 56LL * v24;
      v36 = 8 * v34;
      do
      {
        v37 = v35 + *(_QWORD *)(a4 + 8);
        v35 += 56;
        sub_A30FE0(v37, (int *)&v69);
      }
      while ( v36 != v35 );
      v23 = v61;
      v24 = v63;
      if ( !v58 )
        goto LABEL_48;
LABEL_27:
      v28 = *(int **)(a4 + 8);
      if ( (unsigned int)v50 > v24 )
      {
        v29 = *(_QWORD *)(a4 + 8);
        v30 = 56LL * v24;
        v31 = 56 * (v24 + (unsigned __int64)(v62 - v24));
        while ( 1 )
        {
          sub_A30FE0(v30 + v29, v28);
          if ( v30 == v31 )
            break;
          v29 = *(_QWORD *)(a4 + 8);
          v30 += 56;
        }
      }
      goto LABEL_31;
    }
    if ( v58 )
      goto LABEL_27;
LABEL_31:
    if ( v71 > 1 )
      sub_A2BBA0(v54);
    if ( v56 != 4 )
    {
      v24 = *(_DWORD *)(a4 + 16);
      v49 = v60[v56 / 4];
      v56 += 4LL;
      LODWORD(v52) = v49;
      if ( v24 != v49 )
        continue;
    }
    goto LABEL_34;
  }
  if ( v58 )
    goto LABEL_27;
  if ( (unsigned int)v52 <= v24 )
    goto LABEL_31;
  v33 = v24;
LABEL_48:
  for ( i = v33; (unsigned __int8)sub_C54A90(a1, v51, v53, *(_QWORD *)(a4 + 8) + 56 * i, *(_QWORD *)(v23 + 32)); i = v24 )
  {
    v39 = *(_QWORD *)(v23 + 32);
    v40 = *a1;
    v67 = 64;
    v66 = &dword_0 + 1;
    v68 = 0;
    v41 = sub_BF65F0(v40, (unsigned __int64)v51, (__int64)v53, v39, (__int64)v55);
    if ( v67 > 0x40 && v66 )
    {
      v58 = v41;
      operator delete[](v66);
      v41 = v58;
    }
    if ( !v41 )
      break;
    v42 = *a1;
    v43 = *(_QWORD *)(*(_QWORD *)(*a1 + 24) + 8LL);
    if ( v43 )
    {
      if ( *(_DWORD *)(v43 + 8) && (!*(_DWORD *)(v42 + 48) || !*(_BYTE *)(v42 + 914) && !*(_BYTE *)(v42 + 915)) )
        break;
    }
    if ( ++v24 >= (unsigned int)v52 )
      goto LABEL_31;
  }
  if ( v71 > 1 )
    sub_A2BBA0(v54);
  result = 0;
LABEL_35:
  if ( ptr != &v53[4] )
  {
    LOBYTE(v50) = result;
    free(ptr);
    result = (unsigned __int8)v50;
  }
LABEL_37:
  if ( v69 > 1 )
  {
    LOBYTE(v50) = result;
    sub_A2BBA0((int *)&v69);
    return (unsigned __int8)v50;
  }
  return result;
}

