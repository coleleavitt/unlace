void __fastcall sub_7B5EB0(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  __int64 v3; // r14
  __int64 v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rdi

  v3 = a2[1];
  if ( v3 )
  {
    v5 = 0;
    v6 = a3;
    do
    {
      v7 = *(_QWORD *)(a1 + 56);
      v8 = *a2 + 32 * v5;
      v9 = *(_DWORD *)v8;
      if ( !v7 )
      {
        if ( !under_debugger )
          interr(1777);
        BUG();
      }
      if ( !v9
        || (v10 = (unsigned int)(v9 - 1), (unsigned int)v10 < *(_DWORD *)(v7 + 104))
        && (v7 = *(_QWORD *)(v7 + 112) + 8 * v10) != 0 )
      {
        v11 = *(_DWORD *)(v8 + 4);
        if ( v11 < *(_DWORD *)(v7 + 4) - *(_DWORD *)v7 )
        {
          v12 = *(_DWORD *)v7 + v11;
          if ( (_DWORD)v12 != -1 )
            set_cmt(v12, *(_QWORD *)(v8 + 8), v6);
        }
      }
      ++v5;
    }
    while ( v3 != v5 );
  }
}

