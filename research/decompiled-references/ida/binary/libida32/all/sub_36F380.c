__int64 __fastcall sub_36F380(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  _QWORD *v6; // rax
  __int64 v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v9[192]; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v10[4]; // [rsp+D8h] [rbp-20h] BYREF

  v3 = *(unsigned int *)(a1 + 8);
  v10[0] = __readfsqword(0x28u);
  if ( (~((unsigned __int16)get_flags_ex(v3, 4) >> 8) & 6) == 0 )
  {
    v8[0] = -1;
    v8[2] = 0;
    v8[1] = 0xFFFFFFFFLL;
    v6 = v9;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 3;
      *((_WORD *)v6 - 11) = 0;
      *((_WORD *)v6 - 10) = 0;
      *((_DWORD *)v6 - 1) = 0;
      *((_WORD *)v6 - 9) = 0;
      *(v6 - 2) = 0;
      *((_DWORD *)v6 - 2) = 0;
    }
    while ( v10 != v6 );
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD *, _QWORD, _QWORD, __int64))decode_insn)(
      v8,
      *(unsigned int *)(a1 + 8),
      v10,
      0,
      0,
      v4);
    *(_DWORD *)(a2 + 8) = -1;
    v7 = *(int *)(a1 + 40);
    if ( (unsigned int)v7 <= 7 )
      *(_DWORD *)(a2 + 8) = (unsigned __int8)v9[24 * v7 + 1];
  }
  return 0;
}

