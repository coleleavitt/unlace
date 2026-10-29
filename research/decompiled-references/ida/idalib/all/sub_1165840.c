char *__fastcall sub_1165840(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rax
  __int64 v8; // rax
  int v9[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v9[0] = 2168;
  v2 = sub_21B6DA0(a2, v9, 1);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 == v5 )
    goto LABEL_5;
  while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 2168) )
  {
    if ( v5 == ++v4 )
      goto LABEL_5;
  }
  if ( v5 == v4 )
  {
LABEL_5:
    v6 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v6 + 496) )
      return *(char **)(v6 + 488);
    else
      return "/";
  }
  else
  {
    do
    {
      v8 = *v4;
      if ( *(_QWORD *)(*v4 + 16LL) )
        v8 = *(_QWORD *)(*v4 + 16LL);
      ++v4;
      *(_BYTE *)(v8 + 44) |= 1u;
      if ( v4 == v5 )
        break;
      while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 2168) )
      {
        if ( v5 == ++v4 )
          return (char *)sub_21B7BC0(a2, 2168, &byte_22F0C30, 0);
      }
    }
    while ( v5 != v4 );
    return (char *)sub_21B7BC0(a2, 2168, &byte_22F0C30, 0);
  }
}
