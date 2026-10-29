__int64 __fastcall sub_3D8830(__int64 *a1, char a2, char a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rsi
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+8h] [rbp-40h]

  v5 = a1;
  v6 = a1[1];
  v7 = *a1;
  v15 = 0;
  v16 = v6;
  sub_3D8450(v7, &v15, a2, a3);
  v8 = v15;
  v9 = v16;
  v10 = *v5;
  if ( !v15 )
  {
    if ( !v10 )
    {
      LODWORD(v5) = 1;
      return (unsigned int)v5;
    }
LABEL_4:
    sub_3D8450(v8, &v15, a2, a3);
    v10 = v15;
    LOBYTE(v5) = *v5 == v15;
    if ( !v8 || (v12 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), !v12) )
    {
LABEL_6:
      if ( !v10 )
        return (unsigned int)v5;
      goto LABEL_7;
    }
LABEL_11:
    sub_15D7BC0(v9, v8);
    v10 = v15;
    goto LABEL_6;
  }
  v11 = *(_DWORD *)(v15 + 8);
  if ( v15 != v10 )
  {
    *(_DWORD *)(v15 + 8) = v11 + 1;
    goto LABEL_4;
  }
  LODWORD(v5) = 1;
  if ( !v11 )
    goto LABEL_11;
LABEL_7:
  v13 = v16;
  v12 = (*(_DWORD *)(v10 + 8))-- == 1;
  if ( v12 )
    sub_15D7BC0(v13, v10);
  return (unsigned int)v5;
}

