void __fastcall sub_13F92D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v5; // eax
  __int64 *v6; // rsi
  __int64 *v7; // rbx
  __int64 v8; // r13
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 **v14; // rax
  __int64 *v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *a2;
  v3 = a2[1];
  v4 = sub_2244B30(*a2, v3);
  v5 = sub_2244E60(a1 + 344, v2, v3, v4);
  if ( v5 == -1 )
    v6 = (__int64 *)(*(_QWORD *)(a1 + 344) + 8LL * *(unsigned int *)(a1 + 352));
  else
    v6 = (__int64 *)(*(_QWORD *)(a1 + 344) + 8LL * v5);
  sub_13F9290(v15, v6, 1);
  v7 = v15[0];
  sub_13F9290(v15, (__int64 *)(*(_QWORD *)(a1 + 344) + 8LL * *(unsigned int *)(a1 + 352)), 1);
  if ( v15[0] != v7 )
  {
    v8 = *v7;
    sub_A45C10(v15, *(__int64 **)(*v7 + 8), *(_DWORD *)(*v7 + 16) == 0);
    v9 = v15[0];
    sub_A45C10(v15, (__int64 *)(*(_QWORD *)(v8 + 8) + 8LL * *(unsigned int *)(v8 + 16)), 1);
    v10 = v15[0];
    if ( v15[0] != v9 )
    {
      v11 = (__int64 *)*v9;
      do
      {
        while ( 1 )
        {
          v12 = sub_13F8CB0(a1, (__int64)(v11 + 1), *v11);
          if ( v12 )
            *(_BYTE *)(v12 + 1696) = 1;
          v11 = (__int64 *)v9[1];
          v13 = v9 + 1;
          if ( !v11 || v11 == (__int64 *)-8LL )
            break;
          ++v9;
          if ( v10 == v13 )
            return;
        }
        v14 = (__int64 **)(v9 + 2);
        do
        {
          do
          {
            v11 = *v14;
            v9 = (__int64 *)v14++;
          }
          while ( v11 == (__int64 *)-8LL );
        }
        while ( !v11 );
      }
      while ( v10 != v9 );
    }
  }
}
