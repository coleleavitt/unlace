__int64 __fastcall sub_13E58F0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int8 *v7; // rsi
  char *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  int v12; // eax
  unsigned __int8 *v13; // r15
  unsigned __int8 v14; // dl
  unsigned __int8 *v15; // rbx
  unsigned __int8 *v16; // rbx
  unsigned __int64 v17; // r13
  unsigned __int8 *v18; // r14
  unsigned __int8 v19; // al
  _BYTE *v20; // rcx
  bool v21; // dl
  unsigned __int8 *v22; // rdi
  __int16 v23; // r9
  __int64 v24; // rax
  int v25; // esi
  unsigned __int8 *v26; // rdi
  bool v27; // r11
  __int16 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int8 *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // edx
  __int64 v36; // rax
  unsigned __int8 *v37; // rdx
  unsigned __int8 *v38; // rbx
  __int64 v39; // rsi
  unsigned __int8 *v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rsi
  unsigned __int8 *v43; // r9
  unsigned __int8 *v44; // rsi
  __int64 v45; // r9
  __int64 v46; // rsi
  unsigned __int8 *v47; // rsi
  bool v48; // r9
  bool v49; // r11
  int v50; // r8d
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  int *v55; // [rsp+20h] [rbp-98h]
  unsigned __int64 v56; // [rsp+28h] [rbp-90h]
  _BYTE *v57; // [rsp+28h] [rbp-90h]
  char v58; // [rsp+36h] [rbp-82h] BYREF
  char v59; // [rsp+37h] [rbp-81h] BYREF
  unsigned __int8 *v60; // [rsp+38h] [rbp-80h] BYREF
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __m128i si128; // [rsp+48h] [rbp-70h]
  _BYTE s[96]; // [rsp+58h] [rbp-60h] BYREF

  v6 = *(unsigned int *)(a2 + 4);
  v7 = s;
  ptr = s;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  if ( v6 )
  {
    v8 = s;
    if ( v6 > 0x20 )
    {
      sub_2236E10(&ptr, s, v6, 1);
      v7 = (unsigned __int8 *)ptr;
      v8 = (char *)ptr + si128.m128i_i64[0];
    }
    if ( &v7[v6] != (unsigned __int8 *)v8 )
    {
      memset(v8, 0, &v7[v6] - (unsigned __int8 *)v8);
      v7 = (unsigned __int8 *)ptr;
    }
    si128.m128i_i64[0] = v6;
  }
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)a1;
  v11 = 0;
  v60 = v7;
  v58 = 0;
  v12 = sub_13D1B40(a2, (__int64 *)&v60, v10, v9, &v58);
  if ( v58 )
    goto LABEL_30;
  v13 = v60;
  v14 = *v60;
  v15 = v60;
  if ( *v60 != 117 )
    goto LABEL_9;
  if ( v60[1] == 56 )
  {
    v15 = v60 + 2;
    v60 += 2;
    v14 = v13[2];
LABEL_9:
    if ( v14 == 82 )
    {
      v37 = v15 + 2;
      v60 = v15 + 2;
      if ( v15[2] != 40 )
      {
        v38 = v15 + 3;
        do
        {
          v60 = v38;
          v37 = v38++;
        }
        while ( *(v38 - 1) != 40 );
      }
      v60 = v37 + 1;
      v11 = a3 + (_DWORD)v37 + 1 - (_DWORD)v13;
      goto LABEL_30;
    }
  }
  v16 = v15 + 1;
  v60 = v16;
  if ( !a3 )
    goto LABEL_29;
  v55 = (int *)a2;
  v17 = v56;
  v18 = &v13[v12];
  while ( 1 )
  {
    while ( *v16 != 92 )
    {
      ++v16;
      --a3;
      v60 = v16;
LABEL_13:
      if ( !a3 )
        goto LABEL_29;
    }
    v19 = v16[1];
    v20 = *(_BYTE **)(a1 + 8);
    v59 = 0;
    v21 = (v19 & 0xDF) == 85 || v19 == 78;
    if ( !v21 )
    {
      --a3;
      v17 = (unsigned int)*v55 | v17 & 0xFFFFFFFF00000000LL;
      sub_13E4610(
        (int)v13,
        (__int64 *)&v60,
        v18,
        &v59,
        *v55,
        *(_QWORD *)a1,
        8 * *(_DWORD *)(a1 + 40),
        *(_QWORD *)(a1 + 24),
        v20,
        0);
      v16 = v60;
      goto LABEL_13;
    }
    v22 = v16 + 2;
    v60 = v16 + 2;
    if ( v19 == 78 )
    {
      if ( v18 == v22 || v16[2] != 123 )
        goto LABEL_28;
      v32 = v16 + 3;
      v33 = v18 - (v16 + 3);
      v60 = v16 + 3;
      if ( v33 >> 2 > 0 )
      {
        v34 = v16[3];
        if ( (_BYTE)v34 == 125 || (byte_2411740[2 * v34] & 2) != 0 )
          goto LABEL_41;
        v39 = v16[4];
        v40 = v16 + 4;
        if ( (_BYTE)v39 != 125 && (byte_2411740[2 * v39] & 2) == 0 )
        {
          v41 = v16[5];
          v40 = v16 + 5;
          if ( (_BYTE)v41 != 125 )
          {
            while ( (byte_2411740[2 * v41] & 2) == 0 )
            {
              v42 = v40[1];
              v43 = v40 + 1;
              if ( (_BYTE)v42 == 125 || (byte_2411740[2 * v42] & 2) != 0 )
              {
LABEL_99:
                v40 = v43;
                goto LABEL_74;
              }
              v44 = v40 + 2;
              if ( v40 == &v16[4 * (v33 >> 2) + 1] )
              {
                v40 += 2;
                v33 = v18 - v44;
                goto LABEL_101;
              }
              v45 = v40[2];
              if ( (_BYTE)v45 == 125 || (byte_2411740[2 * v45] & 2) != 0 )
              {
                v40 += 2;
                goto LABEL_74;
              }
              v46 = v40[3];
              v43 = v40 + 3;
              if ( (_BYTE)v46 == 125 || (byte_2411740[2 * v46] & 2) != 0 )
                goto LABEL_99;
              v40 += 4;
              v41 = *v40;
              if ( (_BYTE)v41 == 125 )
                goto LABEL_74;
            }
          }
        }
        goto LABEL_74;
      }
      v40 = v16 + 3;
LABEL_101:
      if ( v33 != 2 )
      {
        if ( v33 != 3 )
        {
          if ( v33 != 1 )
            goto LABEL_111;
          goto LABEL_109;
        }
        v52 = *v40;
        if ( (_BYTE)v52 == 125 || (byte_2411740[2 * v52] & 2) != 0 )
          goto LABEL_74;
        ++v40;
      }
      v53 = *v40;
      if ( (_BYTE)v53 == 125 || (byte_2411740[2 * v53] & 2) != 0 )
        goto LABEL_74;
      ++v40;
LABEL_109:
      v54 = *v40;
      if ( (_BYTE)v54 != 125 && (byte_2411740[2 * v54] & 2) == 0 )
      {
LABEL_111:
        v22 = v18;
        goto LABEL_42;
      }
LABEL_74:
      if ( v18 != v40 && v32 != v40 )
      {
        v57 = v20;
        v60 = v40 + 1;
        v29 = sub_2255D80(v32, v40 - v32);
        v20 = v57;
        if ( !BYTE4(v29) )
          goto LABEL_27;
        goto LABEL_44;
      }
      v32 = v40;
LABEL_41:
      v22 = &v32[v18 != v32];
LABEL_42:
      v60 = v22;
      goto LABEL_28;
    }
    if ( v16[1] != 117 )
    {
      if ( v18 != v22 )
      {
        v23 = 8;
        v24 = v16[2];
        if ( (byte_2411740[2 * v24] & 0x18) != 0 )
          goto LABEL_20;
      }
      goto LABEL_28;
    }
    if ( v18 == v22 )
      goto LABEL_28;
    v36 = v16[2];
    if ( (_BYTE)v36 == 123 )
      break;
    if ( (byte_2411740[2 * v36] & 0x18) != 0 )
    {
      v23 = 4;
      v24 = v16[2];
LABEL_20:
      v25 = word_23E43C0[v24];
      if ( word_23E43C0[v24] != -1 )
      {
        v26 = v16 + 3;
        v27 = 0;
        v28 = 0;
        LODWORD(v29) = 0;
        while ( 1 )
        {
          if ( (v29 & 0xF0000000) != 0 )
          {
            v27 = v21;
          }
          else
          {
            ++v28;
            LODWORD(v29) = v25 | (16 * v29);
          }
          v60 = v26;
          if ( v18 == v26 )
            break;
          if ( v23 == v28 )
          {
            if ( v27 )
              goto LABEL_27;
            goto LABEL_44;
          }
          v30 = *v26++;
          v25 = word_23E43C0[v30];
          if ( (_WORD)v25 == 0xFFFF )
            goto LABEL_27;
        }
        if ( !v27 && v28 != 0 && v23 == v28 )
          goto LABEL_44;
      }
LABEL_27:
      v22 = v60;
    }
LABEL_28:
    v16 = v22;
  }
  v47 = v16 + 3;
  v60 = v16 + 3;
  if ( v18 == v16 + 3 )
    goto LABEL_27;
  v48 = 0;
  v49 = 0;
  LODWORD(v29) = 0;
  v50 = 0;
  while ( 1 )
  {
    v51 = *v47;
    if ( (_BYTE)v51 == 125 )
      break;
    if ( word_23E43C0[v51] == -1 )
    {
      ++v50;
      v49 = v21;
    }
    else if ( (v29 & 0xF0000000) != 0 )
    {
      v48 = v21;
    }
    else
    {
      ++v50;
      LODWORD(v29) = word_23E43C0[v51] | (16 * v29);
    }
    v60 = ++v47;
    if ( v18 == v47 )
      goto LABEL_27;
  }
  v60 = v47 + 1;
  if ( !(_WORD)v50 || v48 || v49 )
    goto LABEL_27;
LABEL_44:
  if ( (unsigned int)(v29 - 55296) <= 0x7FF
    || (unsigned int)v29 > 0x10FFFF
    || (unsigned int)v29 <= 0x9F && (_DWORD)v29 != 36 && (v29 & 0xFFFFFFDF) != 0x40 && (*(_WORD *)v20 & 0x1008) == 0 )
  {
    goto LABEL_27;
  }
  if ( (unsigned int)v29 <= 0x7F )
  {
    v35 = 1;
LABEL_52:
    a3 -= v35;
    v16 = v60;
    goto LABEL_13;
  }
  v35 = 2;
  if ( (unsigned int)v29 > 0x7FF )
    v35 = ((unsigned int)v29 > 0xFFFF) + 3;
  if ( a3 >= v35 )
    goto LABEL_52;
  v60 = v16;
LABEL_29:
  v11 = (_DWORD)v16 - (_DWORD)v13;
LABEL_30:
  if ( ptr != s )
    free(ptr);
  return v11;
}
