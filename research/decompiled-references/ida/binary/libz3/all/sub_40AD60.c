__int64 __fastcall sub_40AD60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // r13
  _DWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // esi
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r11
  unsigned int v17; // r9d
  unsigned int v18; // esi
  _QWORD *v19; // rdx
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // rdx

  v8 = a1 + 48;
  *(_DWORD *)a1 = 0;
  v9 = *(_DWORD **)a2;
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 16LL) + 8LL);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(a1 + 48) = v10;
  *(_QWORD *)(a1 + 64) = v10;
  v11 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  ++*v9;
  *(_QWORD *)(a1 + 88) = 0;
  v12 = *(unsigned __int16 *)(v11 + 72);
  LODWORD(v11) = *(_DWORD *)(v11 + 80);
  *(_BYTE *)(a1 + 108) &= 0xF8u;
  *(_WORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 106) = v11;
  *(_QWORD *)(a1 + 96) = _mm_shuffle_epi32(_mm_cvtsi32_si128(v12), 224).m128i_u64[0];
  sub_403BD0(v9, v8);
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 - 4);
    if ( v14 )
    {
      v15 = *(_QWORD *)(a1 + 72);
      v16 = *(_QWORD *)(a1 + 80);
      if ( v15 && (v17 = *(_DWORD *)(v15 - 4)) != 0 )
      {
        v18 = 0;
        while ( 1 )
        {
          v19 = *(_QWORD **)(v16 + 48);
          v20 = 0;
          while ( *(_QWORD *)(v15 + 8LL * (v18 + v20)) == *v19 )
          {
            ++v20;
            ++v19;
            if ( v14 == v20 )
              goto LABEL_9;
          }
          if ( v20 == v14 )
            break;
          v18 += v14;
          if ( v18 >= v17 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        sub_3EE030(a1 + 64, v16 + 40);
      }
    }
  }
LABEL_9:
  result = sub_40ABA0(a1, a2, a3);
  v22 = *(_QWORD *)(a1 + 80);
  if ( v22 )
  {
    result = *(unsigned int *)(v22 + 112);
    if ( (unsigned int)result < a4 )
      result = a4;
    *(_DWORD *)(v22 + 112) = result;
  }
  *(_DWORD *)(a1 + 96) = a4;
  return result;
}

