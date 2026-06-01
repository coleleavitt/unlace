__int64 __fastcall sub_101FBC0(__int64 a1, int a2)
{
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // esi
  int v6; // edx
  _BYTE v8[25]; // [rsp+Fh] [rbp-19h] BYREF

  v8[0] = 0;
  v3 = sub_101FA50(a1, a2, v8);
  if ( !v8[0] )
  {
    v4 = (_DWORD *)v3;
    if ( a2 <= 0 )
    {
      if ( a2 == -2 )
      {
        v6 = 0x80000000;
        return v6 + ~(*v4 & 0x7FFFFFFFu);
      }
      v5 = a2 + 1;
    }
    else
    {
      v5 = a2 + 1;
      if ( a2 + 1 == *(_DWORD *)(a1 + 192) )
      {
        v6 = *(_DWORD *)(a1 + 312);
        return v6 + ~(*v4 & 0x7FFFFFFFu);
      }
    }
    v6 = *(_DWORD *)sub_101FB80(a1, v5) & 0x7FFFFFFF;
    return v6 + ~(*v4 & 0x7FFFFFFFu);
  }
  return 0;
}
