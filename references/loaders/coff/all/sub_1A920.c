__int64 __fastcall sub_1A920(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  unsigned int v11; // r12d
  unsigned __int16 v12; // cx
  int v14; // edx
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax

  *(_WORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 4;
  v7 = *(unsigned __int16 *)(a3 + 12);
  if ( (unsigned __int16)v7 <= 0x31u )
  {
    v8 = 0x30000000C0068LL;
    if ( _bittest64(&v8, v7) )
    {
      v9 = *(_QWORD *)(a1[1] + 48LL);
      if ( v9 == -1 || (v10 = (_QWORD *)getseg(v9)) == nullptr )
      {
        sub_59A0((__int64)"Strange AIX XCOFF relocation information");
        return 0;
      }
      a1[7] -= netnode_altval(*(_QWORD *)(a1[1] + 125LL), *v10, 65);
    }
  }
  v11 = sub_172D0(a1, a2, a3, a4);
  if ( !(_BYTE)v11 )
    return 0;
  v12 = *(_WORD *)(a3 + 12);
  if ( v12 > 0x31u )
    return v11;
  if ( ((1LL << v12) & 0x30000000C0068LL) == 0 )
  {
    if ( ((1LL << v12) & 0x3001) != 0 )
      set_fixup(a1[4], a2);
    return v11;
  }
  v14 = *(_DWORD *)(a2 + 4);
  v15 = *(_QWORD *)(a1[1] + 48LL);
  if ( (v14 & 1) != 0 )
  {
    v16 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 16);
    v16 = 0;
    if ( v18 != -1 )
    {
      v19 = sel2para(v18, a2);
      v14 = *(_DWORD *)(a2 + 4);
      v16 = 16 * v19;
    }
  }
  v17 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 8) = v15;
  *(_DWORD *)(a2 + 4) = v14 | 1;
  *(_QWORD *)(a2 + 24) = v16 + v17 - v15;
  set_fixup(a1[4], a2);
  return v11;
}
