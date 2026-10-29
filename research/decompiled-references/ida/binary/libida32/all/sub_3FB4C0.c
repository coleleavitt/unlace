__int64 __fastcall sub_3FB4C0(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v5; // r12d
  int v6; // eax
  __int128 v7; // [rsp+0h] [rbp-58h]
  __int64 v8; // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v2 = sub_3B9AA0(a1, a2, 4);
  v3 = v2 & 0x600;
  if ( v3 == 512 )
  {
    v5 = sub_3BD5D0(a1, a2);
    v6 = sub_3B9AA0(a1, v5, 4);
    if ( (v6 & 0x600) == 0x400 && (v6 & 0xF0000000) == 0xB0000000LL )
      goto LABEL_6;
    return 0;
  }
  if ( v3 != 1024 || (v2 & 0xF0000000) != 0xB0000000LL )
    return 0;
  v5 = a2;
LABEL_6:
  v7 = 0;
  v8 = 0;
  v9 = 0;
  sub_3CC010(a1, a2, 0);
  sub_4DBE60(a1, v5, 4);
  return 1;
}

