__int64 __fastcall sub_AF0AD0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v11[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_971800(a2, "[[gnu::interrupt");
    sub_AD7BA0(a2, v11);
    sub_971800(a2, "\"");
    v8 = sub_AF0A30(*(_DWORD *)(a1 + 40));
    v10 = sub_971800(v9, v8);
    sub_971800(v10, "\"");
    if ( !v11[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((interrupt");
    sub_AD7BA0(a2, v11);
    sub_971800(a2, "\"");
    v4 = sub_AF0A30(*(_DWORD *)(a1 + 40));
    v6 = sub_971800(v5, v4);
    sub_971800(v6, "\"");
    if ( !v11[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}

