unsigned __int64 __fastcall sub_1EB940(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  const __m128i *v3; // rax
  int v5; // r8d
  int v6; // r9d
  int v7; // ebx
  __int64 v8; // r15
  _QWORD *v9; // rsi
  unsigned int *v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int *v15; // rdi
  unsigned int v16; // r11d
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r13
  __int64 v22[2]; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v23[4]; // [rsp+28h] [rbp-A8h] BYREF
  _QWORD v24[5]; // [rsp+48h] [rbp-88h] BYREF
  char v25; // [rsp+70h] [rbp-60h]
  __m128i i; // [rsp+78h] [rbp-58h]
  char v27; // [rsp+88h] [rbp-48h]
  unsigned __int64 v28; // [rsp+90h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 48);
  v28 = __readfsqword(0x28u);
  v25 = 0;
  v24[0] = &off_4DEB40;
  v3 = *(const __m128i **)(a1 + 480);
  v24[1] = 0;
  v27 = 0;
  v24[3] = 0;
  v24[2] = a1;
  v24[4] = 0;
  for ( i = _mm_unpacklo_epi64(_mm_loadl_epi64(v3 + 7), (__m128i)a2); v2; v2 = *(_QWORD *)(v2 + 8) )
  {
    if ( *(char *)(v2 + 4) >= 0 )
    {
      v27 = 0;
      sub_11E900((_BYTE *)v2, (__int64)v24);
      sub_127A20((__int64)v22, a1, v2, 1, v5, v6);
      sub_64280((__int64 *)(a2 + 56), v22);
      sub_316CB0(a2 + 72, v23);
      v7 = *(_DWORD *)(a2 + 16) - 1;
      if ( v7 >= 0 )
      {
        v8 = 8LL * (unsigned int)v7;
        do
        {
          v9 = *(_QWORD **)a2;
          v10 = (unsigned int *)(v8 + *(_QWORD *)(a2 + 8));
          v11 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
          v12 = *v10;
          v13 = *v10;
          if ( v12 >= v11 )
          {
            v14 = 0;
          }
          else
          {
            v14 = 0;
            do
            {
              v15 = (unsigned int *)(v9[3] + 8 * v12);
              v16 = v13;
              v13 = *v15;
              if ( *v15 == v16 )
                break;
              v12 = v13;
              v14 += v15[1];
            }
            while ( v13 < v11 );
          }
          v17 = v10[1] + v14;
          v18 = (_QWORD *)(*v9 + 24 * v12);
          if ( v17 >= v18[1] )
          {
            if ( !under_debugger )
              sub_383060(51105);
            BUG();
          }
          v19 = *v18 + (v17 << 6);
          if ( (unsigned __int8)sub_64780((_QWORD *)(v19 + 16), v22) || (unsigned __int8)sub_318470(v19 + 32, v23) )
          {
            memmove(
              (void *)(v8 + *(_QWORD *)(a2 + 8)),
              (const void *)(v8 + *(_QWORD *)(a2 + 8) + 8),
              8LL * *(_QWORD *)(a2 + 16) - 8 - v8);
            --*(_QWORD *)(a2 + 16);
          }
          --v7;
          v8 -= 8;
        }
        while ( v7 != -1 );
      }
      if ( v23[0] )
      {
        v23[1] = 0;
        qfree(v23[0]);
      }
      qfree(v22[0]);
      v27 = 1;
      sub_11E900((_BYTE *)v2, (__int64)v24);
    }
  }
  return v28 - __readfsqword(0x28u);
}
