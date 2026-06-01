__int64 __fastcall sub_9B4DD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // r13d
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v12; // rdx
  unsigned int v13; // [rsp+Ch] [rbp-2Ch]

  v6 = sub_EEC140(a2);
  v7 = sub_13DC060(v6, 0, a3, a4);
  if ( v7 )
  {
    v8 = v7;
    v9 = sub_EEB7E0(a2);
    LOBYTE(v13) = 0;
    v10 = sub_13DD220(__PAIR64__(v8, v9), v13, a3, a4, 0);
    *(_BYTE *)(a1 + 16) = 1;
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v12;
    return a1;
  }
  else
  {
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
}
