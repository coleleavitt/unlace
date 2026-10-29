unsigned __int64 __fastcall sub_372000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int128 v9; // [rsp+0h] [rbp-188h] BYREF
  __int64 v10; // [rsp+10h] [rbp-178h]
  __int64 v11; // [rsp+18h] [rbp-170h]
  __int64 v12; // [rsp+20h] [rbp-168h]
  _BYTE v13[320]; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v14[4]; // [rsp+168h] [rbp-20h] BYREF

  v14[0] = __readfsqword(0x28u);
  v6 = v13;
  v9 = -1;
  v10 = -1;
  v11 = 0;
  v12 = 0;
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
  while ( v14 != v6 );
  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD *, _QWORD, _QWORD, __int64, double))decode_insn)(
    &v9,
    *(_QWORD *)(a1 + 8),
    v14,
    0,
    0,
    a6,
    0.0);
  *(_QWORD *)(a2 + 8) = -1;
  v7 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)v7 <= 7 )
    *(_QWORD *)(a2 + 8) = (unsigned __int8)v13[40 * (int)v7 + 1];
  return v14[0] - __readfsqword(0x28u);
}
