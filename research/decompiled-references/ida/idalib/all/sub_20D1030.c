__int64 __fastcall sub_20D1030(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  void *v5; // rax
  size_t v6; // rdx
  size_t v7; // rsi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64, __int64); // rax

  v3 = a2[2];
  v4 = a2[3];
  v5 = (void *)a2[1];
  if ( v3 + 1 > v4 )
  {
    v6 = v3 + 993;
    v7 = 2 * v4;
    if ( v6 > v7 )
    {
      a2[3] = v6;
      v7 = v6;
    }
    else
    {
      a2[3] = v7;
    }
    v5 = realloc(v5, v7);
    a2[1] = (__int64)v5;
    if ( !v5 )
      abort();
    v3 = a2[2];
  }
  *((_BYTE *)v5 + v3) = 126;
  v8 = *a2;
  ++a2[2];
  v9 = *(__int64 (__fastcall **)(__int64, __int64))(v8 + 16);
  if ( v9 == sub_20CEB40 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 16) + 64LL))(*(_QWORD *)(a1 + 16), a2);
  else
    return v9((__int64)a2, *(_QWORD *)(a1 + 16));
}
