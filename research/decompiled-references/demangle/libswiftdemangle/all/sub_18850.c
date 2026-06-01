__int64 __fastcall sub_18850(__int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  __int64 v5; // rdi
  char v6; // bl
  __int64 result; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  int v10; // eax
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  _QWORD *v15; // r15
  __int64 v16; // rdx
  __int16 v17; // si
  __int64 v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int16 v21; // si
  unsigned __int64 v22; // r12
  __int64 v23; // r12
  char v24; // al
  __int64 v25; // rbx
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r12
  __int64 v29; // rbx
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 v34; // r12
  __int64 v35; // r12
  __int64 v36; // r12
  __int64 v37; // r12
  __int64 v38; // r12
  __int64 v39; // r12
  __int64 v40; // r12
  __int64 v41; // rdi
  _QWORD *v42; // rax
  _QWORD *v43; // r12
  __int64 v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+18h] [rbp-60h] BYREF
  void *v46; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v47; // [rsp+28h] [rbp-50h]
  _BYTE *v48; // [rsp+30h] [rbp-48h]
  unsigned __int64 v49; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 64);
  v49 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 >= v1 )
    return 0;
  v3 = v2 + 1;
  *(_QWORD *)(a1 + 72) = v2 + 1;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = *(_BYTE *)(v5 + v2);
  switch ( v6 )
  {
    case 'C':
      v16 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
      v17 = 59;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'G':
      v16 = sub_135F0(a1);
      v17 = 85;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'I':
      v16 = sub_135F0(a1);
      v17 = 86;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'J':
      return sub_10AC0(a1);
    case 'L':
      v28 = sub_135F0(a1);
      v19 = sub_BBE0(a1, 221);
      v20 = v28;
      v21 = 127;
      return sub_CE00((_QWORD *)a1, v21, v19, v20);
    case 'O':
      if ( v1 <= v3 )
        return 0;
      *(_QWORD *)(a1 + 72) = v2 + 2;
      switch ( *(_BYTE *)(v5 + v2 + 1) )
      {
        case 'b':
          v40 = sub_BBE0(a1, 40);
          if ( v40 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v40;
            v21 = 270;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 270;
          v16 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, v17, v16);
        case 'c':
          v36 = sub_BBE0(a1, 40);
          if ( v36 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v36;
            v21 = 271;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 271;
          v16 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, v17, v16);
        case 'd':
          v38 = sub_BBE0(a1, 40);
          if ( v38 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v38;
            v21 = 272;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 272;
          v16 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, v17, v16);
        case 'e':
          v34 = sub_BBE0(a1, 40);
          if ( v34 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v34;
            v21 = 267;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 267;
          v16 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, v17, v16);
        case 'f':
          v39 = sub_BBE0(a1, 40);
          if ( v39 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v39;
            v21 = 273;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 273;
          v16 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, v17, v16);
        case 'h':
          v35 = sub_BBE0(a1, 40);
          if ( v35 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v35;
            v21 = 274;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 274;
          v16 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, v17, v16);
        case 'r':
          v37 = sub_BBE0(a1, 40);
          if ( v37 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v37;
            v21 = 268;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 268;
          v16 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, v17, v16);
        case 's':
          v33 = sub_BBE0(a1, 40);
          if ( v33 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v33;
            v21 = 269;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 269;
          v16 = sub_BBE0(a1, 221);
          return sub_CD20((_QWORD *)a1, v17, v16);
        case 'y':
          v32 = sub_BBE0(a1, 40);
          if ( v32 )
          {
            v19 = sub_BBE0(a1, 221);
            v20 = v32;
            v21 = 266;
            return sub_CE00((_QWORD *)a1, v21, v19, v20);
          }
          v17 = 266;
          v16 = sub_BBE0(a1, 221);
          break;
        default:
          return 0;
      }
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'P':
      v16 = sub_135F0(a1);
      v17 = 186;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'S':
      v16 = sub_13360(a1);
      v17 = 184;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'T':
      v29 = sub_BBE0(a1, 221);
      v30 = sub_10000(a1);
      v31 = sub_135F0(a1);
      return sub_CEE0((_QWORD *)a1, 9, v31, v30, v29);
    case 'V':
      v16 = sub_BBE0(a1, 221);
      v17 = 242;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'Z':
    case 'z':
      v8 = 0x800000080000087LL;
      v46 = nullptr;
      v47 = nullptr;
      v9 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v9 + 16) = 305;
      *(_BYTE *)(v9 + 18) = 0;
      v48 = nullptr;
      while ( 2 )
      {
        if ( sub_BBE0(a1, 263) )
        {
          v10 = *(_DWORD *)(a1 + 96);
          v11 = v48;
          if ( v10 )
          {
            v12 = (unsigned int)(v10 - 1);
            v13 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v12);
            v14 = *(unsigned __int16 *)(v13 + 16);
            if ( (unsigned __int16)v14 <= 0x80u )
            {
              if ( (unsigned __int16)v14 <= 0x61u )
                goto LABEL_11;
              v41 = 1074790401;
              if ( !_bittest64(&v41, (unsigned int)(v14 - 98)) )
                goto LABEL_11;
            }
            else
            {
              LOWORD(v14) = v14 - 163;
              if ( (unsigned __int16)v14 > 0x3Bu || !_bittest64(&v8, v14) )
                goto LABEL_11;
            }
            *(_DWORD *)(a1 + 96) = v12;
            v45 = v13;
            if ( v13 )
            {
              v42 = v47;
              if ( v11 == (_BYTE *)v47 )
              {
                sub_18710((__int64)&v46, v11, &v45);
              }
              else
              {
                *v47 = v13;
                v47 = v42 + 1;
              }
              continue;
            }
          }
LABEL_11:
          v15 = v46;
          result = 0;
          goto LABEL_12;
        }
        break;
      }
      v43 = v47;
      v15 = v46;
      if ( v47 != v46 )
      {
        do
          sub_C080(v9, *--v43, (_QWORD *)a1);
        while ( v43 != v15 );
      }
      result = sub_132E0(a1);
      if ( result )
        result = sub_CE00((_QWORD *)a1, (v6 != 90) + 303, result, v9);
