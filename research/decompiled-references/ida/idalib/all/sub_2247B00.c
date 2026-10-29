__int64 __fastcall sub_2247B00(__m128i *a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 result; // rax
  unsigned __int64 v7; // rax
  bool v8; // cc
  __m128i v9; // xmm2
  __m128i v10; // rax
  unsigned int v11; // r12d
  int v12; // r13d
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __m128i v16; // rdi
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // r15
  unsigned int v20; // esi
  void *v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // r9
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned __int8 v30; // [rsp+0h] [rbp-88h]
  unsigned __int8 v31; // [rsp+0h] [rbp-88h]
  unsigned int v32; // [rsp+0h] [rbp-88h]
  __m128i v33; // [rsp+10h] [rbp-78h] BYREF
  void *v34; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v35; // [rsp+28h] [rbp-60h]
  void *v36; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-50h]
  void *v38; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+48h] [rbp-40h]

  v4 = a2;
  v33 = _mm_loadu_si128(a1);
  if ( !a2 )
    v4 = sub_2246170((char **)&v33);
  result = 1;
  if ( !v33.m128i_i64[1] )
    return result;
  v7 = 0;
  if ( *(_BYTE *)v33.m128i_i64[0] == 48 )
  {
    do
    {
      if ( v33.m128i_i64[1] == ++v7 )
        goto LABEL_9;
    }
    while ( *(_BYTE *)(v33.m128i_i64[0] + v7) == 48 );
    if ( v33.m128i_i64[1] < v7 )
    {
LABEL_9:
      v8 = *(_DWORD *)(a3 + 8) <= 0x40u;
      v33 = (__m128i)(unsigned __int64)(v33.m128i_i64[0] + v33.m128i_i64[1]);
      if ( !v8 && *(_QWORD *)a3 )
        operator delete[](*(void **)a3);
      v9 = _mm_load_si128(&v33);
      *(_QWORD *)a3 = 0;
      *(_DWORD *)(a3 + 8) = 64;
      *a1 = v9;
      return 0;
    }
  }
  v10.m128i_i64[1] = v33.m128i_i64[1] - v7;
  v10.m128i_i64[0] = v33.m128i_i64[0] + v7;
  v33 = v10;
  if ( v4 <= 1 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( !v14 )
    {
      v13 = 0;
      v11 = 0;
      v12 = 1;
      goto LABEL_19;
    }
    v12 = 1;
    v11 = 0;
    goto LABEL_68;
  }
  v11 = 0;
  do
    v12 = 1 << ++v11;
  while ( 1 << v11 < v4 );
  v13 = v11 * v10.m128i_i32[2];
  v14 = *(_DWORD *)(a3 + 8);
  if ( v14 > v11 * v10.m128i_i32[2] )
  {
LABEL_68:
    v15 = v14;
    goto LABEL_20;
  }
  if ( v14 >= v13 )
  {
LABEL_19:
    v15 = v14;
    v14 = v13;
    goto LABEL_20;
  }
  sub_2206CD0((__int64)&v38, (const void **)a3, v13);
  if ( *(_DWORD *)(a3 + 8) > 0x40u && *(_QWORD *)a3 )
    operator delete[](*(void **)a3);
  v14 = v13;
  *(_QWORD *)a3 = v38;
  v15 = v39;
  *(_DWORD *)(a3 + 8) = v39;
