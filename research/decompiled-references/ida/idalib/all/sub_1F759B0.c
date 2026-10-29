__int64 __fastcall sub_1F759B0(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // r14d
  unsigned __int64 v9; // r12
  __int64 result; // rax
  unsigned __int8 *v11; // rbx
  unsigned int v12; // r15d
  int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned int v16; // r14d
  int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  int v20; // edx
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rdi
  int v24; // edx
  unsigned int v25; // ecx
  int v26; // ecx
  int v27; // edx
  unsigned int v28; // ecx
  int v29; // edx
  _QWORD *v30; // rdi
  int v31; // edx
  int v32; // ecx
  int v33; // [rsp+0h] [rbp-88h]
  unsigned int v34; // [rsp+4h] [rbp-84h]
  unsigned __int8 *v38; // [rsp+30h] [rbp-58h]
  unsigned int v39; // [rsp+38h] [rbp-50h]
  int v40; // [rsp+4Ch] [rbp-3Ch] BYREF
  _BYTE v41[56]; // [rsp+50h] [rbp-38h] BYREF

  v7 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 16LL * (a2 - 4));
  v34 = a6;
  sub_A1FEC0(a1, a2, *(_DWORD *)(a1 + 56));
  result = *(unsigned int *)(v9 + 8);
  v33 = *(_DWORD *)(v9 + 8);
  if ( BYTE4(a7) )
  {
    v7 = 1;
    if ( (*(_BYTE *)(*(_QWORD *)v9 + 8LL) & 1) == 0 )
      result = sub_A23250(a1, *(_QWORD *)v9, a7);
  }
  v11 = (unsigned __int8 *)a5;
  v12 = 0;
  if ( v33 != v7 )
  {
    result = v34 - 1 + 1LL;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)v9 + 16LL * v7;
        if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
        {
          ++v12;
          ++v7;
          goto LABEL_13;
        }
        v13 = (*(_BYTE *)(v14 + 8) >> 1) & 7;
        if ( v13 == 3 )
          break;
        if ( v13 == 5 )
        {
          ++v7;
          if ( v11 )
          {
            v11 = nullptr;
            result = sub_A20510(a1, a5, a6, 1);
          }
          else
          {
            result = sub_A263B0(a1, (const __m128i *)&a3[8 * v12], 2LL - v12, 1);
          }
          goto LABEL_10;
        }
        v22 = v12;
        ++v7;
        ++v12;
        result = sub_A26320(a1, v14, *(_QWORD *)&a3[8 * v22]);
LABEL_13:
        if ( v33 == v7 )
          return result;
      }
      v15 = *(_QWORD *)v9 + 16LL * (v7 + 1);
      if ( v11 )
      {
        sub_1F6E7D0(a1, v34);
        result = v34;
        if ( v34 )
        {
          v38 = (unsigned __int8 *)v9;
          v9 = (unsigned __int64)&v11[v34];
          v39 = v7;
          goto LABEL_25;
        }
LABEL_30:
        v7 += 2;
        v11 = nullptr;
        continue;
      }
      result = sub_1F6E7D0(a1, 2 - v12);
      if ( v12 == 2 )
        goto LABEL_52;
      v39 = 0;
      v11 = a3;
      v38 = (unsigned __int8 *)v9;
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)&a3[8 * v12];
          result = (*(_BYTE *)(v15 + 8) >> 1) & 7;
          if ( (_BYTE)result == 2 )
          {
            if ( *(_QWORD *)v15 )
              result = sub_A1FFA0(a1, v21, *(_QWORD *)v15);
            goto LABEL_45;
          }
          if ( (_BYTE)result != 4 )
            break;
          result = (unsigned int)(char)v21;
          v9 = (unsigned int)(result - 97);
          if ( (unsigned __int8)(v21 - 97) > 0x19u )
          {
            v9 = (unsigned int)(result - 39);
            if ( (unsigned __int8)(v21 - 65) > 0x19u )
            {
              v9 = (unsigned int)(result + 4);
              if ( (unsigned __int8)(v21 - 48) > 9u )
                v9 = (unsigned int)((_BYTE)v21 != 46) + 62;
            }
          }
          v26 = *(_DWORD *)(a1 + 48);
          v27 = (_DWORD)v9 << v26;
          v28 = v26 + 6;
          v29 = *(_DWORD *)(a1 + 52) | v27;
          *(_DWORD *)(a1 + 52) = v29;
          if ( v28 > 0x1F )
          {
            v30 = *(_QWORD **)(a1 + 24);
            v40 = v29;
            result = (__int64)sub_A1FE50(v30, &v40, v41);
            v31 = *(_DWORD *)(a1 + 48);
            v32 = 0;
            if ( v31 )
            {
              v9 = (unsigned int)v9 >> (32 - v31);
              v32 = v9;
            }
            *(_DWORD *)(a1 + 52) = v32;
            *(_DWORD *)(a1 + 48) = ((_BYTE)v31 + 6) & 0x1F;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = v28;
          }
