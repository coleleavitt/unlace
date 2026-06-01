__int64 __fastcall sub_126F10(unsigned __int64 a1, __int64 a2, signed int a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // rbx
  __int64 result; // rax
  int *v8; // rax
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  char v15; // al
  __int16 v16; // cx
  __int16 v17; // dx
  __int16 v18; // cx
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r14
  unsigned __int8 v29; // [rsp+Fh] [rbp-49h]
  __int64 v30; // [rsp+10h] [rbp-48h] BYREF
  __int64 v31; // [rsp+18h] [rbp-40h]
  unsigned __int64 v32; // [rsp+28h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  if ( !a3 )
    return 1;
  v4 = *(unsigned __int8 *)a1;
  v5 = (unsigned __int8 *)a1;
  if ( !(_BYTE)v4 )
    return 1;
  if ( (*(_BYTE *)(a1 + 1) & 4) != 0 )
    goto LABEL_9;
  if ( (_BYTE)v4 != 4 )
    goto LABEL_7;
  if ( sub_122600(*(unsigned int **)(a1 + 8)) )
  {
LABEL_9:
    a1 = (unsigned int)(*(_DWORD *)(a1 + 4) - a3);
    if ( sub_11CAD0(a1) )
    {
      v4 = *v5;
LABEL_7:
      switch ( v4 )
      {
        case 1LL:
          if ( !(unsigned __int8)sub_32E7D0(a2, v5 + 8, (unsigned int)a3) )
            return 0;
          goto LABEL_24;
        case 2LL:
          if ( a3 < 0 )
            return 0;
          v11 = *((_QWORD *)v5 + 1);
          v12 = 0;
          if ( (unsigned __int64)(8 * a3) <= 0x3F )
            v12 = *(_QWORD *)(v11 + 16) >> (8 * (unsigned __int8)a3);
          v13 = sub_32ABC0(v12, (unsigned int)(*((_DWORD *)v5 + 1) - a3), 0);
          *(__m128i *)(v11 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
          goto LABEL_24;
        case 4LL:
          goto LABEL_13;
        case 5LL:
          v25 = *((_QWORD *)v5 + 1);
          v26 = *(_QWORD *)(v25 + 8) + a3;
          if ( v26 < 0 )
            return 0;
          *(_QWORD *)(v25 + 8) = v26;
          goto LABEL_24;
        case 6LL:
          if ( (unsigned __int8)segtype() == 1 )
          {
            LOBYTE(v27) = getinf();
            if ( (_BYTE)v27 )
            {
              v27 = (unsigned __int8)v27;
            }
            else
            {
              v28 = *((_QWORD *)v5 + 1);
              v27 = get_item_end() - v28;
            }
            if ( a3 >= v27 )
              return 0;
          }
          *((_QWORD *)v5 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL)
                              & (*((_QWORD *)v5 + 1) + a3);
LABEL_24:
          *((_DWORD *)v5 + 1) -= a3;
          *((_WORD *)v5 + 1) = 0;
          break;
        case 9LL:
          v22 = *((_QWORD **)v5 + 1);
          v23 = *((int *)v22 + 4);
          v24 = v22[1] + a3;
          if ( *(_QWORD *)(*v22 + 440LL) < v23 )
            sub_11B980(a1);
          if ( v24 > *(int *)(*(_QWORD *)(*v22 + 432LL) + 104 * v23 + 88) )
            return 0;
          v22[1] = v24;
          goto LABEL_24;
        case 14LL:
          if ( *((_DWORD *)v5 + 1) / 2 > a3 )
            return 0;
          sub_123A40((__int64)&v30, (unsigned __int8 *)(*((_QWORD *)v5 + 1) + 16LL), *((unsigned int *)v5 + 1), a4);
          v14 = HIDWORD(v30);
          if ( SHIDWORD(v30) >= a3 )
            goto LABEL_31;
          v15 = sub_127850(&v30, a2, (unsigned int)(*((_DWORD *)v5 + 1) - a3), 0);
          if ( v15 )
          {
            v14 = HIDWORD(v30);
LABEL_31:
            v16 = v30;
            LOWORD(v30) = *(_WORD *)v5;
            v17 = *((_WORD *)v5 + 1);
            *(_WORD *)v5 = v16;
            v18 = WORD1(v30);
            WORD1(v30) = v17;
            v19 = *((_DWORD *)v5 + 1);
            *((_WORD *)v5 + 1) = v18;
            HIDWORD(v30) = v19;
            v20 = v31;
            *((_DWORD *)v5 + 1) = v14;
            v21 = *((_QWORD *)v5 + 1);
            *((_QWORD *)v5 + 1) = v20;
            v31 = v21;
            v15 = 1;
          }
          v29 = v15;
          sub_11CDA0((__int64)&v30);
          return v29;
        case 15LL:
          if ( !(unsigned __int8)sub_126980((__int64)v5, a3, *((_DWORD *)v5 + 1) - a3, 1) )
            return 0;
          *((_WORD *)v5 + 1) = 0;
          return 1;
        default:
          return 0;
      }
      return 1;
    }
    return 0;
  }
LABEL_13:
  if ( a3 < 0 )
    return 0;
  v8 = *((int **)v5 + 1);
  v9 = *v8;
  if ( (unsigned int)(*v8 - 8) > 1 )
    return 0;
  if ( v9 == 9 && v8[9] <= a3 )
  {
    v10 = 0;
LABEL_19:
    sub_120A10((__int64)v5, a2, v10, *((_DWORD *)v5 + 1) - a3, *((_QWORD *)v8 + 3), 0);
    return 1;
  }
  v30 = 0;
  result = sub_11FD80((char *)v8 + 32, &v30, v9 == 8);
  if ( (_BYTE)result )
  {
    v8 = *((int **)v5 + 1);
    v10 = (unsigned __int64)v30 >> (8 * (unsigned __int8)a3);
    if ( *v8 == 8 )
      v10 = v30 >> (8 * (unsigned __int8)a3);
    goto LABEL_19;
  }
  return result;
}
