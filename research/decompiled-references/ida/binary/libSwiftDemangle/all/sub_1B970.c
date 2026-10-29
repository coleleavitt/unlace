unsigned __int64 __fastcall sub_1B970(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  bool v3; // dl
  char *v5; // rdx
  char v6; // si
  char v7; // cl
  bool v8; // zf
  bool v9; // r8
  __int16 v10; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 32);
  if ( !v1
    || (v5 = *(char **)(a1 + 24),
        v6 = *v5,
        *(_QWORD *)(a1 + 32) = v1 - 1,
        *(_QWORD *)(a1 + 24) = v5 + 1,
        LOBYTE(v10) = v6,
        v1 == 1) )
  {
    v2 = 0;
    v3 = 0;
  }
  else
  {
    v7 = v5[1];
    *(_QWORD *)(a1 + 24) = v5 + 2;
    HIBYTE(v10) = v7;
    v8 = v10 == 27745;
    *(_QWORD *)(a1 + 32) = v1 - 2;
    if ( v8 )
    {
      v2 = 0;
      v3 = 1;
    }
    else
    {
      switch ( v10 )
      {
        case 24931:
          v2 = 1;
          v3 = 1;
          break;
        case 24948:
          v2 = 2;
          v3 = 1;
          break;
        case 25956:
          v2 = 3;
          v3 = 1;
          break;
        case 30840:
          v2 = 4;
          v3 = 1;
          break;
        case 22616:
          v2 = 5;
          v3 = 1;
          break;
        case 30808:
          v2 = 6;
          v3 = 1;
          break;
        default:
          if ( sub_1AAC0(&v10, 2, "CP", 2u) )
          {
            v2 = 7;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, "Cp", 2u) )
          {
            v2 = 8;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, "cp", 2u) )
          {
            v2 = 9;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, "Tk", 2u) )
          {
            v2 = 10;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, "tk", 2u) )
          {
            v2 = 11;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, "pr", 2u) )
          {
            v2 = 12;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, &unk_38000, 2u) )
          {
            v2 = 13;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, &unk_38003, 2u) )
          {
            v2 = 14;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, &unk_38006, 2u) )
          {
            v2 = 15;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, &unk_38009, 2u) )
          {
            v2 = 16;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, &unk_3800C, 2u) )
          {
            v2 = 17;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, &unk_3800F, 2u) )
          {
            v2 = 18;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, &unk_38012, 2u) )
          {
            v2 = 19;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, "up", 2u) )
          {
            v2 = 20;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, &unk_38015, 2u) )
          {
            v2 = 21;
            v3 = 1;
          }
          else if ( sub_1AAC0(&v10, 2, "et", 2u) )
          {
            v2 = 22;
            v3 = 1;
          }
          else
          {
            v9 = sub_1AAC0(&v10, 2, "st", 2u);
            v2 = v9 ? 0x17 : 0;
            v3 = v9;
          }
          break;
      }
    }
  }
  return ((unsigned __int64)v3 << 32) | v2;
}

