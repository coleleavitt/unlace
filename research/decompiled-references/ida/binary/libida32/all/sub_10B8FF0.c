__int64 __fastcall sub_10B8FF0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  __int64 v6; // r15
  _QWORD *v8; // rbp
  __int64 v9; // rax
  _DWORD v10[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v10[0] = a2;
  v2 = sub_2193060(a1, v10, 1);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 == v5 )
    return 0;
  if ( a2 )
  {
    while ( !*v4 || !(unsigned __int8)sub_2195AD0(*v4, a2) )
    {
      if ( v5 == ++v4 )
        return 0;
    }
  }
  else
  {
    v4 += ((unsigned __int64)((char *)(v5 - 1) - (char *)v4) >> 3) + 1;
  }
  if ( v5 == v4 )
    return 0;
  do
  {
    v6 = *v4;
    v8 = v4 + 1;
    v9 = *(_QWORD *)(*v4 + 16LL);
    if ( !v9 )
      v9 = *v4;
    *(_BYTE *)(v9 + 44) |= 1u;
    if ( v8 == v5 )
      break;
    if ( a2 )
    {
      while ( !*v8 || !(unsigned __int8)sub_2195AD0(*v8, a2) )
      {
        if ( v5 == ++v8 )
          return v6;
      }
      v4 = v8;
    }
    else
    {
      v4 = &v8[((unsigned __int64)((char *)(v5 - 2) - (char *)v4) >> 3) + 1];
    }
  }
  while ( v5 != v4 );
  return v6;
}

