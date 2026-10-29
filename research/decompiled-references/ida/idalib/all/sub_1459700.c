void __fastcall sub_1459700(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rbx
  _DWORD *v6; // rax
  __int64 v7; // rax

  if ( !*(_BYTE *)(a1 + 184) && *(_QWORD *)(a1 + 216) )
  {
    v1 = 0;
    v2 = 0;
    v3 = *(_QWORD *)(a1 + 160);
    v4 = *(_QWORD *)(a1 + 168);
    if ( v3 != v4 )
    {
      do
      {
        v5 = 8 * v1;
        v6 = (_DWORD *)(v3 + 8 * v1);
        if ( !*v6 || !v6[1] )
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 216) + 40LL))(*(_QWORD *)(a1 + 216), v2);
          v3 = *(_QWORD *)(a1 + 160);
          v4 = *(_QWORD *)(a1 + 168);
          *(_QWORD *)(v3 + v5) = v7;
        }
        v1 = ++v2;
      }
      while ( v2 != (v4 - v3) >> 3 );
    }
    *(_BYTE *)(a1 + 184) = 1;
  }
}
