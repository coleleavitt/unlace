/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A7F70
// Address: 0x080A7F70

//----- (080A7F70) --------------------------------------------------------
unsigned int __cdecl sub_80A7F70(int a1, _QWORD *a2, _DWORD *a3)
{
  char *v3; // ebx
  size_t v4; // eax
  char *v5; // ecx
  bool v6; // zf
  void *v7; // ebx
  unsigned int v8; // edi
  unsigned __int64 v9; // xmm0_8
  unsigned int result; // eax
  int v11; // eax
  int v12; // ebx
  size_t v13; // edx
  unsigned int v14; // eax
  void *v15; // eax
  size_t v16; // [esp+0h] [ebp-38h]
  const char *src; // [esp+4h] [ebp-34h]
  char *desta; // [esp+8h] [ebp-30h]
  void *dest; // [esp+8h] [ebp-30h]
  _BYTE *destb; // [esp+8h] [ebp-30h]
  void *ptr; // [esp+10h] [ebp-28h] BYREF
  int v22; // [esp+14h] [ebp-24h]
  unsigned int v23; // [esp+18h] [ebp-20h]
  unsigned int v24; // [esp+1Ch] [ebp-1Ch]

  v24 = __readgsdword(0x14u);
  ptr = nullptr;
  v22 = 0;
  v23 = 0;
  ptr = sub_80CF920((int)&ptr, nullptr, 9u, 1u);
  v3 = &byte_811E601;
  v22 = 9;
  *(_QWORD *)ptr = *a2;
  v4 = v22;
  v5 = (char *)ptr;
  v6 = v22 == 0;
  *((_BYTE *)ptr + 8) = 0;
  if ( !v6 )
    v3 = v5;
  if ( *v3 == 47 )
  {
    v11 = strtol(v5 + 1, nullptr, 10);
    v5 = (char *)ptr;
    if ( v11 > 0 && (v12 = a3[1]) != 0 && v11 < (unsigned int)(v12 - 1) )
    {
      desta = (char *)ptr;
      src = (const char *)(*a3 + v11);
      v4 = strlen(src);
      v5 = desta;
      v13 = v4;
      if ( v4 )
      {
        v14 = v4 + 1;
        dest = (void *)v14;
        if ( v23 < v14 )
        {
          v16 = v13;
          v15 = sub_80CF920((int)&ptr, v5, v14, 1u);
          v13 = v16;
          ptr = v15;
          v5 = (char *)v15;
        }
        v22 = (int)dest;
        destb = (_BYTE *)v13;
        memmove(v5, src, v13);
        destb[(_DWORD)ptr] = 0;
        v5 = (char *)ptr;
        v4 = v22;
      }
    }
    else
    {
      v4 = v22;
    }
  }
  v7 = *(void **)a1;
  v8 = *(_DWORD *)(a1 + 8);
  v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(v23)).m128i_u64[0];
  *(_DWORD *)a1 = v5;
  *(_QWORD *)(a1 + 4) = v9;
  ptr = v7;
  v23 = v8;
  if ( v7 )
  {
    v22 = 0;
    sub_80CF780(v7);
  }
  result = v24 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 811E601: using guessed type char byte_811E601;
