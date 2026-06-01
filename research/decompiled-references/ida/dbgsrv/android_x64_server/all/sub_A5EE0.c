/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5EE0
// Address: 0x00000000000A5EE0

//----- (00000000000A5EE0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A5EE0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  const char *v7; // rax
  _BYTE *v8; // rax
  const char *v9; // rbx
  size_t v10; // rdx
  const char *v11; // rsi
  _BYTE *v12; // rax
  _BYTE v14[5]; // [rsp+6h] [rbp-42h] BYREF
  _BYTE v15[5]; // [rsp+Bh] [rbp-3Dh] BYREF
  _QWORD v16[7]; // [rsp+10h] [rbp-38h] BYREF

  v16[0] = __readfsqword(0x28u);
  v2 = pack_dd(v14, (unsigned __int64)v15, *(_DWORD *)(a2 + 20) & 0xFFFFFFF);
  sub_56350(a1, v14, v2 - v14);
  v3 = pack_dd(v14, (unsigned __int64)v15, *(_DWORD *)a2);
  sub_56350(a1, v14, v3 - v14);
  v4 = pack_dd(v14, (unsigned __int64)v15, *(_DWORD *)(a2 + 4));
  sub_56350(a1, v14, v4 - v14);
  v5 = pack_dq(v14, (unsigned __int64)v16, *(_QWORD *)(a2 + 8) + 1LL);
  sub_56350(a1, v14, v5 - v14);
  v6 = pack_dd(v14, (unsigned __int64)v15, *(unsigned __int8 *)(a2 + 16));
  sub_56350(a1, v14, v6 - v14);
  switch ( *(_DWORD *)(a2 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      sub_A5940(a1, a2 + 24);
      return __readfsqword(0x28u);
    case 2:
    case 4:
      v8 = pack_dd(v14, (unsigned __int64)v15, *(_DWORD *)(a2 + 24));
      goto LABEL_12;
    case 3:
    case 9:
    case 0xA:
      if ( *(_QWORD *)(a2 + 32) )
        v7 = *(const char **)(a2 + 24);
      else
        v7 = s1;
      v9 = &byte_EB522;
      if ( v7 )
        v9 = v7;
      v10 = strlen(v9) + 1;
      v11 = v9;
      goto LABEL_13;
    case 5:
      v12 = pack_dq(v14, (unsigned __int64)v16, *(_QWORD *)(a2 + 24) + 1LL);
      sub_56350(a1, v14, v12 - v14);
      v8 = pack_dq(v14, (unsigned __int64)v16, *(_QWORD *)(a2 + 32) + 1LL);
LABEL_12:
      v11 = v14;
      v10 = v8 - v14;
LABEL_13:
      sub_56350(a1, v11, v10);
      break;
    case 7:
      sub_A5B10(a1, a2 + 24);
      break;
    default:
      return __readfsqword(0x28u);
  }
  return __readfsqword(0x28u);
}
