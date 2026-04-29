char __fastcall sub_316310(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // esi

  v6 = *(_QWORD *)(a1 + 8);
  v7 = a3;
  v8 = *(_DWORD *)(a3 + 4);
  v9 = *(_QWORD *)(v6 + 1504);
  if ( v8 != *(_DWORD *)(v9 + 84) && ((*(_BYTE *)(v9 + 50) & 4) == 0 || v8 != 2) )
    sub_3162B0(a1, 0xC68Au, a5);
  if ( *(_DWORD *)(a2 + 4) != 2 )
    sub_3162B0(a1, 0xC68Bu, a5);
  if ( a4 <= 0 )
    sub_3162B0(a1, 0xCE50u, a5);
  if ( *(int *)(v6 + 312) > 6 && *(_BYTE *)v7 == 10 && **(_BYTE **)(v7 + 8) == 6 && *(_BYTE *)a2 == 1 )
  {
    v10 = *(_DWORD *)(a2 + 8);
    if ( v10 == *(_DWORD *)(v9 + 52) || v10 == *(_DWORD *)(v9 + 64) || v10 == *(_DWORD *)(v9 + 56) )
    {
      LOBYTE(v7) = sub_138D60(v6, v7, a4);
      if ( (_BYTE)v7 )
        sub_3162B0(a1, 0xCD17u, a5);
    }
  }
  return v7;
}
