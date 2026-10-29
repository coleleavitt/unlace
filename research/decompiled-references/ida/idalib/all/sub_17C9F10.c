__int64 __fastcall sub_17C9F10(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_BYTE *)(a1 + 120);
  if ( !a2 )
  {
    if ( v3 )
    {
      sub_AE9DF0((unsigned __int8 **)(a1 + 32), a3, 9u);
    }
    else if ( *(_BYTE *)(a1 + 132) )
    {
      v8 = sub_168B9E0((_QWORD *)a1);
      v11 = *(_QWORD *)(a1 + 16);
      if ( v11 )
        v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 32LL))(*(_QWORD *)(a1 + 16));
      v20[0] = v11;
      v12 = sub_1587BC0(v8, v20, v6, v7, v9, v10);
      sub_AE9DF0((unsigned __int8 **)(*v12 + 32LL * *(unsigned int *)(a1 + 128) + 8), a3, 9u);
    }
    return a1;
  }
  if ( v3 )
  {
    sub_AE9DF0((unsigned __int8 **)(a1 + 32), a2, 0xAu);
    return a1;
  }
  else
  {
    if ( !*(_BYTE *)(a1 + 132) )
      return a1;
    v17 = sub_168B9E0((_QWORD *)a1);
    v18 = *(_QWORD *)(a1 + 16);
    if ( v18 )
      v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 32LL))(*(_QWORD *)(a1 + 16));
    v20[0] = v18;
    v19 = sub_1587BC0(v17, v20, v13, v14, v15, v16);
    sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * *(unsigned int *)(a1 + 128) + 8), a2, 0xAu);
    return a1;
  }
}
