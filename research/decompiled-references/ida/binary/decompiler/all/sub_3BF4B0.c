__int64 __fastcall sub_3BF4B0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int64 result; // rax
  __int64 v9; // rax

  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = sub_3856D0(v4, *a2);
  if ( v5 )
  {
    v6 = v5;
    v7 = *(_DWORD *)(a1 + 24);
    if ( !v7 )
      goto LABEL_5;
    if ( v7 != 1 )
      sub_3B5950(v4);
    result = 6;
    if ( v3 == *(_QWORD *)(v6 + 8) )
    {
LABEL_5:
      v9 = sub_385720(*(_QWORD *)(a1 + 16));
      result = sub_3BF260(v9, 0) == 0 ? 7 : 3;
    }
    *(_DWORD *)(a1 + 32) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 6;
    return 6;
  }
  return result;
}
