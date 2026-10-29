__int64 __fastcall sub_63E460(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  int v7; // r14d
  int v8; // r15d
  __int64 v9; // rax
  const char *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  void *ptr; // [rsp+10h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-D0h]
  _BYTE v18[192]; // [rsp+28h] [rbp-C0h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  ptr = v18;
  sub_11240B0(a3, &ptr);
  v5 = sub_FC8D80(*(_QWORD *)(a2 + 8), ptr, si128.m128i_i64[0]);
  if ( v5 )
  {
    sub_FC8C20(a1, v5);
  }
  else
  {
    v7 = 0;
    v8 = 0;
    if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 16 <= 0x3E )
    {
      v9 = *(_QWORD *)(a3 + 40);
      v10 = &byte_3B9466E;
      if ( (v9 & 7) == 0 )
      {
        v15 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v7 = v15;
        if ( v15 )
        {
          v10 = *(const char **)(v15 + 16);
          v7 = *(_DWORD *)v10;
          LODWORD(v10) = (_DWORD)v10 + 16;
        }
      }
      v8 = v7;
      v7 = (int)v10;
    }
    v11 = *(_QWORD *)(a2 + 8);
    if ( *(char *)(a3 + 29) < 0 && (*(_BYTE *)(a3 + 8) & 7) != 0 && (v12 = sub_794640(a3)) != 0 )
    {
      v13 = (__int64 *)sub_C92EB0(v12, 0);
      v5 = *v13;
      v14 = v13[1];
    }
    else
    {
      v14 = 0;
    }
    sub_FC8F70(a1, v11, v7, v8, (_DWORD)ptr, si128.m128i_i32[0], v5, v14);
  }
  if ( ptr != v18 )
    free(ptr);
  return a1;
}

