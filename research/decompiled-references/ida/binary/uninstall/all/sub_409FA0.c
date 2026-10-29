void __fastcall sub_409FA0(__int64 a1, __int64 a2, int a3)
{
  int v5; // r12d
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  bool v11; // zf

  v5 = 1;
  if ( a3 > 1 )
  {
    v6 = (_QWORD *)(a2 + 8);
    do
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 1000) + 64LL))(*(_QWORD *)(a1 + 1000), *v6);
      v8 = v7;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 24);
        v10 = *(_DWORD *)(v9 + 12) - 1;
        v11 = *(_DWORD *)(v9 + 12) == 1;
        *(_DWORD *)(v9 + 12) = v10;
        if ( v10 < 0 || v11 )
        {
          Tcl_Free(v9);
          sub_457BC0(v8);
        }
      }
      ++v5;
      ++v6;
    }
    while ( v5 < a3 );
  }
}

