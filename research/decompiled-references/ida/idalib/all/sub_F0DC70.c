void __fastcall sub_F0DC70(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned int *v6; // rax
  __m128 v7; // xmm0
  _DWORD **v8; // rbx
  __int64 v9; // r12
  _DWORD *v10; // rbp
  _BYTE *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int *v14; // rax
  __int64 v15; // rcx
  __int64 i; // rsi
  __int64 v17; // [rsp+8h] [rbp-60h] BYREF
  __m128 v18; // [rsp+10h] [rbp-58h] BYREF
  int v19; // [rsp+20h] [rbp-48h]

  v2 = 52;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
    v2 = *(_DWORD *)(*(_QWORD *)(v4 + 2320) + 64LL);
  v5 = *(_QWORD *)a1;
  v19 = v2;
  v6 = *(unsigned int **)(a2 + 24);
  v17 = a1 + 24;
  v7 = _mm_loadh_ps((const double *)&v17);
  v18 = v7;
  if ( v6 )
  {
    v8 = (_DWORD **)(v6 + 4);
    v9 = (__int64)&v6[2 * *v6 + 4];
    if ( v6 + 4 != (unsigned int *)v9 )
    {
      do
      {
        v10 = *v8;
        if ( *v8 && *v10 )
        {
          v11 = *(_BYTE **)(v5 + 32);
          if ( (unsigned __int64)v11 < *(_QWORD *)(v5 + 24) )
          {
            *(_QWORD *)(v5 + 32) = v11 + 1;
            *v11 = 32;
          }
          else
          {
            sub_227BA10(v5, 32);
          }
          sub_BB4A30((__int64 *)&v18, (__int64)v10);
          v5 = *(_QWORD *)a1;
        }
        ++v8;
      }
      while ( (_DWORD **)v9 != v8 );
    }
  }
  sub_227BF10(v5, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  v14 = *(unsigned int **)(a2 + 24);
  if ( v14 && *((_BYTE *)v14 + 8) )
  {
    v15 = v14[1];
    for ( i = *(_QWORD *)&v14[2 * v15 + 4 + 2 * *v14];
          (*(_WORD *)i & 0x1FF) == 0xFA;
          i = *(_QWORD *)(i + 8LL * *(unsigned int *)(i + 8) + 32) )
    {
      ;
    }
    sub_F0C470(a1, (char *)i, *(unsigned __int8 *)(a1 + 24), v15, v12, v13, *(double *)v7.m128_u64);
  }
}
