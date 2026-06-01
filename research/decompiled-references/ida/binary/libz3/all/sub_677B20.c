__int64 __fastcall sub_677B20(__int64 *a1)
{
  __int64 result; // rax
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp
  void (__fastcall ***v6)(void *); // r12
  bool v7; // zf
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  void (__fastcall ***v12)(void *); // r12

  result = sub_2FCDE0(a1 + 193);
  if ( !a1[169] )
  {
    v2 = *(__int64 (__fastcall **)(__int64))(*a1 + 104);
    if ( v2 == sub_2B1DE0 )
      v3 = (__int64)(a1 + 10);
    else
      v3 = v2((__int64)a1);
    v4 = sub_667860(a1[17], v3, 1u);
    v5 = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 48);
    v6 = (void (__fastcall ***)(void *))a1[169];
    if ( v6 )
    {
      v7 = (*((_DWORD *)v6 + 12))-- == 1;
      if ( v7 )
      {
        (**v6)(v6);
        sub_186B220(v6);
      }
    }
    v8 = *a1;
    a1[169] = v5;
    v9 = *(__int64 (__fastcall **)(__int64))(v8 + 104);
    if ( v9 == sub_2B1DE0 )
      v10 = (__int64)(a1 + 10);
    else
      v10 = v9((__int64)a1);
    result = sub_667860(a1[17], v10, 1u);
    v11 = result;
    if ( result )
      ++*(_DWORD *)(result + 48);
    v12 = (void (__fastcall ***)(void *))a1[170];
    if ( v12 )
    {
      v7 = (*((_DWORD *)v12 + 12))-- == 1;
      if ( v7 )
      {
        (**v12)(v12);
        result = sub_186B220(v12);
      }
    }
    a1[170] = v11;
  }
  return result;
}

