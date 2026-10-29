unsigned __int64 __fastcall sub_20A43F0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 *v2; // r8
  __int64 *v3; // rdx
  __int64 *v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // r9d
  __int64 *v7; // rax
  __int64 v8; // rdi

  v1 = *a1;
  v2 = a1 + 3;
  v3 = a1 + 2;
  v4 = a1 + 1;
  if ( !*a1 || *(_BYTE *)v1 != 1 )
    return sub_20A3510(v1, v4, v3, a1 + 3);
  v5 = *(_QWORD *)(v1 + 128);
  v6 = *(_DWORD *)(v5 + 32);
  v7 = *(__int64 **)(v5 + 24);
  if ( v6 <= 0x40 )
  {
    v8 = 0;
    if ( v6 )
      v8 = (__int64)((_QWORD)v7 << (64 - (unsigned __int8)v6)) >> (64 - (unsigned __int8)v6);
  }
  else
  {
    v8 = *v7;
  }
  return sub_20A3CB0(v8, v4, v3, v2);
}
