__int64 __fastcall sub_208C0A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int8 v4; // dl
  const char **v5; // rax
  const char *v6; // rdi
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  _QWORD v11[4]; // [rsp+0h] [rbp-138h] BYREF
  __int16 v12; // [rsp+20h] [rbp-118h]
  __int64 v13; // [rsp+30h] [rbp-108h]
  _QWORD v14[4]; // [rsp+60h] [rbp-D8h] BYREF
  __int16 v15; // [rsp+80h] [rbp-B8h]
  _QWORD v16[4]; // [rsp+90h] [rbp-A8h] BYREF
  __int16 v17; // [rsp+B0h] [rbp-88h]
  __int64 v18; // [rsp+C0h] [rbp-78h]
  _QWORD v19[4]; // [rsp+F0h] [rbp-48h] BYREF
  __int16 v20; // [rsp+110h] [rbp-28h]

  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
    v4 = *(_BYTE *)(v3 - 16);
    if ( (v4 & 2) != 0 )
      v5 = *(const char ***)(v3 - 32);
    else
      v5 = (const char **)(v3 - 8LL * ((v4 >> 2) & 0xF) - 16);
    v6 = *v5;
    if ( *v5 )
      v6 = (const char *)sub_20A0B40(v6);
    else
      v7 = 0;
    v8 = *(_DWORD *)(a2 + 32);
    v9 = *(_DWORD *)(a2 + 36);
  }
  else
  {
    v7 = 9;
    v6 = "<unknown>";
    v9 = 0;
    v8 = 0;
  }
  LODWORD(v13) = v8;
  v11[1] = v7;
  v12 = 773;
  v14[0] = v11;
  v11[2] = ":";
  v16[2] = ":";
  LODWORD(v18) = v9;
  v14[2] = v13;
  v19[0] = v16;
  v11[0] = v6;
  v15 = 2306;
  v20 = 2306;
  v19[2] = v18;
  v16[0] = v14;
  v17 = 770;
  sub_2253560(a1, v19);
  return a1;
}
