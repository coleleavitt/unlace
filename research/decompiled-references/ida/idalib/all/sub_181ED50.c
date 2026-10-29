void __fastcall sub_181ED50(__int64 a1, __int64 a2, const __m128i *a3, double a4, double a5)
{
  signed __int64 v7; // r13
  unsigned int v8; // ebx
  __int128 v9; // rax
  __int64 v10; // rax
  size_t v11; // rax
  char *v12; // rsi
  void *v13; // r15
  __m128i *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  size_t v19; // rax
  __int64 *v20; // [rsp+10h] [rbp-118h]
  unsigned int v21; // [rsp+2Ch] [rbp-FCh] BYREF
  void *s1; // [rsp+30h] [rbp-F8h] BYREF
  size_t n; // [rsp+38h] [rbp-F0h]
  void *v24[2]; // [rsp+40h] [rbp-E8h] BYREF
  void *v25; // [rsp+50h] [rbp-D8h]
  _BYTE v26[200]; // [rsp+60h] [rbp-C8h] BYREF

  if ( (unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) )
  {
    LODWORD(v7) = a3[3].m128i_u16[4];
    v25 = nullptr;
    *(_OWORD *)v24 = 0;
    if ( (_DWORD)v7 )
    {
      v8 = 0;
      v20 = (__int64 *)(a1 + 8);
      while ( 1 )
      {
        v21 = 0;
        s1 = nullptr;
        n = 0;
        if ( !(unsigned __int8)sub_181EB00(a1, (__int64)a3, v8, &s1, &v21, (__m128i)0LL, a5) )
          goto LABEL_15;
        *(_QWORD *)&v9 = sub_1001430((__int64)s1, n, 1);
        if ( v9 != 0 || (v19 = j__strlen("coverage"), n == v19) && (!n || !memcmp(s1, "coverage", n)) )
        {
          if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 || sub_9B48E0(a2) )
            goto LABEL_11;
          if ( n == 7 )
          {
            if ( *(_DWORD *)s1 == 1919181921 && *((_WORD *)s1 + 2) == 29541 && *((_BYTE *)s1 + 6) == 115 )
              goto LABEL_11;
          }
          else if ( n == 9 )
          {
            if ( *(_QWORD *)s1 == 0x7365726464617768LL && *((_BYTE *)s1 + 8) == 115 )
              goto LABEL_11;
          }
          else if ( n == 6 && *(_DWORD *)s1 == 1953326445 && *((_WORD *)s1 + 2) == 26465 )
          {
            goto LABEL_11;
          }
          sub_168B9F0((__int64)v26, v20, *(_DWORD *)(a2 + 24), 0x19C1u, 0);
          v10 = sub_15DD120((__int64)v26, (__int64)a3);
          sub_1682BA0(v10, (__int64)&s1);
          sub_15F7200(v26);
        }
        else
        {
          sub_168B9F0((__int64)v26, v20, v21, 0x1D3Eu, 0);
          sub_1682BA0((__int64)v26, (__int64)&s1);
          sub_15F7200(v26);
        }
LABEL_11:
        if ( v24[1] == v25 )
        {
          ++v8;
          sub_1245C50((__int64)v24, (char *)v24[1], &s1);
          if ( v8 == (_DWORD)v7 )
          {
LABEL_13:
            v13 = v24[0];
            v7 = ((char *)v24[1] - (char *)v24[0]) >> 4;
            goto LABEL_14;
          }
        }
        else
        {
          v11 = n;
          v12 = (char *)v24[1] + 16;
          ++v8;
          *(_QWORD *)v24[1] = s1;
          *((_QWORD *)v12 - 1) = v11;
          v24[1] = v12;
          if ( (_DWORD)v7 == v8 )
            goto LABEL_13;
        }
      }
    }
    v13 = nullptr;
LABEL_14:
    v14 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
    sub_B38A40(v14, *(__int64 **)(a1 + 248), a3, (__int64)v13, v7);
    sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
LABEL_15:
    if ( v24[0] )
      operator delete(v24[0]);
  }
}
