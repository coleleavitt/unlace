__int64 __fastcall sub_819F40(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5, int a6, int a7)
{
  __int64 v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // rax
  char *v15; // rcx
  __int64 i; // rax
  unsigned __int8 v17; // al
  __int64 result; // rax

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0xE;
  if ( byte_4AD234C )
    sub_AC4570(14);
  *(_WORD *)(a1 + 1) &= 0xF801u;
  v12 = 8 * a4;
  *(_QWORD *)(a1 + 8) = a5;
  v13 = a2[274];
  *(_DWORD *)(a1 + 20) = a7;
  *(_DWORD *)(a1 + 16) = a6;
  if ( a4 > 0xFFFFFFFFFFFFFFFLL )
    v12 = -1;
  *(_DWORD *)(a1 + 32) = a4;
  v14 = (_QWORD *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  a2[284] += v12;
  v15 = (char *)v14 + v12;
  if ( a2[275] >= (unsigned __int64)v14 + v12 && v13 )
    a2[274] = v15;
  else
    v14 = (_QWORD *)sub_804090((__int64)(a2 + 274), v12, 3);
  *(_QWORD *)(a1 + 24) = v14;
  if ( a4 )
  {
    *v14 = *a3;
    v13 = 1;
    for ( i = 1; i != a4; v13 = i )
    {
      v12 = a3[i];
      v15 = *(char **)(a1 + 24);
      *(_QWORD *)&v15[8 * i] = v12;
      i = (unsigned int)(v13 + 1);
    }
  }
  v17 = sub_76C700(a1, v12, v13, (int)v15);
  *(_BYTE *)(a1 + 1) = (v17 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v17 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

