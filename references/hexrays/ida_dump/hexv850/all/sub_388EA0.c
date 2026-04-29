unsigned __int64 __fastcall sub_388EA0(_QWORD *a1)
{
  __int64 v1; // rdx
  bool v2; // zf
  unsigned __int64 v4; // r13
  const char *v5; // rdi
  __int64 v6; // rax
  char v7; // dl
  int v8; // ebx
  __int64 i; // rax
  unsigned int utf8_char; // eax
  int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 j; // rax
  int v19; // edx
  __int64 v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  int v24; // r15d
  const char *v25; // [rsp+0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+8h] [rbp-58h] BYREF
  __int128 v27; // [rsp+10h] [rbp-50h]
  unsigned __int64 v28; // [rsp+20h] [rbp-40h]

  v1 = a1[4];
  v28 = __readfsqword(0x28u);
  v27 = 0;
  v2 = *(_QWORD *)(v1 + 136) == 0;
  v26 = 0;
  if ( !v2 )
  {
    v4 = 0;
    do
    {
      v5 = s1;
      v6 = *(_QWORD *)(v1 + 128) + 32 * v4;
      if ( *(_QWORD *)(v6 + 8) )
        v5 = *(const char **)v6;
      v25 = v5;
      v7 = *v5;
      v8 = 0;
LABEL_6:
      if ( v7 != 1 || v5[1] != 12 || v5[2] != 47 || v5[3] != 47 )
      {
        for ( i = tag_skipcodes(v5); ; i = tag_skipcodes(v25) )
        {
          v25 = (const char *)i;
          utf8_char = get_utf8_char(&v25);
          if ( utf8_char - 1 > 0xFFFFFFFD )
            break;
          v5 = v25;
          v7 = *v25;
          if ( *v25 != 2 )
            goto LABEL_27;
          if ( v25[1] == 9 )
          {
            if ( utf8_char == 93 )
              goto LABEL_20;
            if ( utf8_char > 0x5D )
            {
              if ( utf8_char == 123 )
                goto LABEL_36;
              if ( utf8_char == 125 )
              {
LABEL_20:
                v11 = 2;
LABEL_21:
                v12 = a1[18];
                v13 = a1[17];
                if ( a1[19] < (unsigned __int64)(v12 + 1) )
                {
                  v22 = qvector_reserve(a1 + 17, v13, v12 + 1, 16);
                  a1[17] = v22;
                  v13 = v22;
                  v12 = a1[18];
                }
                v14 = 16 * v12 + v13;
                *(_OWORD *)v14 = -1;
                ++a1[18];
                *(_DWORD *)v14 = v8;
                *(_DWORD *)(v14 + 4) = v4;
                v15 = v27;
                if ( v11 != 1 )
                {
                  if ( (_QWORD)v27 )
                  {
                    v16 = *(int *)(v26 + 4 * v27 - 4);
                    *(_QWORD *)&v27 = v27 - 1;
                    v17 = a1[17] + 16 * v16;
                    *(_DWORD *)(v17 + 8) = v8;
                    *(_DWORD *)(v17 + 12) = v4;
                    *(_QWORD *)(v14 + 8) = *(_QWORD *)v17;
                  }
                  v5 = v25;
                  v7 = *v25;
LABEL_27:
                  ++v8;
                  goto LABEL_6;
                }
                v23 = v26;
                v24 = *((_DWORD *)a1 + 36) - 1;
                if ( *((_QWORD *)&v27 + 1) < (unsigned __int64)(v27 + 1) )
                {
                  v26 = qvector_reserve(&v26, v26, v27 + 1, 4);
                  v15 = v27;
                  v23 = v26;
                }
                *(_DWORD *)(v23 + 4 * v15) = v24;
                v5 = v25;
                ++v8;
                *(_QWORD *)&v27 = v27 + 1;
                v7 = *v25;
                goto LABEL_6;
              }
            }
            else
            {
              if ( utf8_char == 41 )
                goto LABEL_20;
              if ( utf8_char == 91 || utf8_char == 40 )
              {
LABEL_36:
                v11 = 1;
                goto LABEL_21;
              }
            }
          }
          ++v8;
        }
      }
      v1 = a1[4];
      ++v4;
    }
    while ( v4 < *(_QWORD *)(v1 + 136) );
    for ( j = v27; j; --a1[18] )
    {
      v19 = *(_DWORD *)(v26 + 4 * j - 4);
      *(_QWORD *)&v27 = j - 1;
      v20 = a1[17] + 16LL * v19;
      memmove((void *)v20, (const void *)(v20 + 16), 16 * (a1[18] - v19) - 16LL);
      j = v27;
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26);
    }
  }
  return v28 - __readfsqword(0x28u);
}
