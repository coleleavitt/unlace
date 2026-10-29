__int64 __fastcall sub_22B82D0(int a1, unsigned int *a2)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v4[3]; // [rsp+10h] [rbp-18h] BYREF

  v3[0] = 26;
  v3[1] = 0;
  switch ( a1 )
  {
    case 5:
    case 27:
      v4[0] = 19;
      goto LABEL_3;
    case 9:
      v4[0] = 16;
      goto LABEL_3;
    case 28:
      v4[0] = 12;
      goto LABEL_3;
    case 31:
      v4[0] = 3;
LABEL_3:
      v4[1] = 0;
      if ( (unsigned __int8)sub_A09E20((unsigned int *)v4, a2) )
        result = (unsigned int)sub_A09E20(a2, (unsigned int *)v3) ^ 1;
      else
        result = 1;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
