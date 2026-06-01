__int64 __fastcall sub_1799D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rax
  int v11; // eax
  unsigned int **v12; // r15
  unsigned int v13; // ebp
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 *v18; // rbx
  __int64 v19; // rdi
  _DWORD v21[2]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-C0h]
  __int64 (__fastcall **v23)(); // [rsp+10h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-B0h]
  __int64 v25; // [rsp+20h] [rbp-A8h]
  __int64 v26; // [rsp+28h] [rbp-A0h]
  __int64 v27; // [rsp+30h] [rbp-98h]
  char v28; // [rsp+38h] [rbp-90h]
  unsigned __int64 v29; // [rsp+40h] [rbp-88h]
  unsigned int **v30; // [rsp+48h] [rbp-80h] BYREF
  __int128 v31; // [rsp+50h] [rbp-78h]
  __m128i v32; // [rsp+60h] [rbp-68h]
  __int64 v33; // [rsp+70h] [rbp-58h]
  int v34; // [rsp+78h] [rbp-50h]
  unsigned __int64 v35; // [rsp+88h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 48);
  v35 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a1 + 480);
  v23 = off_4DE0B8;
  v31 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v30 = nullptr;
  v8 = *(_QWORD *)(v7 + 112);
  v9 = (__m128i)v7;
  v29 = v7;
  v10 = *(_QWORD *)(a1 + 64);
  v34 = 0;
  v25 = a1;
  v24 = v10;
  v33 = 0;
  v32 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)(v8 + 104));
  if ( !v6 )
    return 0;
  do
  {
    if ( *(_DWORD *)v6 == 62 )
      goto LABEL_10;
    v11 = *(_DWORD *)(v6 + 68);
    v12 = v30;
    v22 = v6;
    v21[0] = 4;
    v21[1] = v11;
    if ( !((_QWORD)v31 << 6) )
    {
      LOBYTE(v21[0]) = 0;
LABEL_9:
      v26 = v6;
      sub_11E900((_BYTE *)v6, (__int64)&v23);
      sub_11CDA0((__int64)v21);
      goto LABEL_10;
    }
    while ( !sub_1255D0((unsigned __int8 *)v21, *(_QWORD *)(v32.m128i_i64[0] + 112), (__int64)(v12 + 1), 0) )
    {
      v12 += 8;
      if ( v12 == &v30[8 * (_QWORD)v31] )
      {
        LOBYTE(v21[0]) = 0;
        goto LABEL_9;
      }
    }
    LOBYTE(v21[0]) = 0;
    if ( !v12 || !(unsigned __int8)sub_174DF0((__int64 *)&v23, (char *)(v6 + 32), v12) )
      goto LABEL_9;
    sub_172B80(*(_QWORD *)(v24 + 1504), v6);
    ++v34;
    sub_11CDA0((__int64)v21);
LABEL_10:
    sub_1794F0((__int64 *)&v30, a1, (unsigned int *)v6, v8, a5, a6);
    v6 = *(_QWORD *)(v6 + 8);
  }
  while ( v6 );
  v13 = v34;
  if ( v34 )
  {
    v14 = *(_DWORD *)(a1 + 24);
    BYTE1(v14) &= ~2u;
    LOBYTE(v14) = v14 | 0x80;
    *(_DWORD *)(a1 + 24) = v14;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4LL) &= ~8u;
    sub_A2520(a1, (__int64)"cse found %d subexpressions\n", v34);
    v13 = v34;
  }
  v15 = (__int64)v30;
  v23 = off_4DE0B8;
  if ( v30 )
  {
    v16 = v31;
    if ( (_QWORD)v31 )
    {
      v17 = 0;
      do
      {
        v18 = (__int64 *)(v15 + (v17 << 6));
        v19 = v18[5];
        if ( v19 )
        {
          v18[6] = 0;
          qfree(v19);
        }
        ++v17;
        qfree(v18[3]);
        sub_11CDA0((__int64)(v18 + 1));
        v15 = (__int64)v30;
      }
      while ( v16 != v17 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v15);
  }
  return v13;
}
