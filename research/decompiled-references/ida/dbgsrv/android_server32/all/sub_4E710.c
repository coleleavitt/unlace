/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4E710
// Address: 0x0004E710

//----- (0004E710) --------------------------------------------------------
int __fastcall sub_4E710(int a1, int a2, int a3)
{
  int v6; // r6
  _DWORD *v7; // r0
  int v9; // r2
  int v10; // r0
  char *v11; // r0
  unsigned __int8 *v12; // r1
  int v13; // r3
  _DWORD s[8]; // [sp+14h] [bp-24h] BYREF

  sub_4EDEC(a1);
  if ( a2 )
  {
    *(_BYTE *)(a1 + 488) = 1;
    *(_DWORD *)(a1 + 464) = a2;
    return 0;
  }
  *(_BYTE *)(a1 + 488) = 0;
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v7 = operator new(0x14u);
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 1065353216;
    *(_DWORD *)(a1 + 464) = v7;
  }
  if ( sub_4F21C(a1, "__IDC__", "1", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "far", "__far", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "near", "__near", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "huge", "__huge", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "interrupt", "__interrupt", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "_cdecl", "__cdecl", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "_pascal", "__pascal", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "_stdcall", "__stdcall", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "_fastcall", "__fastcall", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "_thiscall", "__thiscall", 0, 0, nullptr) )
    return get_qerrno();
  if ( sub_4F21C(a1, "_export", "__export", 0, 0, nullptr) )
    return get_qerrno();
  v6 = 0;
  if ( sub_4F21C(a1, "_import", "__import", 0, 0, nullptr) )
    return get_qerrno();
  if ( a3 << 31 || byte_DE500 )
  {
    if ( sub_4F21C(a1, "__LINUX__", "1", 0, 0, nullptr) )
      return get_qerrno();
    if ( sub_4F21C(a1, "__UNIX__", "1", 0, 0, nullptr) )
      return get_qerrno();
    v6 = 0;
    if ( sub_4F21C(a1, "__X86__", "1", 0, 0, nullptr) )
      return get_qerrno();
    if ( byte_DE500 )
    {
      v10 = dword_DD68C;
      if ( dword_DD68C == -1 )
      {
        dword_DD68C = callui(53, callui, v9) & 1;
        callui(52, dword_DE404, 32);
        v10 = dword_DD68C;
      }
      if ( v10 )
      {
        sub_4F21C(a1, "__QT__", "1", 0, 0, nullptr);
        sub_4F21C(a1, "__GUI__", "1", 0, 0, nullptr);
      }
      else
      {
        sub_4F21C(a1, "__TXT__", "1", 0, 0, nullptr);
      }
      v6 = 0;
      sub_4F21C(a1, "__IDA_VERSION__", (char *)dword_DE404, 0, 0, nullptr);
      s[0] = dword_DE404[0];
      s[1] = dword_DE404[1];
      s[2] = dword_DE404[2];
      s[3] = dword_DE404[3];
      s[4] = dword_DE414[0];
      s[5] = dword_DE414[1];
      s[6] = dword_DE414[2];
      s[7] = dword_DE414[3];
      v11 = strchr((const char *)s, 46);
      if ( v11 )
      {
        v12 = (unsigned __int8 *)(v11 + 1);
        do
        {
          v13 = *v12;
          *(v12++ - 1) = v13;
        }
        while ( v13 );
        if ( (unsigned int)&v12[~(unsigned int)(v11 + 1)] <= 1 )
        {
          *(v12 - 2) = 48;
          *(v12 - 1) = 0;
        }
      }
      sub_4F21C(a1, "__IDAVER__", (char *)s, 0, 0, nullptr);
    }
  }
  return v6;
}
// 4E952: variable 'v9' is possibly undefined
// DD68C: using guessed type int dword_DD68C;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
// DE404: using guessed type int dword_DE404[4];
// DE414: using guessed type int dword_DE414[4];
// DE500: using guessed type char byte_DE500;
