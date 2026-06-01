unsigned __int64 __fastcall sub_598E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 v10; // [rsp+0h] [rbp-188h] BYREF
  __int64 v11; // [rsp+10h] [rbp-178h]
  __int64 v12; // [rsp+18h] [rbp-170h]
  __int64 v13; // [rsp+20h] [rbp-168h]
  _QWORD v14[10]; // [rsp+28h] [rbp-160h] BYREF
  char v15; // [rsp+79h] [rbp-10Fh]
  _QWORD v16[4]; // [rsp+168h] [rbp-20h] BYREF

  v16[0] = __readfsqword(0x28u);
  v6 = v14;
  v10 = -1;
  v11 = -1;
  v12 = 0;
  v13 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v16 != v6 );
  if ( *(_QWORD *)(a1 + 8) == a2 + 8
    && (unsigned int)decode_insn(&v10, a2, v16, 0, 0, a6, 0.0) == 4
    && (v14[0] & 0xFFFF00000000FF00LL) == 0xF000000000100LL
    && (v14[5] & 0xFFFF00000000FF00LL) == 0xF000000000100LL
    && v15
    && (unsigned int)decode_insn(&v10, a2 + 4, 0xF000000000100LL, 0xF000000000100LL, v8, v9, 0.0) == 4 )
  {
    *(_DWORD *)a1 |= 0x20u;
  }
  return v16[0] - __readfsqword(0x28u);
}
