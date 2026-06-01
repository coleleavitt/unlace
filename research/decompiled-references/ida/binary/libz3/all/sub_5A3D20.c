__int64 __fastcall sub_5A3D20(__int64 a1, __int64 a2, _QWORD *a3, char a4, __m128i a5)
{
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __m128i v11; // xmm0
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  size_t v14; // rdx
  _QWORD *v15; // r12
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v22; // [rsp+8h] [rbp-30h]

  v9 = *(_QWORD *)(a1 + 112);
  if ( !v9 )
  {
    if ( a3 == (_QWORD *)(a1 + 112) )
      goto LABEL_9;
LABEL_5:
    v10 = (_QWORD *)*a3;
    if ( *a3 )
      goto LABEL_6;
LABEL_23:
    *(_QWORD *)(a1 + 112) = 0;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(v9 - 4) )
  {
    if ( a3 == (_QWORD *)(a1 + 112) )
      goto LABEL_9;
    goto LABEL_4;
  }
  sub_5A3680(a1, 0, a5);
  if ( a3 == (_QWORD *)(a1 + 112) )
    goto LABEL_9;
  v9 = *(_QWORD *)(a1 + 112);
  if ( v9 )
  {
LABEL_4:
    sub_186B220((void *)(v9 - 8));
    goto LABEL_5;
  }
  v10 = (_QWORD *)*a3;
  if ( !*a3 )
    goto LABEL_23;
LABEL_6:
  v11 = _mm_loadl_epi64((const __m128i *)(v10 - 1));
  v22 = v11.m128i_i64[0];
  v12 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v11) + 8);
  *(_QWORD *)(a1 + 112) = v12 + 1;
  v13 = (_QWORD *)*a3;
  *v12 = v11.m128i_i64[0];
  if ( v13 )
  {
    v14 = 8LL * *((unsigned int *)v13 - 1);
    if ( v14 <= 8 )
    {
      if ( v14 == 8 )
        v12[1] = *v13;
    }
    else
    {
      memmove(v12 + 1, v13, v14);
    }
  }
LABEL_9:
  v15 = sub_4C4B50(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), *(_QWORD *)(a1 + 104), a2, 0);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, _QWORD))(*v15 + 16LL))(v15, *(_QWORD *)(a1 + 104), a2, 0);
  if ( !a4 )
  {
    v16 = *(_QWORD *)(a1 + 112);
    if ( v16 )
    {
      v17 = *(unsigned int *)(v16 - 4);
      if ( (_DWORD)v17 )
      {
        v18 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v16 + 8 * v18) )
          {
            if ( v17 == ++v18 )
              break;
          }
          else
          {
            v19 = *(_QWORD *)(a1 + 120);
            if ( !v19 || (v20 = *(unsigned int *)(v19 - 4), (_DWORD)v20 == *(_DWORD *)(v19 - 8)) )
            {
              sub_2FD3F0((unsigned int **)(a1 + 120));
              v19 = *(_QWORD *)(a1 + 120);
              v20 = *(unsigned int *)(v19 - 4);
            }
            *(_DWORD *)(v19 + 4 * v20) = v18++;
            ++*(_DWORD *)(v19 - 4);
            if ( v17 == v18 )
              break;
          }
          v16 = *(_QWORD *)(a1 + 112);
        }
      }
    }
  }
  (*(void (__fastcall **)(_QWORD *))*v15)(v15);
  return sub_186B220(v15);
}

