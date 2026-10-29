__int64 __fastcall sub_989970(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rsi
  _DWORD *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // rax

  sub_9827B0(a1, 0);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 524LL) )
  {
    sub_9852A0(a1);
    v6 = *(_QWORD *)(a1 + 56);
    if ( v6 )
    {
LABEL_3:
      v7 = *(_QWORD *)(a1 + 24);
      v8 = 4LL * *(unsigned int *)(v6 - 4);
      v9 = (_DWORD *)(v6 + v8);
      v10 = (_DWORD *)(v6 + 4);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(v7 + 9472);
      v11 = *(_QWORD *)(v7 + 8872);
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(v11 + 16LL * (*(v10 - 1) >> 1) + 12) & 0x7FFFFF;
      if ( v8 == 4 )
        goto LABEL_10;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( v6 )
      goto LABEL_3;
  }
  v17 = *(_QWORD *)(a1 + 24);
  v9 = nullptr;
  v11 = *(_QWORD *)(v17 + 8872);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(v17 + 9472);
  v10 = (_DWORD *)&byte_4;
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(v11 + 0x232622BFCLL) & 0x7FFFFF;
  do
  {
LABEL_4:
    v12 = *v10 >> 1;
    if ( (_DWORD)v12 != 0x7FFFFFFF )
    {
      v13 = v11 + 16 * v12;
      *(_BYTE *)(v13 + 11) &= ~1u;
      v14 = *(_DWORD *)(v13 + 8) & 0xFFFFFF;
      if ( *(_DWORD *)(a1 + 80) < v14 )
        *(_DWORD *)(a1 + 80) = v14;
      v15 = *(_DWORD *)(v13 + 12) & 0x7FFFFF;
      if ( *(_DWORD *)(a1 + 84) < v15 )
        *(_DWORD *)(a1 + 84) = v15;
    }
    ++v10;
  }
  while ( v10 != v9 );
LABEL_10:
  result = *(unsigned int *)(*(_QWORD *)(a1 + 8) + 712LL);
  if ( (_DWORD)result )
    return sub_988960((_QWORD *)a1, a2, a3);
  return result;
}

