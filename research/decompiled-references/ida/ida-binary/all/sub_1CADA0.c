void __fastcall sub_1CADA0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r12
  signed int v3; // ebp
  _BYTE *v4; // rax
  __int64 i; // rdx
  _BYTE *v6; // rax
  _BYTE *v7; // rax

  v2 = *(_BYTE **)a1;
  if ( a2 )
  {
    if ( (_BYTE *)a2 != v2 )
    {
      if ( *(_BYTE *)a2 )
      {
        v3 = strlen((const char *)(a2 + 1)) + 2;
        *(_QWORD *)(a1 + 8) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v3), 224).m128i_u64[0];
        v4 = (_BYTE *)operator new[](v3);
        *(_QWORD *)a1 = v4;
        if ( v3 > 0 )
        {
          *v4 = *(_BYTE *)a2;
          if ( v3 != 1 )
          {
            for ( i = 1; i != v3; ++i )
              *(_BYTE *)(*(_QWORD *)a1 + i) = *(_BYTE *)(a2 + i);
          }
        }
      }
      else
      {
        *(_QWORD *)(a1 + 8) = 0x100000001LL;
        v6 = (_BYTE *)operator new[](1u);
        *(_QWORD *)a1 = v6;
        *v6 = *(_BYTE *)a2;
      }
      if ( v2 )
        operator delete[](v2);
    }
  }
  else
  {
    if ( !v2 )
    {
      v7 = (_BYTE *)operator new[](1u);
      *(_QWORD *)a1 = v7;
      v2 = v7;
      *(_QWORD *)(a1 + 8) = 0x100000001LL;
    }
    *v2 = 0;
  }
}