LABEL_20:
  v35 = 1;
  v34 = nullptr;
  v37 = 1;
  v36 = nullptr;
  if ( v4 != v12 )
  {
    v39 = v14;
    if ( v14 > 0x40 )
    {
      v32 = v14;
      sub_2205470((__int64)&v38, v4, 0);
      if ( v35 > 0x40 && v34 )
      {
        operator delete[](v34);
        v34 = v38;
        v28 = v39;
        v39 = v32;
        v35 = v28;
      }
      else
      {
        v34 = v38;
        v29 = v39;
        v39 = v32;
        v35 = v29;
      }
      sub_2205470((__int64)&v38, 0, 0);
      if ( v37 > 0x40 && v36 )
        operator delete[](v36);
    }
    else
    {
      v34 = (void *)v4;
      v35 = v14;
      v38 = nullptr;
    }
    v36 = v38;
    v37 = v39;
    v15 = *(_DWORD *)(a3 + 8);
  }
  if ( v15 > 0x40 )
  {
    **(_QWORD **)a3 = 0;
    memset((void *)(*(_QWORD *)a3 + 8LL), 0, 8 * ((unsigned int)(((unsigned __int64)v15 + 63) >> 6) + 0x1FFFFFFF));
  }
  else
  {
    *(_QWORD *)a3 = 0;
  }
  v16 = v33;
  if ( !v33.m128i_i64[1] )
    goto LABEL_39;
  while ( 1 )
  {
    v17 = *(char *)v16.m128i_i64[0];
    if ( *(char *)v16.m128i_i64[0] <= 47 )
      goto LABEL_85;
    if ( (char)v17 <= 57 )
    {
      v18 = v17 - 48;
      goto LABEL_30;
    }
    if ( (char)v17 <= 96 )
    {
LABEL_85:
      if ( (unsigned __int8)(v17 - 65) > 0x19u )
        goto LABEL_40;
      v18 = v17 - 55;
    }
    else
    {
      if ( (char)v17 > 122 )
        goto LABEL_40;
      v18 = v17 - 87;
    }
LABEL_30:
    if ( v4 <= v18 )
      goto LABEL_40;
    v19 = v18;
    if ( v4 == v12 )
    {
      v22 = *(_DWORD *)(a3 + 8);
      if ( v22 > 0x40 )
      {
        sub_220A130((unsigned __int64 *)a3, v11);
        v22 = *(_DWORD *)(a3 + 8);
        if ( v22 > 0x40 )
        {
          v16.m128i_i64[0] = v33.m128i_i64[0];
          **(_QWORD **)a3 |= v19;
          v16.m128i_i64[1] = v33.m128i_i64[1];
          goto LABEL_37;
        }
        v16 = v33;
        v25 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v22;
      }
      else
      {
        v23 = 0;
        if ( v11 != v22 )
          v23 = *(_QWORD *)a3 << v11;
        v24 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v22) & v23;
        v25 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v22;
        if ( !v22 )
          v24 = 0;
        *(_QWORD *)a3 = v24;
      }
      v26 = (v19 | *(_QWORD *)a3) & v25;
      v27 = 0;
      if ( v22 )
        v27 = v26;
      *(_QWORD *)a3 = v27;
    }
    else
    {
      sub_2209DE0(a3, (__int64 *)&v34);
      v20 = v37;
      if ( v37 > 0x40 )
      {
        *(_QWORD *)v36 = v19;
        memset((char *)v36 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v20 + 63) >> 6) + 0x1FFFFFFF));
      }
      else
      {
        v21 = (void *)(v19 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v37));
        if ( !v37 )
          v21 = nullptr;
        v36 = v21;
      }
      sub_22059A0((unsigned __int64 *)a3, (__int64 *)&v36);
      v16 = v33;
    }
LABEL_37:
    if ( !v16.m128i_i64[1] )
      break;
    --v16.m128i_i64[1];
    ++v16.m128i_i64[0];
    v33 = v16;
    if ( !v16.m128i_i64[1] )
      goto LABEL_39;
  }
  v33 = (__m128i)v16.m128i_u64[0];
LABEL_39:
  v16.m128i_i64[1] = 0;
LABEL_40:
  result = 1;
  if ( a1->m128i_i64[1] != v16.m128i_i64[1] )
  {
    result = 0;
    *a1 = _mm_load_si128(&v33);
  }
  if ( v37 > 0x40 && v36 )
  {
    v30 = result;
    operator delete[](v36);
    result = v30;
  }
  if ( v35 > 0x40 )
  {
    if ( v34 )
    {
      v31 = result;
      operator delete[](v34);
      return v31;
    }
  }
  return result;
}
