__int64 __fastcall sub_20BE200(__int64 a1, const void *a2, size_t a3)
{
  __int64 v3; // r12
  int v5; // r13d
  unsigned int v6; // ebx
  __int64 v7; // r14
  unsigned __int8 v8; // al
  __int64 v9; // rax
  const void *v10; // rax
  __int64 v11; // rdx
  unsigned __int8 v13; // al
  __int64 v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx

  v3 = *(_QWORD *)(a1 + 856);
  if ( !v3 )
    return 0;
  v5 = sub_20A0E10(*(_QWORD *)(a1 + 856));
  if ( !v5 )
    return 0;
  v6 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = sub_20A0E20(v3, v6);
      v8 = *(_BYTE *)(v7 - 16);
      v9 = (v8 & 2) != 0 ? *(_QWORD *)(v7 - 32) : v7 + -16 - 8LL * ((v8 >> 2) & 0xF);
      v10 = (const void *)sub_20A0B40(*(_QWORD *)(v9 + 8));
      if ( a3 == v11 && !memcmp(a2, v10, a3) )
        break;
      if ( v5 == ++v6 )
        return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = sub_20A0E20(v3, v6);
      v15 = *(_BYTE *)(v7 - 16);
      v16 = (v15 & 2) != 0 ? *(_QWORD *)(v7 - 32) : v7 + -16 - 8LL * ((v15 >> 2) & 0xF);
      sub_20A0B40(*(_QWORD *)(v16 + 8));
      if ( !v17 )
        break;
      if ( v5 == ++v6 )
        return 0;
    }
  }
  v13 = *(_BYTE *)(v7 - 16);
  if ( (v13 & 2) != 0 )
    v14 = *(_QWORD *)(v7 - 32);
  else
    v14 = v7 - 8LL * ((v13 >> 2) & 0xF) - 16;
  return *(_QWORD *)(v14 + 16);
}
