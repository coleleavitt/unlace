__int64 __fastcall sandbox_check_common(
        _QWORD *a1,
        int a2,
        unsigned int *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8)
{
  __int64 v8; // x10
  __int64 v9; // x9
  unsigned int *v10; // x9
  unsigned int *v11; // x9
  _DWORD *v12; // x10
  __int64 *v13; // x9
  __int64 *v14; // x9
  unsigned int *v15; // x9
  __int64 **v16; // x9
  __int64 v18; // [xsp+0h] [xbp-30h] BYREF
  __int64 v19; // [xsp+8h] [xbp-28h] BYREF
  __int64 v20; // [xsp+10h] [xbp-20h]
  __int64 v21; // [xsp+18h] [xbp-18h] BYREF
  __int64 v22; // [xsp+20h] [xbp-10h]
  unsigned int *v23; // [xsp+28h] [xbp-8h]

  v23 = a3;
  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  *a1 = &v18;
  if ( (a2 & 0x40000000) != 0 )
  {
    a1[5] |= 1uLL;
    if ( (a2 & 0x20000000) == 0 )
    {
LABEL_3:
      if ( (a2 & 0x10000000) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (a2 & 0x20000000) == 0 )
  {
    goto LABEL_3;
  }
  a1[5] |= 2uLL;
  if ( (a2 & 0x10000000) == 0 )
  {
LABEL_4:
    if ( (a2 & 0x8000000) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  a1[5] |= 8uLL;
  if ( (a2 & 0x8000000) == 0 )
  {
LABEL_5:
    if ( (a2 & 0x4000000) == 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_13:
  a1[5] |= 0x10uLL;
  if ( (a2 & 0x4000000) != 0 )
LABEL_6:
    a1[5] |= 0x20uLL;
LABEL_7:
  if ( (a2 & 0x83FFFFFF) > 0x11 )
  {
LABEL_15:
    *__error() = 22;
    return 0xFFFFFFFFLL;
  }
  v8 = 240;
  v9 = 1;
  switch ( a2 & 0x83FFFFFF )
  {
    case 0u:
      a1[3] = 0;
      a1[4] = 0;
      goto LABEL_34;
    case 1u:
      goto LABEL_32;
    case 2u:
      v9 = 6;
      goto LABEL_32;
    case 3u:
      v9 = 7;
      goto LABEL_32;
    case 4u:
      v9 = 25;
      goto LABEL_32;
    case 5u:
      v9 = 27;
      goto LABEL_32;
    case 6u:
      v9 = 28;
      goto LABEL_32;
    case 7u:
      v9 = 33;
      goto LABEL_32;
    case 8u:
      v9 = 34;
      goto LABEL_32;
    case 9u:
      v10 = v23;
      v23 += 2;
      v21 = *(_QWORD *)v10;
      v23 = v10 + 4;
      v22 = (int)v10[2];
      a1[3] = 35;
      a1[4] = &v21;
      goto LABEL_34;
    case 0xAu:
      goto LABEL_30;
    case 0xBu:
      v11 = v23;
      v23 += 2;
      v12 = *(_DWORD **)v11;
      v23 = v11 + 4;
      v13 = *((__int64 **)v11 + 1);
      a1[3] = 241;
      LODWORD(v20) = *v12;
      v19 = *v13;
      v14 = &v19;
      break;
    case 0xCu:
      v9 = 50;
      goto LABEL_32;
    case 0xDu:
      v9 = 19;
      goto LABEL_32;
    case 0xEu:
      v8 = 65;
      goto LABEL_30;
    case 0xFu:
      v9 = 45;
      goto LABEL_32;
    case 0x10u:
      v8 = 75;
LABEL_30:
      a1[3] = v8;
      v15 = v23;
      v23 += 2;
      v14 = (__int64 *)*v15;
      break;
    case 0x11u:
      v9 = 5;
LABEL_32:
      a1[3] = v9;
      v16 = (__int64 **)v23;
      v23 += 2;
      v14 = *v16;
      break;
    default:
      goto LABEL_15;
  }
  a1[4] = v14;
LABEL_34:
  if ( (unsigned int)__mac_syscall("Sandbox", (char *)&dword_0 + 2, a1, a4, a5, a6, a7, a8) )
    return 0xFFFFFFFFLL;
  return v18 != 0;
}
