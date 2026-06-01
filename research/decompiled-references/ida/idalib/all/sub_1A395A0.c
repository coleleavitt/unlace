unsigned __int64 __fastcall sub_1A395A0(__int64 a1)
{
  char v2; // si
  __int64 v3; // rdi
  char v4; // dl
  int v5; // eax
  unsigned __int64 result; // rax
  int v7; // edx
  unsigned int v8; // esi
  unsigned int v9; // esi
  int v10; // eax
  const char *v11; // rax

  v2 = *(_BYTE *)(a1 + 160);
  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(_BYTE *)(*(_QWORD *)(v3 + 232) + 1LL) & 8;
  switch ( *(_DWORD *)(a1 + 152) )
  {
    case 0:
    case 5:
    case 9:
    case 0xA:
    case 0xC:
      v10 = -(v2 == 0);
      if ( v4 )
        v5 = (v10 & 0xFFFFF680) + 2490;
      else
        v5 = (v10 & 0xFFFFF800) + 2080;
      break;
    case 1:
      v5 = 2;
      if ( v4 )
        v5 = v2 == 0 ? 4 : 278;
      break;
    case 2:
      v5 = 1;
      break;
    case 3:
      v5 = v4 == 0 ? 8 : 42;
      break;
    case 4:
      v5 = 1024;
      break;
    case 6:
      v5 = 20;
      break;
    case 7:
      v5 = 16;
      break;
    case 8:
      v5 = 2986;
      break;
    case 0xB:
      v5 = 64;
      break;
    case 0xD:
      v5 = 4096;
      break;
    case 0xE:
      v5 = 0x2000;
      break;
    case 0xF:
      v5 = 638;
      break;
    default:
      v5 = 0;
      break;
  }
  *(_DWORD *)(a1 + 156) = v5;
  result = *(_QWORD *)(a1 + 120);
  v7 = result & 7;
  if ( v7 == 6 )
  {
    result = (unsigned int)(*(_DWORD *)(result & 0xFFFFFFFFFFFFFFF8LL) - 1);
    if ( (unsigned int)result > 3 )
      return result;
    sub_19A70B0(v3);
    result = *(_QWORD *)(a1 + 120);
    v7 = result & 7;
  }
  if ( !v7 )
  {
    result &= 0xFFFFFFFFFFFFFFF8LL;
    if ( result )
    {
      v8 = (unsigned __int16)(*(_DWORD *)result >> 9);
      if ( v8 > 0x23 && v8 != 65534 )
      {
        v9 = v8 - 36;
        if ( v9 )
        {
          v11 = (const char *)sub_FBD4B0(*(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 248LL) + 17520LL), v9);
          result = (unsigned __int64)strchr(v11, 102);
          if ( !result )
            *(_BYTE *)(a1 + 165) = 1;
        }
      }
    }
  }
  return result;
}
