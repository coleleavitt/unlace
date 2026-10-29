__int64 __fastcall sub_3E3E80(_QWORD *a1, __int64 a2)
{
  char v2; // al
  bool v3; // zf
  unsigned __int64 v4; // rdx
  char v5; // r13
  bool v6; // al
  unsigned __int64 v8; // [rsp+0h] [rbp-58h] BYREF
  char v9; // [rsp+8h] [rbp-50h]
  __int128 v10; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  while ( 1 )
  {
    v2 = *(_BYTE *)(a2 + 17);
    v3 = *(_BYTE *)(a2 + 16) == 0;
    v8 = *(_QWORD *)(a2 + 8);
    v4 = *(_QWORD *)a2;
    v9 = v2;
    if ( !v3 )
      break;
    if ( !(unsigned __int8)sub_410770(a1, &v8, v4) )
      return 0;
LABEL_7:
    v5 = *(_BYTE *)(a2 + 19);
    *(_QWORD *)(a2 + 8) = v8;
    v6 = (v9 & 0x20) != 0;
    *(_BYTE *)(a2 + 17) = v9 & 0x1F;
    *(_BYTE *)(a2 + 18) = v6;
    if ( (v5 & 0x18) != 0 )
    {
      v10 = 0;
      getinf_buf(26, &v10, 16);
      if ( (v8 >= (unsigned __int64)v10 && v8 < *((_QWORD *)&v10 + 1)) != ((v5 & 0x10) != 0) )
        continue;
    }
    return 1;
  }
  if ( (unsigned __int8)sub_3E3220(a1, (__int64)&v8, v4) )
    goto LABEL_7;
  if ( (*(_BYTE *)(a2 + 19) & 4) == 0 && (unsigned __int8)sub_40F780(a1, &v8) )
  {
    *(_BYTE *)(a2 + 16) = 0;
    goto LABEL_7;
  }
  return 0;
}
