__int64 __fastcall sub_3EDC20(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  _QWORD *v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  void (__fastcall ***v11)(void *, unsigned __int64); // rbx
  bool v12; // zf
  __int64 result; // rax
  __int64 *v14; // rbx
  __int64 *v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 *v18; // r13
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 *v21; // rbx
  __int64 *v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 *v25; // r13
  __int64 v26; // rax
  __int64 *v27; // r12
  __int64 *v28; // rbx
  __int64 *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  void *v32; // rdi

  *(_QWORD *)(a1 + 280) = &off_1C62200;
  v2 = *(void **)(a1 + 328);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(void **)(a1 + 304);
  if ( v3 )
    sub_186B220(v3);
  v4 = *(_QWORD **)(a1 + 240);
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    operator delete(v5, 0x18u);
  }
  memset(*(void **)(a1 + 224), 0, 8LL * *(_QWORD *)(a1 + 232));
  v6 = *(void **)(a1 + 224);
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  v7 = *(_QWORD *)(a1 + 232);
  if ( v6 != (void *)(a1 + 272) )
  {
    v7 *= 8LL;
    operator delete(v6, v7);
  }
  sub_2334C0((__int64 *)(a1 + 208));
  v8 = *(_QWORD *)(a1 + 200);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 192);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 184);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  sub_2334C0((__int64 *)(a1 + 168));
  sub_2334C0((__int64 *)(a1 + 152));
  v11 = *(void (__fastcall ****)(void *, unsigned __int64))(a1 + 112);
  if ( v11 )
  {
    v12 = (*((_DWORD *)v11 + 4))-- == 1;
    if ( v12 )
    {
      (**v11)(v11, v7);
      sub_186B220(v11);
    }
  }
  result = sub_2334C0((__int64 *)(a1 + 96));
  v14 = *(__int64 **)(a1 + 88);
  if ( v14 )
  {
    result = *((unsigned int *)v14 - 1);
    v15 = &v14[result];
    if ( v14 >= v15 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v16 = *v14;
        if ( *v14 )
        {
          v17 = *(_QWORD *)(a1 + 80);
          v12 = (*(_DWORD *)(v16 + 8))-- == 1;
          if ( v12 )
            break;
        }
        if ( ++v14 >= v15 )
          goto LABEL_25;
      }
      result = sub_15D7BC0(v17, v16);
      ++v14;
    }
    while ( v14 < v15 );
LABEL_25:
    v14 = *(__int64 **)(a1 + 88);
    if ( v14 )
LABEL_26:
      result = sub_186B220(v14 - 1);
  }
  v18 = *(__int64 **)(a1 + 72);
  if ( v18 )
  {
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 )
    {
      v20 = &v18[2 * v19];
      do
      {
        v21 = (__int64 *)v18[1];
        if ( v21 )
        {
          v22 = &v21[*((unsigned int *)v21 - 1)];
          if ( v21 >= v22 )
            goto LABEL_38;
          do
          {
            while ( 1 )
            {
              v23 = *v21;
              if ( *v21 )
              {
                v24 = *v18;
                v12 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v21 >= v22 )
                goto LABEL_37;
            }
            sub_15D7BC0(v24, v23);
            ++v21;
          }
          while ( v21 < v22 );
LABEL_37:
          v21 = (__int64 *)v18[1];
          if ( v21 )
LABEL_38:
            sub_186B220(v21 - 1);
        }
        v18 += 2;
      }
      while ( v18 != v20 );
      v18 = *(__int64 **)(a1 + 72);
    }
    result = sub_186B220(v18 - 1);
  }
  v25 = *(__int64 **)(a1 + 64);
  if ( v25 )
  {
    v26 = *((unsigned int *)v25 - 1);
    if ( (_DWORD)v26 )
    {
      v27 = &v25[2 * v26];
      do
      {
        v28 = (__int64 *)v25[1];
        if ( v28 )
        {
          v29 = &v28[*((unsigned int *)v28 - 1)];
          if ( v28 >= v29 )
            goto LABEL_53;
          do
          {
            while ( 1 )
            {
              v30 = *v28;
              if ( *v28 )
              {
                v31 = *v25;
                v12 = (*(_DWORD *)(v30 + 8))-- == 1;
                if ( v12 )
                  break;
              }
              if ( ++v28 >= v29 )
                goto LABEL_52;
            }
            sub_15D7BC0(v31, v30);
            ++v28;
          }
          while ( v28 < v29 );
LABEL_52:
          v28 = (__int64 *)v25[1];
          if ( v28 )
LABEL_53:
            sub_186B220(v28 - 1);
        }
        v25 += 2;
      }
      while ( v25 != v27 );
      v25 = *(__int64 **)(a1 + 64);
    }
    result = sub_186B220(v25 - 1);
  }
  v32 = *(void **)(a1 + 40);
  if ( v32 )
    return sub_186B220(v32);
  return result;
}

