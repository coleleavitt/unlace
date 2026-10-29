__int64 __fastcall sub_733130(__int64 a1, const __m128i *a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int64 v5; // r14
  void *v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r12
  unsigned __int64 v10; // r8
  int i; // r12d
  int v12; // edx
  int v13; // eax
  __int64 v14; // r12
  unsigned __int64 v15; // r14
  int v16; // ebp
  __int64 v17; // r12
  int v18; // eax
  __m128i *v19; // rax
  unsigned __int64 v21; // r14
  void *v22; // r15
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r8
  __int64 v25; // rbp
  unsigned __int64 v26; // r14
  int v27; // ebp
  int v28; // edx
  int v29; // ebp
  unsigned __int64 v30; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 v31; // [rsp+0h] [rbp-1D8h]
  int v32; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 v33; // [rsp+8h] [rbp-1D0h]
  unsigned __int64 v34; // [rsp+8h] [rbp-1D0h]
  __int64 v35; // [rsp+10h] [rbp-1C8h] BYREF
  __int128 v36; // [rsp+18h] [rbp-1C0h] BYREF
  __int64 v37; // [rsp+28h] [rbp-1B0h] BYREF
  __int64 v38; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-1A0h] BYREF
  _OWORD v40[21]; // [rsp+40h] [rbp-198h] BYREF
  unsigned __int64 v41; // [rsp+198h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  *(_QWORD *)&v40[5] = 0;
  *((_QWORD *)&v40[4] + 1) = 0;
  if ( a2 )
  {
    v3 = a2[5].m128i_i64[0];
    v40[0] = _mm_load_si128(a2);
    *(_QWORD *)&v40[5] = v3;
    v40[1] = _mm_load_si128(a2 + 1);
    v40[2] = _mm_load_si128(a2 + 2);
    v40[3] = _mm_load_si128(a2 + 3);
    v40[4] = _mm_load_si128(a2 + 4);
  }
  else
  {
    v32 = a3;
    sub_730850((FILE *(__fastcall **)(__int64, const char *, char))v40);
    a3 = v32;
  }
  DWORD2(v40[5]) = a3;
  v4 = sub_7307D0((__int64)v40);
  *(_QWORD *)&v40[6] = v4;
  if ( !v4 )
    return v4;
  if ( !sub_7307F0((__int64)v40) )
  {
    v5 = sub_730810((__int64)v40);
    v30 = v5;
    if ( v5 <= 0xFFFE )
    {
      v6 = malloc(0x404u);
      if ( v6 )
      {
        v7 = v5;
        if ( v5 <= 4 )
        {
LABEL_62:
          free(v6);
          goto LABEL_63;
        }
LABEL_8:
        v8 = 4;
        while ( 2 )
        {
          v9 = 1028;
          v10 = v8 + 1024;
          if ( v8 + 1024 > v7 )
            v10 = v7;
          v8 = v10;
          if ( v10 <= 0x404 )
            v9 = v10;
          v33 = v30 - v10;
          if ( !sub_7307F0((__int64)v40)
            && v9 == (*((__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))&v40[0] + 1))(
                       *((_QWORD *)&v40[3] + 1),
                       v4,
                       v6,
                       v9) )
          {
            for ( i = v9 - 3; ; --i )
            {
              v12 = i - 1;
              if ( i <= 0 )
                goto LABEL_81;
              if ( *((_BYTE *)v6 + v12) == 80
                && *((_BYTE *)v6 + v12 + 1) == 75
                && *((_BYTE *)v6 + v12 + 2) == 6
                && *((_BYTE *)v6 + v12 + 3) == 7 )
              {
                break;
              }
            }
            if ( (unsigned int)v12 + v33 == -1 )
            {
LABEL_81:
              if ( v8 < v7 )
                continue;
              goto LABEL_62;
            }
            free(v6);
            if ( sub_7307F0((__int64)v40)
              || (unsigned int)sub_732680((__int64)v40, v4, &v38)
              || (unsigned int)sub_732680((__int64)v40, v4, &v38)
              || v38
              || (unsigned int)sub_732710((__int64)v40, v4, &v39)
              || (unsigned int)sub_732680((__int64)v40, v4, &v38)
              || v38 != 1
              || sub_7307F0((__int64)v40) )
            {
              break;
            }
            v13 = sub_732680((__int64)v40, v4, &v38);
            v14 = *(_QWORD *)&v40[6];
            if ( v13 )
              goto LABEL_64;
            if ( v38 != 101075792 )
              goto LABEL_64;
            v15 = v39;
            if ( v39 == -1 )
              goto LABEL_64;
            HIDWORD(v40[20]) = 1;
            v16 = -1;
            v17 = sub_7307F0((__int64)v40);
            if ( !(unsigned int)sub_732680((__int64)v40, *(__int64 *)&v40[6], &v35) )
              v16 = -(v17 != 0);
            if ( (unsigned int)sub_732710((__int64)v40, *(__int64 *)&v40[6], &v39) )
              v16 = -1;
            if ( (unsigned int)sub_7325F0((__int64)v40, *(__int64 *)&v40[6], &v38) )
              v16 = -1;
            if ( (unsigned int)sub_7325F0((__int64)v40, *(__int64 *)&v40[6], &v38) )
              v16 = -1;
            if ( (unsigned int)sub_732680((__int64)v40, *(__int64 *)&v40[6], &v36) )
              v16 = -1;
            if ( (unsigned int)sub_732680((__int64)v40, *(__int64 *)&v40[6], (_QWORD *)&v36 + 1) )
              v16 = -1;
            if ( (unsigned int)sub_732710((__int64)v40, *(__int64 *)&v40[6], (_QWORD *)&v40[6] + 1) )
              v16 = -1;
            if ( (unsigned int)sub_732710((__int64)v40, *(__int64 *)&v40[6], &v37) )
              v16 = -1;
            if ( *((_QWORD *)&v40[6] + 1) == v37 )
            {
              if ( v36 != 0 )
                v16 = -103;
            }
            else
            {
              v16 = -103;
            }
            if ( (unsigned int)sub_732710((__int64)v40, *(__int64 *)&v40[6], &v40[10]) )
              v16 = -1;
            v18 = sub_732710((__int64)v40, *(__int64 *)&v40[6], (_QWORD *)&v40[10] + 1);
            *(_QWORD *)&v40[7] = 0;
            if ( v18 )
              goto LABEL_108;
            goto LABEL_55;
          }
          goto LABEL_62;
        }
      }
    }
    else
    {
      v6 = malloc(0x404u);
      if ( v6 )
      {
        v7 = 0xFFFF;
        goto LABEL_8;
      }
    }
  }
