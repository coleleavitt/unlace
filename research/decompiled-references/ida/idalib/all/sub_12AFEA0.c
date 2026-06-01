__int64 __fastcall sub_12AFEA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  unsigned int v6; // r13d
  __int64 v8; // r12
  __int64 v9; // rax
  const char **v10; // rax
  const char *v11; // rbx
  int v12; // eax
  int v13[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v13[0] = 1916;
  v2 = sub_21B6DA0(a2, v13, 1);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 == v5 )
    return 0;
  while ( 1 )
  {
    if ( *v4 )
    {
      v6 = sub_21B9810(*v4, 1916);
      if ( (_BYTE)v6 )
        break;
    }
    if ( v5 == ++v4 )
      return 0;
  }
  if ( v5 == v4 )
    return 0;
  do
  {
    v8 = *v4;
    v9 = *(_QWORD *)(*v4 + 16LL);
    if ( !v9 )
      v9 = *v4;
    ++v4;
    *(_BYTE *)(v9 + 44) |= 1u;
    if ( v4 == v5 )
      break;
    while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 1916) )
    {
      if ( v5 == ++v4 )
        goto LABEL_14;
    }
  }
  while ( v5 != v4 );
LABEL_14:
  v10 = *(const char ***)(v8 + 48);
  v11 = *v10;
  if ( !*v10 || strlen(*v10) != 3 )
    return 0;
  if ( *(_WORD *)v11 == 26210 && v11[2] == 100 )
    return v6;
  if ( *(_WORD *)v11 != 27751 || (v12 = 0, v11[2] != 100) )
    v12 = 1;
  LOBYTE(v6) = v12 == 0;
  return v6;
}
