__int64 __fastcall sub_561540(_QWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned int v4; // r14d
  __int64 v5; // r9
  _QWORD *v6; // rdx
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int i; // r13d
  __int128 v11; // [rsp+0h] [rbp-138h]
  __int64 v12; // [rsp+10h] [rbp-128h]
  __int64 v13; // [rsp+18h] [rbp-120h]
  __int64 v14; // [rsp+20h] [rbp-118h] BYREF
  __int64 v15; // [rsp+28h] [rbp-110h]
  __int64 v16; // [rsp+30h] [rbp-108h]
  char v17; // [rsp+38h] [rbp-100h] BYREF
  _QWORD v18[8]; // [rsp+F8h] [rbp-40h] BYREF

  v18[0] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1[2] + 12LL) & 0x10) == 0 )
    return 0;
  v2 = sub_615160(*a1, 11, 4);
  if ( !(_BYTE)v2 )
    return 0;
  if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x600) != 0x200 )
    return 0;
  v4 = sub_3BD5D0((__int64)a1, a2);
  if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, v4, 4) >> 8) & 6) != 0 )
    return 0;
  sub_616920(*a1, 11, 4, 0);
  v14 = -1;
  v6 = v18;
  v16 = 0;
  v15 = 0xFFFFFFFFLL;
  v7 = &v17;
  do
  {
    v8 = 0;
    v9 = 0;
    *(_WORD *)v7 = 0;
    v7 += 24;
    *((_WORD *)v7 - 11) = 0;
    *((_WORD *)v7 - 10) = 0;
    *((_DWORD *)v7 - 1) = 0;
    *((_WORD *)v7 - 9) = 0;
    *((_QWORD *)v7 - 2) = 0;
    *((_DWORD *)v7 - 2) = 0;
  }
  while ( v18 != (_QWORD *)v7 );
  for ( i = v4; i < a2; i += HIWORD(v15) )
  {
    if ( (int)decode_insn(&v14, i, v6, v8, v9, v5) <= 0 )
      break;
  }
  sub_616920(*a1, 11, 4, 1);
  if ( a2 == i )
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    sub_3CC010((_DWORD)a1, v4, 4);
    auto_mark_range(v4, v4 + 1, 20);
  }
  else
  {
    return 0;
  }
  return v2;
}

