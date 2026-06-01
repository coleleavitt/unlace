unsigned __int64 __fastcall sub_50F560(_QWORD *a1)
{
  void *v2; // rdi
  __int64 *v4; // rdi
  char *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r13
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int8 v16; // bl
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rbx
  char v19; // al
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rbp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbp
  __int64 v25[2]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  int v27[4]; // [rsp+18h] [rbp-50h]
  int v28[2]; // [rsp+28h] [rbp-40h]
  int v29; // [rsp+30h] [rbp-38h]
  int v30; // [rsp+38h] [rbp-30h]
  int v31; // [rsp+40h] [rbp-28h]
  int v32; // [rsp+48h] [rbp-20h]
  __int64 v33; // [rsp+50h] [rbp-18h]

  *(_QWORD *)v28 = __readfsqword(0x28u);
  *(_OWORD *)v27 = 0;
  ptr = nullptr;
  if ( sub_631270(*a1, &ptr, 84) <= 0 )
    goto LABEL_2;
  v4 = v25;
  v5 = (char *)ptr + *(_QWORD *)v27;
  *(__m128i *)v25 = _mm_unpacklo_epi64(
                      (__m128i)(unsigned __int64)ptr,
                      (__m128i)((unsigned __int64)ptr + *(_QWORD *)v27));
  v6 = (unsigned __int16)unpack_dw(v25, (char *)ptr + *(_QWORD *)v27);
  if ( (unsigned __int16)v6 != 0xFFFF )
    goto LABEL_6;
  v5 = (char *)v25[1];
  if ( v25[0] < (unsigned __int64)v25[1] )
  {
    v16 = *(_BYTE *)v25[0];
    v4 = v25;
    ++v25[0];
    v6 = unpack_dd(v25);
    if ( v16 > 2u )
    {
      sub_84F5B0(
        "unknown selector format: %u\n",
        v25[0],
        v25[1],
        (int)ptr,
        v27[0],
        v27[2],
        v28[0],
        v29,
        v30,
        v31,
        v32,
        v33);
      v2 = ptr;
      if ( !ptr )
        return *(_QWORD *)v28 - __readfsqword(0x28u);
      goto LABEL_3;
    }
    v7 = *a1;
    v8 = v6;
    v9 = *(_QWORD *)(*(_QWORD *)(*a1 + 1760LL) + 32LL);
    if ( v16 != 2 || v6 <= 0 )
      goto LABEL_7;
    if ( v9 >= v6 )
      goto LABEL_9;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v25[0] >= (unsigned __int64)v25[1] )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v7 + 1760) + 32LL);
LABEL_31:
        if ( v15 == v8 )
          goto LABEL_2;
        goto LABEL_11;
      }
      v19 = is_cvt64(v4, v5, v7);
      v20 = v25[1];
      if ( v19 )
      {
        v22 = (unsigned int)unpack_dd(v25);
        if ( v22 == 0xFFFFFFFFLL )
          v22 = -1;
      }
      else
      {
        v22 = unpack_dq(v25);
      }
      if ( v25[0] >= (unsigned __int64)v25[1] )
      {
LABEL_30:
        v15 = *(_QWORD *)(*(_QWORD *)(*a1 + 1760LL) + 32LL);
        goto LABEL_31;
      }
      if ( (unsigned __int8)is_cvt64(v25, v20, v21) )
      {
        v23 = (unsigned int)unpack_dd(v25);
        if ( (unsigned int)v23 == 0xFFFFFFFFLL )
        {
          if ( !v22 )
          {
            if ( v8 == *(_QWORD *)(*(_QWORD *)(*a1 + 1760LL) + 32LL) )
              goto LABEL_10;
            goto LABEL_11;
          }
          v23 = -1;
LABEL_60:
          v17 += v23;
          v18 += v22;
          v4 = *(__int64 **)(*a1 + 1760LL);
          v23 = 1;
LABEL_49:
          v24 = v23 + v18;
          while ( 1 )
          {
            v5 = (char *)v18;
            if ( !(unsigned __int8)sub_50F390(v4, v18, v17) )
            {
              v5 = (char *)v18;
              sub_84F5B0(
                "duplicate selector (%a, base %a)\n",
                v25[0],
                v25[1],
                (int)ptr,
                v27[0],
                v27[2],
                v28[0],
                v29,
                v30,
                v31,
                v32,
                v33);
            }
            v7 = *a1;
            v4 = *(__int64 **)(*a1 + 1760LL);
            if ( v24 == v18 + 1 )
              break;
            ++v18;
          }
          v9 = v4[4];
          goto LABEL_57;
        }
      }
      else
      {
        v23 = unpack_dq(v25);
      }
      if ( v22 )
        goto LABEL_60;
      v7 = *a1;
      v4 = *(__int64 **)(*a1 + 1760LL);
      v9 = v4[4];
      if ( v23 >= v9 + v23 || v8 < v9 + v23 )
        goto LABEL_9;
      v5 = (char *)(v18 + 1);
      if ( v23 )
      {
        ++v18;
        goto LABEL_49;
      }
LABEL_57:
      if ( v9 >= v8 )
        goto LABEL_9;
    }
  }
  v4 = v25;
  v6 = unpack_dd(v25);
LABEL_6:
  v7 = *a1;
LABEL_7:
  v8 = v6;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v7 + 1760) + 32LL);
      if ( v9 >= v8 )
        break;
      if ( v25[0] >= (unsigned __int64)v25[1] )
        goto LABEL_11;
      v13 = is_cvt64(v4, v5, v7);
      v14 = v25[1];
      if ( v13 )
      {
        v11 = (unsigned int)unpack_dd(v25);
        if ( v11 == 0xFFFFFFFF )
          v11 = -1;
      }
      else
      {
        v11 = unpack_dq(v25);
      }
      if ( v25[0] >= (unsigned __int64)v25[1] )
        goto LABEL_30;
      if ( (unsigned __int8)is_cvt64(v25, v14, v10) )
      {
        v12 = (unsigned int)unpack_dd(v25);
        if ( v12 == 0xFFFFFFFF )
          v12 = -1;
      }
      else
      {
        v12 = unpack_dq(v25);
      }
      v5 = (char *)v11;
      v4 = *(__int64 **)(*a1 + 1760LL);
      if ( !(unsigned __int8)sub_50F390(v4, v11, v12) )
      {
        v5 = (char *)v11;
        v4 = (__int64 *)"duplicate selector (%a, base %a)\n";
        sub_84F5B0(
          "duplicate selector (%a, base %a)\n",
          v25[0],
          v25[1],
          (int)ptr,
          v27[0],
          v27[2],
          v28[0],
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      v7 = *a1;
    }
  }
  else
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v7 + 1760) + 32LL);
  }
LABEL_9:
  if ( v8 != v9 )
    goto LABEL_11;
LABEL_10:
  if ( v25[0] < (unsigned __int64)v25[1] )
LABEL_11:
    sub_84F5B0(
      "error while restoring selectors from database\n",
      v25[0],
      v25[1],
      (int)ptr,
      v27[0],
      v27[2],
      v28[0],
      v29,
      v30,
      v31,
      v32,
      v33);
LABEL_2:
  v2 = ptr;
  if ( ptr )
  {
LABEL_3:
    *(_QWORD *)v27 = 0;
    qfree(v2);
  }
  return *(_QWORD *)v28 - __readfsqword(0x28u);
}
