__int64 __fastcall sub_16B6EA0(__int64 a1, __int64 *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rbx
  size_t v8; // rdx
  unsigned __int64 v9; // r13
  _BYTE *v10; // r12
  _BYTE *v11; // rax

  v5 = *(_DWORD *)(a1 + 16) * ((*(_WORD *)(a1 + 2) >> 6) & 7u);
  *a2 = a1 + 4LL * *(unsigned int *)(a1 + 4) + 20;
  a2[1] = v5;
  v6 = sub_A72040(a4, *(_QWORD *)(a1 + 8));
  if ( !v6 || (unsigned int)*(unsigned __int8 *)(v6 + 16) - 2 > 1 )
    BUG();
  v7 = *(_QWORD **)(v6 + 40);
  if ( (*(_BYTE *)(v6 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v7 + 2) <= 0x40u )
      v7 = (_QWORD *)*v7;
    else
      v7 = *(_QWORD **)*v7;
  }
  v8 = a2[1];
  v9 = -1;
  if ( v8 )
  {
    v10 = (_BYTE *)*a2;
    v11 = memchr((const void *)*a2, 0, v8);
    if ( v11 )
      v9 = v11 - v10;
  }
  if ( v7 )
  {
    v7 = (_QWORD *)((char *)v7 - 1);
    if ( (unsigned __int64)v7 > v9 )
      v7 = (_QWORD *)v9;
  }
  *a3 = v7;
  return 1;
}
