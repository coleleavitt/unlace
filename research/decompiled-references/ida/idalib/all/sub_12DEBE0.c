__int64 __fastcall sub_12DEBE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int *v9; // rsi
  __int64 v10; // rax
  __int64 i; // rcx
  __int64 j; // rcx
  __int64 v13; // rdx
  void *v14; // rdi
  __int64 v15; // r14
  int v16; // edx
  char v17; // al
  __m128i v18; // xmm0
  char v19; // al
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  __int64 v22; // [rsp+8h] [rbp-40h]
  __int64 v23; // [rsp+10h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = v3 + 176;
  sub_12DD2D0(v3, (__int64 *)a2);
  sub_11189B0(v3 + 24, (__int64 *)(a2 + 24));
  sub_11189B0(v3 + 48, (__int64 *)(a2 + 48));
  *(_BYTE *)(v3 + 72) = *(_BYTE *)(a2 + 72);
  *(_BYTE *)(v3 + 73) = *(_BYTE *)(a2 + 73);
  *(_BYTE *)(v3 + 74) = *(_BYTE *)(a2 + 74);
  *(_BYTE *)(v3 + 75) = *(_BYTE *)(a2 + 75);
  *(_BYTE *)(v3 + 76) = *(_BYTE *)(a2 + 76);
  *(_BYTE *)(v3 + 77) = *(_BYTE *)(a2 + 77);
  sub_9EE8A0(v3 + 80, a2 + 80);
  sub_9EE8A0(v3 + 112, a2 + 112);
  sub_11189B0(v3 + 144, (__int64 *)(a2 + 144));
  *(_DWORD *)(v3 + 168) = *(_DWORD *)(a2 + 168);
  *(_BYTE *)(v3 + 172) = *(_BYTE *)(a2 + 172);
  *(_BYTE *)(v3 + 173) = *(_BYTE *)(a2 + 173);
  *(_BYTE *)(v3 + 174) = *(_BYTE *)(a2 + 174);
  if ( v3 + 176 != a2 + 176 )
  {
    v5 = *(_QWORD *)(v3 + 192);
    v6 = *(_QWORD *)(v3 + 208);
    v23 = v3 + 176;
    v7 = v3 + 184;
    v21 = v5;
    v22 = v6;
    if ( v5 )
    {
      *(_QWORD *)(v5 + 8) = 0;
      v8 = *(_QWORD *)(v6 + 16);
      if ( v8 )
        v22 = v8;
      *(_QWORD *)(v3 + 192) = 0;
      *(_QWORD *)(v3 + 200) = v7;
      *(_QWORD *)(v3 + 208) = v7;
      v9 = *(int **)(a2 + 192);
      *(_QWORD *)(v3 + 216) = 0;
      if ( !v9 )
      {
        while ( 1 )
        {
LABEL_13:
          sub_F7EAE0(v4, *(_QWORD **)(v5 + 24));
          v14 = *(void **)(v5 + 32);
          v15 = *(_QWORD *)(v5 + 16);
          if ( v14 == (void *)(v5 + 48) )
          {
            operator delete((void *)v5);
            if ( !v15 )
              goto LABEL_17;
          }
          else
          {
            operator delete(v14);
            operator delete((void *)v5);
            if ( !v15 )
              goto LABEL_17;
          }
          v5 = v15;
        }
      }
    }
    else
    {
      *(_QWORD *)(v3 + 200) = v7;
      *(_QWORD *)(v3 + 208) = v7;
      v9 = *(int **)(a2 + 192);
      v22 = 0;
      *(_QWORD *)(v3 + 216) = 0;
      if ( !v9 )
        goto LABEL_17;
    }
    v10 = sub_12DE910(v3 + 176, v9, v7, &v21);
    for ( i = v10; *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 16) )
      ;
    *(_QWORD *)(v3 + 200) = i;
    for ( j = v10; *(_QWORD *)(j + 24); j = *(_QWORD *)(j + 24) )
      ;
    v5 = v21;
    v13 = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(v3 + 208) = j;
    *(_QWORD *)(v3 + 192) = v10;
    v4 = v23;
    *(_QWORD *)(v3 + 216) = v13;
    if ( v5 )
      goto LABEL_13;
  }
LABEL_17:
  v16 = *(_DWORD *)(a2 + 224);
  *(_BYTE *)(v3 + 228) = *(_BYTE *)(a2 + 228);
  v17 = *(_BYTE *)(a2 + 232);
  *(_DWORD *)(v3 + 224) = v16;
  *(_BYTE *)(v3 + 232) = v17;
  *(_BYTE *)(v3 + 233) = *(_BYTE *)(a2 + 233);
  *(_BYTE *)(v3 + 234) = *(_BYTE *)(a2 + 234);
  *(_BYTE *)(v3 + 235) = *(_BYTE *)(a2 + 235);
  *(_BYTE *)(v3 + 236) = *(_BYTE *)(a2 + 236);
  sub_12DD550((__int64 *)(v3 + 240), (__int64 *)(a2 + 240));
  sub_12DD820(v3 + 264, (__int64 *)(a2 + 264));
  sub_11189B0(v3 + 288, (__int64 *)(a2 + 288));
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 328));
  *(_BYTE *)(v3 + 312) = *(_BYTE *)(a2 + 312);
  *(_BYTE *)(v3 + 313) = *(_BYTE *)(a2 + 313);
  *(_DWORD *)(v3 + 316) = *(_DWORD *)(a2 + 316);
  *(_BYTE *)(v3 + 320) = *(_BYTE *)(a2 + 320);
  v19 = *(_BYTE *)(a2 + 321);
  *(__m128i *)(v3 + 328) = v18;
  *(_BYTE *)(v3 + 321) = v19;
  return 0;
}
