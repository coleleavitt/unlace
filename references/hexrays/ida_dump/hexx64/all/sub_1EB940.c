unsigned __int64 __fastcall sub_1EB940(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  const __m128i *v3; // rax
  int v5; // ebx
  __int64 v6; // r15
  _QWORD *v7; // rsi
  unsigned int *v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int *v13; // rdi
  unsigned int v14; // r11d
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r13
  __int64 v20[2]; // [rsp+18h] [rbp-B8h] BYREF
  _QWORD v21[4]; // [rsp+28h] [rbp-A8h] BYREF
  _QWORD v22[5]; // [rsp+48h] [rbp-88h] BYREF
  char v23; // [rsp+70h] [rbp-60h]
  __m128i i; // [rsp+78h] [rbp-58h]
  char v25; // [rsp+88h] [rbp-48h]
  unsigned __int64 v26; // [rsp+90h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 48);
  v26 = __readfsqword(0x28u);
  v23 = 0;
  v22[0] = &off_4DEB40;
  v3 = *(const __m128i **)(a1 + 480);
  v22[1] = 0;
  v25 = 0;
  v22[3] = 0;
  v22[2] = a1;
  v22[4] = 0;
  for ( i = _mm_unpacklo_epi64(_mm_loadl_epi64(v3 + 7), (__m128i)a2); v2; v2 = *(_QWORD *)(v2 + 8) )
  {
    if ( *(char *)(v2 + 4) >= 0 )
    {
      v25 = 0;
      sub_11E900((_BYTE *)v2, (__int64)v22);
      sub_127A20((__int64)v20, a1, v2, 1u);
      sub_64280((__int64 *)(a2 + 56), v20);
      sub_316CB0(a2 + 72, v21);
      v5 = *(_DWORD *)(a2 + 16) - 1;
      if ( v5 >= 0 )
      {
        v6 = 8LL * (unsigned int)v5;
        do
        {
          v7 = *(_QWORD **)a2;
          v8 = (unsigned int *)(v6 + *(_QWORD *)(a2 + 8));
          v9 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
          v10 = *v8;
          v11 = *v8;
          if ( v10 >= v9 )
          {
            v12 = 0;
          }
          else
          {
            v12 = 0;
            do
            {
              v13 = (unsigned int *)(v7[3] + 8 * v10);
              v14 = v11;
              v11 = *v13;
              if ( *v13 == v14 )
                break;
              v10 = v11;
              v12 += v13[1];
            }
            while ( v11 < v9 );
          }
          v15 = v8[1] + v12;
          v16 = (_QWORD *)(*v7 + 24 * v10);
          if ( v15 >= v16[1] )
          {
            if ( !under_debugger )
              sub_383060(51105);
            BUG();
          }
          v17 = *v16 + (v15 << 6);
          if ( (unsigned __int8)sub_64780((_QWORD *)(v17 + 16), v20) || (unsigned __int8)sub_318470(v17 + 32, v21) )
          {
            memmove(
              (void *)(v6 + *(_QWORD *)(a2 + 8)),
              (const void *)(v6 + *(_QWORD *)(a2 + 8) + 8),
              8LL * *(_QWORD *)(a2 + 16) - 8 - v6);
            --*(_QWORD *)(a2 + 16);
          }
          --v5;
          v6 -= 8;
        }
        while ( v5 != -1 );
      }
      if ( v21[0] )
      {
        v21[1] = 0;
        qfree(v21[0]);
      }
      qfree(v20[0]);
      v25 = 1;
      sub_11E900((_BYTE *)v2, (__int64)v22);
    }
  }
  return v26 - __readfsqword(0x28u);
}
