__int64 __fastcall sub_9477A0(unsigned __int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int64 a4, int *a5)
{
  __int64 result; // rax
  unsigned __int64 v6; // rbp
  int v7; // r9d
  unsigned __int8 *v8; // r13
  unsigned int v9; // r10d
  unsigned int v10; // r10d
  _DWORD *v11; // r8
  int v12; // r9d
  bool v13; // r12
  unsigned __int64 v14; // r14
  unsigned __int8 *v15; // rcx
  int v16; // ebx
  unsigned __int8 *v17; // r15
  int v18; // r10d
  unsigned __int8 *v19; // r15
  int v20; // r10d
  unsigned __int8 *v21; // r15
  int v22; // r10d
  unsigned __int8 *v23; // rax
  __int64 v24; // r11
  unsigned __int8 *v25; // r15
  __int64 v26; // rdx
  int v27; // r10d
  int v28; // r9d
  unsigned __int8 *v29; // rax
  unsigned __int8 v30; // r11
  __int64 v31; // rax
  unsigned int v32; // r11d
  __int64 v33; // [rsp+8h] [rbp-68h]
  int v34; // [rsp+10h] [rbp-60h]
  unsigned __int8 *v35; // [rsp+18h] [rbp-58h]
  unsigned __int8 *v36; // [rsp+20h] [rbp-50h]

  result = -72;
  v6 = a1 + a2;
  if ( a2 <= 0 )
    v6 = a1;
  v7 = *a5;
  if ( a4 )
  {
    v36 = a3;
    v8 = a3 + 8;
    v9 = a3[a4 - 1];
    v31 = *a3;
    v35 = a3;
    v33 = v31;
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
        v31 += (unsigned __int64)a3[6] << 48;
LABEL_26:
        v31 += (unsigned __int64)a3[5] << 40;
LABEL_27:
        v31 += (unsigned __int64)a3[4] << 32;
LABEL_28:
        v31 += (unsigned __int64)a3[3] << 24;
LABEL_29:
        v31 += (unsigned __int64)a3[2] << 16;
LABEL_30:
        v33 = ((unsigned __int64)a3[1] << 8) + v31;
LABEL_31:
        if ( !(_BYTE)v9 )
          return -20;
        v10 = __lzcnt(v9) - 8 * a4 + 41;
        v34 = v10;
        goto LABEL_7;
      default:
        v35 = &a3[a4 - 8];
        v33 = *(_QWORD *)v35;
        result = -1;
        if ( !(_BYTE)v9 )
          return result;
        v10 = __lzcnt(v9) - 23;
        v34 = v10;
        if ( a4 > 0xFFFFFFFFFFFFFF88LL )
          return a4;
LABEL_7:
        v11 = a5 + 1;
        v12 = BYTE2(v7);
        if ( (__int64)(v6 - a1) > 3 )
        {
          v13 = 0;
          v14 = v6 - 3;
          v15 = v35;
          v16 = -v12 & 0x3F;
          while ( 1 )
          {
            if ( v8 <= v15 )
            {
              v34 = v10 & 7;
              v15 -= v10 >> 3;
              v13 = a1 < v14;
              v33 = *(_QWORD *)v15;
            }
            else
            {
              if ( a3 == v15 )
              {
                v15 = v35;
                if ( v13 )
                  v15 = a3;
                goto LABEL_17;
              }
              v24 = v10 >> 3;
              v25 = &v15[-v24];
              if ( a3 > &v15[-v24] )
              {
                v26 = (unsigned int)((_DWORD)v15 - (_DWORD)a3);
                v15 -= v26;
                v34 = v10 - 8 * v26;
                v33 = *(_QWORD *)v15;
LABEL_16:
                a3 = v36;
                goto LABEL_17;
              }
              v15 -= v24;
              v13 = a1 < v14;
              v34 = v10 - 8 * (v10 >> 3);
              v33 = *(_QWORD *)v25;
            }
            if ( !v13 )
              goto LABEL_16;
            a1 += 4LL;
            v17 = (unsigned __int8 *)v11 + 2 * ((unsigned __int64)(v33 << v34) >> v16);
            v18 = *v17 + v34;
            *(_BYTE *)(a1 - 4) = v17[1];
            v19 = (unsigned __int8 *)v11 + 2 * ((unsigned __int64)(v33 << v18) >> v16);
            v20 = *v19 + v18;
            *(_BYTE *)(a1 - 3) = v19[1];
            v21 = (unsigned __int8 *)v11 + 2 * ((unsigned __int64)(v33 << v20) >> v16);
            v22 = *v21 + v20;
            *(_BYTE *)(a1 - 2) = v21[1];
            v23 = (unsigned __int8 *)v11 + 2 * ((unsigned __int64)(v33 << v22) >> v16);
            v10 = *v23 + v22;
            *(_BYTE *)(a1 - 1) = v23[1];
            v34 = v10;
            if ( v10 > 0x40 )
            {
              v15 = (unsigned __int8 *)&unk_23B4648;
              goto LABEL_17;
            }
          }
        }
        if ( v35 >= v8 )
        {
          v34 = v10 & 7;
          v15 = &v35[-(v10 >> 3)];
          v33 = *(_QWORD *)v15;
          goto LABEL_17;
        }
        if ( a3 == v35 )
        {
          v15 = a3;
          if ( a1 >= v6 )
            goto LABEL_44;
          goto LABEL_18;
        }
        v32 = v10 >> 3;
        v15 = &v35[-(v10 >> 3)];
        if ( a3 > v15 )
        {
          v32 = (_DWORD)v35 - (_DWORD)a3;
          v15 = &v35[-((_DWORD)v35 - (_DWORD)a3)];
        }
        v34 = v10 - 8 * v32;
        v33 = *(_QWORD *)v15;
LABEL_17:
        if ( v6 > a1 )
        {
LABEL_18:
          v27 = v34;
          v28 = -v12 & 0x3F;
          do
          {
            v29 = (unsigned __int8 *)v11 + 2 * ((unsigned __int64)(v33 << v27) >> v28);
            ++a1;
            v30 = v29[1];
            LODWORD(v29) = *v29;
            *(_BYTE *)(a1 - 1) = v30;
            v27 += (int)v29;
          }
          while ( a1 != v6 );
          v34 = v27;
        }
        if ( a3 != v15 )
          return -20;
LABEL_44:
        result = a2;
        if ( v34 != 64 )
          return -20;
        break;
    }
  }
  return result;
}

