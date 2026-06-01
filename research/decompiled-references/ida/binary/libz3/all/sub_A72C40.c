void __fastcall sub_A72C40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // r12
  int v8; // eax
  int v9; // eax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(*(_QWORD *)v2 + 16LL);
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 112) + 328LL) )
  {
    if ( *(_WORD *)(a2 + 4)
      || (v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
      || *v4
      || v4[1] != 2
      || *(_DWORD *)(a2 + 24) != 2 )
    {
      sub_1872CE0("");
      sub_1873130(114, 956);
    }
    v5 = *(_QWORD *)(v3 + 8656);
    v6 = *(_QWORD **)(v5 + 8LL * **(unsigned int **)(a2 + 32));
    if ( v6 )
    {
      v7 = *(_QWORD **)(v5 + 8LL * **(unsigned int **)(a2 + 40));
      v8 = sub_B39350(v6, *(unsigned int *)(*(_QWORD *)v2 + 8LL));
      if ( v7 )
      {
        if ( v8 != -1 )
        {
          v9 = sub_B39350(v7, *(unsigned int *)(*(_QWORD *)v2 + 8LL));
          if ( v6 != v7 && v9 != -1 )
            sub_8E1D30(v2 + 32, v6, v7);
        }
      }
    }
  }
}

