__int64 __fastcall sub_3EBB00(__int64 a1, __int64 a2, int a3, double a4)
{
  int v4; // eax
  int v7; // r15d
  __int64 v8; // rax
  char v9; // bl
  int dtype_size; // eax
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  unsigned int *v15; // rax
  unsigned int *v16; // r15
  unsigned int v17; // eax
  int tinfo_size; // eax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r15
  unsigned int v22; // ebx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int16 v26; // [rsp+Eh] [rbp-F2h]
  __int64 v27; // [rsp+10h] [rbp-F0h]
  const char *v28; // [rsp+18h] [rbp-E8h]
  __int64 v29; // [rsp+28h] [rbp-D8h]
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  int v32; // [rsp+48h] [rbp-B8h]
  _DWORD v33[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  __m128i si128; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  __int128 v38; // [rsp+98h] [rbp-68h]
  _QWORD v39[2]; // [rsp+A8h] [rbp-58h] BYREF
  int v40; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v41; // [rsp+C8h] [rbp-38h]

  v4 = *(unsigned __int16 *)(a1 + 48);
  v41 = __readfsqword(0x28u);
  switch ( v4 )
  {
    case '\'':
    case ';':
      v7 = 43;
      goto LABEL_3;
    case '(':
    case '<':
      v7 = 51;
      goto LABEL_3;
    case ')':
    case '=':
      v7 = 46;
      if ( (unsigned int)(v4 - 39) > 5 )
        goto LABEL_23;
      goto LABEL_4;
    case '*':
    case '>':
      v7 = 50;
      goto LABEL_3;
    case '+':
    case '?':
      v7 = 45;
      goto LABEL_3;
    case ',':
    case '@':
      v7 = 44;
LABEL_3:
      if ( (unsigned int)(v4 - 39) > 5 )
      {
LABEL_23:
        v9 = 0;
        v26 = 0;
        v28 = "__trap";
        goto LABEL_9;
      }
LABEL_4:
      if ( *(_BYTE *)(a1 + 145) != 8 )
      {
        if ( !under_debugger )
          sub_37E160(0xCC60u, a2, a4);
LABEL_38:
        BUG();
      }
      v8 = *(_QWORD *)(a1 + 152);
      v26 = v8;
      if ( (_WORD)v8 == 6 )
      {
        v9 = 1;
        v28 = "__integer_overflow";
LABEL_9:
        dtype_size = get_dtype_size(*(unsigned __int8 *)(a1 + 69));
        v11 = *(_QWORD *)(a1 + 832);
        v31 = 1;
        v34[0] = -4294967290LL;
        v12 = *(_DWORD *)(v11 + 84);
        HIDWORD(v31) = dtype_size;
        v33[0] = 1;
        v13 = 8 * v12;
        v33[1] = dtype_size;
        v14 = *(_QWORD *)(a1 + 40);
        v32 = a2;
        v33[2] = a3;
        if ( (unsigned __int64)v13 <= 0x3F )
          v14 &= ~(-1LL << v13);
        v34[1] = v14;
        v15 = sub_3EB6F0((_QWORD *)a1, v7, (unsigned __int8 *)&v31, (unsigned __int8 *)v33, (unsigned __int8 *)v34);
        v16 = v15;
        if ( v15 )
        {
          if ( *v15 == 55 )
          {
            sub_1193A0((__int64)v15);
            v22 = 0;
            goto LABEL_20;
          }
          v29 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
          v27 = sub_63DD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
          v17 = *(_DWORD *)(v27 + 72);
          *((_BYTE *)v16 + 64) = 7;
          v16[18] = v17;
          *(_QWORD *)(a1 + 16) = v29;
          if ( !v9 )
            goto LABEL_14;
        }
        else
        {
          v27 = *(_QWORD *)(a1 + 16);
          if ( !v9 )
          {
LABEL_14:
            v35[1] = 0;
            v35[0] = 0xFFFFFFFF00000000LL;
            si128 = _mm_load_si128((const __m128i *)&xmmword_407230);
            v37 = 0;
            v39[0] = 0;
            v39[1] = 0;
            v40 = 0;
            v30 = 35;
            v38 = 0;
            copy_tinfo_t(&si128.m128i_u64[1], &v30);
            clear_tinfo_t(&v30);
            tinfo_size = get_tinfo_size(0, si128.m128i_i64[1], 0);
            sub_11C810((__int64)v35, *(_QWORD *)(a1 + 832), v26, tinfo_size, -1, 0);
            v19 = (_QWORD *)v37;
            if ( *((_QWORD *)&v38 + 1) <= 8u )
            {
              v37 = qvector_reserve(&v37, v37, 9, 1);
              v19 = (_QWORD *)v37;
            }
            *(_QWORD *)&v38 = 9;
            *v19 = 0x65646F6370617274LL;
            *(_BYTE *)(v37 + 8) = 0;
            v20 = *(_QWORD *)(a1 + 8);
            v30 = 1;
            v21 = sub_3308F0(v20, *(_QWORD *)(a1 + 40), (__int64)v28, &v30, 1, (__int64)v35, 0);
            clear_tinfo_t(&v30);
            cleanup_argloc(v39);
            if ( v37 )
            {
              *(_QWORD *)&v38 = 0;
              qfree(v37);
            }
            clear_tinfo_t(&si128.m128i_u64[1]);
            sub_118BA0((__int64)v35);
            goto LABEL_19;
          }
        }
        v24 = *(_QWORD *)(a1 + 8);
        v25 = *(_QWORD *)(a1 + 40);
        v30 = 1;
        v21 = sub_3308F0(v24, v25, (__int64)v28, &v30, 0, 0, 0);
        clear_tinfo_t(&v30);
LABEL_19:
        *(_DWORD *)(*(_QWORD *)(v21 + 72) + 280LL) |= 0xCu;
        sub_B1090(*(_QWORD **)(a1 + 16), v21);
        v22 = 1;
        *(_QWORD *)(a1 + 16) = v27;
LABEL_20:
        sub_118BA0((__int64)v34);
        sub_118BA0((__int64)v33);
        sub_118BA0((__int64)&v31);
        return v22;
      }
      if ( (_WORD)v8 != 7 )
      {
        v9 = 0;
        v28 = "__trap";
        goto LABEL_9;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 8) == 0 )
      {
        v9 = 1;
        v28 = "__divide_by_zero";
        goto LABEL_9;
      }
      return 0;
    default:
      if ( !under_debugger )
        sub_37E160(0xCC5Fu, a2, a4);
      goto LABEL_38;
  }
}
