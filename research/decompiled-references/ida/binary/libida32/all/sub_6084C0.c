unsigned __int64 __fastcall sub_6084C0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rbx
  unsigned int v17; // esi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+Ch] [rbp-5Ch]
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = switch_dbctx(*(int *)(a1 + 8));
  v3 = *(_QWORD *)(v2 + 1480);
  v4 = v2;
  v5 = *(unsigned int *)(v3 + 2304);
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_DWORD *)(v3 + 2304);
  if ( v5 == v6 )
    goto LABEL_14;
  v24 = 0;
  v25 = 0;
  if ( v5 < v6 )
  {
    v13 = v5;
    do
    {
      v14 = *(_QWORD *)(a1 + 88) + 24 * v13;
      v15 = *(void **)v14;
      if ( *(_QWORD *)v14 )
      {
        *(_QWORD *)(v14 + 8) = 0;
        v23 = v7;
        qfree(v15);
        v7 = v23;
      }
      ++v13;
    }
    while ( v13 < v6 );
    *(_QWORD *)(a1 + 96) = v5;
LABEL_14:
    if ( !v7 )
      return v26 - __readfsqword(0x28u);
    goto LABEL_15;
  }
  v8 = *(_QWORD *)(a1 + 88);
  v9 = *(_QWORD *)(a1 + 104);
  v10 = a1 + 88;
  if ( (unsigned __int64)&v24 < v8 || (unsigned __int64)&v24 >= v8 + 24 * v9 )
  {
    if ( v9 >= v5
      || (v21 = qvector_reserve(v10, v8, v5, 24),
          v6 = *(_QWORD *)(a1 + 96),
          *(_QWORD *)(a1 + 88) = v21,
          v8 = v21,
          v6 < v5) )
    {
      v11 = 24 * v6;
      while ( 1 )
      {
        v12 = v11 + v8;
        ++v6;
        v11 += 24;
        *(_QWORD *)v12 = 0;
        *(_OWORD *)(v12 + 8) = 0;
        if ( v5 == v6 )
          break;
        v8 = *(_QWORD *)(a1 + 88);
      }
    }
  }
  else if ( v9 >= v5
         || (v22 = qvector_reserve(v10, v8, v5, 24),
             v6 = *(_QWORD *)(a1 + 96),
             *(_QWORD *)(a1 + 88) = v22,
             v8 = v22,
             v6 < v5) )
  {
    v19 = 24 * v6;
    while ( 1 )
    {
      v20 = v19 + v8;
      ++v6;
      v19 += 24;
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      if ( v5 == v6 )
        break;
      v8 = *(_QWORD *)(a1 + 88);
    }
  }
  *(_QWORD *)(a1 + 96) = v5;
LABEL_15:
  v16 = 0;
  do
  {
    sub_79B6F0(v3 + 2240, v4, *(_QWORD *)(a1 + 88) + 24 * v16, (unsigned int)v16, 83);
    *(_DWORD *)(a1 + 120) = v16;
    v17 = v16++;
    sub_607FB0(
      *(__int64 **)(v4 + 1480),
      v17,
      (__int64 (__fastcall *)(__int64, const char *, _QWORD, __int64))&sub_60C300,
      a1);
  }
  while ( v5 != v16 );
  return v26 - __readfsqword(0x28u);
}

