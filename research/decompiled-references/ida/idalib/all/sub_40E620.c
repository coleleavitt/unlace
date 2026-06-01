__int64 __fastcall sub_40E620(_QWORD *a1, unsigned __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v5; // r12
  int v6; // eax
  __int128 v7; // [rsp+0h] [rbp-58h]
  __int64 v8; // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v2 = sub_3BE900(a1, a2, 4);
  v3 = v2 & 0x600;
  if ( v3 == 512 )
  {
    v5 = sub_3C2650(a1, a2);
    v6 = sub_3BE900(a1, v5, 4);
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
  sub_3D19E0((_DWORD)a1, a2);
  sub_4F3480(a1, v5, 4);
  return 1;
}
