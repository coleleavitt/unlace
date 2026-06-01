unsigned __int64 __fastcall sub_F5F0(_QWORD *a1, __int16 a2)
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
      case 'a':
        v4 = "@autoreleased";
        break;
      case 'd':
        v4 = "@unowned";
        break;
      case 'k':
        v4 = "@pack_out";
        break;
      case 'o':
        v4 = "@owned";
        break;
      case 'r':
        v4 = "@out";
        break;
      case 'u':
        v4 = "@unowned_inner_pointer";
        break;
      default:
        goto LABEL_4;
    }
    v5 = sub_C650(a1, 103, v4);
    return sub_CD20(a1, a2, v5);
  }
}
