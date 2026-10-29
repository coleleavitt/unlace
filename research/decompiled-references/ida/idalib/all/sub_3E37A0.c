unsigned __int64 __fastcall sub_3E37A0(_QWORD *a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v4; // rbx
  char v5; // cl
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  int v11; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  v10 = -1;
  LOBYTE(v11) = 0;
  sub_3E3030(a1, (__int64)&v10, a2);
  v4 = v10;
  if ( v10 != -1 )
  {
    while ( 1 )
    {
      if ( (v11 & 0x20) != 0 )
        goto LABEL_7;
      if ( !a3 )
        goto LABEL_15;
      if ( (v11 & 0x1F) == 0x15
        && ((unsigned __int8)is_public_name(v4)
         || (v4 & ~(-1LL << ((unsigned __int8)sub_631C90(*a1, 3, 4) + 3))) == 0
         && (sub_3BE900(a1, v4, 4) & 0xC000) != 0
         && (unsigned int)is_align_insn(a2)) )
      {
        break;
      }
      v5 = 1;
LABEL_6:
      sub_3E2A00(a1, a2, (void *)v4, v5);
      v4 = v10;
LABEL_7:
      if ( a2 < v4 && v4 - a2 <= 0x3F && (_BYTE)v11 == 21 && v4 == sub_3C1F00(a1, a2) )
        sub_3E1CA0(a1, (__int64)&v10, a2);
      else
        sub_3E1E80(a1, &v10, a2);
      v4 = v10;
      if ( v10 == -1 )
        return v13 - __readfsqword(0x28u);
    }
    sub_3E3650(a1, a2, v4, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16);
LABEL_15:
    v5 = 0;
    goto LABEL_6;
  }
  return v13 - __readfsqword(0x28u);
}
