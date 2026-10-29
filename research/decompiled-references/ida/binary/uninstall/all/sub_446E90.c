__int64 __fastcall sub_446E90(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // r12d
  __int64 v12; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi

  if ( a1 )
  {
    if ( dword_65A530 )
    {
      v8 = 0;
      v9 = a1 + 304;
      while ( *(_DWORD *)(a1 + 300) > v8 )
      {
        v10 = *(_QWORD *)(v9 + 56);
        v11 = v8 + 1;
        v12 = v9 + 64;
        sub_444000(v10, a2, a3, a4, a5, a6);
        if ( *(_DWORD *)(a1 + 300) <= v11 )
          break;
        v17 = *(_QWORD *)(v12 + 56);
        v8 = v11 + 1;
        v9 = v12 + 64;
        sub_444000(v17, a2, v13, v14, v15, v16);
      }
    }
    return Tcl_Free(a1);
  }
  return result;
}

