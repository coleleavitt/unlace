unsigned __int64 __fastcall sub_E2C3F0(__int64 a1, __int64 a2, unsigned __int8 a3, double a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  _DWORD *v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // r9
  __int64 v20; // rax
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r14
  _DWORD *v23; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24[6]; // [rsp+8h] [rbp-30h] BYREF

  result = *(_BYTE *)(a2 + 8) & 0x7F;
  if ( (*(_BYTE *)(a2 + 8) & 0x7F) != 0 )
  {
    if ( !a3 || (unsigned __int8)result > 0x27u || (v5 = 0xFC00040100LL, !_bittest64(&v5, result)) )
    {
      v7 = sub_B68470(a2);
      result = sub_E19D20((__int64 *)a1, v7);
      if ( !(_BYTE)result )
      {
        v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
        result = sub_E19470(a1, v8);
        if ( !(_BYTE)result )
        {
          v23 = nullptr;
          v9 = sub_E14E30(v7, 0, (__int64 *)&v23);
          v11 = v9;
          if ( v9 )
          {
            sub_E2C5A0(a1, v9, v10, 0);
            v12 = v23;
            v13 = v11 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)(v13 + 28) & 0x7Fu) - 68 >= 7 )
              v13 = 0;
            a4 = sub_EFED60(v24, v13);
            sub_E2BEE0((__int64 *)a1, v24[0], v12);
          }
          else
          {
            v20 = sub_E14C00(a1, v7);
            v21 = v7 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v20 )
            {
              sub_E2C290(a1, v20, a3);
              sub_E292D0((__int64 *)a1, v7, *(_QWORD *)(v21 + 40), 0, 0, a4);
            }
            else
            {
              v22 = sub_E195F0(*(_QWORD *)a1, v7);
              a4 = sub_E2C3F0(a1, v22, a3);
              sub_E292D0((__int64 *)a1, v7, *(_QWORD *)(v21 + 40), v22, 0, a4);
            }
          }
          v14 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v7 + 32LL))(v7, a4);
          v15 = *(_DWORD *)(a1 + 40);
          v24[0] = v14;
          *(_DWORD *)(a1 + 40) = v15 + 1;
          result = (unsigned __int64)sub_E177B0(a1 + 232, v24, v16, v17, v18, v19);
          *(_DWORD *)result = v15;
        }
      }
    }
  }
  return result;
}