LABEL_63:
  v14 = *(_QWORD *)&v40[6];
LABEL_64:
  if ( !sub_7307F0((__int64)v40) )
  {
    v21 = sub_730810((__int64)v40);
    v34 = v21;
    if ( v21 > 0xFFFE )
    {
      v22 = malloc(0x404u);
      if ( v22 )
      {
        v31 = 0xFFFF;
        goto LABEL_69;
      }
    }
    else
    {
      v22 = malloc(0x404u);
      if ( v22 )
      {
        if ( v21 <= 4 )
        {
LABEL_80:
          v15 = -1;
          free(v22);
          v16 = -1;
          goto LABEL_89;
        }
        v31 = v21;
LABEL_69:
        v23 = 4;
        while ( 1 )
        {
          v24 = v23 + 1024;
          v25 = 1028;
          if ( v23 + 1024 > v31 )
            v24 = v31;
          v26 = v34 - v24;
          v23 = v24;
          if ( v24 <= 0x404 )
            v25 = v24;
          if ( sub_7307F0((__int64)v40)
            || v25 != (*((__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))&v40[0] + 1))(
                        *((_QWORD *)&v40[3] + 1),
                        v14,
                        v22,
                        v25) )
          {
            goto LABEL_80;
          }
          v27 = v25 - 3;
          v28 = v27 - 1;
          if ( v27 > 0 )
          {
            while ( *((_BYTE *)v22 + v28) != 80
                 || *((_BYTE *)v22 + v28 + 1) != 75
                 || *((_BYTE *)v22 + v28 + 2) != 5
                 || *((_BYTE *)v22 + v28 + 3) != 6 )
            {
              v29 = v28--;
              if ( v29 <= 0 )
                goto LABEL_79;
            }
            v15 = (unsigned int)v28 + v26;
            if ( v15 != -1 )
            {
              v16 = 0;
              free(v22);
              goto LABEL_89;
            }
          }
LABEL_79:
          if ( v31 <= v23 )
            goto LABEL_80;
        }
      }
    }
  }
  v15 = -1;
  v16 = -1;
LABEL_89:
  HIDWORD(v40[20]) = 0;
  if ( sub_7307F0((__int64)v40) )
    v16 = -1;
  if ( (unsigned int)sub_732680((__int64)v40, *(__int64 *)&v40[6], &v35) )
    v16 = -1;
  if ( (unsigned int)sub_7325F0((__int64)v40, *(__int64 *)&v40[6], &v36) )
    v16 = -1;
  if ( (unsigned int)sub_7325F0((__int64)v40, *(__int64 *)&v40[6], (_QWORD *)&v36 + 1) )
    v16 = -1;
  if ( (unsigned int)sub_7325F0((__int64)v40, *(__int64 *)&v40[6], &v35) )
    v16 = -1;
  *((_QWORD *)&v40[6] + 1) = v35;
  if ( (unsigned int)sub_7325F0((__int64)v40, *(__int64 *)&v40[6], &v35) )
    v16 = -1;
  v37 = v35;
  if ( v35 == *((_QWORD *)&v40[6] + 1) )
  {
    if ( v36 != 0 )
      v16 = -103;
  }
  else
  {
    v16 = -103;
  }
  if ( (unsigned int)sub_732680((__int64)v40, *(__int64 *)&v40[6], &v35) )
    v16 = -1;
  *(_QWORD *)&v40[10] = v35;
  if ( (unsigned int)sub_732680((__int64)v40, *(__int64 *)&v40[6], &v35) )
    v16 = -1;
  *((_QWORD *)&v40[10] + 1) = v35;
  if ( (unsigned int)sub_7325F0((__int64)v40, *(__int64 *)&v40[6], &v40[7]) )
    goto LABEL_108;
LABEL_55:
  if ( *((_QWORD *)&v40[10] + 1) + *(_QWORD *)&v40[10] > v15 || v16 )
  {
LABEL_108:
    v4 = 0;
    (*((void (__fastcall **)(_QWORD, _QWORD))&v40[2] + 1))(*((_QWORD *)&v40[3] + 1), *(_QWORD *)&v40[6]);
    return v4;
  }
  *((_QWORD *)&v40[9] + 1) = v15;
  *(_QWORD *)&v40[20] = 0;
  *((_QWORD *)&v40[7] + 1) = v15 - (*((_QWORD *)&v40[10] + 1) + *(_QWORD *)&v40[10]);
  DWORD2(v40[20]) = 0;
  v19 = (__m128i *)malloc(0x150u);
  v4 = (__int64)v19;
  if ( v19 )
  {
    qmemcpy(v19, v40, 0x150u);
    sub_7330C0(v19);
  }
  return v4;
}

