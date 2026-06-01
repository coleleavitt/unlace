_DWORD *__fastcall sub_E2C5A0(__int64 a1, __int64 a2, double a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int64 v6; // rbp
  _DWORD *result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // r9
  unsigned __int64 v15; // r14
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  result = (_DWORD *)sub_E19D20((__int64 *)a1, a2 & 0xFFFFFFFFFFFFFFF8LL);
  if ( !(_BYTE)result )
  {
    v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 32LL))(v6);
    result = (_DWORD *)sub_E19470(a1, v8);
    if ( !(_BYTE)result )
    {
      if ( (*(_BYTE *)(v6 + 28) & 0x7F) == 0x44 )
      {
        sub_E146C0((__int64 *)(a1 + 8), (_DWORD *)(a1 + 36), *(_DWORD *)(v6 + 64) & 0xFFFFF, *(_WORD *)(v6 + 66) >> 4);
      }
      else
      {
        v15 = sub_E195F0(*(_QWORD *)a1, v6);
        sub_E2C3F0(a1, v15, a5, a3);
        if ( ((*(_BYTE *)(v6 + 28) + 55) & 0x7Fu) > 1 )
          sub_E292D0(
            (__int64 *)a1,
            *(_QWORD *)(v6 + 48) | a2 & 7,
            *(_QWORD *)((*(_QWORD *)(v6 + 48) & 0xFFFFFFFFFFFFFFF8LL) + 40),
            v15,
            0,
            a3);
        else
          sub_E292D0((__int64 *)a1, a2, *(_QWORD *)(v6 + 40), v15, 0, a3);
      }
      v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 32LL))(v6);
      v10 = *(_DWORD *)(a1 + 40);
      v16[0] = v9;
      *(_DWORD *)(a1 + 40) = v10 + 1;
      result = sub_E177B0(a1 + 232, v16, v11, v12, v13, v14);
      *result = v10;
    }
  }
  return result;
}

