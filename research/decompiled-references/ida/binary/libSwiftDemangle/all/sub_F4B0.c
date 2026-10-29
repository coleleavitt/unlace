unsigned __int64 __fastcall sub_F4B0(_QWORD *a1, __int16 a2)
{
  unsigned __int64 v2; // rax
  const char *v4; // rdx
  unsigned __int64 v5; // rax

  v2 = a1[9];
  if ( v2 >= a1[8] )
  {
    --v2;
LABEL_4:
    a1[9] = v2;
    return 0;
  }
  else
  {
    a1[9] = v2 + 1;
    switch ( *(_BYTE *)(a1[7] + v2) )
    {
      case 'b':
        v4 = "@inout_aliasable";
        break;
      case 'c':
        v4 = "@in_constant";
        break;
      case 'e':
        v4 = "@deallocating";
        break;
      case 'g':
        v4 = "@guaranteed";
        break;
      case 'i':
        v4 = (const char *)&unk_385C4;
        break;
      case 'l':
        v4 = "@inout";
        break;
      case 'm':
        v4 = "@pack_inout";
        break;
      case 'n':
        v4 = "@in_guaranteed";
        break;
      case 'p':
        v4 = "@pack_guaranteed";
        break;
      case 'v':
        v4 = "@pack_owned";
        break;
      case 'x':
        v4 = "@owned";
        break;
      case 'y':
        v4 = "@unowned";
        break;
      default:
        goto LABEL_4;
    }
    v5 = sub_C650(a1, 103, v4);
    return sub_CD20(a1, a2, v5);
  }
}

