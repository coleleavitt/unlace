__int64 __fastcall sub_57AE80(_QWORD *a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v4; // r14
  __int64 v5; // r9
  char *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 i; // r13
  __int128 v11; // [rsp+0h] [rbp-1C8h]
  __int64 v12; // [rsp+10h] [rbp-1B8h]
  __int64 v13; // [rsp+18h] [rbp-1B0h]
  __int128 v14; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-198h]
  __int64 v16; // [rsp+38h] [rbp-190h]
  __int64 v17; // [rsp+40h] [rbp-188h]
  char v18; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v19[8]; // [rsp+188h] [rbp-40h] BYREF

  v19[0] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[2] + 12LL) & 0x10) == 0 )
    return 0;
  v2 = sub_631C90(*a1, 11, 4);
  if ( !(_BYTE)v2 )
    return 0;
  if ( (sub_3BE900(a1, a2, 4) & 0x600) != 0x200 )
    return 0;
  v4 = sub_3C2650(a1, a2);
  if ( (~((unsigned __int16)sub_3BE900(a1, v4, 4) >> 8) & 6) != 0 )
    return 0;
  sub_6335B0(*a1, 11, 4, 0);
  v15 = -1;
  v6 = &v18;
  v14 = -1;
  v7 = v19;
  v16 = 0;
  v17 = 0;
  do
  {
    v8 = 0;
    v9 = 0;
    *(_WORD *)v6 = 0;
    v6 += 40;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( v19 != (_QWORD *)v6 );
  for ( i = v4; i < a2; i += WORD1(v16) )
  {
    if ( (int)decode_insn(&v14, i, v7, v8, v9, v5, 0.0) <= 0 )
      break;
  }
  sub_6335B0(*a1, 11, 4, 1);
  if ( a2 == i )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    sub_3D19E0((_DWORD)a1, v4);
    auto_mark_range(v4, v4 + 1, 20);
  }
  else
  {
    return 0;
  }
  return v2;
}
