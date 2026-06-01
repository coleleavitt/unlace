__int64 __fastcall sub_D1BE10(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 1232);
  v5 = a1 + 384;
  *(_QWORD *)(v5 + 856) = v3;
  return sub_D1BAD0(v5, v4);
}
