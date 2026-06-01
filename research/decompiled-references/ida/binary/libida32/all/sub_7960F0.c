__int64 __fastcall sub_7960F0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, __int16 a6)
{
  unsigned int v6; // r15d
  char v7; // r14
  int v9; // ebp
  unsigned __int32 v10; // r13d
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v14; // [rsp+4h] [rbp-54h]
  unsigned __int16 *v15; // [rsp+8h] [rbp-50h]

  v6 = a3 + a5 - 1;
  v7 = a6;
  v9 = a6 & 0x800;
  v14 = a6 & 0x100;
  v10 = _byteswap_ulong(a2);
  v15 = (unsigned __int16 *)(a1 + 45);
  while ( 1 )
  {
    v12 = v6;
    if ( v14 && unk_2CAA7A8 )
      v12 = unk_2CAA7A8(v6);
    *(_DWORD *)(a1 + 48) = v10;
    *(_BYTE *)(a1 + 52) = v7;
    if ( v9 )
      *(_BYTE *)(a1 + 53) = v12;
    else
      *(_DWORD *)(a1 + 53) = _byteswap_ulong(v12);
    v11 = *(_QWORD *)a1;
    *(_WORD *)(a1 + 45) = v9 == 0 ? 10 : 7;
    if ( !sub_723E90(v11, v15) )
      break;
    ++v6;
  }
  return sub_7956C0(a1, a2, a3, a4, v6 - a3, a6);
}

