void __fastcall sub_4040D0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  _DWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r11
  unsigned int v12; // r9d
  unsigned int v13; // esi
  _QWORD *v14; // rdx
  int v15; // eax

  v3 = a1 + 48;
  *(_DWORD *)a1 = 0;
  v4 = (_DWORD *)*a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*a2 + 16) + 8LL);
  *(_QWORD *)(a1 + 80) = *a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 64) = v5;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 32) = v5;
  v6 = *a2;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  v7 = *(unsigned __int16 *)(v6 + 72);
  LODWORD(v6) = *(_DWORD *)(v6 + 80);
  *(_QWORD *)(a1 + 40) = 0;
  ++*v4;
  *(_QWORD *)(a1 + 88) = 0;
  *(_WORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 96) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v7), 224).m128i_u64[0];
  *(_WORD *)(a1 + 106) = v6;
  *(_BYTE *)(a1 + 108) &= 0xF8u;
  sub_403BD0(v4, v3);
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 - 4);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 72);
      v11 = *(_QWORD *)(a1 + 80);
      if ( v10 && (v12 = *(_DWORD *)(v10 - 4)) != 0 )
      {
        v13 = 0;
        while ( 1 )
        {
          v14 = *(_QWORD **)(v11 + 48);
          v15 = 0;
          while ( *(_QWORD *)(v10 + 8LL * (v13 + v15)) == *v14 )
          {
            ++v15;
            ++v14;
            if ( v9 == v15 )
              return;
          }
          if ( v15 == v9 )
            break;
          v13 += v9;
          if ( v13 >= v12 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        sub_3EE030(a1 + 64, v11 + 40);
      }
    }
  }
}

