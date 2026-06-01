unsigned __int64 __fastcall sub_10E8D0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  char v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  int v10; // ebp
  unsigned __int64 v11; // rdx
  char v12; // r12
  int i; // eax
  _QWORD *v14; // rsi
  __int64 v15; // rsi
  unsigned __int64 *v16; // r12
  __int64 *v17; // r13
  unsigned __int64 *v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rsi
  __int64 v23; // rsi
  __int64 v24; // rax
  int v25; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v26; // [rsp+8h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 316) = a2;
  if ( (a2 & 6) == 0 )
  {
    if ( !under_debugger )
      sub_383060(50149);
    goto LABEL_38;
  }
  if ( (a2 & 6) == 6 )
  {
    if ( !under_debugger )
      sub_383060(51947);
    goto LABEL_38;
  }
  v7 = a2;
  sub_10CB40(a1, a2, a3, a4, a5, a6);
  v8 = *(_QWORD *)(a1 + 320);
  v9 = *(int *)(v8 + 64);
  v10 = *(_DWORD *)(v8 + 64);
  sub_1053D0((__int64 *)(a1 + 8), v9, a1 + 288);
  sub_1053D0((__int64 *)(a1 + 32), v9, a1 + 288);
  v11 = *(_QWORD *)(a1 + 64);
  if ( v11 >= v9 )
  {
    if ( v9 != v11 )
      *(_QWORD *)(a1 + 64) = v9;
    v25 = 0;
    if ( v10 > 0 )
      goto LABEL_7;
LABEL_28:
    v16 = *(unsigned __int64 **)(a1 + 128);
    if ( !v16 )
      return v26 - __readfsqword(0x28u);
    v17 = (__int64 *)(a1 + 104);
    if ( !(16LL * *(_QWORD *)(a1 + 136)) )
      return v26 - __readfsqword(0x28u);
    goto LABEL_14;
  }
  v23 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 72) < v9 )
  {
    v24 = qvector_reserve();
    v11 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 56) = v24;
    v23 = v24;
  }
  memset((void *)(v23 + 4 * v11), 0, 4 * (v9 - v11));
  *(_QWORD *)(a1 + 64) = v9;
  v25 = 0;
  if ( v10 <= 0 )
    goto LABEL_28;
LABEL_7:
  v12 = v7 & 1;
  for ( i = 0; i < v10; v25 = i )
  {
    v15 = 40LL * i;
    if ( v12 )
      v14 = (_QWORD *)(*(_QWORD *)(a1 + 176) + v15);
    else
      v14 = (_QWORD *)(*(_QWORD *)(a1 + 200) + v15);
    sub_103FB0(a1, v14, (__int64)sub_102260, 0, (__int64)&v25);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * v25) = *(_QWORD *)(a1 + 136);
    i = v25 + 1;
  }
  v16 = *(unsigned __int64 **)(a1 + 128);
  if ( v16 )
  {
    v17 = (__int64 *)(a1 + 104);
    if ( 16LL * *(_QWORD *)(a1 + 136) )
    {
      do
      {
LABEL_14:
        v18 = v16;
        v16 += 2;
        sub_103DA0(v18, v17);
      }
      while ( v16 != (unsigned __int64 *)(*(_QWORD *)(a1 + 128) + 16LL * *(_QWORD *)(a1 + 136)) );
    }
  }
  v25 = 1;
  if ( v10 > 1 )
  {
    v19 = 1;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1 + 316) & 2) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 320);
        if ( (unsigned int)v19 >= *(_DWORD *)(v20 + 64) )
          sub_101D70();
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 528) + 8LL * (unsigned int)v19) + 24LL) & 0x600) != 0x200 )
          break;
      }
      sub_103FB0(a1, (_QWORD *)(*(_QWORD *)(a1 + 200) + 40LL * v19), (__int64)sub_101C70, 0, (__int64)&v25);
      if ( (*(_BYTE *)(a1 + 316) & 4) != 0 && (v21 = (_QWORD *)(*(_QWORD *)(a1 + 224) + 40LL * v25), v21[3]) )
      {
        sub_103FB0(a1, v21, (__int64)sub_101C70, 0, (__int64)&v25);
        v19 = v25 + 1;
        v25 = v19;
        if ( v19 >= v10 )
          return v26 - __readfsqword(0x28u);
      }
      else
      {
        v19 = v25 + 1;
        v25 = v19;
        if ( v19 >= v10 )
          return v26 - __readfsqword(0x28u);
      }
    }
    if ( !under_debugger )
      sub_383060(50150);
LABEL_38:
    BUG();
  }
  return v26 - __readfsqword(0x28u);
}
