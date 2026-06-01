__int64 __fastcall sub_32F240(__int64 a1, unsigned int a2)
{
  __int64 flags; // rbp
  __int64 v3; // r9
  __int64 opinfo; // rax
  __int64 result; // rax
  _QWORD *v6; // rax
  int v7; // edx
  __int128 v8; // [rsp+0h] [rbp-188h] BYREF
  __int64 v9; // [rsp+10h] [rbp-178h]
  __int64 v10; // [rsp+18h] [rbp-170h]
  __int64 v11; // [rsp+20h] [rbp-168h]
  _BYTE v12[320]; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v13[4]; // [rsp+168h] [rbp-20h] BYREF

  v13[0] = __readfsqword(0x28u);
  flags = get_flags_ex(a1, 0);
  if ( (~BYTE1(flags) & 6) != 0 )
  {
    opinfo = get_opinfo(&v8, a1, a2);
    return get_data_elsize(a1, flags, opinfo);
  }
  else
  {
    v9 = -1;
    v6 = v12;
    v10 = 0;
    v11 = 0;
    v8 = -1;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 5;
      *((_WORD *)v6 - 19) = 0;
      *((_WORD *)v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *(v6 - 2) = 0;
    }
    while ( v6 != v13 );
    v7 = decode_insn(&v8, a1, v13, 0, 0, v3, 0.0);
    result = 0xFFFFFFFFLL;
    if ( v7 )
    {
      if ( (v12[40 * (a2 & 0xF) + 1] & 0xFB) == 1 )
        return get_dtype_size((unsigned __int8)v12[40 * (a2 & 0xF) + 5]);
      else
        return (unsigned int)((1 << (*(_BYTE *)(getseg(a1) + 43) + 4)) / 8);
    }
  }
  return result;
}
