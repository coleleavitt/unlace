unsigned __int64 __fastcall sub_17A3FB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 result; // rax

  v6 = sub_A7A420(*(_QWORD *)(a1 + 248), a2, a3, a4, a5, a6);
  v11 = sub_B94670(v6 + 40, a2, v7, v8, v9, v10);
  result = 0;
  if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    result = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v11 & 4) != 0 )
      return *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}
