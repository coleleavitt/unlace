__int64 __fastcall sub_C19980(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rbp
  unsigned int v7; // r14d
  __int64 v8; // rdi
  unsigned __int8 **v9; // rax
  unsigned __int64 v11; // r14
  unsigned __int8 **v12; // rax
  unsigned __int8 **v13; // r12

  v5 = a2;
  v6 = *(_QWORD **)(a2 + 40);
  if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v6 + 2) <= 0x40u )
      v6 = (_QWORD *)*v6;
    else
      v6 = *(_QWORD **)*v6;
  }
  v7 = sub_F56F00(a2, *(_QWORD *)(a1 + 16));
  if ( (*(_BYTE *)(a2 + 19) & 2) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL);
    if ( v8 )
      a3 = sub_EEB7E0(v8);
  }
  LOBYTE(v5) = v7 > (unsigned int)sub_F56FC0(*(_QWORD *)(a1 + 16)) || (unsigned __int64)v6 > 0xFFFFFFFF;
  if ( (_BYTE)v5 )
  {
    v9 = (unsigned __int8 **)sub_E33C80(a1, a3, 2452, 0);
    if ( v9 )
      sub_AE9DF0(v9, (__int64)v6, 3u);
    return 0;
  }
  v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 2320LL) + 136LL);
  if ( (unsigned __int64)v6 > v11 )
  {
    v12 = (unsigned __int8 **)sub_E33C80(a1, a3, 2447, 0);
    v13 = v12;
    if ( v12 )
    {
      sub_AE9DF0(v12, (__int64)v6, 3u);
      sub_AE9DF0(v13, v11, 3u);
    }
    return v5;
  }
  return 1;
}
