__int16 __fastcall sub_1000200(__int64 a1, int *a2, unsigned int *a3)
{
  int *v6; // rax
  int v7; // ecx
  int *v8; // rbx
  unsigned int v9; // edx
  unsigned int v10; // eax
  char v11; // cl
  __int16 result; // ax
  _BYTE *v13; // rax
  __int32 v14; // ebx
  unsigned int v15; // r15d
  __int64 v16; // r8
  __int64 v17; // r9
  __int32 v18; // eax
  unsigned int v19; // ebx
  char v20; // cl
  unsigned int v21; // edi
  unsigned int v22; // r8d
  _QWORD *v23; // rax
  __int64 v24; // rax
  void *v25; // r15
  size_t v26; // r14
  __int64 v27; // rax
  void *v28; // r13
  size_t v29; // rbx
  size_t v30; // rax
  size_t v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rsi
  _QWORD *v34; // r9
  int v35; // r10d
  unsigned int v36; // esi
  int v37; // edi
  bool v38; // cf
  unsigned int v39; // eax
  bool v40; // dl
  __int64 v41; // r11
  int *v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // esi
  __int64 v45; // rcx
  int v46; // eax
  int i; // eax
  int v48; // edx
  __int64 v49; // rsi
  int v50; // eax
  int v51; // eax
  bool v52; // dl
  int v53; // r15d
  int v54; // eax
  int v55; // eax
  int v56; // eax
  __int16 v57; // [rsp+8h] [rbp-1B0h]
  int v58; // [rsp+8h] [rbp-1B0h]
  bool v59; // [rsp+8h] [rbp-1B0h]
  int v60; // [rsp+10h] [rbp-1A8h]
  __int32 v61; // [rsp+1Ch] [rbp-19Ch]
  int *v62; // [rsp+20h] [rbp-198h]
  int *v63; // [rsp+38h] [rbp-180h] BYREF
  __m128i v64; // [rsp+40h] [rbp-178h] BYREF
  void *s1; // [rsp+50h] [rbp-168h]
  size_t n; // [rsp+58h] [rbp-160h]
  char v67; // [rsp+60h] [rbp-158h]
  __int64 v68; // [rsp+70h] [rbp-148h] BYREF
  _QWORD *v69; // [rsp+78h] [rbp-140h] BYREF
  unsigned int v70; // [rsp+80h] [rbp-138h]
  _BYTE v71[64]; // [rsp+178h] [rbp-40h] BYREF

  v6 = sub_FFFFF0(a1, (unsigned int)*a2, *a3);
  v7 = v6[3];
  v62 = v6;
  if ( v7 )
  {
    v8 = v6;
    v9 = a2[1];
    v10 = a3[1];
    if ( v7 != *v8 )
      v9 = v8[4];
    if ( v7 != v62[1] )
      v10 = v62[5];
    v11 = v9 < v10;
    if ( v9 == v10 )
      v11 = *((_BYTE *)v62 + 8);
    LOBYTE(result) = 1;
    HIBYTE(result) = v11;
    return result;
  }
  v68 = 1;
  v13 = &v69;
  do
  {
    *(_DWORD *)v13 = 0;
    v13 += 16;
  }
  while ( v13 != v71 );
  v14 = *a2;
  v15 = 0;
  v61 = a2[1];
  while ( 1 )
  {
    if ( (unsigned __int8)sub_FF80B0((__int64)&v68, a2, &v63) )
      goto LABEL_14;
    v42 = v63;
    v64.m128i_i64[0] = (__int64)v63;
    v43 = ((unsigned int)v68 >> 1) + 1;
    if ( (v68 & 1) != 0 )
    {
      v45 = 4 * v43;
      v44 = 16;
      if ( (unsigned int)v45 >= 0x30 )
      {
LABEL_63:
        v44 *= 2;
LABEL_64:
        sub_FF8A70((__int64)&v68, v44, (__int64)v63, v45, v16, v17);
        sub_FF80B0((__int64)&v68, a2, &v64);
        v42 = (int *)v64.m128i_i64[0];
        v43 = ((unsigned int)v68 >> 1) + 1;
        goto LABEL_46;
      }
    }
    else
    {
      v44 = v70;
      v45 = 4 * v43;
      if ( (unsigned int)v45 >= 3 * v70 )
        goto LABEL_63;
    }
    v45 = v44 >> 3;
    if ( v44 - (v43 + HIDWORD(v68)) <= (unsigned int)v45 )
      goto LABEL_64;
LABEL_46:
    LODWORD(v68) = v68 & 1 | (2 * v43);
    if ( *v42 )
      --HIDWORD(v68);
    v46 = *a2;
    v42[1] = v14;
    v42[3] = v15;
    *v42 = v46;
    v42[2] = v61;
LABEL_14:
    v15 = *a2;
    if ( *a2 == *a3 )
      break;
    v64.m128i_i64[0] = sub_FFFC90(a1, v15);
    v14 = v64.m128i_i32[0];
    if ( !v64.m128i_i32[0] || !sub_FF98D0(a1, v64.m128i_i32, a2) )
      break;
    v18 = v64.m128i_i32[1];
    *a2 = v14;
    v61 = v18;
    a2[1] = v18;
  }
  v19 = 0;
  while ( 1 )
  {
    v20 = v68 & 1;
    if ( (v68 & 1) != 0 )
    {
      v21 = *a3;
      v22 = *a3 & 0xF;
      v23 = &(&v69)[2 * v22];
      if ( *(_DWORD *)v23 == *a3 )
        goto LABEL_21;
      v49 = 32;
      v34 = &v69;
      v35 = 15;
      if ( *(_DWORD *)v23 )
        goto LABEL_50;
    }
    else
    {
      v32 = v69;
      v33 = v70;
      v34 = v69;
      if ( v70 )
      {
        v21 = *a3;
        v35 = v70 - 1;
        v22 = (v70 - 1) & *a3;
        v23 = &v69[2 * v22];
        if ( *(_DWORD *)v23 == *a3 )
          goto LABEL_35;
        if ( *(_DWORD *)v23 )
        {
LABEL_50:
          for ( i = 1; ; i = v48 )
          {
            v48 = i + 1;
            v22 = v35 & (i + v22);
            v23 = &v34[2 * v22];
            if ( *(_DWORD *)v23 == v21 )
              break;
            if ( !*(_DWORD *)v23 )
            {
              v49 = 32;
              v34 = &v69;
              if ( v20 )
                goto LABEL_57;
              v32 = v69;
              v33 = v70;
              goto LABEL_55;
            }
          }
          goto LABEL_58;
        }
LABEL_55:
        v34 = v32;
      }
      v49 = 2 * v33;
    }
LABEL_57:
    v23 = &v34[v49];
LABEL_58:
    if ( v20 )
    {
LABEL_21:
      if ( v23 != (_QWORD *)v71 )
        goto LABEL_36;
      goto LABEL_22;
    }
    v32 = v69;
LABEL_35:
    if ( v23 != &v32[2 * v70] )
    {
LABEL_36:
      v36 = *((_DWORD *)v23 + 2);
      v37 = *((_DWORD *)v23 + 1);
      a2[1] = v36;
      *a2 = v37;
      v38 = *((_DWORD *)v23 + 3) < v19;
      v39 = a3[1];
      v40 = v38;
      v62[3] = v37;
      *((_BYTE *)v62 + 8) = v38;
      v62[4] = v36;
      if ( v36 != v39 )
        v40 = v36 < v39;
      v62[5] = v39;
      LOBYTE(result) = 1;
      HIBYTE(result) = v40;
      goto LABEL_39;
    }
LABEL_22:
    v19 = *a3;
    v64.m128i_i64[0] = sub_FFFC90(a1, *a3);
    if ( !v64.m128i_i32[0] )
    {
      v24 = sub_FFC290(a1, *a2);
      if ( !v24 )
        goto LABEL_61;
      goto LABEL_24;
    }
    if ( !sub_FF98D0(a1, v64.m128i_i32, (int *)a3) )
      break;
    *(_QWORD *)a3 = v41;
  }
  v24 = sub_FFC290(a1, *a2);
  if ( !v24 )
  {
LABEL_61:
    sub_FF9480((__int64)&v64, a1);
    goto LABEL_25;
  }
LABEL_24:
  sub_FF9C60(
    &v64,
    (__int64 *)(*(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFF8LL),
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16),
    0);
  if ( !v67 )
    goto LABEL_61;
LABEL_25:
  v25 = s1;
  v26 = n;
  v27 = sub_FFC290(a1, *a3);
  if ( !v27
    || (sub_FF9C60(
          &v64,
          (__int64 *)(*(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFF8LL),
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a1 + 16),
          0),
        !v67) )
  {
    sub_FF9480((__int64)&v64, a1);
  }
  v28 = s1;
  v29 = n;
  v30 = j__strlen("<built-in>");
  if ( v30 == v26 )
  {
    if ( v26 )
    {
      v50 = memcmp(v25, "<built-in>", v26);
      if ( v29 != v26 )
      {
        v52 = 1;
        if ( !v50 )
          goto LABEL_78;
        v31 = j__strlen("<inline asm>");
        if ( v31 == v26 )
        {
          v55 = memcmp(v25, "<inline asm>", v26);
LABEL_92:
          v52 = 0;
          if ( v55 )
            v52 = j__strlen("<scratch space>") == v26;
          goto LABEL_78;
        }
LABEL_83:
        if ( v29 != v31 )
          goto LABEL_84;
        if ( !v29 )
          goto LABEL_80;
        v56 = memcmp(v28, "<inline asm>", v29);
LABEL_96:
        v52 = 1;
        if ( !v56 )
          goto LABEL_78;
LABEL_84:
        if ( j__strlen("<scratch space>") != v26 )
          goto LABEL_76;
        if ( v26 )
        {
          v53 = memcmp(v25, "<scratch space>", v26);
          if ( v29 == v26 )
          {
            v54 = memcmp(v28, "<scratch space>", v29);
            if ( v53 )
              goto LABEL_76;
            if ( !v54 )
              goto LABEL_89;
          }
        }
        else if ( !v29 )
        {
LABEL_89:
          v52 = a2[1] < a3[1];
          goto LABEL_78;
        }
LABEL_80:
        v52 = 1;
        goto LABEL_78;
      }
      v58 = v50;
      v51 = memcmp(v28, "<built-in>", v29);
      if ( v58 )
        goto LABEL_75;
      if ( v51 )
        goto LABEL_80;
    }
    else if ( v29 )
    {
      goto LABEL_80;
    }
    LOBYTE(result) = 1;
    v20 = v68 & 1;
    HIBYTE(result) = *a2 < (int)*a3;
    goto LABEL_39;
  }
  if ( v30 != v29 )
    goto LABEL_29;
  if ( !v29 )
    goto LABEL_76;
  v51 = memcmp(v28, "<built-in>", v29);
LABEL_75:
  if ( !v51 )
  {
LABEL_76:
    v52 = 0;
    goto LABEL_78;
  }
LABEL_29:
  v31 = j__strlen("<inline asm>");
  if ( v31 != v26 )
    goto LABEL_83;
  if ( !v26 )
  {
    if ( v29 )
      goto LABEL_76;
LABEL_32:
    result = 1;
    v20 = v68 & 1;
    goto LABEL_39;
  }
  v55 = memcmp(v25, "<inline asm>", v26);
  if ( v29 != v26 )
    goto LABEL_92;
  v60 = v55;
  v59 = v55 == 0;
  v56 = memcmp(v28, "<inline asm>", v29);
  if ( v60 )
    goto LABEL_96;
  v52 = v56 == 0;
  if ( v59 == (v56 == 0) )
    goto LABEL_32;
LABEL_78:
  LOBYTE(result) = 1;
  HIBYTE(result) = v52;
  v20 = v68 & 1;
LABEL_39:
  if ( !v20 )
  {
    v57 = result;
    operator delete();
    return v57;
  }
  return result;
}

