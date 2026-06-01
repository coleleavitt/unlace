unsigned __int64 __fastcall sub_1E70DB0(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  unsigned __int64 v9; // r13
  unsigned int v10; // r12d
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 result; // rax
  int v16; // eax
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rax
  _QWORD *v24; // rdi
  bool v25; // cl
  unsigned __int64 v26; // rdx
  __int64 v27[6]; // [rsp+8h] [rbp-30h] BYREF

  v9 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v10 = a3;
  v12 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v12 + 17) & 4) != 0 )
    return sub_A78FC0(a1[31], a2, a2, a3);
  v13 = a2;
  v14 = (unsigned int)a3;
  switch ( (int)a3 )
  {
    case 0:
    case 2:
      v13 = sub_1E70C90(a1, a2, a3, a4);
      v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_7;
    case 1:
      v13 = sub_1E70340(a1, a2, a4, a4, a5);
      v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_7;
    case 3:
      v13 = sub_1E704F0(a1, a2, a4, a4, a5);
      v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_7;
    case 4:
    case 5:
      v13 = sub_1E6A840((__int64)a1, a2, a3, a4, a5, a6, a7, a8);
      goto LABEL_10;
    case 6:
    case 10:
      v20 = (_QWORD *)a1[31];
      if ( (_DWORD)a3 == 6 )
      {
        v13 = sub_A71450((__int64)v20, a2);
        v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v21 = sub_A72040(v20, a2);
        if ( v21 )
        {
          v13 = *(_QWORD *)(v21 + 32);
          v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
        }
      }
      goto LABEL_7;
    case 7:
    case 8:
    case 13:
    case 14:
      v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( (unsigned int)(v16 - 43) <= 1 )
      {
        if ( (_DWORD)a3 != 13 )
          goto LABEL_7;
        v17 = (_QWORD *)a1[31];
        v27[0] = 0;
        v18 = sub_A725A0(v17, a2, v27, a4, a5);
LABEL_18:
        v27[0] &= ~2uLL;
LABEL_19:
        v13 = sub_A70F20(a1[31], v18, v27[0]);
        v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_7;
      }
      if ( (unsigned int)(v16 - 25) > 1 )
      {
        v24 = (_QWORD *)a1[31];
        v27[0] = 0;
        v18 = sub_A725A0(v24, a2, v27, a4, a5);
        v25 = v10 == 14 || v10 == 8;
        if ( v10 - 7 > 1 )
        {
          if ( !v25 )
          {
LABEL_37:
            if ( v10 != 13 )
              goto LABEL_19;
            goto LABEL_18;
          }
          v26 = v27[0];
        }
        else
        {
          v26 = v27[0] & 0xFFFFFFFFFFFFFFFELL;
          v27[0] &= ~1uLL;
          if ( !v25 )
            goto LABEL_19;
        }
        v27[0] = v26 & 0xFFFFFFFFFFFFFFFBLL;
        goto LABEL_37;
      }
LABEL_7:
      if ( v9 )
LABEL_11:
        result = sub_A78FC0(a1[31], a2, v13, v10);
      else
LABEL_8:
        result = v13;
      break;
    case 9:
    case 12:
      if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43 <= 1
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
        && (v12 = sub_F63050(v12, (unsigned int)a3, a3, a4)) != 0 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v12 + 32);
          if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
            break;
          v19 = v13 & 0xFFFFFFFFFFFFFFF0LL;
          v12 = *(_QWORD *)v19;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v19 + 16LL) - 43 > 1 )
            v12 = sub_F63050(v12, v14, a3, a4);
        }
      }
      if ( v10 == 9 )
      {
        if ( (v13 & 1) != 0
          || (v9 = v13 & 0xFFFFFFFFFFFFFFF0LL,
              *(_DWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 1
            | *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 4
            | v13 & 4) )
        {
          v22 = (_QWORD *)a1[31];
          v27[0] = 0;
          v23 = sub_A725A0(v22, v13, v27, a4, a5);
          v27[0] &= 0xFFFFFFFFFFFFFFFALL;
          v13 = sub_A70F20(a1[31], v23, v27[0]);
          v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
        }
        goto LABEL_7;
      }
LABEL_10:
      if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_8;
      goto LABEL_11;
    case 11:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) == 0x22 )
      {
        v13 = sub_F68450(v12, (unsigned int)a3, a3, a4, a5);
        v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      }
      goto LABEL_7;
    case 15:
      v13 = (__int64)sub_1E667E0((__int64)a1, a2, (unsigned int)a4, a7, a8, a4, a5, a6);
      v9 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_7;
    default:
      v13 = 0;
      goto LABEL_8;
  }
  return result;
}
