__int64 __fastcall sub_1015EE0(__int64 a1)
{
  bool v2; // cc
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  char v6; // al
  unsigned int v7; // edx
  __int128 v9; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v10[3]; // [rsp+10h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 260) <= 0x1Fu;
  v9 = 0;
  if ( !v2 )
    return 64;
  v3 = a1 + 216;
  switch ( *(_DWORD *)(a1 + 260) )
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
      return 64;
    case 1:
    case 9:
      *(_QWORD *)&v9 = 0x8000000E0000000ALL;
      break;
    case 5:
    case 0x1B:
      LODWORD(v9) = 12;
      break;
    case 0x1C:
      LODWORD(v9) = 5;
      break;
    case 0x1F:
      break;
  }
  v4 = sub_2293DC0(v3);
  v10[1] = v5;
  v10[0] = v4;
  v6 = sub_9E60E0((unsigned int *)v10, (unsigned int *)&v9);
  v7 = 64;
  if ( !v6 )
    return *(unsigned __int8 *)(a1 + 60);
  return v7;
}

