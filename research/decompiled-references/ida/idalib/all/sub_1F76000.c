__int64 __fastcall sub_1F76000(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  int v7; // ebp
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // r12
  __int64 result; // rax
  unsigned int v11; // r15d
  unsigned int v12; // r14d
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
  int v34; // [rsp+8h] [rbp-80h]
  unsigned int v35; // [rsp+Ch] [rbp-7Ch]
  __int64 v38; // [rsp+28h] [rbp-60h]
  unsigned __int8 *v39; // [rsp+30h] [rbp-58h]
  unsigned int v40; // [rsp+38h] [rbp-50h]
  int v41; // [rsp+4Ch] [rbp-3Ch] BYREF
  _BYTE v42[56]; // [rsp+50h] [rbp-38h] BYREF

  v7 = a6;
  v8 = (unsigned __int8 *)a5;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 16LL * (a2 - 4));
  v35 = a6;
  sub_A1FEC0(a1, a2, *(_DWORD *)(a1 + 56));
  result = *(unsigned int *)(v9 + 8);
  v34 = result;
  if ( (_DWORD)result )
  {
    v11 = 0;
    v12 = 0;
    result = (unsigned int)(v7 - 1) + 1LL;
    v38 = result;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)v9 + 16LL * v12;
        if ( (*(_BYTE *)(v14 + 8) & 1) != 0 )
        {
          ++v11;
          ++v12;
          goto LABEL_10;
        }
        v13 = (*(_BYTE *)(v14 + 8) >> 1) & 7;
        if ( v13 == 3 )
          break;
        if ( v13 == 5 )
        {
          ++v12;
          if ( v8 )
          {
            v8 = nullptr;
            result = sub_A20510(a1, a5, a6, 1);
          }
          else
          {
            result = sub_A263B0(a1, (const __m128i *)&a3[8 * v11], 1LL - v11, 1);
          }
          goto LABEL_7;
        }
        v22 = v11;
        ++v12;
        ++v11;
        result = sub_A26320(a1, v14, *(_QWORD *)&a3[8 * v22]);
LABEL_10:
        if ( v34 == v12 )
          return result;
      }
      v15 = *(_QWORD *)v9 + 16LL * (v12 + 1);
      if ( v8 )
      {
        sub_1F6E7D0(a1, v35);
        result = v35;
        if ( v35 )
        {
          v39 = (unsigned __int8 *)v9;
          v9 = (unsigned __int64)&v8[v38];
          v40 = v12;
          goto LABEL_22;
        }
LABEL_27:
        v12 += 2;
        v8 = nullptr;
        continue;
      }
      result = sub_1F6E7D0(a1, 1 - v11);
      if ( v11 == 1 )
        goto LABEL_49;
      v40 = 0;
      v8 = a3;
      v39 = (unsigned __int8 *)v9;
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)&a3[8 * v11];
          result = (*(_BYTE *)(v15 + 8) >> 1) & 7;
          if ( (_BYTE)result == 2 )
          {
            if ( *(_QWORD *)v15 )
              result = sub_A1FFA0(a1, v21, *(_QWORD *)v15);
            goto LABEL_42;
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
            v41 = v29;
            result = (__int64)sub_A1FE50(v30, &v41, v42);
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
LABEL_42:
          if ( ++v11 == 1 )
            goto LABEL_48;
        }
        if ( (_BYTE)result != 1 )
        {
          while ( !*(_QWORD *)v15 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( ++v8 == (unsigned __int8 *)v9 )
                  goto LABEL_26;
LABEL_22:
                LODWORD(v21) = *v8;
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
                v41 = v20;
                result = (__int64)sub_A1FE50(v23, &v41, v42);
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
          ++v8;
          result = sub_A1FEC0(a1, v21, *(_QWORD *)v15);
          if ( v8 == (unsigned __int8 *)v9 )
          {
LABEL_26:
            v9 = (unsigned __int64)v39;
            v12 = v40;
            goto LABEL_27;
          }
          goto LABEL_22;
        }
        if ( !*(_QWORD *)v15 )
          goto LABEL_42;
        ++v11;
        result = sub_A1FEC0(a1, v21, *(_QWORD *)v15);
      }
      while ( v11 != 1 );
LABEL_48:
      v9 = (unsigned __int64)v39;
      v8 = nullptr;
LABEL_49:
      v12 += 2;
LABEL_7:
      ;
    }
    while ( v34 != v12 );
  }
  return result;
}
