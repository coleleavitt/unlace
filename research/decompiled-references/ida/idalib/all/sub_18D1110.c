__int64 __fastcall sub_18D1110(_QWORD *a1, unsigned __int64 *a2, __int64 a3, double a4, double a5)
{
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx
  int v7; // r12d
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 *v34; // rsi
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-C0h] BYREF
  unsigned __int64 v49; // [rsp+18h] [rbp-B0h] BYREF
  _BYTE v50[168]; // [rsp+20h] [rbp-A8h] BYREF

  v5 = *a2;
  v48 = a3;
  v6 = (_QWORD *)(*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v49 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *v6 )
    return 5;
  v7 = sub_F58130(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL));
  switch ( v7 )
  {
    case 0:
    case 1:
    case 2:
      switch ( (unsigned int)sub_F58130(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        case 0u:
          LODWORD(v8) = 0;
          v9 = *(_QWORD *)&byte_8[sub_F68450(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v26, v27, v28)
                                & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v9 & 8) != 0 )
            v8 = *(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL));
          v13 = (unsigned int)v8 >> 9;
          v14 = *(_QWORD *)&byte_8[sub_F68450(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, v10, v11, v12)
                                 & 0xFFFFFFFFFFFFFFF0LL];
          LODWORD(v17) = 0;
          if ( (v14 & 8) != 0 )
            v17 = *(__int64 *)((char *)&qword_18 + (v14 & 0xFFFFFFFFFFFFFFF0LL));
          v18 = v17;
          result = 63;
          if ( v18 >> 9 == v13 )
          {
            if ( !(unsigned __int8)sub_ABFF60((_QWORD *)a1[31], v49, v48, v15, v16) )
              goto LABEL_27;
            return 5;
          }
          break;
        case 1u:
          result = 42;
          if ( v7 == 1 )
            goto LABEL_27;
          break;
        case 2u:
          if ( v7 == 2 )
          {
LABEL_27:
            result = 1;
          }
          else
          {
            result = 40;
            if ( v7 )
            {
              result = 41;
              if ( (*(_BYTE *)(a1[29] + 107LL) & 4) != 0 )
              {
                sub_18BBAA0((__int64)a1, a2);
                result = 41;
              }
            }
          }
          break;
        case 3u:
        case 5u:
          result = 22;
          break;
        case 4u:
          result = 23;
          break;
      }
      break;
    case 3:
    case 9:
      switch ( (unsigned int)sub_F58130(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        case 4u:
          return 35;
        case 5u:
          return 33;
        case 6u:
          return 31;
        case 7u:
        case 8u:
          v33 = sub_C00A40(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)a2, v23, v24, v25);
          sub_168B9F0((__int64)v50, a1 + 1, v33, 0x50u, 0);
          v34 = &v48;
          goto LABEL_19;
        case 9u:
          return 32;
        default:
          goto LABEL_11;
      }
    case 4:
    case 5:
      switch ( sub_F58130(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        case 0LL:
        case 1LL:
        case 2LL:
          return (unsigned int)sub_BFE6E0(*a2 & 0xFFFFFFFFFFFFFFFELL, a1[31], 1, a4) == 0 ? 21 : 13;
        case 4LL:
          return 28;
        case 5LL:
          goto LABEL_20;
        case 6LL:
          return 29;
        case 7LL:
          v47 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v47 + 16) != 14 )
            v47 = sub_F63050(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), a2, v29, v30);
          v42 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v47 + 32), 0x1Bu, 0, 0, a4, a5, 0);
          goto LABEL_54;
        case 8LL:
          v46 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v46 + 16) != 14 )
            v46 = sub_F63050(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), a2, v29, v30);
          v40 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v46 + 32), 0x1Du, 0, 0, a4, a5, 0);
          goto LABEL_50;
        case 9LL:
          return 34;
        default:
          goto LABEL_11;
      }
    case 6:
      switch ( (unsigned int)sub_F58130(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        case 4u:
          return 37;
        case 5u:
          goto LABEL_37;
        case 6u:
          return 39;
        case 7u:
          v41 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v41 + 16) != 14 )
            v41 = sub_F63050(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), a2, v31, v32);
          v42 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v41 + 32), 0x24u, 0, 0, a4, a5, 0);
LABEL_54:
          *a2 = v42;
          return 49;
        case 8u:
          v39 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v39 + 16) != 14 )
            v39 = sub_F63050(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL), a2, v31, v32);
          v40 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v39 + 32), 0x27u, 0, 0, a4, a5, 0);
LABEL_50:
          *a2 = v40;
          return 44;
        case 9u:
          return 30;
        default:
          goto LABEL_11;
      }
    case 7:
      switch ( (unsigned int)sub_F58130(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        case 4u:
          return 51;
        case 5u:
          v44 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v44 + 16) != 14 )
            v44 = sub_F63050(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL), a2, v20, v21);
          v45 = *(_QWORD *)(v44 + 32);
          result = 50;
          if ( (*(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)v45 | (unsigned __int8)*(_QWORD *)&byte_8[v45 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v48) & 7) )
          {
            *a2 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v45, 0x32u, 0, 0, a4, a5, 0);
            return 27;
          }
          return result;
        case 6u:
          v43 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v43 + 16) != 14 )
            v43 = sub_F63050(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL), a2, v20, v21);
          *a2 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v43 + 32), 0x32u, 0, 0, a4, a5, 0);
          return 29;
        case 7u:
          return 52;
        case 8u:
          return 53;
        case 9u:
          goto LABEL_33;
        default:
          goto LABEL_11;
      }
    case 8:
      switch ( (unsigned int)sub_F58130(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL)) )
      {
        case 4u:
          result = 46;
          break;
        case 5u:
          v36 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v36 + 16) != 14 )
            v36 = sub_F63050(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL), a2, v20, v21);
          *a2 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(v36 + 32), 0x2Du, 0, 0, a4, a5, 0);
LABEL_37:
          result = 36;
          break;
        case 6u:
          v37 = *(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v37 + 16) != 14 )
            v37 = sub_F63050(*(_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF0LL), a2, v20, v21);
          v38 = *(_QWORD *)(v37 + 32);
          result = 45;
          if ( (*(_QWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)v38 | (unsigned __int8)*(_QWORD *)&byte_8[v38 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v48 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v48) & 7) )
          {
            *a2 = sub_160A600((__int64)a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v38, 0x2Du, 0, 0, a4, a5, 0);
            result = 39;
          }
          break;
        case 7u:
          result = 48;
          break;
        case 8u:
          result = 47;
          break;
        case 9u:
LABEL_33:
          v35 = sub_C00A40(*a2 & 0xFFFFFFFFFFFFFFFELL, (__int64)a2, v20, v21, v22);
          sub_168B9F0((__int64)v50, a1 + 1, v35, 0x50u, 0);
          v34 = (__int64 *)&v49;
LABEL_19:
          sub_1605D30((__int64)v50, v34);
          sub_15F7200(v50);
LABEL_20:
          result = 27;
          break;
        default:
LABEL_11:
          BUG();
      }
      return result;
  }
  return result;
}
