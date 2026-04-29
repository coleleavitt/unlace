__int64 __fastcall sub_7A640(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // r12
  int v5; // eax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __m128i v9; // xmm0
  unsigned __int64 v10; // rax
  _QWORD *v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v16; // rax
  char *v17; // rax
  char v18; // dl
  __int64 *v19; // r14
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rax
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rax
  char v32; // [rsp+Eh] [rbp-5Ah]
  char v33; // [rsp+Fh] [rbp-59h]
  __m128i v34; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v35 = __readfsqword(0x28u);
  v4 = (__int64)a2;
  v5 = sub_79AB0(a2);
  if ( v5 < 0 )
    return 0;
  v6 = a1[1];
  v7 = v5;
  if ( v5 != v6 )
  {
    v34 = 0;
    if ( v5 >= v6 )
    {
      a2 = (__int64 *)*a1;
      v8 = a1[2];
      if ( (unsigned __int64)&v34 < *a1 || &v34 >= (__m128i *)&a2[2 * v8] )
      {
        if ( v8 < v7 )
        {
          v3 = a1;
          v16 = qvector_reserve(a1, a2, v7, 16);
          v6 = a1[1];
          *a1 = v16;
          a2 = (__int64 *)v16;
          if ( v6 >= v7 )
            goto LABEL_29;
        }
        v9 = _mm_load_si128(&v34);
        while ( 1 )
        {
          v10 = v6++;
          *(__m128i *)&a2[2 * v10] = v9;
          if ( v7 == v6 )
            break;
          a2 = (__int64 *)*a1;
        }
      }
      else
      {
        if ( v8 < v7 )
        {
          v3 = a1;
          v31 = qvector_reserve(a1, a2, v7, 16);
          v6 = a1[1];
          *a1 = v31;
          a2 = (__int64 *)v31;
          if ( v6 >= v7 )
          {
LABEL_29:
            a1[1] = v7;
            v6 = v7;
            if ( *(_DWORD *)(v4 + 48) > 3u )
              goto LABEL_30;
            goto LABEL_10;
          }
        }
        while ( 1 )
        {
          v20 = v6++;
          *(_OWORD *)&a2[2 * v20] = 0;
          if ( v7 == v6 )
            break;
          a2 = (__int64 *)*a1;
        }
      }
      a1[1] = v6;
      if ( *(_DWORD *)(v4 + 48) > 3u )
        goto LABEL_30;
LABEL_10:
      v11 = (_QWORD *)*a1;
      v12 = 0;
      v13 = *a1 + 16 * v6;
      if ( *a1 == v13 )
        return 1;
      while ( 1 )
      {
        if ( (unsigned __int8)is_cvt64(v3, a2) )
        {
          a2 = *(__int64 **)(v4 + 8);
          if ( *(_QWORD *)v4 >= (unsigned __int64)a2 )
            goto LABEL_54;
          v3 = (__int64 *)v4;
          *v11 = v12 + (int)unpack_dd(v4);
          if ( (unsigned __int8)is_cvt64(v4, a2) )
          {
LABEL_14:
            a2 = *(__int64 **)(v4 + 8);
            if ( *(_QWORD *)v4 >= (unsigned __int64)a2 )
LABEL_54:
              sub_76AD0(v3);
            v3 = (__int64 *)v4;
            v14 = (int)unpack_dd(v4);
            goto LABEL_16;
          }
        }
        else
        {
          v3 = (__int64 *)v4;
          *v11 = v12 + sub_79300(v4);
          if ( (unsigned __int8)is_cvt64(v4, a2) )
            goto LABEL_14;
        }
        v3 = (__int64 *)v4;
        v14 = sub_79300(v4);
LABEL_16:
        v11[1] = v14;
        v12 = *v11 + v14;
        v11 += 2;
        if ( (_QWORD *)v13 == v11 )
          return 1;
      }
    }
    a1[1] = v5;
    v6 = v5;
  }
  if ( *((_DWORD *)a2 + 12) <= 3u )
    goto LABEL_10;
  if ( !v6 )
    return 1;
LABEL_30:
  v17 = *(char **)v4;
  if ( *(_QWORD *)v4 >= *(_QWORD *)(v4 + 8) )
    sub_76AB0(v3);
  v18 = *v17;
  *(_QWORD *)v4 = v17 + 1;
  v19 = (__int64 *)*a1;
  v32 = v18;
  v33 = v18 & 1;
  if ( (v18 & 1) == 0 )
  {
    v21 = v6 - 1;
    v22 = 0;
    v23 = sub_79580(v4, 0);
    *v19 = v23;
    if ( v6 != 1 )
      goto LABEL_42;
    goto LABEL_48;
  }
  *v19 = 0;
  if ( v6 != 1 )
  {
    v22 = 1;
    v30 = sub_79580(v4, 0);
    v19[1] = v30;
    v26 = v30;
    while ( 1 )
    {
      v27 = *a1;
      v28 = sub_79480((_QWORD *)v4);
      if ( !v28 )
        break;
      v29 = __CFADD__(v26, v28);
      v23 = v26 + v28;
      if ( v29 )
        break;
      v21 = v6 - 1;
      v19 = (__int64 *)(16 * v22 + v27);
      *v19 = v23;
      if ( v6 - 1 == v22 )
      {
LABEL_48:
        if ( (v32 & 2) != 0 )
        {
          v19[1] = ~v23;
          return 1;
        }
      }
LABEL_42:
      v24 = sub_79480((_QWORD *)v4);
      if ( !v24 )
        return 0;
      v25 = *v19 + v24;
      if ( __CFADD__(*v19, v24) && (v22 || !v33) && (v21 != v22 || (v32 & 2) == 0) )
        return 0;
      ++v22;
      v19[1] = v24;
      v26 = v25;
      if ( v22 == v6 )
        return 1;
    }
    return 0;
  }
  if ( (v18 & 2) == 0 )
  {
    v19[1] = sub_79580(v4, 0);
    return 1;
  }
  v19[1] = -1;
  return 1;
}
