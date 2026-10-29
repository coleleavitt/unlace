__int64 __fastcall sub_45A870(__int64 a1, _QWORD *a2, __int64 *a3, __int64 a4)
{
  _DWORD *v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  _DWORD *v12; // rax
  bool v13; // bl
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  void *v20; // rbx
  int v21; // edx
  __int64 v22; // r13
  __int64 v23; // rbx
  _DWORD *v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  _QWORD v27[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v28[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_WORD *)(a1 + 4) )
    goto LABEL_4;
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  if ( !v6 || *v6 != 5 )
    goto LABEL_4;
  v21 = v6[1];
  if ( v21 == 9 )
  {
    if ( *(_DWORD *)(a1 + 24) != 2 )
    {
LABEL_4:
      if ( *a2 )
      {
        result = 0;
        if ( a1 != *a2 )
          return result;
        if ( !*(_DWORD *)(a1 + 8) )
          sub_15D7BC0(a2[1], a1);
      }
      else
      {
        ++*(_DWORD *)(a1 + 8);
      }
      *a2 = a1;
      v27[0] = 1;
      v27[1] = 0;
      v8 = sub_15D1F10(a1);
      v28[0] = 1;
      v28[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v28);
      v12 = *(_DWORD **)(v8 + 24);
      v13 = 0;
      BYTE4(v28[0]) &= ~1u;
      LODWORD(v28[0]) = 1;
      if ( v12 && *v12 == 5 )
        v13 = v12[1] == 1;
      v14 = *(_QWORD *)(a4 + 8);
      if ( !v14 )
      {
        sub_16669E0(a4);
        v14 = *(_QWORD *)(a4 + 8);
      }
      v15 = sub_166A700(v14, (unsigned int)v27, v13, v9, v10, v11);
      v16 = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v17 = *a3;
      if ( *a3 )
      {
        v18 = a3[1];
        v19 = (*(_DWORD *)(v17 + 8))-- == 1;
        if ( v19 )
          sub_15D7BC0(v18, v17);
      }
      *a3 = v16;
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v27);
      sub_182CBA0(v20, v28);
      return 1;
    }
    v22 = *(_QWORD *)(a1 + 32);
    v23 = *(_QWORD *)(a1 + 40);
    if ( *(_WORD *)(v22 + 4) || (v24 = *(_DWORD **)(*(_QWORD *)(v22 + 16) + 24LL)) == nullptr || *v24 != 5 || v24[1] )
    {
      result = 0;
      if ( *(_WORD *)(v23 + 4) )
        return result;
      v24 = *(_DWORD **)(*(_QWORD *)(v23 + 16) + 24LL);
      if ( !v24 || *v24 != 5 )
        return result;
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 40);
      v23 = *(_QWORD *)(a1 + 32);
    }
    result = 0;
    if ( v24[1] )
      return result;
    if ( *a2 )
    {
      if ( *a2 != v22 )
        return result;
      if ( !*(_DWORD *)(v22 + 8) )
        sub_15D7BC0(a2[1], v22);
    }
    else if ( v22 )
    {
      ++*(_DWORD *)(v22 + 8);
    }
    *a2 = v22;
    v25 = *a3;
    ++*(_DWORD *)(v23 + 8);
    if ( v25 )
    {
      v26 = a3[1];
      v19 = (*(_DWORD *)(v25 + 8))-- == 1;
      if ( v19 )
        sub_15D7BC0(v26, v25);
    }
    *a3 = v23;
    return 1;
  }
  result = 0;
  if ( v21 )
    goto LABEL_4;
  return result;
}

