__int64 __fastcall sub_677140(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rbp
  _QWORD *v18; // r15
  unsigned __int8 v19; // [rsp+Fh] [rbp-39h]

  v2 = *(_QWORD *)(a2 + 24);
  if ( !v2 || *(_DWORD *)(a1 + 144) != *(_DWORD *)v2 || *(_DWORD *)(v2 + 4) )
    return 0;
  v4 = *(_QWORD *)(v2 + 8);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0xFFFFFFFF0LL;
  if ( v4 )
    v7 = 16LL * (unsigned int)(*(_DWORD *)(v4 - 4) - 1);
  v8 = v7 + v4;
  if ( *(_BYTE *)(v8 + 8) != 1 )
LABEL_21:
    sub_DBF6E(0);
  v9 = 0;
  v19 = sub_6759B0(v6, *(_QWORD *)v8);
  if ( v19 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(a2 + 24);
      v11 = -1;
      if ( v10 )
      {
        v12 = *(_QWORD *)(v10 + 8);
        if ( v12 )
          v11 = *(_DWORD *)(v12 - 4) - 1;
      }
      if ( v9 >= v11 )
        break;
      v14 = *(_QWORD *)(v10 + 8) + 16LL * v9;
      if ( *(_BYTE *)(v14 + 8) != 1 )
        goto LABEL_21;
      v13 = *(_QWORD *)(a1 + 24);
      v15 = *(_QWORD **)(v13 + 56);
      if ( !v15 )
        return 0;
      v16 = &v15[*((unsigned int *)v15 - 1)];
      if ( v15 == v16 )
        return 0;
      v17 = *(_QWORD *)v14;
      v18 = *(_QWORD **)(v13 + 56);
      while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v18 + 56LL))(*v18, v17) )
      {
        if ( v16 == ++v18 )
          return 0;
      }
      ++v9;
    }
  }
  else
  {
    return 0;
  }
  return v19;
}

