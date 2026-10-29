unsigned __int64 __fastcall sub_3DDB30(_QWORD *a1, unsigned int a2, char a3)
{
  unsigned int v4; // ebx
  char v5; // cl
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+0h] [rbp-38h] BYREF
  char v11; // [rsp+4h] [rbp-34h]
  unsigned __int64 v12; // [rsp+8h] [rbp-30h]
  __int64 v13; // [rsp+10h] [rbp-28h]
  int v14; // [rsp+18h] [rbp-20h]
  int v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+28h] [rbp-10h]
  __int64 v17; // [rsp+30h] [rbp-8h]

  v12 = __readfsqword(0x28u);
  v10 = -1;
  v11 = 0;
  sub_3DD450(a1, (__int64)&v10, a2);
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
         || (v4 & ~(-1 << (sub_615160(*a1, 3, 4) + 3))) == 0
         && (sub_3B9AA0((__int64)a1, v4, 4) & 0xC000) != 0
         && (unsigned int)is_align_insn(a2)) )
      {
        break;
      }
      v5 = 1;
LABEL_6:
      sub_3DCE60(a1, a2, v4, v5);
      v4 = v10;
LABEL_7:
      if ( a2 < v4 && v4 - a2 <= 0x3F && v11 == 21 && v4 == (unsigned int)sub_3BCF60((__int64)a1, a2) )
        sub_3DC190(a1, (__int64)&v10, a2);
      else
        sub_3DC350(a1, (unsigned int *)&v10, a2);
      v4 = v10;
      if ( v10 == -1 )
        return v12 - __readfsqword(0x28u);
    }
    sub_3DD9F0(a1, a2, v4, v7, v8, v9, v10, v12, v13, v14, v15, v16, v17);
LABEL_15:
    v5 = 0;
    goto LABEL_6;
  }
  return v12 - __readfsqword(0x28u);
}

