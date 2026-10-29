unsigned __int64 __fastcall sub_8E320(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // rsi
  _DWORD _0[4]; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars10; // [rsp+10h] [rbp+10h]
  unsigned __int64 vars58; // [rsp+58h] [rbp+58h]

  v6 = *(_QWORD *)(a1 + 8);
  vars58 = __readfsqword(0x28u);
  sub_168770((unsigned int)_0, v6, 0, a4, a5, a6, _0[0], _0[2], vars10);
  if ( !*(_BYTE *)(a1 + 21) )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0, 1);
  sub_16C9F0(_0);
  return vars58 - __readfsqword(0x28u);
}

