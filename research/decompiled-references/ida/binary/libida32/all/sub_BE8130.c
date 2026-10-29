__int64 __fastcall sub_BE8130(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  int v13; // edx
  __int64 v14; // rax
  unsigned __int8 v15; // al
  __int64 result; // rax
  __int64 v17; // [rsp+0h] [rbp-38h]
  unsigned int v18; // [rsp+Ch] [rbp-2Ch]

  *(_WORD *)a1 = *(_WORD *)a1 & 0xFE00 | 0xD;
  if ( unk_2CAD564 )
  {
    v18 = a6;
    v17 = a5;
    sub_EC5E10(13);
    a6 = v18;
    a5 = v17;
  }
  *(_QWORD *)(a1 + 8) = a5;
  v10 = 8 * a4;
  *(_WORD *)(a1 + 1) &= 0xF801u;
  *(_DWORD *)(a1 + 20) = a7;
  *(_DWORD *)(a1 + 16) = a6;
  *(_DWORD *)(a1 + 4) = a4;
  v11 = a2[294];
  if ( a4 > 0xFFFFFFFFFFFFFFFLL )
    v10 = -1;
  a2[304] += v10;
  v12 = (_QWORD *)((v11 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[295] >= (unsigned __int64)v12 + v10 && v11 )
    a2[294] = (char *)v12 + v10;
  else
    v12 = (_QWORD *)sub_962430((__int64)(a2 + 294), v10, v10, 3, a5, a6);
  *(_QWORD *)(a1 + 24) = v12;
  if ( a4 )
  {
    *v12 = *a3;
    if ( a4 != 1 )
    {
      v13 = 1;
      v14 = 1;
      do
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v14) = a3[v14];
        v14 = (unsigned int)++v13;
      }
      while ( v13 != a4 );
    }
  }
  v15 = sub_B40B00(a1);
  *(_BYTE *)(a1 + 1) = (v15 << 6) | *(_BYTE *)(a1 + 1) & 0x3F;
  result = *(_BYTE *)(a1 + 2) & 0xF8 | (v15 >> 2) & 7u;
  *(_BYTE *)(a1 + 2) = result;
  return result;
}

