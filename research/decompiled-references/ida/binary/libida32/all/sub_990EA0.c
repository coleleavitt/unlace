__int64 __fastcall sub_990EA0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  char v6; // cl
  _QWORD v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  if ( (v1 & 4) == 0 )
    return *(unsigned int *)(a1 + 24);
  v2 = (__int64 *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  v3 = *v2;
  if ( !*v2 )
    return *(unsigned int *)(a1 + 24);
  v4 = v2[1];
  v8[0] = v3;
  v8[1] = v4;
  v5 = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v5 )
  {
    v8[0] = *(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v6 = 0;
    while ( (*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v6 = 1;
      v5 = *(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    }
    if ( v6 )
      v8[0] = v5;
  }
  return sub_E6C7F0(v8);
}

