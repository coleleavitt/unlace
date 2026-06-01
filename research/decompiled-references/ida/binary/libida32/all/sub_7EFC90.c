__int64 __fastcall sub_7EFC90(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  int v5; // r9d
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v6 = sub_7EFA30(a1, v4, 10, a3, nullptr, v5);
  v7 = v6;
  if ( v4 && !v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return v7;
}

