void __fastcall sub_E33E50(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r13d
  unsigned int v5; // eax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbp

  if ( *(_BYTE *)(a1 + 209) )
  {
    v2 = *(_QWORD *)(a1 + 176);
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 - 4);
      if ( *(_DWORD *)(a1 + 184) < v3 )
      {
        do
        {
          v6 = *(_QWORD *)(a1 + 8);
          v7 = sub_15E1B70(v6);
          v8 = *(_QWORD *)(a1 + 160);
          v9 = v7;
          if ( v7 )
          {
            ++*(_DWORD *)(v7 + 8);
            sub_E5EBF0(v8, v7);
            if ( (*(_DWORD *)(v9 + 8))-- == 1 )
              sub_15D7BC0(v6, v9);
          }
          else
          {
            sub_E5EBF0(v8, 0);
          }
          v5 = *(_DWORD *)(a1 + 184) + 1;
          *(_DWORD *)(a1 + 184) = v5;
        }
        while ( v5 < v3 );
      }
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 192LL))(*(_QWORD *)(a1 + 160));
    *(_WORD *)(a1 + 208) = 1;
  }
  else if ( !*(_BYTE *)(a1 + 208) )
  {
    *(_BYTE *)(a1 + 209) = 1;
    return;
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 192LL))(*(_QWORD *)(a1 + 160));
}

