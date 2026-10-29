__int64 __fastcall sub_129ADE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 (*v6)(); // rdx
  __int64 result; // rax
  __int64 v8; // rax
  int v9[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v9[0] = 3360;
  v2 = sub_21B6DA0(a2, v9, 1);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 == v5 )
    goto LABEL_5;
  while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 3360) )
  {
    if ( v5 == ++v4 )
      goto LABEL_5;
  }
  if ( v5 == v4 )
  {
LABEL_5:
    v6 = *(__int64 (**)())(*(_QWORD *)a1 + 288LL);
    result = 1;
    if ( v6 != sub_129A4D0 )
      return ((__int64 (__fastcall *)(__int64))v6)(a1);
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
      while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 3360) )
      {
        if ( v5 == ++v4 )
          return sub_1131F90(a1, a2);
      }
    }
    while ( v5 != v4 );
    return sub_1131F90(a1, a2);
  }
  return result;
}
