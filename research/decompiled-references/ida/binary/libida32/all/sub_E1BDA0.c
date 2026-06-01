_DWORD *__fastcall sub_E1BDA0(__int64 a1, __int64 a2, char a3)
{
  _DWORD *result; // rax
  __int64 (*v5)(); // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // r9
  __int64 v13[4]; // [rsp+8h] [rbp-20h] BYREF

  result = (_DWORD *)sub_E19D20((__int64 *)a1, a2);
  if ( !(_BYTE)result )
  {
    v5 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
    if ( v5 == sub_9DD400 )
      v6 = sub_B4CD20(a2);
    else
      v6 = ((__int64 (__fastcall *)(__int64))v5)(a2);
    result = (_DWORD *)sub_E19470(a1, v6);
    if ( !(_BYTE)result )
    {
      result = (_DWORD *)sub_E2DBE0(a1, a2, 0);
      if ( !a3 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
        v8 = *(_DWORD *)(a1 + 40);
        v13[0] = v7;
        *(_DWORD *)(a1 + 40) = v8 + 1;
        result = sub_E177B0(a1 + 232, v13, v9, v10, v11, v12);
        *result = v8;
      }
    }
  }
  return result;
}

