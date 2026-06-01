__int64 __fastcall sub_7963D0(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4)
{
  __int64 v4; // r12
  __int64 v6; // rdi
  char v7; // bl
  unsigned __int32 v8; // ebp
  __int64 v9; // rdi
  unsigned __int16 *v10; // rax
  unsigned int v11; // r14d
  int v13; // [rsp+0h] [rbp-48h]
  int v14; // [rsp+4h] [rbp-44h]

  v4 = 0;
  if ( a2 != -1 )
  {
    v6 = a3;
    v7 = a4;
    v8 = _byteswap_ulong(a2);
    v13 = a4 & 0x800;
    v14 = a4 & 0x100;
    while ( 1 )
    {
      v11 = v6 + 1;
      if ( v14 && unk_2CAA7A8 )
        LODWORD(v6) = unk_2CAA7A8(v6);
      *(_DWORD *)(a1 + 48) = v8;
      *(_BYTE *)(a1 + 52) = v7;
      if ( v13 )
        *(_BYTE *)(a1 + 53) = v6;
      else
        *(_DWORD *)(a1 + 53) = _byteswap_ulong(v6);
      v9 = *(_QWORD *)a1;
      *(_WORD *)(a1 + 45) = v13 == 0 ? 10 : 7;
      v10 = (unsigned __int16 *)sub_723E90(v9, (unsigned __int16 *)(a1 + 45));
      if ( !v10 )
        break;
      v6 = v11;
      v4 += *(unsigned __int16 *)((char *)v10 + *v10 + 2);
    }
  }
  return v4;
}

