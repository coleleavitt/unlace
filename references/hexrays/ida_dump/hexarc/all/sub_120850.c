__int64 __fastcall sub_120850(unsigned __int64 a1, __int64 a2, signed int a3)
{
  __int64 v3; // rax
  unsigned __int8 *v4; // rbx
  __int64 result; // rax
  int *v7; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  char v14; // al
  __int16 v15; // cx
  __int16 v16; // dx
  __int16 v17; // cx
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v27; // r14
  unsigned __int8 v28; // [rsp+Fh] [rbp-49h]
  __int64 v29; // [rsp+10h] [rbp-48h] BYREF
  __int64 v30; // [rsp+18h] [rbp-40h]
  unsigned __int64 v31; // [rsp+28h] [rbp-30h]

  v31 = __readfsqword(0x28u);
  if ( !a3 )
    return 1;
  v3 = *(unsigned __int8 *)a1;
  v4 = (unsigned __int8 *)a1;
  if ( !(_BYTE)v3 )
    return 1;
  if ( (*(_BYTE *)(a1 + 1) & 4) != 0 )
    goto LABEL_9;
  if ( (_BYTE)v3 != 4 )
    goto LABEL_7;
  if ( sub_11BF40(*(unsigned int **)(a1 + 8)) )
  {
LABEL_9:
    a1 = (unsigned int)(*(_DWORD *)(a1 + 4) - a3);
    if ( sub_116410(a1) )
    {
      v3 = *v4;
LABEL_7:
      switch ( v3 )
      {
        case 1LL:
          if ( !(unsigned __int8)sub_327290(a2, v4 + 8, (unsigned int)a3) )
            return 0;
          goto LABEL_24;
        case 2LL:
          if ( a3 < 0 )
            return 0;
          v10 = *((_QWORD *)v4 + 1);
          v11 = 0;
          if ( (unsigned __int64)(8 * a3) <= 0x3F )
            v11 = *(_QWORD *)(v10 + 16) >> (8 * (unsigned __int8)a3);
          v12 = sub_323690(v11, (unsigned int)(*((_DWORD *)v4 + 1) - a3), 0);
          *(__m128i *)(v10 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
          goto LABEL_24;
        case 4LL:
          goto LABEL_13;
        case 5LL:
          v24 = *((_QWORD *)v4 + 1);
          v25 = *(_QWORD *)(v24 + 8) + a3;
          if ( v25 < 0 )
            return 0;
          *(_QWORD *)(v24 + 8) = v25;
          goto LABEL_24;
        case 6LL:
          if ( (unsigned __int8)segtype(*((_QWORD *)v4 + 1)) == 1 )
          {
            LOBYTE(v26) = getinf(9);
            if ( (_BYTE)v26 )
            {
              v26 = (unsigned __int8)v26;
            }
            else
            {
              v27 = *((_QWORD *)v4 + 1);
              v26 = get_item_end(v27) - v27;
            }
            if ( a3 >= v26 )
              return 0;
          }
          *((_QWORD *)v4 + 1) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL)
                              & (*((_QWORD *)v4 + 1) + a3);
LABEL_24:
          *((_DWORD *)v4 + 1) -= a3;
          *((_WORD *)v4 + 1) = 0;
          break;
        case 9LL:
          v21 = *((_QWORD **)v4 + 1);
          v22 = *((int *)v21 + 4);
          v23 = v21[1] + a3;
          if ( *(_QWORD *)(*v21 + 440LL) < v22 )
            sub_1152C0(a1);
          if ( v23 > *(int *)(*(_QWORD *)(*v21 + 432LL) + 104 * v22 + 88) )
            return 0;
          v21[1] = v23;
          goto LABEL_24;
        case 14LL:
          if ( *((_DWORD *)v4 + 1) / 2 > a3 )
            return 0;
          sub_11D380((__int64)&v29, (unsigned __int8 *)(*((_QWORD *)v4 + 1) + 16LL));
          v13 = HIDWORD(v29);
          if ( SHIDWORD(v29) >= a3 )
            goto LABEL_31;
          v14 = sub_121190(&v29, a2, (unsigned int)(*((_DWORD *)v4 + 1) - a3), 0);
          if ( v14 )
          {
            v13 = HIDWORD(v29);
LABEL_31:
            v15 = v29;
            LOWORD(v29) = *(_WORD *)v4;
            v16 = *((_WORD *)v4 + 1);
            *(_WORD *)v4 = v15;
            v17 = WORD1(v29);
            WORD1(v29) = v16;
            v18 = *((_DWORD *)v4 + 1);
            *((_WORD *)v4 + 1) = v17;
            HIDWORD(v29) = v18;
            v19 = v30;
            *((_DWORD *)v4 + 1) = v13;
            v20 = *((_QWORD *)v4 + 1);
            *((_QWORD *)v4 + 1) = v19;
            v30 = v20;
            v14 = 1;
          }
          v28 = v14;
          sub_1166E0((__int64)&v29);
          return v28;
        case 15LL:
          if ( !(unsigned __int8)sub_1202C0((__int64)v4, a3, *((_DWORD *)v4 + 1) - a3, 1) )
            return 0;
          *((_WORD *)v4 + 1) = 0;
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
  v7 = *((int **)v4 + 1);
  v8 = *v7;
  if ( (unsigned int)(*v7 - 8) > 1 )
    return 0;
  if ( v8 == 9 && v7[9] <= a3 )
  {
    v9 = 0;
LABEL_19:
    sub_11A350((__int64)v4, a2, v9, *((_DWORD *)v4 + 1) - a3, *((_QWORD *)v7 + 3), 0);
    return 1;
  }
  v29 = 0;
  result = sub_1196C0((char *)v7 + 32, &v29, v8 == 8);
  if ( (_BYTE)result )
  {
    v7 = *((int **)v4 + 1);
    v9 = (unsigned __int64)v29 >> (8 * (unsigned __int8)a3);
    if ( *v7 == 8 )
      v9 = v29 >> (8 * (unsigned __int8)a3);
    goto LABEL_19;
  }
  return result;
}
