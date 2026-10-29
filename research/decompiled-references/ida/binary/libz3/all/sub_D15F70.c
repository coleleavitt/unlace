void __fastcall sub_D15F70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  _DWORD *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rsi
  __int64 v11; // rdi

  v4 = *(_QWORD *)(a1 + 856);
  v5 = *(_QWORD *)(a1 + 864);
  if ( v4 == a2 )
    goto LABEL_13;
  if ( a2 != v5 )
  {
    if ( *(_WORD *)(a2 + 4) || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v6 || v6[1] != 8 )
    {
      v5 = sub_15E1A70(a1);
      if ( !v5 )
      {
LABEL_8:
        v7 = *a3;
        if ( *a3 && (v8 = a3[1], v9 = *(_DWORD *)(v7 + 8) == 1, --*(_DWORD *)(v7 + 8), v9) )
        {
          sub_15D7BC0(v8, v7);
          *a3 = v5;
        }
        else
        {
          *a3 = v5;
        }
        return;
      }
LABEL_7:
      ++*(_DWORD *)(v5 + 8);
      goto LABEL_8;
    }
    v5 = *(_QWORD *)(a2 + 32);
LABEL_13:
    if ( !v5 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v10 = *a3;
  if ( *a3 )
  {
    v11 = a3[1];
    v9 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v9 )
      sub_15D7BC0(v11, v10);
  }
  *a3 = v4;
}

