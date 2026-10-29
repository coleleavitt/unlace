__int64 __fastcall sub_1680890(__int64 a1, _QWORD *a2, const void *a3, __int64 a4)
{
  unsigned int v4; // ebp
  size_t v5; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax

  v4 = *(unsigned __int8 *)(a1 + 40);
  if ( (_BYTE)v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 != a4 || v5 && memcmp(*(const void **)a1, a3, v5) )
    return v4;
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 16) = *a2;
  v7 = a2[1];
  *a2 = 0;
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v7;
  v9 = a2[2];
  a2[1] = v8;
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v9;
  a2[2] = v10;
  *(_BYTE *)(a1 + 40) = 1;
  return 1;
}
