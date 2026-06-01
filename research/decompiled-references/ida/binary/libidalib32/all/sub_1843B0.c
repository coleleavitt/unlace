__int64 __fastcall sub_1843B0(__int64 a1, int a2, _BYTE *a3, __int64 *a4)
{
  __int64 v4; // rdx
  __int64 *v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v17; // rdi

  if ( a3 )
    *a3 = -1;
  v8 = *(__int64 **)(a1 + 24);
  v9 = v8[1];
  if ( !v9 )
    return 0;
  v10 = *v8;
  v11 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = 72 * v12;
    v14 = v10 + 72 * v12;
    v15 = *(_DWORD *)(v14 + 56);
    if ( v15 == a2 )
    {
      if ( a3 )
      {
        *a3 = *(_BYTE *)(v14 + 52);
        v14 = v13 + **(_QWORD **)(a1 + 24);
      }
      if ( a4 )
      {
        *a4 = v14;
        v14 = v13 + **(_QWORD **)(a1 + 24);
      }
      return *(_QWORD *)v14;
    }
    if ( v15 == -a2 )
      break;
    v12 = ++v11;
    if ( v11 >= v9 )
      return 0;
  }
  if ( a3 )
    *a3 = *(_BYTE *)(v14 + 52);
  if ( a4 )
    *a4 = 0;
  v17 = **(_QWORD **)(a1 + 24) + v13;
  if ( (unsigned __int8)(*(_BYTE *)(v17 + 52) - 66) <= 0x30u )
  {
    v4 = 0x102220001022BLL;
    if ( _bittest64(&v4, (unsigned int)*(unsigned __int8 *)(v17 + 52) - 66) )
      return 0;
  }
  if ( *(_QWORD *)(v17 + 16) > 1u )
    return *(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL);
  if ( under_debugger )
    BUG();
  interr();
  return sub_1842A0(40174);
}

