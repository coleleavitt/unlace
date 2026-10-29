_BYTE *__fastcall sub_E33550(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  _BYTE *v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdi
  _BYTE *result; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  __int64 v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = sub_E195F0(*a1, a2);
  if ( (*(_BYTE *)(v8 + 8) & 0x7F) == 0 || (*(_BYTE *)(v8 + 8) & 0x7F) == 0x18 && sub_E19A80(a1, v8) )
  {
    sub_E2A410((__int64)a1, a2, v8, 0, a5);
    v15 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    v16 = v15;
    if ( v15 && (*(_BYTE *)(v15 + 28) & 0x7Fu) - 68 >= 7 )
      v16 = 0;
    sub_EFED60(v17, v16);
    return sub_E2AF60(a1, v17[0], a3, a4);
  }
  else
  {
    v9 = a1[1];
    v10 = *(_BYTE **)(v9 + 32);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(v9 + 24) )
    {
      sub_2257CD0(v9, 78);
    }
    else
    {
      *(_QWORD *)(v9 + 32) = v10 + 1;
      *v10 = 78;
    }
    sub_E2C5A0((__int64)a1, a2, *(double *)a5.m128_u64, 0, 0);
    v11 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    v12 = v11;
    if ( v11 && (*(_BYTE *)(v11 + 28) & 0x7Fu) - 68 >= 7 )
      v12 = 0;
    sub_EFED60(v17, v12);
    sub_E2AF60(a1, v17[0], a3, a4);
    v13 = a1[1];
    result = *(_BYTE **)(v13 + 32);
    if ( (unsigned __int64)result >= *(_QWORD *)(v13 + 24) )
    {
      return (_BYTE *)sub_2257CD0(v13, 69);
    }
    else
    {
      *(_QWORD *)(v13 + 32) = result + 1;
      *result = 69;
    }
  }
  return result;
}

