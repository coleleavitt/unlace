__int64 __fastcall sub_7E600(__int64 *a1, __int64 a2)
{
  int v4; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int128 i; // xmm0
  __int64 v10; // r14
  __int64 v11; // r15
  void *v12; // rax
  unsigned __int64 v13; // r14
  __int64 *v14; // rax
  __int64 v15; // rdi
  int v16; // r14d
  __int64 v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  __int64 *v20; // rdi
  int v21; // eax
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rbx
  __int64 *j; // r12
  __int64 v27; // rax
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 n; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  __int128 v37; // [rsp+18h] [rbp-50h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v4 = sub_79AB0((_QWORD *)a2);
  if ( v4 < 0 )
    return 0;
  v5 = a1[1];
  v6 = v4;
  if ( v4 != v5 )
  {
    src = nullptr;
    v37 = 0;
    if ( v4 < v5 )
    {
      v13 = v4;
      do
      {
        v14 = (__int64 *)(*a1 + 24 * v13);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15);
        }
        ++v13;
      }
      while ( v13 < v5 );
    }
    else
    {
      v7 = *a1;
      v8 = a1[2];
      if ( (unsigned __int64)&src < *a1 || (unsigned __int64)&src >= v7 + 24 * v8 )
      {
        if ( v8 < v6 )
        {
          v33 = qvector_reserve(a1, v7, v6, 24);
          v5 = a1[1];
          *a1 = v33;
        }
        for ( i = 0; v5 < v6; ++v5 )
        {
          v10 = *a1 + 24 * v5;
          *(_QWORD *)v10 = 0;
          *(_OWORD *)(v10 + 8) = i;
          v11 = v37;
          if ( (_QWORD)v37 )
          {
            n = 8 * v37;
            v12 = (void *)qalloc_or_throw(8 * v37);
            *(_QWORD *)(v10 + 16) = v11;
            *(_QWORD *)v10 = v12;
            memcpy(v12, src, n);
            *(_QWORD *)(v10 + 8) = v11;
            i = 0;
          }
        }
      }
      else
      {
        if ( v8 < v6 )
        {
          v34 = qvector_reserve(a1, v7, v6, 24);
          v5 = a1[1];
          *a1 = v34;
        }
        if ( v5 < v6 )
        {
          v31 = 24 * v5;
          do
          {
            ++v5;
            v32 = v31 + *a1;
            v31 += 24;
            *(_QWORD *)v32 = 0;
            *(_OWORD *)(v32 + 8) = 0;
          }
          while ( v6 != v5 );
        }
      }
    }
    a1[1] = v6;
  }
  v16 = 0;
  v17 = 0;
  sub_7E580(a1 + 3, v6);
  if ( a1[4] )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)a2 >= *(_QWORD *)(a2 + 8) )
      {
LABEL_47:
        if ( under_debugger )
          goto LABEL_50;
        goto LABEL_48;
      }
      *(_DWORD *)(a1[3] + 4 * v17) = unpack_dd(a2);
      v18 = *a1;
      v19 = *(_QWORD *)(a2 + 8);
      if ( *(_QWORD *)a2 >= v19 )
      {
        if ( under_debugger )
LABEL_50:
          BUG();
LABEL_48:
        sub_37EEE0(50583);
      }
      v20 = (__int64 *)a2;
      v21 = unpack_dd(a2);
      v22 = v21;
      if ( *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 < (unsigned __int64)v21 || v21 < 0 )
        return 0;
      v23 = v18 + 24 * v17;
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 < v21 )
        break;
      if ( v21 != v24 )
        goto LABEL_24;
LABEL_25:
      v25 = *(__int64 **)v23;
      for ( j = &v25[v24]; j != v25; ++v25 )
      {
        while ( *(_DWORD *)(a2 + 48) > 3u )
        {
          v20 = (__int64 *)a2;
          *v25++ = sub_794C0((_QWORD *)a2);
          if ( j == v25 )
            goto LABEL_33;
        }
        if ( (unsigned __int8)is_cvt64(v20, v19) )
        {
          v19 = *(_QWORD *)(a2 + 8);
          if ( *(_QWORD *)a2 >= v19 )
            goto LABEL_47;
          v20 = (__int64 *)a2;
          v27 = (int)unpack_dd(a2);
        }
        else
        {
          v20 = (__int64 *)a2;
          v27 = sub_79300(a2);
        }
        *v25 = v27;
      }
LABEL_33:
      v17 = ++v16;
      if ( v16 >= (unsigned __int64)a1[4] )
        return 1;
    }
    v29 = *(__int64 **)v23;
    if ( *(_QWORD *)(v23 + 16) < (unsigned __int64)v21 )
    {
      v30 = qvector_reserve(v23, v29, v21, 8);
      v24 = *(_QWORD *)(v23 + 8);
      *(_QWORD *)v23 = v30;
      v29 = (__int64 *)v30;
    }
    v20 = &v29[v24];
    v19 = 0;
    memset(v20, 0, 8 * (v22 - v24));
LABEL_24:
    *(_QWORD *)(v23 + 8) = v22;
    v24 = v22;
    goto LABEL_25;
  }
  return 1;
}
