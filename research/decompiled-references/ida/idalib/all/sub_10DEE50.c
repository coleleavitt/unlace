void __fastcall sub_10DEE50(__int64 a1, char **a2)
{
  unsigned int v2; // eax
  char *v3; // r14
  int v4; // r8d
  __int64 v5; // rdx
  unsigned int v6; // r15d
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rbp
  char **v10; // rax
  __int64 v11; // rax
  char v12; // cl
  char v13; // al
  char *v14; // rbx
  int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // r13
  __int64 v20; // r12
  char *v21; // rax
  __int64 v22; // rax
  void *v23; // rbx
  char *v24; // [rsp+0h] [rbp-58h]
  __m128i v25; // [rsp+0h] [rbp-58h]
  int v26; // [rsp+18h] [rbp-40h]

  v2 = sub_21B6910(a1, a2[3], a2[4]);
  v3 = *a2;
  v4 = 0;
  v5 = v2;
  v6 = v2;
  v24 = a2[1];
  v7 = *(_QWORD *)(a1 + 176);
  v8 = *(_QWORD *)(v7 + 8 * v5);
  if ( v8 )
    v4 = j__strlen(*(const char **)(v7 + 8 * v5));
  v26 = v4;
  v9 = operator new(0x58u);
  sub_21B58D0(v9, (_DWORD)v3, (_DWORD)v24, v8, v26, v6, 0);
  sub_10DED70((void **)(v9 + 48), a2 + 6);
  v10 = (char **)a2[2];
  if ( !v10 )
    v10 = a2;
  if ( (*((_BYTE *)v10 + 44) & 1) != 0 )
  {
    v11 = *(_QWORD *)(v9 + 16);
    if ( !v11 )
      v11 = v9;
    *(_BYTE *)(v11 + 44) |= 1u;
  }
  v12 = *((_BYTE *)a2 + 44);
  v13 = *(_BYTE *)(v9 + 44) & 0xFB;
  *((_BYTE *)a2 + 44) = v12 & 0xFB;
  *(_BYTE *)(v9 + 44) = v12 & 4 | v13;
  sub_21B80F0(a1, v9);
  v14 = a2[10];
  if ( v14 )
  {
    v15 = 0;
    v16 = (unsigned int)sub_21B6910(a1, *((_QWORD *)v14 + 3), *((_QWORD *)v14 + 4));
    v17 = *(_QWORD *)(a1 + 176);
    v18 = v16;
    v25 = _mm_loadu_si128((const __m128i *)v14);
    v19 = *(_QWORD *)(v17 + 8 * v16);
    if ( v19 )
      v15 = j__strlen(*(const char **)(v17 + 8 * v16));
    v20 = operator new(0x58u);
    sub_21B58D0(v20, v25.m128i_i32[0], v25.m128i_i32[2], v19, v15, v18, 0);
    sub_10DED70((void **)(v20 + 48), (char **)v14 + 6);
    *(_BYTE *)(v20 + 44) &= ~4u;
    v21 = *((char **)v14 + 2);
    if ( !v21 )
      v21 = v14;
    if ( (v21[44] & 1) != 0 )
    {
      v22 = *(_QWORD *)(v20 + 16);
      if ( !v22 )
        v22 = v20;
      *(_BYTE *)(v22 + 44) |= 1u;
    }
    v23 = *(void **)(v9 + 80);
    *(_QWORD *)(v9 + 80) = v20;
    if ( v23 )
    {
      sub_21B59C0(v23);
      operator delete(v23, 0x58u);
    }
  }
}
