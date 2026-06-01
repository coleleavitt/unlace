char __fastcall sub_81C290(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  _QWORD **v4; // rax
  int v5; // r8d
  int v6; // r9d
  _QWORD *v7; // r12
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbx
  const __m128i *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *v20; // [rsp+0h] [rbp-90h]
  unsigned int *v21; // [rsp+8h] [rbp-88h]
  _QWORD *v22; // [rsp+10h] [rbp-80h]
  __int64 v23; // [rsp+18h] [rbp-78h]
  __int64 v24; // [rsp+20h] [rbp-70h]
  __m128 *v25; // [rsp+28h] [rbp-68h]
  __int64 v26; // [rsp+30h] [rbp-60h]
  __int64 v27; // [rsp+38h] [rbp-58h]
  int v28; // [rsp+40h] [rbp-50h]
  void *v29; // [rsp+48h] [rbp-48h] BYREF
  int v30[4]; // [rsp+50h] [rbp-40h] BYREF

  v2 = *a2;
  LODWORD(v23) = (_DWORD)a2;
  v3 = 0;
  v27 = a1;
  v24 = v2;
  if ( !*(_WORD *)(v2 + 4) )
    v3 = *(_QWORD *)(v2 + 16);
  v4 = (_QWORD **)sub_15FB1F0(a1 + 112, v3);
  v7 = *v4;
  if ( *v4 )
  {
    v4 = (_QWORD **)&v7[*((unsigned int *)v7 - 1)];
    LODWORD(v22) = (_DWORD)v7 + 8 * *((_DWORD *)v7 - 1);
    if ( v4 != v7 )
    {
      v8 = 0;
      v21 = (unsigned int *)&v29 + 1;
      LODWORD(v20) = a1 + 16;
      do
      {
        while ( 1 )
        {
          v9 = *v7;
          ++*(_DWORD *)(v27 + 300);
          v10 = *(_QWORD *)(v27 + 72);
          *(_QWORD *)v30 = v24;
          v11 = sub_15DC610(
                  v10,
                  v9,
                  1,
                  (int)v30,
                  v5,
                  v6,
                  (int)v20,
                  (int)v21,
                  (int)v22,
                  v23,
                  v24,
                  (char)v25,
                  v26,
                  v27,
                  v28,
                  v29);
          v12 = v11;
          if ( v11 )
            ++*(_DWORD *)(v11 + 8);
          HIDWORD(v29) = -2;
          v26 = **(_QWORD **)(v23 + 8LL * v8 + 176);
          v13 = *(const __m128i **)(v27 + 80);
          *(__m128i *)v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v11);
          v25 = sub_7A65F0(v13, v20, 1u, v21, 0, nullptr, *(double *)v30, 1, (const __m128i *)v30);
          v14 = sub_7E58D0(v27, v26, v12);
          LOBYTE(v4) = sub_7E5160(v27, v14, v25, v15, v16, v17);
          ++v8;
          if ( v12 )
          {
            if ( (*(_DWORD *)(v12 + 8))-- == 1 )
              break;
          }
          if ( v22 == ++v7 )
            return (char)v4;
        }
        ++v7;
        LOBYTE(v4) = sub_15D7BC0(v10, v12);
      }
      while ( v22 != v7 );
    }
  }
  return (char)v4;
}

