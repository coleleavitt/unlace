__int64 __fastcall sub_7AA650(__int64 *a1, __int64 a2, __int64 a3, int a4, _UNKNOWN *__ptr32 *a5, __int64 a6)
{
  const char *v6; // r14
  __int64 v7; // rax
  char *v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  char v12; // r15
  char v13; // dl
  __int64 v14; // rbx
  unsigned __int64 v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // rdx
  __int64 v24; // rbx
  char v25; // al
  unsigned __int64 v27; // r15
  size_t v28; // r10
  __int64 v29; // r9
  size_t v30; // r11
  __int64 v31; // rsi
  __int64 v32; // rax
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
  v7 = *(_QWORD *)(a2 + 8);
  v43 = __readfsqword(0x28u);
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
      return set_qerrno(2022);
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
        v17 = *a1;
        --v14;
        if ( a1[2] >= v15 )
        {
LABEL_12:
          a1[1] = v15;
          v9 += a6;
          *(_BYTE *)(v17 + v14) = v12;
          *(_BYTE *)(*a1 + v16) = 0;
          goto LABEL_13;
        }
      }
      else
      {
LABEL_15:
        v17 = *a1;
        v16 = 1;
        v15 = 2;
        if ( (unsigned __int64)a1[2] >= 2 )
          goto LABEL_12;
      }
      v37 = v16;
      v35 = a6;
      v33 = v15;
      v18 = qvector_reserve(a1, v17, v15, 1);
      v16 = v37;
      a6 = v35;
      a5 = jpt_7AA6DF;
      *a1 = v18;
      v15 = v33;
      v17 = v18;
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
          return set_qerrno(2022);
        v19 = qsscanf((int)v9 + 2, (unsigned int)"%04hx", (unsigned int)&v41, a4, (_DWORD)a5, a6);
        v23 = v19;
        if ( v19 != 1 )
          return set_qerrno(2022);
        if ( (unsigned int)v41 - 55296 > 0x3FF )
        {
          v24 = 1;
        }
        else
        {
          if ( v11 <= 0xB || v9[6] != 92 || v9[7] != 117 )
            return 2022;
          if ( (unsigned int)qsscanf((int)v9 + 8, (unsigned int)"%04hx", (unsigned int)&v42, v20, v21, v22) != 1 )
            return set_qerrno(2022);
          v23 = 2;
          v24 = 2;
        }
        src = nullptr;
        v40 = 0;
        v25 = utf16_utf8(&src, &v41, v23);
        a5 = jpt_7AA6DF;
        if ( v25 )
        {
          v27 = v40;
          if ( (_QWORD)v40 )
          {
            v28 = v40 - 1;
            if ( (_QWORD)v40 != 1 )
            {
              v29 = a1[1];
              v30 = v40 - 1;
              if ( v29 )
              {
                --v29;
                v30 = v28 + v29;
                v27 = v40 + v29;
              }
              v31 = *a1;
              if ( a1[2] < v27 )
              {
                v38 = v30;
                v36 = v29;
                v34 = v40 - 1;
                v32 = qvector_reserve(a1, v31, v27, 1);
                *a1 = v32;
                v30 = v38;
                v31 = v32;
                v29 = v36;
                v28 = v34;
              }
              a1[1] = v27;
              *(_BYTE *)(v31 + v30) = 0;
              memcpy((void *)(v29 + *a1), src, v28);
              a5 = jpt_7AA6DF;
            }
          }
          v9 += 6 * v24;
          if ( src )
          {
            *(_QWORD *)&v40 = 0;
            qfree(src);
            a5 = jpt_7AA6DF;
          }
LABEL_13:
          v7 = *(_QWORD *)(a2 + 8);
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
