__int64 __fastcall sub_35DFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v6; // r13d
  char v7; // bp
  unsigned __int8 default_encoding_idx; // r12
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 *v12; // rsi
  __int64 v13; // rdi
  char v14; // al
  int v15; // eax
  int v16; // ebp
  __int64 v17; // rdi
  __int64 encoding_name; // rax
  __int64 result; // rax
  unsigned int v20; // [rsp+4h] [rbp-3Ch]

  v6 = a5 >> 24;
  v7 = a5;
  default_encoding_idx = HIBYTE(a5);
  v10 = a1 + 48;
  v11 = a1 + 120;
  *(_QWORD *)a1 = a2;
  v12 = *(__int64 **)(a2 + 88);
  v13 = *v12;
  *(_QWORD *)(a1 + 8) = *v12 + 1072;
  v14 = *(_BYTE *)(v13 + 1072);
  *(_DWORD *)(a1 + 40) = a5;
  *(_BYTE *)(a1 + 44) = a5;
  *(_BYTE *)(a1 + 45) = a6;
  *(_OWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_BYTE *)(a1 + 16) = (a6 | ((v14 & 0x40) != 0)) ^ 1;
  *(_WORD *)(a1 + 18) = 257;
  v15 = *(_DWORD *)(v13 + 1072);
  *(_BYTE *)(a1 + 47) = HIBYTE(a5);
  *(_BYTE *)(a1 + 46) = ((v15 >= 0) | a6) ^ 1;
  sub_359970(v10, *v12, a3, a3 + a4, 0);
  v20 = (unsigned __int8)getinf_flag(3, 32);
  if ( !(_BYTE)v6 )
  {
    v16 = v7 & 3;
    v17 = 2;
    if ( v16 != 1 )
      v17 = 3 * (unsigned int)(v16 == 2) + 1;
    default_encoding_idx = get_default_encoding_idx(v17);
  }
  encoding_name = get_encoding_name(default_encoding_idx);
  sub_8B7BF0(v11, v10, encoding_name, v20, 1);
  result = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(result + 328) & 2) != 0 )
    *(_BYTE *)(a1 + 108) ^= 1u;
  return result;
}
