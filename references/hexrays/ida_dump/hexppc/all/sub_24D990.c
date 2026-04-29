__int64 __fastcall sub_24D990(_QWORD *a1, int a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, int); // rax
  int v8; // eax
  int v9; // edi
  __int64 v10; // r12
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, int, int); // rax
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned int v17; // eax
  int v19; // [rsp+8h] [rbp-40h]

  v6 = *a1;
  v7 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  if ( v7 == sub_61650 )
  {
    v19 = -1;
    if ( !a1[7] )
      goto LABEL_10;
    v8 = *(_DWORD *)(a1[6] + 24LL * a2 + 8);
  }
  else
  {
    v8 = v7((__int64)a1, a2);
    v6 = *a1;
  }
  v9 = v8 - 1;
  v19 = v8 - 1;
  if ( v8 - 1 > 0 )
  {
    v10 = 0;
    do
    {
      v12 = *(__int64 (__fastcall **)(__int64, int, int))(v6 + 112);
      if ( v12 == sub_61690 )
        v11 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24LL * a2) + 4 * v10);
      else
        v11 = (unsigned int)v12((__int64)a1, a2, v10);
      ++v10;
      sub_24C890(a1, v11, a3, 0);
      v6 = *a1;
    }
    while ( v10 != v9 );
  }
LABEL_10:
  v13 = *(__int64 (__fastcall **)(__int64, int, int))(v6 + 112);
  v14 = a4;
  if ( v13 == sub_61690 )
  {
    v15 = *(unsigned int *)(*(_QWORD *)(a1[6] + 24LL * a2) + 4LL * v19);
  }
  else
  {
    v17 = v13((__int64)a1, a2, v19);
    v14 = a4;
    v15 = v17;
  }
  return sub_24C890(a1, v15, a3, v14);
}
