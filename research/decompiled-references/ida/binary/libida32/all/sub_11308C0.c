__int64 __fastcall sub_11308C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // r12
  __int64 v10; // rax
  const char **v11; // rax
  const char *v12; // rbx
  void *v14[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF

  LODWORD(v14[0]) = 2505;
  v4 = sub_2193060(a2, v14, 1);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( 1 )
  {
    if ( *v6 )
    {
      v8 = sub_2195AD0(*v6, 2505);
      if ( (_BYTE)v8 )
        break;
    }
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    v8 = 0;
    sub_11A4440(v14, a1, a2, a3, 0);
    if ( v14[1] == byte_8 && (*(_QWORD *)v14[0] == 0x367232337370696DLL || *(_QWORD *)v14[0] == 0x367234367370696DLL) )
      v8 = 1;
    if ( v14[0] != &v15 )
      operator delete(v14[0]);
  }
  else
  {
    do
    {
      v9 = *v6;
      v10 = *(_QWORD *)(*v6 + 16LL);
      if ( !v10 )
        v10 = *v6;
      ++v6;
      *(_BYTE *)(v10 + 44) |= 1u;
      if ( v6 == v7 )
        break;
      while ( !*v6 || !(unsigned __int8)sub_2195AD0(*v6, 2505) )
      {
        if ( v7 == ++v6 )
          goto LABEL_18;
      }
    }
    while ( v6 != v7 );
LABEL_18:
    v11 = *(const char ***)(v9 + 48);
    v12 = *v11;
    if ( *v11 && strlen(*v11) == 4 )
    {
      if ( *(_DWORD *)v12 != 942682162 )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return v8;
}

