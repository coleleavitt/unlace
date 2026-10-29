void __fastcall sub_EE9930(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int *v7; // rax
  __m128 v8; // xmm0
  _DWORD **v9; // rbx
  __int64 v10; // r15
  _DWORD *v11; // rbp
  _BYTE *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v16; // rax
  __int64 i; // rsi
  __int64 v19; // [rsp+8h] [rbp-60h] BYREF
  __m128 v20; // [rsp+10h] [rbp-58h] BYREF
  int v21; // [rsp+20h] [rbp-48h]

  v3 = 52;
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
    v3 = *(_DWORD *)(*(_QWORD *)(v5 + 2320) + 64LL);
  v6 = *(_QWORD *)a1;
  v21 = v3;
  v7 = *(unsigned int **)(a2 + 24);
  v19 = a1 + 24;
  v8 = _mm_loadh_ps((const double *)&v19);
  v20 = v8;
  if ( v7 )
  {
    v9 = (_DWORD **)(v7 + 4);
    v10 = (__int64)&v7[2 * *v7 + 4];
    if ( (unsigned int *)v10 != v7 + 4 )
    {
      do
      {
        v11 = *v9;
        if ( *v9 && *v11 )
        {
          v12 = *(_BYTE **)(v6 + 32);
          if ( (unsigned __int64)v12 < *(_QWORD *)(v6 + 24) )
          {
            *(_QWORD *)(v6 + 32) = v12 + 1;
            *v12 = 32;
          }
          else
          {
            sub_2257CD0(v6, 32);
          }
          sub_B90CF0((__int64 *)&v20, (__int64)v11);
          v6 = *(_QWORD *)a1;
        }
        ++v9;
      }
      while ( (_DWORD **)v10 != v9 );
    }
  }
  sub_22581D0(v6, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48));
  if ( !a3 )
  {
    v16 = *(unsigned int **)(a2 + 24);
    if ( v16 )
    {
      if ( *((_BYTE *)v16 + 8) )
      {
        for ( i = *(_QWORD *)&v16[2 * v16[1] + 4 + 2 * (unsigned __int64)*v16];
              (*(_WORD *)i & 0x1FF) == 0xFA;
              i = *(_QWORD *)(i + 8LL * *(unsigned int *)(i + 8) + 32) )
        {
          ;
        }
        sub_EE8730(a1, (char *)i, *(unsigned __int8 *)(a1 + 24), v13, v14, v15, *(double *)v8.m128_u64);
      }
    }
  }
}

