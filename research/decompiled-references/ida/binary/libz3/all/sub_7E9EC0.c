__int64 __fastcall sub_7E9EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rax

  v8 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 20LL);
  if ( *(_DWORD *)(a1 + 328) < (unsigned int)v8 )
  {
    v15 = sub_186B270(8 * v8 + 48);
    v16 = *(void **)(a1 + 320);
    *(_QWORD *)(v15 + 16) = a2;
    v9 = v15;
    *(_QWORD *)(v15 + 24) = a3;
    *(_QWORD *)(v15 + 32) = 0;
    *(_DWORD *)(v15 + 40) = 0;
    *(_OWORD *)v15 = 0;
    if ( (void *)v15 != v16 )
    {
      if ( v16 )
        sub_186B220(v16);
      *(_QWORD *)(a1 + 320) = v9;
    }
    LODWORD(v8) = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 20LL);
    *(_DWORD *)(a1 + 328) = v8;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 320);
  }
  v10 = v8 - 1;
  if ( (_DWORD)v8 )
  {
    if ( v10 <= 3 || (v11 = 8LL * v10 + 48, v12 = a4 + v11 - 56, v12 == v9 + v11) )
    {
      v17 = 8LL * v10;
      do
      {
        *(_QWORD *)(v9 + v17 + 48) = *(_QWORD *)(a4 + v17);
        v17 -= 8;
      }
      while ( v17 != -8 );
    }
    else
    {
      v13 = 0;
      do
      {
        *(__m128i *)(v9 + v11 - 8 + v13) = _mm_loadu_si128((const __m128i *)(v12 + v13));
        v13 -= 16;
      }
      while ( v13 != -16LL * ((unsigned int)v8 >> 1) );
      if ( (v8 & 1) != 0 )
        *(_QWORD *)(v9 + 8 * (v10 - (v8 & 0xFFFFFFFE)) + 48) = *(_QWORD *)(a4 + 8 * (v10 - (v8 & 0xFFFFFFFE)));
    }
  }
  *(_QWORD *)(v9 + 24) = a3;
  *(_QWORD *)(v9 + 16) = a2;
  return v9;
}