LABEL_45:
          if ( ++v12 == 2 )
            goto LABEL_51;
        }
        if ( (_BYTE)result != 1 )
        {
          while ( !*(_QWORD *)v15 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( ++v11 == (unsigned __int8 *)v9 )
                  goto LABEL_29;
LABEL_25:
                LODWORD(v21) = *v11;
                result = (*(_BYTE *)(v15 + 8) >> 1) & 7;
                if ( (_BYTE)result != 2 )
                  break;
                if ( *(_QWORD *)v15 )
                  result = sub_A1FF30(a1, v21, *(_QWORD *)v15);
              }
              if ( (_BYTE)result != 4 )
                break;
              result = (unsigned int)(char)v21;
              v16 = result - 97;
              if ( (unsigned __int8)(v21 - 97) > 0x19u )
              {
                v16 = result - 39;
                if ( (unsigned __int8)(v21 - 65) > 0x19u )
                {
                  v16 = result + 4;
                  if ( (unsigned __int8)(v21 - 48) > 9u )
                    v16 = ((_BYTE)v21 != 46) + 62;
                }
              }
              v17 = *(_DWORD *)(a1 + 48);
              v18 = v16 << v17;
              v19 = v17 + 6;
              v20 = *(_DWORD *)(a1 + 52) | v18;
              *(_DWORD *)(a1 + 52) = v20;
              if ( v19 > 0x1F )
              {
                v23 = *(_QWORD **)(a1 + 24);
                v40 = v20;
                result = (__int64)sub_A1FE50(v23, &v40, v41);
                v24 = *(_DWORD *)(a1 + 48);
                v25 = 0;
                if ( v24 )
                  v25 = v16 >> (32 - v24);
                *(_DWORD *)(a1 + 52) = v25;
                *(_DWORD *)(a1 + 48) = ((_BYTE)v24 + 6) & 0x1F;
              }
              else
              {
                *(_DWORD *)(a1 + 48) = v19;
              }
            }
          }
          ++v11;
          result = sub_A1FEC0(a1, v21, *(_QWORD *)v15);
          if ( v11 == (unsigned __int8 *)v9 )
          {
LABEL_29:
            v9 = (unsigned __int64)v38;
            v7 = v39;
            goto LABEL_30;
          }
          goto LABEL_25;
        }
        if ( !*(_QWORD *)v15 )
          goto LABEL_45;
        ++v12;
        result = sub_A1FEC0(a1, v21, *(_QWORD *)v15);
      }
      while ( v12 != 2 );
LABEL_51:
      v9 = (unsigned __int64)v38;
      v11 = nullptr;
LABEL_52:
      v7 += 2;
LABEL_10:
      ;
    }
    while ( v33 != v7 );
  }
  return result;
}
