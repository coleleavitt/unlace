__int64 __fastcall netnode_supstr_idx8(unsigned int a1, unsigned __int8 a2, _BYTE *a3, __int64 a4, __int16 a5)
{
  __int16 v5; // r14
  _BYTE *v7; // r12
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned __int16 *v10; // rax
  _BYTE *v11; // rsi
  unsigned int v14; // edx

  v14 = a2;
  if ( a1 == -1 )
    JUMPOUT(0x792348);
  v5 = a5 | 0x800;
  v7 = a3;
  v8 = *(_QWORD *)(qword_2CA1698 + 1544);
  v9 = v14;
  if ( (a5 & 0x100) != 0 && unk_2CAA7A8 )
    v9 = unk_2CAA7A8(v14);
  *(_BYTE *)(v8 + 52) = v5;
  *(_DWORD *)(v8 + 48) = _byteswap_ulong(a1);
  if ( (v5 & 0x800) != 0 )
    JUMPOUT(0x792338);
  *(_DWORD *)(v8 + 53) = _byteswap_ulong(v9);
  *(_WORD *)(v8 + 45) = 10;
  v10 = (unsigned __int16 *)sub_723E90(*(_QWORD *)v8, (unsigned __int16 *)(v8 + 45));
  v11 = v10;
  if ( v10 )
    v11 = (char *)v10 + *v10 + 2;
  return sub_78F220(v7, v11, -1, a4);
}

