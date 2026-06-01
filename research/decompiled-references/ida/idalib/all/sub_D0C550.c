__int64 __fastcall sub_D0C550(__int64 a1, char a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v4 = *a3;
  v6 = *(_QWORD *)(a1 + 1232);
  v7 = a1 + 384;
  *(_QWORD *)(v7 + 856) = v4;
  return sub_D0BD30(v7, v6, a2);
}
