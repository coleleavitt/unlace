__int64 __fastcall sub_47E020(_QWORD *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r12
  unsigned __int8 v7; // r13
  __int64 v8; // r12
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // r13
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int8 *v17; // rdx
  __int64 v18; // r15
  _QWORD *v19; // rax
  unsigned __int8 *v20; // rax
  __int64 v21; // rdx
  unsigned __int8 v22; // cl
  __m128i *v23; // rdx
  __int64 v24; // rdx
  char v25; // r15
  __int64 v26; // rdx
  unsigned __int64 v27; // rdi
  unsigned __int8 v28; // cl
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  void *v31; // rdi
  char *v32; // rsi
  __int64 v33; // rcx
  unsigned __int64 v34; // [rsp+8h] [rbp-40h]
  _QWORD *v35; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v5 = a3;
  v6 = a2[a3];
  a2[a3] = -1;
  v7 = v6;
  v6 *= 16;
  QT::QIcon::~QIcon((QT::QIcon *)(v6 + *((_QWORD *)a2 + 16) + 8));
  *(_BYTE *)(*((_QWORD *)a2 + 16) + v6) = a2[137];
  v8 = v5;
  a2[137] = v7;
  v9 = (unsigned __int8 *)a1[4];
  v10 = a2;
  --a1[1];
LABEL_2:
  while ( ++v5 != 128 )
  {
LABEL_3:
    result = v4[v5];
    if ( result == 255 )
      return result;
LABEL_4:
    v12 = a1[2];
    v13 = a1[3] ^ *(int *)(*((_QWORD *)v4 + 16) + 16 * result);
    v14 = 0xD6E8FEB86659FD93LL
        * (((0xD6E8FEB86659FD93LL * (v13 ^ HIDWORD(v13))) >> 32) ^ (0xD6E8FEB86659FD93LL * (v13 ^ HIDWORD(v13))));
    v15 = (HIDWORD(v14) ^ v14) & (v12 - 1);
    v16 = v15 & 0x7F;
    v17 = &v9[144 * (v15 >> 7)];
    while ( v5 != v16 || v17 != v4 )
    {
      if ( v8 == v16 && v10 == v17 )
      {
        if ( v10 == v4 )
        {
          v10[v8] = v10[v5];
          v8 = v5;
          v10[v5] = -1;
          v9 = (unsigned __int8 *)a1[4];
          goto LABEL_2;
        }
        v18 = v10[137];
        if ( (_BYTE)v18 == v10[136] )
        {
          if ( (_BYTE)v18 )
          {
            if ( (_BYTE)v18 == 48 )
            {
              v25 = 80;
              v27 = 1280;
              v26 = 80;
            }
            else
            {
              v24 = (unsigned __int8)v18;
              v25 = v18 + 16;
              v26 = v24 + 16;
              v27 = 16 * v26;
            }
          }
          else
          {
            v25 = 48;
            v27 = 768;
            v26 = 48;
          }
          v34 = v26;
          v19 = (_QWORD *)operator new[](v27);
          v28 = v10[136];
          v29 = 0;
          if ( !v28
            || (v32 = *((char **)v10 + 16),
                v29 = v28,
                v33 = 16LL * v28,
                *v19 = *(_QWORD *)v32,
                v19[(unsigned __int64)v33 / 8 - 1] = *(_QWORD *)&v32[v33 - 8],
                qmemcpy(
                  (void *)((unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                  (const void *)(v32 - ((char *)v19 - ((unsigned __int64)(v19 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                  8LL * (((unsigned int)v19 - (((_DWORD)v19 + 8) & 0xFFFFFFF8) + (unsigned int)v33) >> 3)),
                v29 < v34) )
          {
            do
            {
              v30 = v29++;
              LOBYTE(v19[2 * v30]) = v29;
            }
            while ( v29 < v34 );
          }
          v31 = *((void **)v10 + 16);
          if ( v31 )
          {
            v35 = v19;
            operator delete[](v31);
            v19 = v35;
          }
          v10[136] = v25;
          v18 = v10[137];
          *((_QWORD *)v10 + 16) = v19;
        }
        else
        {
          v19 = *((_QWORD **)v10 + 16);
        }
        v10[v8] = v18;
        v8 = v5;
        v20 = (unsigned __int8 *)&v19[2 * v18];
        v10[137] = *v20;
        v21 = v4[v5];
        v10 = v4;
        v4[v5++] = -1;
        v22 = v21;
        v23 = (__m128i *)(*((_QWORD *)v4 + 16) + 16 * v21);
        *(__m128i *)v20 = _mm_loadu_si128(v23);
        v23->m128i_i8[0] = v4[137];
        v4[137] = v22;
        v9 = (unsigned __int8 *)a1[4];
        if ( v5 != 128 )
          goto LABEL_3;
        goto LABEL_17;
      }
      if ( ++v16 == 128 )
      {
        v17 += 144;
        v16 = 0;
        if ( 0x8E38E38E38E38E39LL * ((v17 - v9) >> 4) == v12 >> 7 )
          v17 = v9;
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
