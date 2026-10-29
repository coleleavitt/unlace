__int64 __fastcall sub_81C780(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, _QWORD *a7, __int64 a8)
{
  __int64 v9; // r14
  __int64 *v11; // rcx
  __int16 v13; // bx
  __int64 v14; // rdi
  __int16 v15; // ax
  unsigned __int8 v16; // al
  __int64 result; // rax
  int v18; // esi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 *v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  v9 = a3;
  v11 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = 1;
  v14 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v14 + 17) & 4) == 0 )
  {
    v18 = *(unsigned __int8 *)(v14 + 16);
    if ( (unsigned int)(v18 - 42) > 1 )
    {
      v24 = a3 & 0xFFFFFFFFFFFFFFF0LL;
      v13 = 0;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1 )
        goto LABEL_7;
      v22 = sub_B0D320(v14);
      v11 = (__int64 *)v24;
      v14 = v22;
      if ( !v22 )
        goto LABEL_18;
      LOBYTE(v18) = *(_BYTE *)(v22 + 16);
    }
    if ( (_BYTE)v18 == 42 )
      goto LABEL_17;
    while ( 1 )
    {
      v20 = *(_QWORD *)(v14 + 32);
      if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v21 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v21 + 16) - 42 > 1 )
          break;
        v20 = *(_QWORD *)(v21 + 32);
        if ( (*(_BYTE *)(v21 + 18) & 0x10) == 0 )
          goto LABEL_23;
      }
      v23 = v11;
      v19 = sub_B0D320(v21);
      v11 = v23;
      v14 = v19;
    }
LABEL_23:
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
LABEL_17:
      v13 = 1;
    else
      v13 = 2;
LABEL_18:
    v14 = *v11;
  }
  if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 42 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
    && (v14 = sub_B0D320(v14)) != 0 )
  {
    while ( (*(_BYTE *)(v14 + 18) & 0x10) != 0 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(*(_QWORD *)(v14 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v14 + 16) - 42 <= 1 )
          break;
        v14 = sub_B0D320(v14);
        if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
          goto LABEL_6;
      }
    }
LABEL_6:
    v9 = *(_QWORD *)(v14 + 32);
  }
LABEL_7:
  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0x11;
  if ( byte_4AD234C )
    sub_AC4570(17);
  v15 = *(_WORD *)(a1 + 1);
  *(_QWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a8;
  *(_WORD *)(a1 + 1) = (2 * v13) | v15 & 0xF801;
  if ( 8 * a8 <= 8 )
  {
    if ( 8 * a8 == 8 )
      *(_QWORD *)(a1 + 32) = *a7;
  }
  else
  {
    memmove((void *)(a1 + 32), a7, 8 * a8);
  }
  v16 = sub_76C2A0(a1);
  *(_BYTE *)(a1 + 1) = (v16 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v16 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

