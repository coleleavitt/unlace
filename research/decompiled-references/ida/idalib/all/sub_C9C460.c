__int64 __fastcall sub_C9C460(__int64 a1, __int64 a2, __int64 a3, char **a4, char *a5, int *a6)
{
  char *v6; // rax
  int v7; // edx
  int v8; // edi
  char *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  __int64 result; // rax
  __m128i v13; // xmm0
  __int16 v14; // ax
  char *v15; // r10
  __m128i v16; // [rsp+0h] [rbp-28h] BYREF
  int v17; // [rsp+10h] [rbp-18h]
  __int16 v18; // [rsp+14h] [rbp-14h]

  if ( a6 )
  {
    v6 = *a4;
    v7 = **a4;
    if ( **a4 == 42 )
    {
      v8 = *a6;
      v9 = v6 + 1;
      v10 = 2;
      *a4 = v6 + 1;
      *a6 = v8 + 1;
      v11 = 0;
    }
    else
    {
      if ( a5 != v6 && (unsigned __int8)(v7 - 48) <= 9u )
      {
        v15 = *a4;
        v8 = 0;
        while ( 1 )
        {
          ++v15;
          v8 = v7 + 10 * v8 - 48;
          if ( a5 == v15 )
            break;
          v7 = *v15;
          if ( (unsigned __int8)(*v15 - 48) > 9u )
          {
            v9 = *a4;
            v10 = 1;
            v11 = (_DWORD)v15 - (_DWORD)v6;
            *a4 = v15;
            goto LABEL_4;
          }
        }
        v6 = a5;
      }
      v8 = 0;
      v10 = 0;
      v11 = 0;
      v9 = nullptr;
      *a4 = v6;
    }
LABEL_4:
    *(_QWORD *)(a2 + 16) = v9;
    *(_DWORD *)(a2 + 24) = v11;
    *(_DWORD *)(a2 + 28) = v10;
    *(_DWORD *)(a2 + 32) = v8;
    *(_WORD *)(a2 + 36) &= 0xFEu;
    return 0;
  }
  else
  {
    sub_C9C240((__int64)&v16, a1, a3, a4, a5, 0);
    result = 1;
    if ( v16.m128i_i32[3] != 3 )
    {
      v13 = _mm_load_si128(&v16);
      *(_DWORD *)(a2 + 32) = v17;
      v14 = v18;
      *(__m128i *)(a2 + 16) = v13;
      *(_WORD *)(a2 + 36) = v14;
      return 0;
    }
  }
  return result;
}
