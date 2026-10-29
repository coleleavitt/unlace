void __fastcall sub_11E95A0(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 v6; // rax
  char *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  void *v10; // rcx
  _QWORD *v11; // rsi
  __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  signed __int64 v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rsi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+8h] [rbp-70h]
  _BYTE v20[96]; // [rsp+18h] [rbp-60h] BYREF

  v5 = 1685217640;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D20);
  ptr = v20;
  if ( (unsigned int)sub_113F460(a1, a2) != 3 )
    v5 = 1952870259;
  v6 = si128.m128i_i64[0];
  if ( (unsigned __int64)(si128.m128i_i64[0] + 4) > si128.m128i_i64[1] )
  {
    sub_2236E10(&ptr, v20, si128.m128i_i64[0] + 4, 1);
    v6 = si128.m128i_i64[0];
  }
  *(_DWORD *)((char *)ptr + v6) = v5;
  v7 = "_pic";
  si128.m128i_i64[0] += 4;
  v8 = sub_10DCD30(a2, 0x647u);
  v9 = si128.m128i_i64[0];
  v10 = ptr;
  v11 = (char *)ptr + si128.m128i_i64[0];
  v12 = v8 == 0 ? 7LL : 4LL;
  if ( !v8 )
    v7 = (char *)"_static";
  if ( (unsigned __int64)(v12 + si128.m128i_i64[0]) > si128.m128i_i64[1] )
  {
    sub_2236E10(&ptr, v20, v12 + si128.m128i_i64[0], 1);
    v10 = ptr;
    v9 = si128.m128i_i64[0];
    v11 = (char *)ptr + si128.m128i_i64[0];
  }
  if ( (unsigned int)v12 >= 8 )
  {
    v13 = (unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    *v11 = *(_QWORD *)v7;
    *(_QWORD *)((char *)v11 + (unsigned int)v12 - 8) = *(_QWORD *)&v7[(unsigned int)v12 - 8];
    v14 = v7 - ((char *)v11 - v13);
    if ( (((_DWORD)v12 + (_DWORD)v11 - (_DWORD)v13) & 0xFFFFFFF8) >= 8 )
    {
      v15 = (v12 + (_DWORD)v11 - v13) & 0xFFFFFFF8;
      v16 = 0;
      do
      {
        v17 = v16;
        v16 += 8;
        *(_QWORD *)(v13 + v17) = *(_QWORD *)(v14 + v17);
      }
      while ( v16 < v15 );
    }
LABEL_13:
    v9 = si128.m128i_i64[0];
    v10 = ptr;
    goto LABEL_14;
  }
  if ( (v12 & 4) != 0 )
  {
    *(_DWORD *)v11 = *(_DWORD *)v7;
    *(_DWORD *)((char *)v11 + (unsigned int)v12 - 4) = *(_DWORD *)&v7[(unsigned int)v12 - 4];
    v9 = si128.m128i_i64[0];
    v10 = ptr;
  }
  else
  {
    if ( !(_DWORD)v12 )
      goto LABEL_14;
    *(_BYTE *)v11 = *v7;
    if ( (v12 & 2) == 0 )
      goto LABEL_13;
    *(_WORD *)((char *)v11 + (unsigned int)v12 - 2) = *(_WORD *)&v7[(unsigned int)v12 - 2];
    v9 = si128.m128i_i64[0];
    v10 = ptr;
  }
LABEL_14:
  si128.m128i_i64[0] = v12 + v9;
  sub_11E7860(a1, a2, a3, (__int64)v10, v12 + v9, 2, 0);
  if ( ptr != v20 )
    free(ptr);
}
