__int64 __fastcall sub_717550(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  void (__fastcall ***v4)(void *); // r12
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax
  __int64 v9; // rbp
  void (__fastcall ***v10)(void *); // r12
  __int64 v11; // rsi
  __int64 v12; // rdi

  sub_717280((__int64)a1);
  v2 = sub_374300(a1[8], (__int64)(a1 + 9), (__int64)&qword_18D6CD0);
  v3 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 48);
  v4 = (void (__fastcall ***)(void *))a1[10];
  if ( v4 )
  {
    v5 = (*((_DWORD *)v4 + 12))-- == 1;
    if ( v5 )
    {
      (**v4)(v4);
      sub_186B220(v4);
    }
  }
  v6 = a1[11];
  a1[10] = v3;
  if ( v6 )
  {
    v7 = a1[12];
    v5 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v5 )
      sub_15D7BC0(v7, v6);
  }
  a1[11] = 0;
  result = sub_374300(a1[13], (__int64)(a1 + 14), (__int64)&qword_18D6CD0);
  v9 = result;
  if ( result )
    ++*(_DWORD *)(result + 48);
  v10 = (void (__fastcall ***)(void *))a1[15];
  if ( v10 )
  {
    v5 = (*((_DWORD *)v10 + 12))-- == 1;
    if ( v5 )
    {
      (**v10)(v10);
      result = sub_186B220(v10);
    }
  }
  v11 = a1[16];
  a1[15] = v9;
  if ( v11 )
  {
    v12 = a1[17];
    v5 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v5 )
      result = sub_15D7BC0(v12, v11);
  }
  a1[16] = 0;
  return result;
}

