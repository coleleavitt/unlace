__int64 __fastcall sub_78A2C0(_QWORD *a1, _WORD *a2, __int64 a3, int a4, _UNKNOWN *__ptr32 *a5, __int64 a6)
{
  const char *v6; // r14
  __int64 v7; // rax
  _WORD *v8; // r13
  char *v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  char v12; // r15
  char v13; // dl
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // rbx
  char v24; // al
  unsigned __int64 v26; // r15
  size_t v27; // r10
  __int64 v28; // r9
  size_t v29; // r11
  _WORD *v30; // rsi
  __int64 v31; // rax
  char v32; // [rsp+0h] [rbp-88h]
  unsigned __int64 v33; // [rsp+8h] [rbp-80h]
  size_t v34; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+18h] [rbp-70h]
  size_t v38; // [rsp+18h] [rbp-70h]
  void *src; // [rsp+20h] [rbp-68h] BYREF
  __int128 v40; // [rsp+28h] [rbp-60h]
  unsigned __int16 v41; // [rsp+44h] [rbp-44h] BYREF
  char v42; // [rsp+46h] [rbp-42h] BYREF
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v6 = haystack;
  v7 = *((_QWORD *)a2 + 1);
  v43 = __readfsqword(0x28u);
  v8 = a2;
  if ( v7 )
    v6 = *(const char **)a2;
  v9 = (char *)v6;
  while ( 2 )
  {
    v10 = (v7 == 0) + v7 - 1 - (v9 - v6);
    v11 = v10;
    if ( !v10 )
      return 0;
    v12 = *v9;
    if ( *v9 != 92 )
    {
LABEL_9:
      a6 = 1;
      goto LABEL_10;
    }
    if ( v10 == 1 )
      return set_qerrno(2022, a2);
    v13 = v9[1];
    if ( v13 == 34 )
    {
      v12 = 34;
      a6 = 2;
LABEL_10:
      v14 = a1[1];
      if ( v14 )
      {
LABEL_11:
        v15 = v14 + 1;
        v16 = v14;
        a2 = (_WORD *)*a1;
        --v14;
        if ( a1[2] >= v15 )
        {
LABEL_12:
          a1[1] = v15;
          v9 += a6;
          *((_BYTE *)a2 + v14) = v12;
          *(_BYTE *)(*a1 + v16) = 0;
          goto LABEL_13;
        }
      }
      else
      {
LABEL_15:
        a2 = (_WORD *)*a1;
        v16 = 1;
        v15 = 2;
        if ( a1[2] >= 2u )
          goto LABEL_12;
      }
      v37 = v16;
      v35 = a6;
      v33 = v15;
      v17 = qvector_reserve(a1, a2, v15, 1);
      v16 = v37;
      a6 = v35;
      a5 = jpt_78A34F;
      *a1 = v17;
      v15 = v33;
      a2 = (_WORD *)v17;
      goto LABEL_12;
    }
    switch ( v13 )
    {
      case '\\':
        v12 = v9[1];
        a6 = 2;
        goto LABEL_10;
      case 'a':
        a6 = 2;
        v12 = 7;
        goto LABEL_10;
      case 'b':
        a6 = 2;
        v12 = 8;
        goto LABEL_10;
      case 'f':
        a6 = 2;
        v12 = 12;
        goto LABEL_10;
      case 'n':
        a6 = 2;
        v12 = 10;
        goto LABEL_10;
      case 'r':
        a6 = 2;
        v12 = 13;
        goto LABEL_10;
      case 't':
        a6 = 2;
        v12 = 9;
        goto LABEL_10;
      case 'u':
        if ( v10 <= 5 )
          return set_qerrno(2022, a2);
        v18 = qsscanf((int)v9 + 2, (int)"%04hx", (int)&v41, a4, (int)a5, a6, v32);
        v22 = v18;
        if ( v18 != 1 )
          return set_qerrno(2022, "%04hx");
        if ( (unsigned int)v41 - 55296 > 0x3FF )
        {
          v23 = 1;
        }
        else
        {
          if ( v11 <= 0xB || v9[6] != 92 || v9[7] != 117 )
            return 2022;
          if ( (unsigned int)qsscanf((int)v9 + 8, (int)"%04hx", (int)&v42, v19, v20, v21, v32) != 1 )
            return set_qerrno(2022, "%04hx");
          v22 = 2;
          v23 = 2;
        }
        a2 = &v41;
        src = nullptr;
        v40 = 0;
        v24 = utf16_utf8(&src, &v41, v22);
        a5 = jpt_78A34F;
        if ( v24 )
        {
          v26 = v40;
          if ( (_QWORD)v40 )
          {
            v27 = v40 - 1;
            if ( (_QWORD)v40 != 1 )
            {
              v28 = a1[1];
              v29 = v40 - 1;
              if ( v28 )
              {
                --v28;
                v29 = v27 + v28;
                v26 = v40 + v28;
              }
              v30 = (_WORD *)*a1;
              if ( a1[2] < v26 )
              {
                v38 = v29;
                v36 = v28;
                v34 = v40 - 1;
                v31 = qvector_reserve(a1, v30, v26, 1);
                *a1 = v31;
                v29 = v38;
                v30 = (_WORD *)v31;
                v28 = v36;
                v27 = v34;
              }
              a1[1] = v26;
              *((_BYTE *)v30 + v29) = 0;
              a2 = src;
              memcpy((void *)(v28 + *a1), src, v27);
              a5 = jpt_78A34F;
            }
          }
          v9 += 6 * v23;
          if ( src )
          {
            *(_QWORD *)&v40 = 0;
            qfree(src);
            a5 = jpt_78A34F;
          }
LABEL_13:
          v7 = *((_QWORD *)v8 + 1);
          continue;
        }
        if ( src )
        {
          *(_QWORD *)&v40 = 0;
          qfree(src);
        }
        return 2022;
      case 'v':
        v14 = a1[1];
        a6 = 2;
        v12 = 11;
        if ( !v14 )
          goto LABEL_15;
        goto LABEL_11;
      default:
        goto LABEL_9;
    }
  }
}

