__int64 *__fastcall sub_4F47F0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)a1 = &off_1C4FFA8;
  if ( *(_DWORD *)(a1 + 128) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v3++);
      sub_553300(v2, v4);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 128) );
  }
  v5 = *(_QWORD *)(a1 + 352);
  *(_DWORD *)(a1 + 128) = 0;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 328);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 320);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 312);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(void **)(a1 + 288);
  if ( v9 )
    sub_186B220(v9);
  v10 = *(void **)(a1 + 200);
  if ( v10 != (void *)(a1 + 216) && v10 )
    sub_186B220(v10);
  v11 = *(void **)(a1 + 120);
  if ( v11 && v11 != (void *)(a1 + 136) )
    sub_186B220(v11);
  v12 = *(_QWORD *)(a1 + 104);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 112);
    v14 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v13, v12);
  }
  v15 = *(_QWORD *)(a1 + 88);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 96);
    v14 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v14 )
      sub_15D7BC0(v16, v15);
  }
  sub_180C0E0(a1 + 40);
  v17 = *(_QWORD *)(a1 + 32);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(_QWORD *)(a1 + 24);
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  v19 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)a1 = qword_1C66740;
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  v20 = *(_QWORD *)(a1 + 8);
  result = qword_1C66718;
  *(_QWORD *)a1 = qword_1C66718;
  if ( v20 )
    return (__int64 *)sub_186B220((void *)(v20 - 8));
  return result;
}

