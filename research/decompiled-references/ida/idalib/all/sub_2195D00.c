__int64 __fastcall sub_2195D00(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  __int16 v6; // cx
  unsigned __int32 v7; // eax
  unsigned __int32 v8; // edi
  __int64 v9; // r9
  __int64 v11; // [rsp+18h] [rbp-30h]

  if ( a2 < sub_215DEC0(a1) || (v3 = sub_215DEC0(a1), a2 + 12 > v4 + v3) )
    sub_2221C70("Malformed MachO file.", 1);
  v5 = *(unsigned int *)(a1 + 8);
  v6 = *(_WORD *)(a2 + 6);
  v11 = *(_QWORD *)a2;
  v7 = *(_DWORD *)a2;
  v8 = _byteswap_ulong(*(_DWORD *)a2);
  if ( (unsigned int)v5 <= 0x14 )
  {
    v9 = 1398784;
    if ( _bittest64(&v9, v5) )
    {
      v6 = __ROL2__(v6, 8);
      v7 = v8;
    }
  }
  LODWORD(v11) = v7;
  HIWORD(v11) = v6;
  return v11;
}
