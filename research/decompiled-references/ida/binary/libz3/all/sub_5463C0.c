__int64 __fastcall sub_5463C0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rbp
  _QWORD *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  _QWORD *v14; // rax
  __m128i v15; // xmm0
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  size_t v18; // rdx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2
    && (!*a2 ? (v3 = 0) : (v3 = *(unsigned int *)(*a2 - 4LL)),
        (unsigned int)v3 < *(_DWORD *)(v2 - 4)
     && (v4 = *(_QWORD *)(v2 + 8 * v3)) != 0
     && (v5 = *(_DWORD *)(v4 - 4)) != 0) )
  {
    v6 = (unsigned int)(v5 - 1);
    v7 = *(_QWORD *)(v4 + 8 * v6);
    *(_DWORD *)(v4 - 4) = v6;
    v8 = *(_QWORD **)(v7 + 40);
    *(_BYTE *)(v7 + 28) = 1;
    if ( v8 )
    {
      v9 = &v8[*((unsigned int *)v8 - 1)];
      if ( v8 >= v9 )
        goto LABEL_15;
      do
      {
        while ( 1 )
        {
          v10 = *v8;
          if ( *v8 )
          {
            v11 = *(_QWORD *)(v7 + 32);
            if ( (*(_DWORD *)(v10 + 8))-- == 1 )
              break;
          }
          if ( ++v8 >= v9 )
            goto LABEL_14;
        }
        sub_15D7BC0(v11, v10);
        ++v8;
      }
      while ( v8 < v9 );
LABEL_14:
      v8 = *(_QWORD **)(v7 + 40);
      if ( v8 )
      {
LABEL_15:
        *((_DWORD *)v8 - 1) = 0;
        return v7;
      }
    }
  }
  else
  {
    v7 = sub_186B270(0x30u);
    *(_QWORD *)v7 = qword_1C665B0;
    v14 = (_QWORD *)*a2;
    *(_QWORD *)(v7 + 8) = a1;
    *(_QWORD *)(v7 + 16) = 0;
    if ( v14 )
    {
      v15 = _mm_loadl_epi64((const __m128i *)(v14 - 1));
      v21 = v15.m128i_i64[0];
      v16 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v15) + 8);
      v17 = (_QWORD *)*a2;
      *(_QWORD *)(v7 + 16) = v16 + 1;
      *v16 = v15.m128i_i64[0];
      if ( v17 )
      {
        v18 = 8LL * *((unsigned int *)v17 - 1);
        if ( v18 <= 8 )
        {
          if ( v18 == 8 )
            v16[1] = *v17;
        }
        else
        {
          memmove(v16 + 1, v17, v18);
        }
      }
    }
    v19 = *(_DWORD *)(a1 + 8);
    v20 = *(_QWORD *)(a1 + 24);
    *(_BYTE *)(v7 + 28) = 1;
    *(_DWORD *)(v7 + 24) = v19;
    *(_QWORD *)v7 = &off_1C50888;
    *(_QWORD *)(v7 + 32) = sub_4D6490(v20);
    *(_QWORD *)(v7 + 40) = 0;
  }
  return v7;
}

