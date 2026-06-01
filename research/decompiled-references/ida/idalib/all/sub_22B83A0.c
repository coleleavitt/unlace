unsigned __int64 __fastcall sub_22B83A0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // al
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  char v8; // al
  char v9; // al
  unsigned __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]

  switch ( *(_DWORD *)(a1 + 44) )
  {
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1D:
    case 0x1E:
    case 0x1F:
      v6 = sub_22B7B00(a1);
      v10 = v6;
      v11 = v7;
      if ( (unsigned int)v6 <= 2 )
      {
        result = sub_2257B10((__int64)&v10, (int)v6 + 16);
      }
      else
      {
        if ( (_DWORD)v6 == 3 )
          goto LABEL_3;
        v8 = sub_22B82D0(31, (unsigned int *)&v10);
        result = sub_22B8130(31, (int *)&v10, v8);
      }
      break;
    case 1:
    case 9:
      result = 5;
      break;
    case 5:
    case 0x1B:
      v3 = sub_22B7B00(a1);
      v10 = v3;
      v11 = v4;
      if ( (_DWORD)v3 )
      {
        if ( (_DWORD)v3 == 19 )
          goto LABEL_3;
        v5 = sub_22B82D0(5, (unsigned int *)&v10);
        result = sub_22B8130(5, (int *)&v10, v5);
      }
      else
      {
        result = 2LL * (*(_DWORD *)(a1 + 32) == 3) + 5;
      }
      break;
    case 0x1C:
      v10 = sub_22B7B00(a1);
      v11 = v1;
      if ( (_DWORD)v10 == 12 )
      {
LABEL_3:
        result = 26;
      }
      else
      {
        v9 = sub_22B82D0(28, (unsigned int *)&v10);
        result = sub_22B8130(28, (int *)&v10, v9);
      }
      break;
  }
  return result;
}
