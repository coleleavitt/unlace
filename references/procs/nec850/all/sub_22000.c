char __fastcall sub_22000(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 *v5; // rax
  int v7; // [rsp+Ch] [rbp-18Ch] BYREF
  __int128 v8; // [rsp+10h] [rbp-188h] BYREF
  __int64 v9; // [rsp+20h] [rbp-178h]
  __int64 v10; // [rsp+28h] [rbp-170h]
  __int64 v11; // [rsp+30h] [rbp-168h]
  _BYTE v12[6]; // [rsp+38h] [rbp-160h] BYREF
  __int16 v13; // [rsp+3Eh] [rbp-15Ah]
  char v14; // [rsp+89h] [rbp-10Fh]
  __int16 v15; // [rsp+8Eh] [rbp-10Ah]
  unsigned __int64 v16; // [rsp+178h] [rbp-20h] BYREF

  v16 = __readfsqword(0x28u);
  if ( (unsigned int)sub_21900(a1, nullptr, &v7, a2) == 6 )
  {
    if ( (v7 & 3) == 2 )
      return *(_WORD *)(a2 + 24) == 43;
    if ( (~(_BYTE)v7 & 0xB) == 0 )
      sub_1F8C0(a1, nullptr, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 0);
    return 1;
  }
  if ( *(_WORD *)(a2 + 24) != 79 || *(_BYTE *)(a2 + 41) != 7 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v3 = *(_QWORD *)(a2 + 56) + 16LL * *(_QWORD *)a2;
  if ( v2 != v3 )
  {
    v4 = v3 & v2;
    if ( v3 != -1 )
      v3 = v4;
  }
  v9 = -1;
  v5 = (unsigned __int64 *)v12;
  v8 = -1;
  v10 = 0;
  v11 = 0;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v16 != v5 );
  if ( !(unsigned int)decode_insn(&v8, v3, 0.0) )
    return 0;
  if ( (unsigned __int16)(v10 - 81) <= 1u || (unsigned __int16)(v10 - 112) <= 1u || (_WORD)v10 == 28 )
    return 1;
  if ( (_WORD)v10 != 78 )
    return (_WORD)v10 == 44 && v12[1] == 1 && v13 == 31;
  if ( v14 != 1 )
    return 0;
  return v15 == 31;
}
