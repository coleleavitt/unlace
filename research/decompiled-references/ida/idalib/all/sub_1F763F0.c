_DWORD *__fastcall sub_1F763F0(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  unsigned int v7; // r14d
  __int64 v9; // rbx
  int v10; // ebp
  _DWORD *result; // rax
  unsigned int v12; // r13d
  __int64 v13; // r15
  __int64 v14; // rsi
  int v15; // edx
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  char v18; // dl
  int v19; // r11d
  int v20; // ecx
  int v21; // edx
  unsigned int v22; // ecx
  int v23; // edx
  _QWORD *v24; // rdi
  int v25; // edx
  unsigned int v26; // ecx
  unsigned int v29; // [rsp+1Ch] [rbp-4Ch]
  int v30; // [rsp+2Ch] [rbp-3Ch] BYREF
  char v31[56]; // [rsp+30h] [rbp-38h] BYREF

  v7 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 16LL * (a2 - 4));
  sub_A1FEC0(a1, a2, *(_DWORD *)(a1 + 56));
  v10 = *(_DWORD *)(v9 + 8);
  if ( BYTE4(a7) )
  {
    v7 = 1;
    if ( (*(_BYTE *)(*(_QWORD *)v9 + 8LL) & 1) == 0 )
      sub_A23250(a1, *(_QWORD *)v9, a7);
  }
  result = &v30;
  v12 = 0;
LABEL_5:
  while ( v10 != v7 )
  {
    while ( 1 )
    {
      v13 = v7 + 1;
      v14 = *(_QWORD *)v9 + 16LL * v7;
      if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
        goto LABEL_12;
      v15 = (*(_BYTE *)(v14 + 8) >> 1) & 7;
      if ( v15 == 3 )
      {
        v16 = *(_QWORD *)v9 + 16 * v13;
        result = (_DWORD *)sub_1F6E7D0(a1, (unsigned int)a4 - v12);
        if ( (_DWORD)a4 == v12 )
        {
LABEL_22:
          v7 += 2;
          goto LABEL_5;
        }
        while ( 1 )
        {
          result = a3;
          v17 = *(_QWORD *)&a3[2 * v12];
          v18 = (*(_BYTE *)(v16 + 8) >> 1) & 7;
          if ( v18 == 2 )
          {
            if ( *(_QWORD *)v16 )
              result = (_DWORD *)sub_A1FFA0(a1, v17, *(_QWORD *)v16);
          }
          else if ( v18 == 4 )
          {
            if ( (unsigned __int8)(v17 - 97) <= 0x19u )
            {
              v19 = (char)v17 - 97;
            }
            else if ( (unsigned __int8)(v17 - 65) <= 0x19u )
            {
              v19 = (char)v17 - 39;
            }
            else
            {
              v19 = (char)v17 + 4;
              if ( (unsigned __int8)(v17 - 48) > 9u )
                v19 = ((_BYTE)v17 != 46) + 62;
            }
            v20 = *(_DWORD *)(a1 + 48);
            v21 = v19 << v20;
            v22 = v20 + 6;
            v23 = *(_DWORD *)(a1 + 52) | v21;
            *(_DWORD *)(a1 + 52) = v23;
            if ( v22 <= 0x1F )
            {
              *(_DWORD *)(a1 + 48) = v22;
              if ( (_DWORD)a4 == ++v12 )
                goto LABEL_22;
              continue;
            }
            v24 = *(_QWORD **)(a1 + 24);
            v30 = v23;
            v29 = v19;
            result = sub_A1FE50(v24, &v30, v31);
            v25 = *(_DWORD *)(a1 + 48);
            v26 = 0;
            if ( v25 )
              v26 = v29 >> (32 - v25);
            *(_DWORD *)(a1 + 52) = v26;
            *(_DWORD *)(a1 + 48) = ((_BYTE)v25 + 6) & 0x1F;
          }
          else if ( *(_QWORD *)v16 )
          {
            result = (_DWORD *)sub_A1FEC0(a1, v17, *(_QWORD *)v16);
          }
          if ( (_DWORD)a4 == ++v12 )
            goto LABEL_22;
        }
      }
      if ( v15 != 5 )
        break;
      ++v7;
      result = (_DWORD *)sub_A263B0(a1, (const __m128i *)&a3[2 * v12], a4 - v12, 1);
      if ( v10 == (_DWORD)v13 )
        return result;
    }
    result = (_DWORD *)sub_A26320(a1, v14, *(_QWORD *)&a3[2 * v12]);
LABEL_12:
    ++v12;
    ++v7;
  }
  return result;
}
