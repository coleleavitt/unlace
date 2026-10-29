void __fastcall sub_1565030(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v4; // rax
  __int64 v5; // rsi

  if ( a4 )
  {
    v4 = *(__int64 **)(*(_QWORD *)(a2 + 96) + 608LL);
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = v4;
    if ( v4 )
    {
      v5 = *v4;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)v4 + 2);
      sub_15ED1C0(v4, v5, a3);
    }
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
