__int64 __fastcall sub_3BCCB0(__int64 a1, __int64 *a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rax

  v4 = *a2;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *a2;
  v7 = sub_3822F0(v5, v6);
  if ( v7 )
  {
    v8 = v7;
    v9 = *(_DWORD *)(a1 + 24);
    if ( !v9 )
      goto LABEL_5;
    if ( v9 != 1 )
      sub_3B30D0(a3, v5, v6);
    result = 6;
    if ( v4 == *(_QWORD *)(v8 + 8) )
    {
LABEL_5:
      v11 = sub_382340(*(_QWORD *)(a1 + 16));
      result = sub_3BCA60(v11, 0) == nullptr ? 7 : 3;
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
