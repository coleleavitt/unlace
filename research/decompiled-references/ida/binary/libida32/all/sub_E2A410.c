_DWORD *__fastcall sub_E2A410(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  unsigned __int64 v7; // rbp
  _DWORD *result; // rax
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  int v12; // ebp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // r9
  __int64 v17[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  result = (_DWORD *)sub_E19D20((__int64 *)a1, a2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !(_BYTE)result )
  {
    v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 32LL))(v7);
    result = (_DWORD *)sub_E19470(a1, v9);
    if ( !(_BYTE)result )
    {
      v10 = *(_BYTE *)(v7 + 28) & 0x7F;
      if ( v10 == 68 )
      {
        sub_E146C0((__int64 *)(a1 + 8), (_DWORD *)(a1 + 36), *(_DWORD *)(v7 + 64) & 0xFFFFF, *(_WORD *)(v7 + 66) >> 4);
      }
      else if ( ((v10 + 55) & 0x7Fu) > 1 )
      {
        sub_E2A160((__int64 *)a1, *(_QWORD *)(v7 + 48) | a2 & 7, a3, a4, a5);
      }
      else
      {
        sub_E2A160((__int64 *)a1, a2, a3, a4, a5);
      }
      v11 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 32LL))(v7);
      v12 = *(_DWORD *)(a1 + 40);
      v17[0] = v11;
      *(_DWORD *)(a1 + 40) = v12 + 1;
      result = sub_E177B0(a1 + 232, v17, v13, v14, v15, v16);
      *result = v12;
    }
  }
  return result;
}

