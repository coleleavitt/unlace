__int64 __fastcall sub_63D960(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rbx
  __int64 result; // rax
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 *v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rsi

  sub_63D510(a1);
  v2 = *(_QWORD *)(a1 + 240);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = *(__int64 **)(a1 + 232);
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = *(_QWORD *)(a1 + 224);
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = *(__int64 **)(a1 + 232);
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  v8 = *(void **)(a1 + 200);
  if ( v8 )
    sub_186B220(v8);
  v9 = *(void **)(a1 + 176);
  if ( v9 )
    sub_186B220(v9);
  v10 = *(void **)(a1 + 152);
  if ( v10 )
    sub_186B220(v10);
  v11 = *(void **)(a1 + 144);
  if ( v11 )
  {
    sub_63CF80(*(_QWORD **)(a1 + 144));
    sub_186B220(v11);
  }
  result = sub_643660(a1 + 56);
  v13 = *(void **)(a1 + 120);
  if ( v13 )
    result = sub_186B220(v13);
  v14 = *(void **)(a1 + 96);
  if ( v14 )
    result = sub_186B220(v14);
  v15 = *(_QWORD *)(a1 + 88);
  if ( v15 )
    result = sub_186B220((void *)(v15 - 8));
  v16 = *(void **)(a1 + 56);
  if ( v16 )
    result = sub_186B220(v16);
  v17 = *(void **)(a1 + 32);
  if ( v17 )
    result = sub_186B220(v17);
  v18 = *(__int64 **)(a1 + 24);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      return sub_186B220(v18 - 1);
    do
    {
      v20 = *v18++;
      result = sub_62A410(*(__int64 **)(a1 + 16), v20);
    }
    while ( v18 < v19 );
    v18 = *(__int64 **)(a1 + 24);
    if ( v18 )
      return sub_186B220(v18 - 1);
  }
  return result;
}

