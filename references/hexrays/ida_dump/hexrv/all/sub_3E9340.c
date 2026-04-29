void __fastcall sub_3E9340(__int64 a1, int a2, int a3, double a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edx
  int v9; // edi
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_DWORD *, unsigned int); // rax
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rsi

  v4 = *(_QWORD *)(a1 + 832);
  v6 = a2;
  v7 = a3;
  v8 = *(unsigned __int16 *)(a1 + 842);
  v9 = *(_DWORD *)(v4 + 84);
  v10 = *(int *)(v4 + 64);
  if ( (*(_DWORD *)(a1 + 844) & 6) != 4 )
  {
    sub_3E8D60(a1, 2u, v8, v10, v7, v6, v9);
    if ( *(_BYTE *)(a1 + 105) != 4 )
      return;
LABEL_5:
    v11 = *(_DWORD **)(a1 + 832);
    v12 = *(unsigned __int16 *)(a1 + 110);
    v13 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v11 + 168LL);
    if ( v13 == sub_3E48E0 )
    {
      if ( (unsigned int)v12 <= 0x1F )
      {
        sub_3E91E0(a1, (unsigned int)(v11[88] + v11[20] * v12), *(_QWORD *)(a1 + 120), a4);
        return;
      }
      v14 = v11[173];
      if ( v14 && (v15 = v12 - 32, v15 <= 0x1F) )
        v16 = v11[120] + v14 * v15;
      else
        v16 = 0xFFFFFFFFLL;
    }
    else
    {
      v16 = (unsigned int)v13(v11, v12);
    }
    sub_3E91E0(a1, v16, *(_QWORD *)(a1 + 120), a4);
    return;
  }
  sub_3E8D60(a1, 1u, v8, v6, v10, v7, v9);
  if ( *(_BYTE *)(a1 + 105) == 4 )
    goto LABEL_5;
}