LABEL_12:
      if ( v15 )
      {
        v44 = result;
        operator delete(v15, v48 - (_BYTE *)v15);
        result = v44;
      }
      break;
    case 'a':
      v16 = sub_135F0(a1);
      v17 = 187;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'b':
      v18 = sub_BBE0(a1, 221);
      v19 = sub_135F0(a1);
      v20 = v18;
      v21 = 10;
      return sub_CE00((_QWORD *)a1, v21, v19, v20);
    case 'l':
      v22 = sub_135F0(a1);
      v19 = sub_BBE0(a1, 221);
      v20 = v22;
      v21 = 126;
      return sub_CE00((_QWORD *)a1, v21, v19, v20);
    case 'p':
      v16 = sub_135F0(a1);
      v17 = 188;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 'r':
      v16 = sub_135F0(a1);
      v17 = 87;
      return sub_CD20((_QWORD *)a1, v17, v16);
    case 't':
      v23 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_B4C0);
      v19 = sub_135F0(a1);
      v20 = v23;
      v21 = 6;
      return sub_CE00((_QWORD *)a1, v21, v19, v20);
    case 'v':
      if ( v1 <= v3 )
        return 0;
      *(_QWORD *)(a1 + 72) = v2 + 2;
      v24 = *(_BYTE *)(v5 + v2 + 1);
      if ( v24 == 100 )
      {
        v25 = 0;
      }
      else
      {
        v25 = 1;
        if ( v24 != 105 )
          return 0;
      }
      v26 = sub_181E0(a1, (unsigned __int8 (__fastcall *)(_QWORD))sub_BD40);
      v27 = sub_12C70((_QWORD *)a1, 1);
      *(_WORD *)(v27 + 16) = 49;
      v19 = v27;
      *(_BYTE *)(v27 + 18) = 2;
      *(_QWORD *)v27 = v25;
      v20 = v26;
      v21 = 70;
      return sub_CE00((_QWORD *)a1, v21, v19, v20);
    default:
      return 0;
  }
  return result;
}
