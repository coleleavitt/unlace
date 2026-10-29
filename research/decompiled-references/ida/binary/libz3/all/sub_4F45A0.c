__int64 __fastcall sub_4F45A0(__int64 a1)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi

  v2 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)a1 = &off_1C4FEF8;
  if ( *(_DWORD *)(a1 + 112) )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 8 * v3++);
      sub_553300(v2, v4);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 112) );
  }
  v5 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 112) = 0;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 224);
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = *(_QWORD *)(a1 + 216);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(void **)(a1 + 192);
  if ( v8 )
    sub_186B220(v8);
  v9 = *(void **)(a1 + 104);
  if ( v9 != (void *)(a1 + 120) && v9 )
    sub_186B220(v9);
  v10 = *(_QWORD *)(a1 + 88);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 96);
    v12 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v11, v10);
  }
  v13 = *(_QWORD *)(a1 + 72);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 80);
    v12 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v12 )
      sub_15D7BC0(v14, v13);
  }
  result = sub_180C0E0(a1 + 24);
  v16 = *(_QWORD *)(a1 + 16);
  if ( v16 )
    result = sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 8);
  if ( v17 )
    return sub_186B220((void *)(v17 - 8));
  return result;
}

