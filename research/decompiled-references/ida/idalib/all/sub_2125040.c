__int64 __fastcall sub_2125040(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rdx
  __int64 result; // rax
  char v4; // r9
  char v5; // r10
  int v6; // edi
  __int64 v7; // r8
  _BYTE *v8; // rcx
  unsigned __int8 *v9; // rcx
  __int64 v10; // r8
  __m128i si128; // xmm0
  __int64 v12; // [rsp+0h] [rbp-10h]

  v2 = *(unsigned __int8 **)(a2 + 56);
  result = a1;
  v4 = *(_BYTE *)(a2 + 146);
  v5 = *(_BYTE *)(a2 + 145);
  v6 = *v2;
  if ( *(v2 - 1) != 46 || (unsigned __int8)(v6 - 48) > 9u )
    goto LABEL_2;
  v9 = v2 + 1;
  do
  {
    *(_QWORD *)(a2 + 56) = v9;
    v6 = *v9;
    v2 = v9++;
  }
  while ( (unsigned __int8)(v6 - 48) <= 9u );
  if ( (unsigned __int8)((v6 & 0xDF) - 65) <= 0x19u )
    goto LABEL_26;
  if ( (unsigned __int8)(v6 - 36) > 0x3Bu )
    goto LABEL_24;
  v10 = 0x800000008000401LL;
  if ( _bittest64(&v10, (unsigned int)(v6 - 36)) )
  {
LABEL_26:
    if ( (v6 & 0xDF) != 0x45 )
      goto LABEL_2;
LABEL_27:
    v12 = result;
    sub_2124E90(result, (_QWORD *)a2);
    return v12;
  }
  if ( (_BYTE)v6 != 64 || !v5 )
  {
LABEL_24:
    if ( (_BYTE)v6 != 35 || !v4 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v6 = 64;
LABEL_2:
  v7 = 0x8000000083FF401LL;
  while ( 1 )
  {
    if ( (unsigned __int8)((v6 & 0xDF) - 65) <= 0x19u )
      goto LABEL_8;
    if ( (unsigned __int8)(v6 - 36) > 0x3Bu )
      break;
    if ( !_bittest64(&v7, (unsigned int)(v6 - 36)) && ((_BYTE)v6 != 64 || !v5) )
      goto LABEL_11;
LABEL_8:
    *(_QWORD *)(a2 + 56) = ++v2;
    v6 = *v2;
  }
  if ( (_BYTE)v6 == 35 && v4 )
    goto LABEL_8;
LABEL_11:
  v8 = *(_BYTE **)(a2 + 136);
  if ( v2 == v8 + 1 && *v8 == 46 )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A78B0);
    *(_DWORD *)result = 25;
    *(_QWORD *)(result + 8) = v8;
    *(_DWORD *)(result + 32) = 64;
    *(__m128i *)(result + 16) = si128;
  }
  else
  {
    *(_DWORD *)result = 2;
    *(_QWORD *)(result + 8) = v8;
    *(_QWORD *)(result + 16) = v2 - v8;
    *(_DWORD *)(result + 32) = 64;
    *(_QWORD *)(result + 24) = 0;
  }
  return result;
}
