_QWORD *__fastcall sub_2051BE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned int v10; // edx
  int v11; // r15d
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  _QWORD *result; // rax
  __int64 v16; // r10
  __int64 *v17; // rcx
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi

  sub_20CA190(a1, a6, 18);
  v10 = *(_DWORD *)(a1 + 4) & 0xF8000000;
  *(_WORD *)(a1 + 2) = 34;
  v11 = v10 | a8 & 0x7FFFFFF;
  *(_DWORD *)(a1 + 4) = v11;
  *(_QWORD *)(a1 + 24) = a2;
  *(_BYTE *)(a1 + 7) = HIBYTE(v11) & 0x3F | (((a8 & 0x8000000) != 0) << 6) | (((a8 & 0x10000000) != 0) << 7);
  v12 = sub_2090A70(a2, a4, a5);
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 32) = v12;
  if ( *(_BYTE *)(a7 + 32) )
  {
    v13 = *(_DWORD *)(a7 + 8);
    *(_BYTE *)(a1 + 72) = 1;
    *(_DWORD *)(a7 + 8) = 0;
    *(_DWORD *)(a1 + 48) = v13;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)a7;
    v14 = *(_DWORD *)(a7 + 24);
    *(_DWORD *)(a7 + 24) = 0;
    *(_DWORD *)(a1 + 64) = v14;
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a7 + 16);
  }
  result = sub_20166C0((_QWORD *)(a1 - 32LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF)), a3);
  if ( (*(_BYTE *)(a1 + 7) & 0x40) != 0 )
  {
    v16 = *(_QWORD *)(a1 - 8);
  }
  else
  {
    result = (_QWORD *)(32LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF));
    v16 = a1 - (_QWORD)result;
  }
  if ( (_DWORD)a5 )
  {
    v17 = a4;
    result = (_QWORD *)(v16 + 32);
    do
    {
      v18 = (_QWORD *)result[2];
      v19 = *v17;
      if ( v18 )
      {
        v20 = result[1];
        *v18 = v20;
        if ( v20 )
        {
          *(_QWORD *)(v20 + 16) = v18;
          result[1] = 0;
        }
        result[2] = 0;
      }
      *result = v19;
      if ( v19 && *(_BYTE *)v19 > 9u )
      {
        v21 = *(_QWORD *)(v19 + 16);
        result[1] = v21;
        if ( v21 )
          *(_QWORD *)(v21 + 16) = result + 1;
        result[2] = v19 + 16;
        *(_QWORD *)(v19 + 16) = result;
      }
      result += 4;
      ++v17;
    }
    while ( result != (_QWORD *)(v16 + 32LL * (unsigned int)(a5 - 1) + 64) );
  }
  return result;
}
