__int64 __fastcall sub_36E6C0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-F8h] BYREF
  char v5; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v6[4]; // [rsp+D8h] [rbp-20h] BYREF

  v6[0] = __readfsqword(0x28u);
  v4[0] = -1;
  v4[2] = 0;
  v4[1] = 0xFFFFFFFFLL;
  v2 = &v5;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 24;
    *((_WORD *)v2 - 11) = 0;
    *((_WORD *)v2 - 10) = 0;
    *((_DWORD *)v2 - 1) = 0;
    *((_WORD *)v2 - 9) = 0;
    *((_QWORD *)v2 - 2) = 0;
    *((_DWORD *)v2 - 2) = 0;
  }
  while ( v6 != (_QWORD *)v2 );
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD *, _QWORD, _QWORD *, _QWORD, _QWORD, _QWORD))decode_insn)(
                       v4,
                       *(unsigned int *)(a1 + 8),
                       v6,
                       0,
                       0,
                       0) )
    ((void (__fastcall *)(_QWORD *, __int64))sub_7AF7C0)(v4, a2);
  else
    *(_DWORD *)(a2 + 8) = 0;
  return 0;
}

