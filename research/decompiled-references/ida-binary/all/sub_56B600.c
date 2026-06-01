_DWORD *__fastcall sub_56B600(
        __int64 *a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        unsigned __int16 a8,
        unsigned __int8 a9,
        __int16 a10,
        __int16 a11,
        __int64 a12)
{
  unsigned __int64 v14; // r10
  unsigned int v16; // esi
  __int16 v17; // cx
  bool v18; // r13
  unsigned __int16 v19; // r11
  __int16 v20; // dx
  unsigned __int8 *v21; // rdi
  __int16 v22; // r15
  __int16 v23; // bx
  int v24; // edi
  _DWORD *result; // rax
  __int64 v26; // r8
  unsigned int v27; // edi
  unsigned __int16 v28; // ax
  int v29; // [rsp+1Ch] [rbp-5Ch]

  v14 = HIDWORD(a3);
  v16 = a3;
  v17 = a10;
  v18 = a2 == 0;
  v19 = a8;
  v20 = a11;
  if ( a2 == 0xFFFF )
  {
    v22 = 1;
LABEL_12:
    v24 = *((_DWORD *)a1 + 2);
    v23 = (unsigned __int8)v22;
    if ( !v24 )
      goto LABEL_8;
    goto LABEL_10;
  }
  if ( a2 == 0xFFFE )
  {
    v22 = 0;
    goto LABEL_12;
  }
  v21 = (unsigned __int8 *)(*(_QWORD *)(a12 + 104) + 3LL * a2);
  v22 = *v21;
  v23 = v21[1];
  if ( a2 > 0xFFu
    || a9 == 1
    || HIDWORD(a5) != 0
    || ((unsigned int)v14 | a7) > 0xF
    || v16 > 0xFE
    || a4 > 0xFE
    || (unsigned int)a5 > 0xFE
    || a6 > 0xFE )
  {
    v24 = *((_DWORD *)a1 + 2);
    if ( !v24 )
    {
LABEL_8:
      v29 = v14;
      result = off_8C52B8(0x50u);
      LODWORD(v14) = v29;
      v20 = a11;
      v17 = a10;
      v19 = a8;
LABEL_9:
      result[1] = v16;
      *((_OWORD *)result + 2) = 0;
      *((_QWORD *)result + 2) = a5;
      *result = 1;
      result[6] = a6;
      result[2] = v14;
      result[3] = a4;
      result[7] = a7;
      *((_WORD *)result + 20) = a2;
      *((_WORD *)result + 21) = v19;
      *((_WORD *)result + 22) = ((4 * v18) | v22 | (2 * v23) | (a9 << 6) | (v17 << 8) | (v20 << 10)) & 0x547;
      *((_OWORD *)result + 3) = 0;
      *((_OWORD *)result + 4) = 0;
      return result;
    }
LABEL_10:
    v26 = *a1;
    v27 = v24 - 1;
    *((_DWORD *)a1 + 2) = v27;
    result = *(_DWORD **)(v26 + 8LL * v27);
    goto LABEL_9;
  }
  LOBYTE(v28) = ((8 * v18) | (4 * v23) | (2 * v22 + 1) | ((_BYTE)a11 << 6)) & 0x7F;
  HIBYTE(v28) = a2;
  return (_DWORD *)((a5 << 56)
                  | ((unsigned __int64)(unsigned __int8)v16 << 48) & 0xFFFFFFFFFFFFFFLL
                  | ((v14 & 0xF | (unsigned __int8)(16 * a7)) << 40) & 0xFFFFFFFFFFFFLL
                  | ((unsigned __int64)(unsigned __int8)a4 << 32) & 0xFFFFFFFFFFLL
                  | (a8 << 16)
                  | (unsigned __int64)v28);
}
