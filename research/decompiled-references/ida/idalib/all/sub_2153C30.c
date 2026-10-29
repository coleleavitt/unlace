__int64 __fastcall sub_2153C30(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rsi

  if ( **(_DWORD **)(a1 + 48) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1);
  v3 = *(_QWORD *)(a1 + 224);
  v4 = v3 + 112LL * *(unsigned int *)(a1 + 232);
  while ( v3 != v4 )
  {
    v5 = v3 + 8;
    v3 += 112;
    sub_22538C0(a2, v5);
  }
  return 1;
}
