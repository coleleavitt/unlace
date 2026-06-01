__int64 __fastcall sub_47E3C0(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v4; // rbp
  __int64 v5; // rbx
  unsigned __int8 *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int8 *v9; // rsi
  __int64 result; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int8 *v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // r8
  unsigned __int8 *v19; // r8
  __int64 v20; // rax
  unsigned __int8 v21; // cl
  __m128i *v22; // rax
  __int64 v23; // r10
  char v24; // r15
  __int64 v25; // r10
  unsigned __int64 v26; // rdi
  _QWORD *v27; // rax
  unsigned __int8 v28; // cl
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  void *v31; // rdi
  char *v32; // rsi
  __int64 v33; // rcx
  unsigned __int64 v34; // [rsp+8h] [rbp-40h]
  _QWORD *v35; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v5 = a3;
  v6 = a2;
  v7 = a3;
  v8 = a2[a3];
  a2[a3] = -1;
  *(_BYTE *)(*((_QWORD *)a2 + 16) + 16 * v8) = a2[137];
  a2[137] = v8;
  v9 = (unsigned __int8 *)a1[4];
  --a1[1];
LABEL_2:
  while ( ++v5 != 128 )
  {
LABEL_3:
    result = v4[v5];
    if ( result == 255 )
      return result;
LABEL_4:
    v11 = a1[2];
    v12 = a1[3] ^ *(_QWORD *)(*((_QWORD *)v4 + 16) + 16 * result);
    v13 = 0xD6E8FEB86659FD93LL
        * (((0xD6E8FEB86659FD93LL * (v12 ^ HIDWORD(v12))) >> 32) ^ (0xD6E8FEB86659FD93LL * (v12 ^ HIDWORD(v12))));
    v14 = (HIDWORD(v13) ^ v13) & (v11 - 1);
    v15 = v14 & 0x7F;
    v16 = &v9[144 * (v14 >> 7)];
    while ( v5 != v15 || v16 != v4 )
    {
      if ( v7 == v15 && v6 == v16 )
      {
        if ( v6 == v4 )
        {
          v6[v7] = v6[v5];
          v7 = v5;
          v6[v5] = -1;
          v9 = (unsigned __int8 *)a1[4];
          goto LABEL_2;
        }
        v17 = v6[137];
        if ( (_BYTE)v17 == v6[136] )
        {
          if ( (_BYTE)v17 )
          {
            if ( (_BYTE)v17 == 48 )
            {
              v24 = 80;
              v26 = 1280;
              v25 = 80;
            }
            else
            {
              v23 = (unsigned __int8)v17;
              v24 = v17 + 16;
              v25 = v23 + 16;
              v26 = 16 * v25;
            }
          }
          else
          {
            v24 = 48;
            v26 = 768;
            v25 = 48;
          }
          v34 = v25;
          v27 = (_QWORD *)operator new[](v26);
          v28 = v6[136];
          v18 = v27;
          v29 = 0;
          if ( !v28
            || (v32 = *((char **)v6 + 16),
                v29 = v28,
                v33 = 16LL * v28,
                *v18 = *(_QWORD *)v32,
                v18[(unsigned __int64)v33 / 8 - 1] = *(_QWORD *)&v32[v33 - 8],
                qmemcpy(
                  (void *)((unsigned __int64)(v18 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                  (const void *)(v32 - ((char *)v18 - ((unsigned __int64)(v18 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                  8LL * (((unsigned int)v18 - (((_DWORD)v18 + 8) & 0xFFFFFFF8) + (unsigned int)v33) >> 3)),
                v29 < v34) )
          {
            do
            {
              v30 = v29++;
              LOBYTE(v18[2 * v30]) = v29;
            }
            while ( v29 < v34 );
          }
          v31 = *((void **)v6 + 16);
          if ( v31 )
          {
            v35 = v18;
            operator delete[](v31);
            v18 = v35;
          }
          v6[136] = v24;
          v17 = v6[137];
          *((_QWORD *)v6 + 16) = v18;
        }
        else
        {
          v18 = *((_QWORD **)v6 + 16);
        }
        v6[v7] = v17;
        v7 = v5;
        v19 = (unsigned __int8 *)&v18[2 * v17];
        v6[137] = *v19;
        v20 = v4[v5];
        v6 = v4;
        v4[v5++] = -1;
        v21 = v20;
        v22 = (__m128i *)(*((_QWORD *)v4 + 16) + 16 * v20);
        *(__m128i *)v19 = _mm_loadu_si128(v22);
        v22->m128i_i8[0] = v4[137];
        v4[137] = v21;
        v9 = (unsigned __int8 *)a1[4];
        if ( v5 != 128 )
          goto LABEL_3;
        goto LABEL_17;
      }
      if ( ++v15 == 128 )
      {
        v16 += 144;
        v15 = 0;
        if ( 0x8E38E38E38E38E39LL * ((v16 - v9) >> 4) == v11 >> 7 )
          v16 = v9;
      }
    }
  }
LABEL_17:
  v4 += 144;
  v5 = 0;
  if ( 0x8E38E38E38E38E39LL * ((v4 - v9) >> 4) == a1[2] >> 7 )
    v4 = v9;
  result = *v4;
  if ( result != 255 )
    goto LABEL_4;
  return result;
}
