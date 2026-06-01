unsigned __int64 __fastcall sub_716C70(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // rsi
  _QWORD v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v13[0] = a2;
  v3 = *(_QWORD *)&byte_8[sub_B0B400(v13) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 16 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16 )
      return v13[0];
    v4 = sub_B0D320(v4);
    if ( !v4 )
      return v13[0];
  }
  if ( !*(_QWORD *)(v4 + 32) )
    return v13[0];
  v5 = 0;
  v6 = *(_QWORD *)&byte_8[v13[0] & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v6 & 8) != 0 )
    v5 = *(__int64 *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL));
  v7 = v5 | (LOBYTE(v13[0]) | (unsigned __int8)v6) & 7;
  v8 = sub_7166A0(
         (__int64)a1,
         0,
         (*(_BYTE *)(v4 + 18) >> 3) & 3,
         (*(_BYTE *)(v4 + 17) & 4) != 0,
         *(_BYTE *)(v4 + 17) & 1,
         nullptr,
         0,
         0);
  v9 = v8 & 7;
  if ( v7 <= 7 )
    return (unsigned int)v7 | (unsigned int)v9 | v8 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = v7 | v9;
  v12 = (unsigned __int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (v8 & 8) != 0 )
    return sub_6C3980(a1, *v12, *(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL)) | v11);
  else
    return sub_6C3980(a1, (unsigned __int64)v12, v11);
}

