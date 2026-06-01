void __fastcall sub_1FC0470(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp
  __int64 v8; // [rsp-10h] [rbp-38h]

  v2 = a2 + 40;
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 36));
  sub_1FBAE50((__int64 *)a1, a2);
  v7 = a2 + 40 + 24LL * *(unsigned int *)(a2 + 36);
  if ( v7 != a2 + 40 )
  {
    do
    {
      v8 = *(_QWORD *)(v2 + 16);
      v2 += 24;
      sub_1F992F0((__int64 *)(a1 + 8), a2, v3, v4, v5, v6, *(_QWORD *)(v2 - 24), *(void **)(v2 - 16), v8);
    }
    while ( v7 != v2 );
  }
  *(_DWORD *)(a1 + 224) = 142;
}
