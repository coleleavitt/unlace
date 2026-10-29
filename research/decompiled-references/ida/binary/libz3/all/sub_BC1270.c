__int64 __fastcall sub_BC1270(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        __m128 a7)
{
  int v7; // r13d
  __int64 result; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // r9
  int v15; // ecx
  __m128 *v16; // r14
  unsigned int v17; // edi
  int v18; // r11d
  __int64 v19; // r9
  __m128 *v20; // r15
  __int64 v21; // rdi
  __m128 *v22; // rsi
  __m128 *i; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // r13d
  unsigned int v26; // r10d
  __m128 *v27; // rax
  __m128 *v28; // rdi
  unsigned __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ebp
  unsigned int v35; // eax
  _DWORD *v36; // rax
  _QWORD *v37; // rbp
  _QWORD *v38; // r15
  __int64 v39; // r14
  int v40; // r8d
  int v41; // r9d
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // r15
  __m128 *v45; // rax
  int v46; // r10d
  __m128 *v47; // rdx
  const __m128i *v48; // rax
  int v49; // r11d
  __m128i *v50; // rcx
  __int64 v51; // rdx
  __m128 *v52; // rsi
  __m128 *v53; // rdx
  __int64 *v54; // r13
  __int64 *v55; // r14
  int v56; // ebp
  __int64 v57; // rsi
  int v58; // [rsp+0h] [rbp-A8h]
  int v59; // [rsp+8h] [rbp-A0h]
  int v61; // [rsp+10h] [rbp-98h]
  size_t v62; // [rsp+10h] [rbp-98h]
  int v63; // [rsp+18h] [rbp-90h]
  int v64; // [rsp+20h] [rbp-88h]
  int v65; // [rsp+28h] [rbp-80h]
  int v66; // [rsp+28h] [rbp-80h]
  int v67; // [rsp+30h] [rbp-78h]
  unsigned int *v68; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v69; // [rsp+40h] [rbp-68h] BYREF
  __int64 v70; // [rsp+48h] [rbp-60h] BYREF
  unsigned int *v71; // [rsp+50h] [rbp-58h] BYREF
  __int64 v72; // [rsp+58h] [rbp-50h]
  unsigned int *v73[9]; // [rsp+60h] [rbp-48h] BYREF

  v7 = a4;
  if ( !*(_WORD *)(a2 + 4) )
  {
    result = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( result )
    {
      if ( *(_DWORD *)(a1 + 1744) == *(_DWORD *)result )
      {
        if ( *(_DWORD *)(result + 4) == 2 )
        {
          v54 = (__int64 *)(a2 + 32);
          result = 8LL * *(unsigned int *)(a2 + 24);
          v55 = (__int64 *)(a2 + 32 + result);
          if ( result )
          {
            v56 = a4;
            do
            {
              v57 = *v54++;
              result = sub_BC1270(
                         a1,
                         v57,
                         a3,
                         v56,
                         a5,
                         a6,
                         v58,
                         v59,
                         v61,
                         v63,
                         v64,
                         v65,
                         v67,
                         (_DWORD)v68,
                         (_DWORD)v69,
                         v70,
                         (__int64)v71,
                         v72,
                         (__int64)v73[0]);
            }
            while ( v55 != v54 );
          }
          return result;
        }
        if ( !*(_DWORD *)(result + 4) )
          return result;
      }
    }
  }
  result = sub_BCED40(a1 + 1728, a2);
  if ( (_BYTE)result )
    return result;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v36 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v36 )
    {
      if ( *(_DWORD *)(a1 + 1888) == *v36 && v36[1] == 67 )
      {
        v37 = (_QWORD *)(a2 + 32);
        result = 8LL * *(unsigned int *)(a2 + 24);
        v38 = (_QWORD *)(a2 + 32 + result);
        if ( result )
        {
          do
          {
            v39 = *v37;
            result = *(_QWORD *)(sub_15D1F10(*v37) + 24);
            if ( result
              && *(_DWORD *)(a1 + 1720) == *(_DWORD *)result
              && (result = *(unsigned int *)(result + 4), !(_DWORD)result)
              || !*(_WORD *)(v39 + 4)
              && (result = *(_QWORD *)(*(_QWORD *)(v39 + 16) + 24LL)) != 0
              && *(_DWORD *)(a1 + 1888) == *(_DWORD *)result
              && *(_DWORD *)(result + 4) == 67 )
            {
              result = sub_BC1270(
                         a1,
                         v39,
                         a3,
                         v7,
                         v40,
                         v41,
                         v58,
                         v59,
                         v61,
                         v63,
                         v64,
                         v65,
                         v67,
                         (_DWORD)v68,
                         (_DWORD)v69,
                         v70,
                         (__int64)v71,
                         v72,
                         (__int64)v73[0]);
            }
            ++v37;
          }
          while ( v38 != v37 );
        }
        return result;
      }
    }
  }
  sub_1455640((unsigned int)&v71, a1 + 2696, a2, a3, v12, v13);
  v14 = *(unsigned int *)(a1 + 1144);
  v15 = *(_DWORD *)(a2 + 12);
  v16 = *(__m128 **)(a1 + 1136);
  v17 = v14 - 1;
  v18 = *(_DWORD *)(a1 + 1144);
  v19 = 16 * v14;
  v20 = (__m128 *)((char *)v16 + v19);
  v21 = 16LL * (v15 & v17);
  v22 = &v16[(unsigned __int64)v21 / 0x10];
  if ( v21 != v19 )
  {
    for ( i = &v16[(unsigned __int64)v21 / 0x10]; v20 != i; ++i )
    {
      v24 = i->m128_u64[0];
      if ( i->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v24 + 12) == v15 && a2 == v24 )
        {
LABEL_50:
          v25 = i->m128_u32[2];
          if ( v25 >= a3 )
            return sub_BB0560((__int64)v71, v72);
          goto LABEL_14;
        }
      }
      else if ( !v24 )
      {
        goto LABEL_13;
      }
    }
  }
  if ( v16 != v22 )
  {
    for ( i = *(__m128 **)(a1 + 1136); v22 != i; ++i )
    {
      v43 = i->m128_u64[0];
      if ( i->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v43 + 12) == v15 && a2 == v43 )
          goto LABEL_50;
      }
      else if ( !v43 )
      {
        break;
      }
    }
  }
