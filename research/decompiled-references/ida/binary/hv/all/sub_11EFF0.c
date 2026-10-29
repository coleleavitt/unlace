__int64 __fastcall sub_11EFF0(unsigned __int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4, int *a5)
{
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  int v7; // r10d
  unsigned __int8 *v8; // r13
  unsigned int v9; // r9d
  unsigned int v10; // r11d
  unsigned int v11; // r11d
  _DWORD *v12; // r8
  int v13; // r10d
  bool v14; // r12
  unsigned __int64 v15; // r14
  __int64 *v16; // r9
  int v17; // ebx
  unsigned __int8 *v18; // r15
  int v19; // r11d
  unsigned __int8 *v20; // r15
  int v21; // r11d
  unsigned __int8 *v22; // r15
  int v23; // r11d
  unsigned __int8 *v24; // rax
  __int64 v25; // rcx
  __int64 *v26; // r15
  __int64 v27; // rdx
  int v28; // r11d
  int v29; // r10d
  unsigned __int8 *v30; // rax
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // [rsp+8h] [rbp-68h]
  int v35; // [rsp+10h] [rbp-60h]
  unsigned __int8 *v36; // [rsp+18h] [rbp-58h]
  unsigned __int8 *v37; // [rsp+20h] [rbp-50h]

  result = -72;
  v6 = a1 + a2;
  if ( a2 <= 0 )
    v6 = a1;
  v7 = *a5;
  if ( a4 )
  {
    v37 = a3;
    v8 = a3 + 8;
    v9 = a3[a4 - 1];
    v32 = *a3;
    v36 = a3;
    v34 = v32;
    switch ( a4 )
    {
      case 1uLL:
        goto LABEL_31;
      case 2uLL:
        goto LABEL_30;
      case 3uLL:
        goto LABEL_29;
      case 4uLL:
        goto LABEL_28;
      case 5uLL:
        goto LABEL_27;
      case 6uLL:
        goto LABEL_26;
      case 7uLL:
        v32 += (unsigned __int64)a3[6] << 48;
LABEL_26:
        v32 += (unsigned __int64)a3[5] << 40;
LABEL_27:
        v32 += (unsigned __int64)a3[4] << 32;
LABEL_28:
        v32 += (unsigned __int64)a3[3] << 24;
LABEL_29:
        v32 += (unsigned __int64)a3[2] << 16;
LABEL_30:
        v34 = ((unsigned __int64)a3[1] << 8) + v32;
LABEL_31:
        if ( !(_BYTE)v9 )
          return -20;
        _BitScanReverse(&v9, v9);
        v11 = (v9 ^ 0x1F) - 8 * a4 + 41;
        v35 = v11;
        goto LABEL_7;
      default:
        v36 = &a3[a4 - 8];
        v34 = *(_QWORD *)v36;
        result = -1;
        if ( !(_BYTE)v9 )
          return result;
        _BitScanReverse(&v10, (unsigned __int8)v9);
        v11 = (v10 ^ 0x1F) - 23;
        v35 = v11;
        if ( a4 > 0xFFFFFFFFFFFFFF88LL )
          return a4;
LABEL_7:
        v12 = a5 + 1;
        v13 = BYTE2(v7);
        if ( (__int64)(v6 - a1) > 3 )
        {
          v14 = 0;
          v15 = v6 - 3;
          v16 = (__int64 *)v36;
          v17 = -v13 & 0x3F;
          while ( 1 )
          {
            if ( v8 <= (unsigned __int8 *)v16 )
            {
              v35 = v11 & 7;
              v16 = (__int64 *)((char *)v16 - (v11 >> 3));
              v14 = a1 < v15;
              v34 = *v16;
            }
            else
            {
              if ( a3 == (unsigned __int8 *)v16 )
              {
                v16 = (__int64 *)v36;
                if ( v14 )
                  v16 = (__int64 *)a3;
                goto LABEL_17;
              }
              v25 = v11 >> 3;
              v26 = (__int64 *)((char *)v16 - v25);
              if ( a3 > (unsigned __int8 *)v16 - v25 )
              {
                v27 = (unsigned int)((_DWORD)v16 - (_DWORD)a3);
                v16 = (__int64 *)((char *)v16 - v27);
                v35 = v11 - 8 * v27;
                v34 = *v16;
LABEL_16:
                a3 = v37;
                goto LABEL_17;
              }
              v16 = (__int64 *)((char *)v16 - v25);
              v14 = a1 < v15;
              v35 = v11 - 8 * (v11 >> 3);
              v34 = *v26;
            }
            if ( !v14 )
              goto LABEL_16;
            a1 += 4LL;
            v18 = (unsigned __int8 *)v12 + 2 * ((unsigned __int64)(v34 << v35) >> v17);
            v19 = *v18 + v35;
            *(_BYTE *)(a1 - 4) = v18[1];
            v20 = (unsigned __int8 *)v12 + 2 * ((unsigned __int64)(v34 << v19) >> v17);
            v21 = *v20 + v19;
            *(_BYTE *)(a1 - 3) = v20[1];
            v22 = (unsigned __int8 *)v12 + 2 * ((unsigned __int64)(v34 << v21) >> v17);
            v23 = *v22 + v21;
            *(_BYTE *)(a1 - 2) = v22[1];
            v24 = (unsigned __int8 *)v12 + 2 * ((unsigned __int64)(v34 << v23) >> v17);
            v11 = *v24 + v23;
            *(_BYTE *)(a1 - 1) = v24[1];
            v35 = v11;
            if ( v11 > 0x40 )
            {
              v16 = qword_137408;
              goto LABEL_17;
            }
          }
        }
        if ( v36 >= v8 )
        {
          v35 = v11 & 7;
          v16 = (__int64 *)&v36[-(v11 >> 3)];
          v34 = *v16;
          goto LABEL_17;
        }
        if ( a3 == v36 )
        {
          v16 = (__int64 *)a3;
          if ( a1 >= v6 )
            goto LABEL_44;
          goto LABEL_18;
        }
        v33 = v11 >> 3;
        v16 = (__int64 *)&v36[-(v11 >> 3)];
        if ( a3 > (unsigned __int8 *)v16 )
        {
          v33 = (_DWORD)v36 - (_DWORD)a3;
          v16 = (__int64 *)&v36[-((_DWORD)v36 - (_DWORD)a3)];
        }
        v35 = v11 - 8 * v33;
        v34 = *v16;
LABEL_17:
        if ( v6 > a1 )
        {
LABEL_18:
          v28 = v35;
          v29 = -v13 & 0x3F;
          do
          {
            ++a1;
            v30 = (unsigned __int8 *)v12 + 2 * ((unsigned __int64)(v34 << v28) >> v29);
            v31 = v30[1];
            LODWORD(v30) = *v30;
            *(_BYTE *)(a1 - 1) = v31;
            v28 += (int)v30;
          }
          while ( a1 != v6 );
          v35 = v28;
        }
        if ( a3 != (unsigned __int8 *)v16 )
          return -20;
LABEL_44:
        result = a2;
        if ( v35 != 64 )
          return -20;
        break;
    }
  }
  return result;
}

