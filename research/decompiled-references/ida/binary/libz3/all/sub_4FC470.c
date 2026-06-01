__int64 __fastcall sub_4FC470(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  size_t v11; // rdx
  int v12; // eax
  unsigned int v14; // [rsp+Ch] [rbp-3Ch]
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  int v16; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 24);
  v16 = 0;
  v15 = 0;
  if ( (unsigned __int8)sub_4C64F0(v3, a2, &v15) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 40) + 40LL))(*(_QWORD *)(a1 + 40), &v15);
    v5 = sub_186B270(0x28u);
    *(_QWORD *)v5 = qword_1C665B0;
    v6 = (_QWORD *)*a2;
    *(_QWORD *)(v5 + 8) = a1;
    *(_QWORD *)(v5 + 16) = 0;
    if ( v6 )
    {
      v7 = *((_DWORD *)v6 - 1);
      v8 = *((unsigned int *)v6 - 2);
      v14 = v8;
      v9 = (_QWORD *)sub_186B270(8 * v8 + 8);
      v10 = (_QWORD *)*a2;
      *(_QWORD *)(v5 + 16) = v9 + 1;
      *v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v14), _mm_cvtsi32_si128(v7)).m128i_u64[0];
      if ( v10 )
      {
        v11 = 8LL * *((unsigned int *)v10 - 1);
        if ( v11 <= 8 )
        {
          if ( v11 == 8 )
            v9[1] = *v10;
        }
        else
        {
          memcpy(v9 + 1, v10, v11);
        }
      }
    }
    v12 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)(v5 + 32) = v4;
    *(_DWORD *)(v5 + 24) = v12;
    *(_QWORD *)v5 = &off_1C669F0;
  }
  else
  {
    v5 = 0;
  }
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  return v5;
}

