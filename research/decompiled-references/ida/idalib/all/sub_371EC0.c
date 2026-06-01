__int64 __fastcall sub_371EC0(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int128 v4; // [rsp+0h] [rbp-188h] BYREF
  __int64 v5; // [rsp+10h] [rbp-178h]
  __int64 v6; // [rsp+18h] [rbp-170h]
  __int64 v7; // [rsp+20h] [rbp-168h]
  char v8; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v9[4]; // [rsp+168h] [rbp-20h] BYREF

  v9[0] = __readfsqword(0x28u);
  v2 = &v8;
  v4 = -1;
  v5 = -1;
  v6 = 0;
  v7 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v9 != (_QWORD *)v2 );
  if ( (unsigned int)((__int64 (__fastcall *)(__int128 *, _QWORD, _QWORD *, double))decode_insn)(
                       &v4,
                       *(_QWORD *)(a1 + 8),
                       v9,
                       0.0) )
    ((void (__fastcall *)(__int128 *, __int64))sub_7D2C60)(&v4, a2);
  else
    *(_QWORD *)(a2 + 8) = 0;
  return 0;
}
