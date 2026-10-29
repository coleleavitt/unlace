__int64 __fastcall sub_1F76680(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  int v6; // r15d
  unsigned __int8 *v7; // rbx
  __int64 v8; // r14
  __int64 result; // rax
  unsigned int v10; // r14d
  __int64 v11; // rax
  unsigned int v13; // r12d
  int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned __int8 *v17; // r13
  unsigned int v18; // r12d
  int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  int v22; // edx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  _QWORD *v25; // rdi
  int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // r12d
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  int v32; // edx
  _QWORD *v33; // rdi
  int v34; // edx
  unsigned int v35; // ecx
  _QWORD *v36; // [rsp+0h] [rbp-98h]
  int v37; // [rsp+Ch] [rbp-8Ch]
  __int64 v42; // [rsp+38h] [rbp-60h]
  unsigned int v43; // [rsp+40h] [rbp-58h]
  unsigned int v44; // [rsp+48h] [rbp-50h]
  unsigned int v45; // [rsp+4Ch] [rbp-4Ch]
  int v46; // [rsp+5Ch] [rbp-3Ch] BYREF
  _BYTE v47[56]; // [rsp+60h] [rbp-38h] BYREF

  v6 = a6;
  v7 = (unsigned __int8 *)a5;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 16LL * (a2 - 4));
  v36 = (_QWORD *)v8;
  v44 = a6;
  sub_A1FEC0(a1, a2, *(_DWORD *)(a1 + 56));
  result = *(unsigned int *)(v8 + 8);
  v37 = result;
  if ( (_DWORD)result )
  {
    v10 = 0;
    v11 = (unsigned int)(v6 - 1);
    v13 = 0;
    v42 = v11 + 1;
    do
    {
      while ( 1 )
      {
        result = (__int64)v36;
        v15 = *v36 + 16LL * v13;
        if ( (*(_BYTE *)(v15 + 8) & 1) != 0 )
        {
          ++v10;
          ++v13;
          goto LABEL_10;
        }
        v14 = (*(_BYTE *)(v15 + 8) >> 1) & 7;
        if ( v14 == 3 )
          break;
        if ( v14 == 5 )
        {
          ++v13;
          if ( v7 )
          {
            v7 = nullptr;
            result = sub_A20510(a1, a5, a6, 1);
          }
          else
          {
            result = sub_A263B0(a1, (const __m128i *)&a3[8 * v10], a4 - v10, 1);
          }
          goto LABEL_7;
        }
        v24 = v10;
        ++v13;
        ++v10;
        result = sub_A26320(a1, v15, *(_QWORD *)&a3[8 * v24]);
LABEL_10:
        if ( v37 == v13 )
          return result;
      }
      v16 = *v36 + 16LL * (v13 + 1);
      if ( v7 )
      {
        sub_1F6E7D0(a1, v44);
        result = v42;
        if ( v44 )
        {
          v43 = v13;
          v17 = &v7[v42];
          goto LABEL_22;
        }
LABEL_27:
        v13 += 2;
        v7 = nullptr;
        continue;
      }
      v17 = (unsigned __int8 *)(unsigned int)a4;
      result = sub_1F6E7D0(a1, (unsigned int)a4 - v10);
      if ( (_DWORD)a4 == v10 )
        goto LABEL_49;
      v43 = 0;
      v7 = a3;
      v45 = v13;
      do
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)&a3[8 * v10];
          result = (*(_BYTE *)(v16 + 8) >> 1) & 7;
          if ( (_BYTE)result == 2 )
          {
            if ( *(_QWORD *)v16 )
              result = sub_A1FFA0(a1, v23, *(_QWORD *)v16);
            goto LABEL_42;
          }
          if ( (_BYTE)result != 4 )
            break;
          result = (unsigned int)(char)v23;
          v28 = result - 97;
          if ( (unsigned __int8)(v23 - 97) > 0x19u )
          {
            v28 = result - 39;
            if ( (unsigned __int8)(v23 - 65) > 0x19u )
            {
              v28 = result + 4;
              if ( (unsigned __int8)(v23 - 48) > 9u )
                v28 = ((_BYTE)v23 != 46) + 62;
            }
          }
          v29 = *(_DWORD *)(a1 + 48);
          v30 = v28 << v29;
          v31 = v29 + 6;
          v32 = *(_DWORD *)(a1 + 52) | v30;
          *(_DWORD *)(a1 + 52) = v32;
          if ( v31 > 0x1F )
          {
            v33 = *(_QWORD **)(a1 + 24);
            v46 = v32;
            result = (__int64)sub_A1FE50(v33, &v46, v47);
            v34 = *(_DWORD *)(a1 + 48);
            v35 = 0;
            if ( v34 )
              v35 = v28 >> (32 - v34);
            *(_DWORD *)(a1 + 52) = v35;
            *(_DWORD *)(a1 + 48) = ((_BYTE)v34 + 6) & 0x1F;
          }
          else
          {
            *(_DWORD *)(a1 + 48) = v31;
          }
LABEL_42:
          if ( (_DWORD)a4 == ++v10 )
            goto LABEL_48;
        }
        if ( (_BYTE)result != 1 )
        {
          while ( !*(_QWORD *)v16 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                if ( v17 == ++v7 )
                  goto LABEL_26;
LABEL_22:
                LODWORD(v23) = *v7;
                result = (*(_BYTE *)(v16 + 8) >> 1) & 7;
                if ( (_BYTE)result != 2 )
                  break;
                if ( *(_QWORD *)v16 )
                  result = sub_A1FF30(a1, v23, *(_QWORD *)v16);
              }
              if ( (_BYTE)result != 4 )
                break;
              result = (unsigned int)(char)v23;
              v18 = result - 97;
              if ( (unsigned __int8)(v23 - 97) > 0x19u )
              {
                v18 = result - 39;
                if ( (unsigned __int8)(v23 - 65) > 0x19u )
                {
                  v18 = result + 4;
                  if ( (unsigned __int8)(v23 - 48) > 9u )
                    v18 = ((_BYTE)v23 != 46) + 62;
                }
              }
              v19 = *(_DWORD *)(a1 + 48);
              v20 = v18 << v19;
              v21 = v19 + 6;
              v22 = *(_DWORD *)(a1 + 52) | v20;
              *(_DWORD *)(a1 + 52) = v22;
              if ( v21 > 0x1F )
              {
                v25 = *(_QWORD **)(a1 + 24);
                v46 = v22;
                result = (__int64)sub_A1FE50(v25, &v46, v47);
                v26 = *(_DWORD *)(a1 + 48);
                v27 = 0;
                if ( v26 )
                  v27 = v18 >> (32 - v26);
                *(_DWORD *)(a1 + 52) = v27;
                *(_DWORD *)(a1 + 48) = ((_BYTE)v26 + 6) & 0x1F;
              }
              else
              {
                *(_DWORD *)(a1 + 48) = v21;
              }
            }
          }
          ++v7;
          result = sub_A1FEC0(a1, v23, *(_QWORD *)v16);
          if ( v17 == v7 )
          {
LABEL_26:
            v13 = v43;
            goto LABEL_27;
          }
          goto LABEL_22;
        }
        if ( !*(_QWORD *)v16 )
          goto LABEL_42;
        ++v10;
        result = sub_A1FEC0(a1, v23, *(_QWORD *)v16);
      }
      while ( (_DWORD)a4 != v10 );
LABEL_48:
      v7 = nullptr;
      v13 = v45;
LABEL_49:
      v13 += 2;
LABEL_7:
      ;
    }
    while ( v37 != v13 );
  }
  return result;
}
