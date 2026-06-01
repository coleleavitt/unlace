__int64 __fastcall sub_6927C0(__int64 a1, __int64 a2, __m128 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // rsi
  __int64 v7; // rcx
  _BYTE v8[8]; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v9[168]; // [rsp+10h] [rbp-A8h] BYREF

  sub_11C7890(a1 + 96);
  v3 = *(_QWORD *)(a1 + 4408);
  result = *(unsigned int *)(a1 + 4456);
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 - 4);
    if ( !(_DWORD)result || (_DWORD)result == v5 )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( (_DWORD)result )
  {
LABEL_9:
    sub_692550(a1, a3);
    v7 = *(_QWORD *)(a1 + 4408);
    result = *(unsigned int *)(a1 + 4456);
    v5 = 0;
    if ( v7 )
      v5 = *(_DWORD *)(v7 - 4);
LABEL_4:
    if ( v5 != (_DWORD)result )
      return result;
  }
  if ( !*(_BYTE *)(a1 + 4808) )
  {
    sub_7811A0(v8, a2);
    sub_68D0B0(*(void (****)(void))(a1 + 4760));
    v6 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 4760) = 0;
    sub_ED2A30(v9, v6, 0, 1, 0);
    sub_782860((unsigned int)v8, a1 + 96, a1 + 4480, a1 + 4392, (unsigned int)v9, a1 + 4752);
    sub_2FCDE0((__int64 *)(a1 + 4816));
    sub_ED6190(v9, a1 + 4816);
    *(_BYTE *)(a1 + 4808) = 1;
    return sub_ED44E0(v9);
  }
  return result;
}

