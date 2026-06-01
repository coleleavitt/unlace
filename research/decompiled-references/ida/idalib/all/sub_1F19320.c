void __fastcall sub_1F19320(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rbx
  _DWORD *v5; // rdx
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v6[0] = a1;
  if ( a2 )
  {
    v3 = a2;
    do
    {
      sub_1F191F0(v6, v3, a3);
      v3 = sub_F6C7E0(v3, a3);
      a3 = v5;
    }
    while ( v3 );
  }
}
