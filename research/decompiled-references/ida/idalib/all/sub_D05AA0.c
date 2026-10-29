__int64 __fastcall sub_D05AA0(__int64 a1, unsigned __int8 a2, unsigned __int8 a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v5 = *a4;
  v6 = a3;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 1232);
  v9 = a1 + 384;
  *(_QWORD *)(v9 + 856) = v5;
  return sub_E1D980(v9, v8, v7, v6);
}
