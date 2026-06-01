__int64 __fastcall sub_11307E0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rbx
  _QWORD *v4; // rbp
  __int64 v6; // r12
  __int64 v7; // rax
  int v8[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v8[0] = 52;
  v1 = sub_2193060(a1, v8, 1);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (_QWORD *)(v2 + 8LL * (unsigned int)v1);
  v4 = (_QWORD *)(v2 + 8 * HIDWORD(v1));
  if ( v3 == v4 )
    return 0;
  while ( !*v3 || !(unsigned __int8)sub_2195AD0(*v3, 52) )
  {
    if ( v4 == ++v3 )
      return 0;
  }
  if ( v4 == v3 )
    return 0;
  do
  {
    v6 = *v3;
    v7 = *(_QWORD *)(*v3 + 16LL);
    if ( !v7 )
      v7 = *v3;
    ++v3;
    *(_BYTE *)(v7 + 44) |= 1u;
    if ( v3 == v4 )
      break;
    while ( !*v3 || !(unsigned __int8)sub_2195AD0(*v3, 52) )
    {
      if ( v4 == ++v3 )
        return sub_2195AD0(v6, 2921);
    }
  }
  while ( v4 != v3 );
  return sub_2195AD0(v6, 2921);
}

