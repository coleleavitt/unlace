/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415950
// Address: 0x0000000000415950

//----- (0000000000415950) ----------------------------------------------------
void __fastcall sub_415950(__int64 a1, void **a2, char *a3, unsigned int a4)
{
  void *v7; // rdi
  const char **v9; // rdx
  __int64 v10; // rax
  char *v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  void *v14; // rsi
  __m128i si128; // xmm0
  __m128i *v16; // r12
  __m128i v17; // xmm0
  void *v18; // rax

  v7 = *a2;
  if ( *a2 )
  {
    a2[1] = nullptr;
    j__free(v7);
    *a2 = nullptr;
    a2[2] = nullptr;
  }
  if ( !*(_DWORD *)(a1 + 224) )
  {
    if ( *a3 )
    {
      v9 = sub_4235C0(a3);
      if ( v9 && (unsigned __int8)sub_414EA0(a1, (__int64)a2, v9, a3) )
      {
        *(_QWORD *)(a1 + 88) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)(a1 + 80), 0);
        v10 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 64))(a4);
        *(_DWORD *)(a1 + 224) = 1;
        *(_QWORD *)(a1 + 16) = v10;
      }
      else
      {
        *(_DWORD *)(a1 + 224) = -1;
      }
    }
    else
    {
      v11 = (char *)a2[1];
      if ( v11 )
      {
        v13 = (__int64)(v11 + 33);
        v12 = (unsigned __int64)(v11 + 34);
        --v11;
      }
      else
      {
        v12 = 35;
        v13 = 34;
      }
      v14 = *a2;
      if ( (unsigned __int64)a2[2] < v12 )
      {
        v18 = sub_481540((__int64)a2, v14, v12, 1u);
        *a2 = v18;
        v14 = v18;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_48F330);
      a2[1] = (void *)v12;
      *((_BYTE *)v14 + v13) = 0;
      v16 = (__m128i *)&v11[(_QWORD)*a2];
      *v16 = si128;
      v17 = _mm_load_si128((const __m128i *)&xmmword_48F340);
      v16[2].m128i_i16[0] = 11876;
      v16[1] = v17;
      *(_DWORD *)(a1 + 224) = -1;
    }
  }
}
// 48F330: using guessed type __int128 xmmword_48F330;
// 48F340: using guessed type __int128 xmmword_48F340;
