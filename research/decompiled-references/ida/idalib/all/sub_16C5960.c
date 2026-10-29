__int64 __fastcall sub_16C5960(__int64 a1, __int64 a2)
{
  int v2; // ebp
  char *v3; // r13
  unsigned __int8 v4; // r12
  __int64 v5; // rax
  _QWORD *v6; // rdx
  char *v7; // rsi
  unsigned __int64 v8; // rdx

  v2 = *(_DWORD *)(a2 + 16);
  v3 = (char *)(a2 + 4LL * *(unsigned int *)(a2 + 4) + 20);
  v4 = (*(_WORD *)(a2 + 2) >> 6) & 7;
  v5 = sub_A72040(*(_QWORD **)(a1 + 248), *(_QWORD *)(a2 + 8));
  if ( !v5 || (unsigned int)*(unsigned __int8 *)(v5 + 16) - 2 > 1 )
    BUG();
  v6 = *(_QWORD **)(v5 + 40);
  if ( (*(_BYTE *)(v5 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v6 + 2) <= 0x40u )
      v6 = (_QWORD *)*v6;
    else
      v6 = *(_QWORD **)*v6;
  }
  v7 = v3;
  if ( v6 )
  {
    v8 = (unsigned __int64)v6 - 1;
    if ( v8 > v2 * (unsigned int)v4 )
      v8 = v2 * (unsigned int)v4;
    v7 = &v3[v8];
  }
  return sub_ECC740(v3, v7, *(_QWORD *)(a1 + 232), *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL));
}
