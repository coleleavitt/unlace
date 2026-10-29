void __fastcall sub_1CAEC0(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  unsigned __int64 v4; // rdi
  _BYTE *v5; // rax
  int v6; // ecx
  char *v7; // rdx
  char v8; // si
  char *v9; // rdx
  int v10; // eax
  char v11; // di
  __int64 v12; // rcx

  if ( a1 != a2 )
  {
    v3 = *(void **)a1;
    if ( v3 )
      operator delete[](v3);
    v4 = *(int *)(a2 + 12);
    *(_QWORD *)(a1 + 8) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v4), 224).m128i_u64[0];
    v5 = (_BYTE *)operator new[](v4);
    v6 = *(_DWORD *)(a1 + 12);
    *(_QWORD *)a1 = v5;
    v7 = *(char **)a2;
    if ( v6 > 0 )
    {
      v8 = *v7;
      v9 = v7 + 1;
      *v5 = v8;
      v10 = 1;
      if ( v6 != 1 )
      {
        do
        {
          v11 = *v9;
          v12 = v10;
          ++v9;
          ++v10;
          *(_BYTE *)(*(_QWORD *)a1 + v12) = v11;
        }
        while ( v10 < *(_DWORD *)(a1 + 12) );
      }
    }
  }
}
