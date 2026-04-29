__int64 __fastcall sub_7D420(__int64 *a1, __int64 a2)
{
  __int64 *v3; // rdi
  int v5; // eax
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rbx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rax
  char *v19; // rax
  char v20; // dl
  __int64 *v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rax
  bool v31; // cf
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // [rsp+Eh] [rbp-5Ah]
  char v35; // [rsp+Fh] [rbp-59h]
  __m128i v36; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v3 = (__int64 *)a2;
  v37 = __readfsqword(0x28u);
  v5 = sub_7C790((_QWORD *)a2);
  if ( v5 < 0 )
    return 0;
  v6 = a1[1];
  v7 = v5;
  if ( v5 != v6 )
  {
    v36 = 0;
    if ( v5 >= v6 )
    {
      v8 = (__int64 *)*a1;
      v9 = a1[2];
      if ( (unsigned __int64)&v36 < *a1 || &v36 >= (__m128i *)&v8[2 * v9] )
      {
        if ( v9 < v7 )
        {
          v3 = a1;
          v18 = qvector_reserve();
          v6 = a1[1];
          *a1 = v18;
          v8 = (__int64 *)v18;
          if ( v6 >= v7 )
            goto LABEL_26;
        }
        v10 = _mm_load_si128(&v36);
        while ( 1 )
        {
          v11 = v6++;
          *(__m128i *)&v8[2 * v11] = v10;
          if ( v7 == v6 )
            break;
          v8 = (__int64 *)*a1;
        }
      }
      else
      {
        if ( v9 < v7 )
        {
          v3 = a1;
          v33 = qvector_reserve();
          v6 = a1[1];
          *a1 = v33;
          v8 = (__int64 *)v33;
          if ( v6 >= v7 )
          {
LABEL_26:
            a1[1] = v7;
            v6 = v7;
            if ( *(_DWORD *)(a2 + 48) > 3u )
              goto LABEL_27;
LABEL_10:
            v12 = *a1;
            v13 = 0;
            v14 = *a1 + 16 * v6;
            if ( *a1 != v14 )
            {
              do
              {
                if ( (unsigned __int8)is_cvt64() )
                {
                  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
                    sub_79930(v3);
                  v15 = (int)unpack_dd();
                }
                else
                {
                  v15 = sub_7BFE0(a2);
                }
                v3 = (__int64 *)a2;
                v12 += 16;
                *(_QWORD *)(v12 - 16) = v13 + v15;
                v16 = sub_7C160((_QWORD *)a2);
                *(_QWORD *)(v12 - 8) = v16;
                v13 = *(_QWORD *)(v12 - 16) + v16;
              }
              while ( v14 != v12 );
            }
            return 1;
          }
        }
        while ( 1 )
        {
          v22 = v6++;
          *(_OWORD *)&v8[2 * v22] = 0;
          if ( v7 == v6 )
            break;
          v8 = (__int64 *)*a1;
        }
      }
      a1[1] = v6;
      if ( *(_DWORD *)(a2 + 48) > 3u )
        goto LABEL_27;
      goto LABEL_10;
    }
    a1[1] = v5;
    v6 = v5;
  }
  if ( *(_DWORD *)(a2 + 48) <= 3u )
    goto LABEL_10;
  if ( !v6 )
    return 1;
LABEL_27:
  v19 = *(char **)a2;
  if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
    sub_79910(v3);
  v20 = *v19;
  *(_QWORD *)a2 = v19 + 1;
  v21 = (__int64 *)*a1;
  v34 = v20;
  v35 = v20 & 1;
  if ( (v20 & 1) == 0 )
  {
    v23 = v6 - 1;
    v24 = 0;
    v25 = sub_7C260(a2, 0);
    *v21 = v25;
    if ( v6 != 1 )
      goto LABEL_39;
    goto LABEL_45;
  }
  *v21 = 0;
  if ( v6 != 1 )
  {
    v24 = 1;
    v32 = sub_7C260(a2, 0);
    v21[1] = v32;
    v28 = v32;
    while ( 1 )
    {
      v29 = *a1;
      v30 = sub_7C160((_QWORD *)a2);
      if ( !v30 )
        break;
      v31 = __CFADD__(v28, v30);
      v25 = v28 + v30;
      if ( v31 )
        break;
      v23 = v6 - 1;
      v21 = (__int64 *)(16 * v24 + v29);
      *v21 = v25;
      if ( v6 - 1 == v24 )
      {
LABEL_45:
        if ( (v34 & 2) != 0 )
        {
          v21[1] = ~v25;
          return 1;
        }
      }
LABEL_39:
      v26 = sub_7C160((_QWORD *)a2);
      if ( !v26 )
        return 0;
      v27 = *v21 + v26;
      if ( __CFADD__(*v21, v26) && (v24 || !v35) && (v23 != v24 || (v34 & 2) == 0) )
        return 0;
      ++v24;
      v21[1] = v26;
      v28 = v27;
      if ( v24 == v6 )
        return 1;
    }
    return 0;
  }
  if ( (v20 & 2) == 0 )
  {
    v21[1] = sub_7C260(a2, 0);
    return 1;
  }
  v21[1] = -1;
  return 1;
}
