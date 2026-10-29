void __fastcall sub_183EEA0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _DWORD *v9; // r10
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rdi

  v3 = *(_QWORD *)(a1 + 3680);
  v4 = *(_DWORD *)(a1 + 3688);
  v5 = v3 + 56LL * v4 - 56;
  v6 = *(unsigned int *)(v5 + 16);
  if ( *(_DWORD *)v5 < (unsigned int)v6 )
  {
    v7 = *(_QWORD **)(a1 + 248);
    v8 = *(_QWORD *)(v5 + 8);
    if ( *(_DWORD *)v5 )
    {
      v9 = nullptr;
      v10 = *(_QWORD *)(a2[104] + 8LL * a2[105] - 8);
      if ( (*(_BYTE *)(v10 + 23) & 0x40) != 0 )
        v9 = *(_DWORD **)(v10 + 8LL * (*(_DWORD *)(v10 + 20) & 0x1FFFFFFF) + 24);
      v11 = sub_BC21A0(v7, *(_DWORD *)(v10 + 8), *(_DWORD *)(v10 + 12), v8, v6, *(unsigned int *)(v10 + 16), v9);
    }
    else
    {
      v11 = sub_BC21A0(v7, 0, 0, v8, v6, 0, nullptr);
    }
    a2[106] = v11;
    v4 = *(_DWORD *)(a1 + 3688);
    v3 = *(_QWORD *)(a1 + 3680);
  }
  v12 = v4 - 1;
  *(_DWORD *)(a1 + 3688) = v12;
  v13 = v3 + 56 * v12;
  v14 = *(void **)(v13 + 8);
  if ( v14 != (void *)(v13 + 24) )
    free(v14);
}
