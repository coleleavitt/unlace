/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7C2A
// Address: 0x00000000000E7C2A

//----- (00000000000E7C2A) ----------------------------------------------------
unsigned __int64 __fastcall sub_E7C2A(char *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // rcx
  char *v9; // rdx
  char v10; // si
  _BYTE *v11; // rdi
  int v12; // r8d
  char *v13; // rax
  char *v14; // rax
  unsigned __int64 v15; // rcx
  _BYTE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // rdi
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  _DWORD *v22; // rdi
  _DWORD *v23; // rsi
  _BYTE *v24; // rax
  _BYTE *v25; // rdi
  _BYTE *v26; // rax
  __int64 v27; // rdx
  _BYTE *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  unsigned __int64 *v32; // rsi
  char *v33; // rax
  _BYTE *v34; // rax
  char *v35; // rax
  unsigned __int64 v36; // rcx
  char *v37; // rax
  char *v38; // rax
  _BYTE *v39; // rax
  __int64 v40; // [rsp-Eh] [rbp-1D0h] BYREF
  char *v41; // [rsp+152h] [rbp-70h]
  int v42; // [rsp+15Eh] [rbp-64h]
  unsigned __int64 v43; // [rsp+162h] [rbp-60h]
  unsigned __int64 *v44; // [rsp+16Ah] [rbp-58h]
  unsigned __int64 v45; // [rsp+17Ah] [rbp-48h] BYREF
  unsigned __int64 v46; // [rsp+182h] [rbp-40h] BYREF
  _QWORD v47[7]; // [rsp+18Ah] [rbp-38h] BYREF

  result = (unsigned __int64)v47;
  v6 = 0;
  v43 = a2;
  *(_QWORD *)(a4 + 288) = 0;
  v44 = v47;
  while ( (unsigned __int64)a1 < v43 )
  {
    v8 = *(_QWORD *)(a4 + 328);
    result = a3[19] + (a3[24] >> 63);
    if ( v8 >= result )
      break;
    result = (unsigned __int8)*a1;
    v9 = a1 + 1;
    v10 = *a1 & 0xC0;
    switch ( v10 )
    {
      case 64:
        result = v8 + *(_QWORD *)(a4 + 352) * (result & 0x3F);
LABEL_13:
        *(_QWORD *)(a4 + 328) = result;
        break;
      case -128:
        v45 = result & 0x3F;
        v11 = a1 + 1;
LABEL_18:
        v14 = sub_E7845(v11, &v46);
        v15 = v46;
        v9 = v14;
LABEL_47:
        result = v45;
        v17 = *(_QWORD *)(a4 + 344) * v15;
        if ( v45 <= 0x11 )
        {
          result = a4 + 16 * v45;
          *(_DWORD *)(result + 8) = 1;
LABEL_62:
          *(_QWORD *)result = v17;
        }
        break;
      case -64:
        result &= 0x3Fu;
        v45 = (unsigned __int8)result;
        if ( (unsigned __int8)result <= 0x11u )
          *(_DWORD *)(a4 + 16LL * (unsigned __int8)result + 8) = 0;
        break;
      default:
        switch ( *a1 )
        {
          case 0:
          case 45:
            goto LABEL_64;
          case 1:
            v12 = *(unsigned __int8 *)(a4 + 368);
            v41 = a1 + 1;
            v42 = v12;
            v13 = (char *)sub_E7BE2(v12, (__int64)a3);
            v9 = sub_E78A7(v42, v13, v41, v44);
            result = v47[0];
            goto LABEL_13;
          case 2:
            v9 = a1 + 2;
            *(_QWORD *)(a4 + 328) = *(_QWORD *)(a4 + 352) * (unsigned __int8)a1[1] + v8;
            goto LABEL_64;
          case 3:
            v9 = a1 + 3;
            *(_QWORD *)(a4 + 328) = *(_QWORD *)(a4 + 352) * *(unsigned __int16 *)(a1 + 1) + v8;
            goto LABEL_64;
          case 4:
            v9 = a1 + 5;
            *(_QWORD *)(a4 + 328) = *(_QWORD *)(a4 + 352) * *(unsigned int *)(a1 + 1) + v8;
            goto LABEL_64;
          case 5:
            v11 = sub_E7845(a1 + 1, &v45);
            goto LABEL_18;
          case 6:
          case 8:
            v9 = sub_E7845(a1 + 1, &v45);
            result = v45;
            if ( v45 <= 0x11 )
            {
              result = 16 * v45;
              *(_DWORD *)(a4 + 16 * v45 + 8) = 0;
            }
            goto LABEL_64;
          case 7:
            v9 = sub_E7845(a1 + 1, &v45);
            result = v45;
            if ( v45 <= 0x11 )
            {
              result = 16 * v45;
              *(_DWORD *)(a4 + 16 * v45 + 8) = 6;
            }
            goto LABEL_64;
          case 9:
            v16 = sub_E7845(a1 + 1, &v45);
            v9 = sub_E7845(v16, v44);
            result = v45;
            if ( v45 > 0x11 )
              goto LABEL_64;
            v17 = v47[0];
            result = a4 + 16 * v45;
            *(_DWORD *)(result + 8) = 2;
            goto LABEL_62;
          case 10:
            if ( v6 )
            {
              result = v6;
              v6 = *(_QWORD *)(v6 + 288);
            }
            else
            {
              result = (unsigned __int64)&v40;
            }
            v18 = 82;
            v19 = (_DWORD *)result;
            v20 = (_DWORD *)a4;
            while ( v18 )
            {
              *v19++ = *v20++;
              --v18;
            }
            *(_QWORD *)(a4 + 288) = result;
            goto LABEL_64;
          case 11:
            result = *(_QWORD *)(a4 + 288);
            v21 = 82;
            v22 = (_DWORD *)a4;
            v23 = (_DWORD *)result;
            while ( v21 )
            {
              *v22++ = *v23++;
              --v21;
            }
            *(_QWORD *)(result + 288) = v6;
            v6 = result;
            goto LABEL_64;
          case 12:
            v24 = sub_E7845(a1 + 1, &v46);
            *(_QWORD *)(a4 + 304) = v46;
            v9 = sub_E7845(v24, &v46);
            result = v46;
            *(_QWORD *)(a4 + 296) = v46;
            goto LABEL_38;
          case 13:
            v9 = sub_E7845(a1 + 1, &v46);
            result = v46;
            *(_QWORD *)(a4 + 304) = v46;
LABEL_38:
            *(_DWORD *)(a4 + 320) = 1;
            goto LABEL_64;
          case 14:
            v9 = sub_E7845(a1 + 1, &v46);
            result = v46;
            goto LABEL_51;
          case 15:
            *(_QWORD *)(a4 + 312) = v9;
            *(_DWORD *)(a4 + 320) = 2;
            v25 = a1 + 1;
            goto LABEL_45;
          case 16:
            v26 = sub_E7845(a1 + 1, &v45);
            if ( v45 > 0x11 )
              goto LABEL_44;
            v27 = a4 + 16 * v45;
            *(_DWORD *)(v27 + 8) = 3;
            goto LABEL_43;
          case 17:
            v29 = sub_E7845(a1 + 1, &v45);
            v30 = sub_E786B(v29, v44);
            v15 = v47[0];
            v9 = v30;
            goto LABEL_47;
          case 18:
            v31 = sub_E7845(a1 + 1, &v46);
            v32 = v44;
            *(_QWORD *)(a4 + 304) = v46;
            v33 = sub_E786B(v31, v32);
            *(_DWORD *)(a4 + 320) = 1;
            v9 = v33;
            goto LABEL_50;
          case 19:
            v9 = sub_E786B(a1 + 1, v44);
LABEL_50:
            result = *(_QWORD *)(a4 + 344) * v47[0];
LABEL_51:
            *(_QWORD *)(a4 + 296) = result;
            goto LABEL_64;
          case 20:
            v34 = sub_E7845(a1 + 1, &v45);
            v35 = sub_E7845(v34, &v46);
            v36 = v46;
            v9 = v35;
            goto LABEL_55;
          case 21:
            v37 = sub_E7845(a1 + 1, &v45);
            v38 = sub_E786B(v37, v44);
            v36 = v47[0];
            v9 = v38;
LABEL_55:
            result = v45;
            v17 = *(_QWORD *)(a4 + 344) * v36;
            if ( v45 > 0x11 )
              goto LABEL_64;
            result = a4 + 16 * v45;
            *(_DWORD *)(result + 8) = 4;
            break;
          case 22:
            v26 = sub_E7845(a1 + 1, &v45);
            if ( v45 <= 0x11 )
            {
              v27 = a4 + 16 * v45;
              *(_DWORD *)(v27 + 8) = 5;
LABEL_43:
              *(_QWORD *)v27 = v26;
            }
LABEL_44:
            v25 = v26;
LABEL_45:
            v28 = sub_E7845(v25, &v46);
            result = (unsigned __int64)&v28[v46];
            v9 = (char *)result;
            goto LABEL_64;
          case 46:
            v9 = sub_E7845(a1 + 1, &v46);
            result = v46;
            a3[26] = v46;
            goto LABEL_64;
          case 47:
            v39 = sub_E7845(a1 + 1, &v45);
            v9 = sub_E7845(v39, &v46);
            result = v45;
            if ( v45 > 0x11 )
              goto LABEL_64;
            v17 = -(__int64)(v46 * *(_QWORD *)(a4 + 344));
            result = a4 + 16 * v45;
            *(_DWORD *)(result + 8) = 1;
            break;
          default:
            abort();
        }
        goto LABEL_62;
    }
LABEL_64:
    a1 = v9;
  }
  return result;
}
