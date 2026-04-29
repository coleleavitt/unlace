__int64 __fastcall sub_175F90(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __int64 v5; // rax
  int v6; // eax
  int **v7; // r15
  unsigned int v8; // ebp
  int v9; // eax
  int **v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  int **v13; // rbx
  int *v14; // rdi
  _DWORD v16[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-C0h]
  __int64 (__fastcall **v18)(); // [rsp+10h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-B0h]
  __int64 v20; // [rsp+20h] [rbp-A8h]
  __int64 v21; // [rsp+28h] [rbp-A0h]
  __int64 v22; // [rsp+30h] [rbp-98h]
  char v23; // [rsp+38h] [rbp-90h]
  unsigned __int64 v24; // [rsp+40h] [rbp-88h]
  int **v25; // [rsp+48h] [rbp-80h] BYREF
  __int128 v26; // [rsp+50h] [rbp-78h]
  __m128i v27; // [rsp+60h] [rbp-68h]
  __int64 v28; // [rsp+70h] [rbp-58h]
  int v29; // [rsp+78h] [rbp-50h]
  unsigned __int64 v30; // [rsp+88h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 48);
  v30 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 480);
  v18 = off_4CB218;
  v26 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v25 = nullptr;
  v3 = *(_QWORD *)(v2 + 112);
  v4 = (__m128i)v2;
  v24 = v2;
  v5 = *(_QWORD *)(a1 + 64);
  v29 = 0;
  v20 = a1;
  v19 = v5;
  v28 = 0;
  v27 = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)(v3 + 104));
  if ( !v1 )
    return 0;
  do
  {
    if ( *(_DWORD *)v1 == 62 )
      goto LABEL_10;
    v6 = *(_DWORD *)(v1 + 68);
    v7 = v25;
    v17 = v1;
    v16[0] = 4;
    v16[1] = v6;
    if ( !((_QWORD)v26 << 6) )
    {
      LOBYTE(v16[0]) = 0;
LABEL_9:
      v21 = v1;
      sub_11AEC0((_BYTE *)v1, (__int64)&v18);
      sub_119360((__int64)v16);
      goto LABEL_10;
    }
    while ( !sub_121B90((unsigned __int8 *)v16, *(_QWORD *)(v27.m128i_i64[0] + 112), (__int64)(v7 + 1), 0) )
    {
      v7 += 8;
      if ( v7 == &v25[8 * (_QWORD)v26] )
      {
        LOBYTE(v16[0]) = 0;
        goto LABEL_9;
      }
    }
    LOBYTE(v16[0]) = 0;
    if ( !v7 || !(unsigned __int8)sub_1713B0((__int64 *)&v18, (char *)(v1 + 32), v7) )
      goto LABEL_9;
    sub_16F140(*(_QWORD *)(v19 + 1504), v1);
    ++v29;
    sub_119360((__int64)v16);
LABEL_10:
    sub_175AB0((__int64)&v25, a1, (unsigned int *)v1);
    v1 = *(_QWORD *)(v1 + 8);
  }
  while ( v1 );
  v8 = v29;
  if ( v29 )
  {
    v9 = *(_DWORD *)(a1 + 24);
    BYTE1(v9) &= ~2u;
    LOBYTE(v9) = v9 | 0x80;
    *(_DWORD *)(a1 + 24) = v9;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL) &= ~8u;
    sub_9EAE0(a1, (__int64)"cse found %d subexpressions\n", v29);
    v8 = v29;
  }
  v10 = v25;
  v18 = off_4CB218;
  if ( v25 )
  {
    v11 = v26;
    if ( (_QWORD)v26 )
    {
      v12 = 0;
      do
      {
        v13 = &v10[8 * v12];
        v14 = v13[5];
        if ( v14 )
        {
          v13[6] = nullptr;
          qfree(v14);
        }
        ++v12;
        qfree(v13[3]);
        sub_119360((__int64)(v13 + 1));
        v10 = v25;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v10);
  }
  return v8;
}
