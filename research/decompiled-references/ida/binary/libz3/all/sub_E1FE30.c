__int64 __fastcall sub_E1FE30(__int64 a1, __int64 *a2, _DWORD **a3)
{
  __int64 v4; // rbp
  _DWORD *v5; // rax
  _DWORD *v6; // r13
  void *v8; // r12
  int v9; // eax

  v4 = *a2;
  v5 = *(_DWORD **)(*a2 + 72);
  if ( v5 )
    ++v5[4];
  v6 = *a3;
  if ( *a3 )
  {
    if ( v6[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v6)(v6);
      sub_186B220(v6);
      v5 = *(_DWORD **)(v4 + 72);
    }
  }
  *a3 = v5;
  *(_BYTE *)(a1 + 4) &= 0xFCu;
  *(_BYTE *)(a1 + 20) &= 0xFCu;
  v8 = qword_1C7F2C0;
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(v4 + 108) & 1) != 0 )
    sub_182C690(v8, a1, v4 + 104);
  else
    *(_DWORD *)a1 = *(_DWORD *)(v4 + 104);
  if ( (*(_BYTE *)(v4 + 124) & 1) != 0 )
  {
    sub_182C690(v8, a1 + 16, v4 + 120);
  }
  else
  {
    v9 = *(_DWORD *)(v4 + 120);
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v9;
  }
  return a1;
}