LABEL_13:
  v25 = 0;
LABEL_14:
  v26 = 2 * v18;
  if ( 3 * v18 < (unsigned int)(4 * (*(_DWORD *)(a1 + 1148) + *(_DWORD *)(a1 + 1152))) )
  {
    v44 = v26;
    v66 = 2 * v18;
    v62 = 16LL * v26;
    v45 = (__m128 *)sub_186B270(v62);
    v46 = v66;
    v19 = v62;
    v16 = v45;
    v47 = &v45[v44];
    if ( v66 )
    {
      do
      {
        v45->m128_u64[0] = 0;
        ++v45;
        v45[-1].m128_i32[2] = 0;
      }
      while ( v45 != v47 );
    }
    v48 = *(const __m128i **)(a1 + 1136);
    v49 = v66 - 1;
    v20 = &v16[v62 / 0x10];
    v50 = (__m128i *)&v48[*(unsigned int *)(a1 + 1144)];
    if ( v48 != v50 )
    {
      do
      {
        while ( v48->m128i_i64[0] <= 1uLL )
        {
          if ( v50 == ++v48 )
            goto LABEL_74;
        }
        v51 = 16LL * (*(_DWORD *)(v48->m128i_i64[0] + 12) & (unsigned int)v49);
        v52 = &v16[(unsigned __int64)v51 / 0x10];
        if ( v62 == v51 )
        {
LABEL_78:
          if ( v16 == v52 )
          {
LABEL_86:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v53 = v16;
          while ( v53->m128_u64[0] )
          {
            if ( v52 == ++v53 )
              goto LABEL_86;
          }
        }
        else
        {
          v53 = &v16[(unsigned __int64)v51 / 0x10];
          while ( v53->m128_u64[0] )
          {
            if ( v20 == ++v53 )
              goto LABEL_78;
          }
        }
        a7 = (__m128)_mm_loadu_si128(v48++);
        *v53 = a7;
      }
      while ( v50 != v48 );
LABEL_74:
      v50 = *(__m128i **)(a1 + 1136);
    }
    if ( v50 )
    {
      sub_186B220(v50);
      v46 = v66;
      v49 = v66 - 1;
      v19 = v62;
    }
    v15 = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 1136) = v16;
    *(_DWORD *)(a1 + 1144) = v46;
    *(_DWORD *)(a1 + 1152) = 0;
    v21 = 16LL * (v15 & (unsigned int)v49);
    v22 = &v16[(unsigned __int64)v21 / 0x10];
  }
  if ( v21 != v19 )
  {
    v27 = v22;
    v28 = nullptr;
    while ( 1 )
    {
      v29 = v27->m128_u64[0];
      if ( v27->m128_u64[0] > 1 )
      {
        if ( *(_DWORD *)(v29 + 12) == v15 && a2 == v29 )
        {
          v27->m128_u64[0] = a2;
          v27->m128_i32[2] = a3;
          goto LABEL_24;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v28 )
            goto LABEL_84;
          v28 = v27;
          goto LABEL_85;
        }
        v28 = v27;
      }
      if ( ++v27 == v20 )
        goto LABEL_46;
    }
  }
  v28 = nullptr;
  while ( 1 )
  {
LABEL_46:
    if ( v16 == v22 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v42 = v16->m128_u64[0];
    if ( v16->m128_u64[0] <= 1 )
      break;
    if ( *(_DWORD *)(v42 + 12) == v15 && a2 == v42 )
    {
      v16->m128_u64[0] = a2;
      v16->m128_i32[2] = a3;
      goto LABEL_24;
    }
LABEL_45:
    ++v16;
  }
  if ( v42 )
  {
    v28 = v16;
    goto LABEL_45;
  }
  if ( v28 )
LABEL_84:
    --*(_DWORD *)(a1 + 1152);
  else
    v28 = v16;
LABEL_85:
  v28->m128_u64[0] = a2;
  v28->m128_i32[2] = a3;
  ++*(_DWORD *)(a1 + 1148);
LABEL_24:
  v68 = v71;
  if ( v71 )
    ++v71[2];
  sub_BB70A0((_QWORD *)(a1 + 1168), &v68);
  v30 = (_QWORD *)sub_180C100(a1 + 3960, 16);
  v30[1] = a1 + 1160;
  *v30 = off_1C4DF80;
  v69 = v30;
  sub_BB4880((_QWORD *)(a1 + 3944), &v69);
  v31 = a1 + 1136;
  if ( v25 )
  {
    v32 = sub_180C100(a1 + 3960, 32);
    *(_QWORD *)(v32 + 8) = v31;
    *(_QWORD *)v32 = off_1C57E60;
    *(_QWORD *)(v32 + 16) = a2;
    *(_DWORD *)(v32 + 24) = v25;
    v70 = v32;
    sub_BB4880((_QWORD *)(a1 + 3944), &v70);
  }
  v33 = sub_180C100(a1 + 3960, 24);
  *(_QWORD *)(v33 + 8) = v31;
  *(_QWORD *)v33 = off_1C57E88;
  *(_QWORD *)(v33 + 16) = a2;
  v73[0] = (unsigned int *)v33;
  sub_BB4880((_QWORD *)(a1 + 3944), v73);
  if ( a4 )
  {
    sub_1407670(v73, a1 + 1848, *(unsigned int *)(a1 + 4152));
    v34 = sub_966440(a1, v73[0]) ^ 1;
    v35 = sub_966440(a1, v71);
    sub_BBF3C0((_QWORD *)a1, v34, v35, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, *(double *)a7.m128_u64);
    sub_BB0560((__int64)v73[0], (__int64)v73[1]);
  }
  return sub_BB0560((__int64)v71, v72);
}

