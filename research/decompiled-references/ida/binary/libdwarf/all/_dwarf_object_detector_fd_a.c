__int64 __fastcall dwarf_object_detector_fd_a(
        __int64 fd,
        _DWORD *a2,
        int *a3,
        int *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int *a7)
{
  int v10; // eax
  unsigned int v11; // r10d
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  unsigned __int64 v22; // rbp
  __int16 v23; // ax
  int v24; // eax
  void (__fastcall *v25)(unsigned __int64 *, char *, __int64); // [rsp+0h] [rbp-118h]
  int v27; // [rsp+10h] [rbp-108h]
  unsigned __int64 v28; // [rsp+38h] [rbp-E0h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-D0h] BYREF
  _BYTE v31[32]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int8 buf; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int8 v33; // [rsp+71h] [rbp-A7h]
  unsigned __int8 v34; // [rsp+72h] [rbp-A6h]
  unsigned __int8 v35; // [rsp+73h] [rbp-A5h]
  char v36; // [rsp+74h] [rbp-A4h]
  char v37; // [rsp+75h] [rbp-A3h]
  char v38; // [rsp+76h] [rbp-A2h]
  __int16 v39[30]; // [rsp+90h] [rbp-88h] BYREF
  char v40[8]; // [rsp+CCh] [rbp-4Ch] BYREF
  _BYTE v41[4]; // [rsp+D4h] [rbp-44h] BYREF
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v28 = 0;
  if ( (unsigned int)_dwarf_seekr(fd, 0, 2, &v28) )
    goto LABEL_14;
  if ( v28 <= 0x18 )
  {
    v10 = 423;
    goto LABEL_12;
  }
  if ( a5 >= v28 )
  {
LABEL_14:
    v10 = 418;
    goto LABEL_12;
  }
  v10 = 423;
  if ( v28 - a5 <= 0x18 )
  {
LABEL_12:
    *a7 = v10;
    return 1;
  }
  _dwarf_object_read_random(fd, &buf);
  v11 = 0;
  if ( buf == 127 )
  {
    v12 = 0;
    if ( v33 == 69 && v34 == 76 && v35 == 70 )
    {
      if ( v36 == 1 )
      {
        v18 = 32;
      }
      else
      {
        if ( v36 != 2 )
        {
          v10 = 420;
          goto LABEL_12;
        }
        v18 = 64;
      }
      if ( v37 == 1 )
      {
        v19 = 2;
      }
      else
      {
        if ( v37 != 2 )
        {
          v10 = 421;
          goto LABEL_12;
        }
        v19 = 1;
      }
      if ( v38 != 1 )
      {
        v10 = 422;
        goto LABEL_12;
      }
      *a3 = v19;
      *a4 = v18;
      v13 = v28;
      *a2 = 1;
      goto LABEL_10;
    }
LABEL_7:
    while ( *(&buf + v12) == *((_BYTE *)&qword_A6378 + v12) )
    {
      if ( ++v12 == 8 )
      {
        *a2 = 4;
        v13 = v28;
        goto LABEL_10;
      }
    }
    v29 = 0;
    v22 = v28;
    if ( v28 > 0x57 )
    {
      if ( (unsigned int)_dwarf_object_read_random(fd, v39) )
        return (unsigned int)-1;
      v23 = __ROL2__(v39[0], 8);
      if ( v23 == 23117 )
      {
        v27 = 1;
        v25 = (void (__fastcall *)(unsigned __int64 *, char *, __int64))dwarf_memcpy_swap_bytes;
      }
      else
      {
        if ( v23 != 19802 )
        {
LABEL_50:
          *a7 = 412;
          return (unsigned int)-1;
        }
        v27 = 2;
        v25 = (void (__fastcall *)(unsigned __int64 *, char *, __int64))dwarf_memcpy_noswap_bytes;
      }
      v29 = 0;
      v25(&v29, v40, 4);
      if ( v22 >= v29 && v22 >= v29 + 24 )
      {
        if ( !(unsigned int)_dwarf_object_read_random(fd, v41) )
        {
          v30 = 0;
          v25((unsigned __int64 *)&v30, v41, 4);
          if ( v30 != 17744 )
            goto LABEL_50;
          if ( !(unsigned int)_dwarf_object_read_random(fd, v31) )
          {
            v30 = 0;
            v25((unsigned __int64 *)&v30, v31, 2);
            v11 = 0;
            if ( v30 == 512 || v30 == 34404 )
            {
              v24 = 64;
            }
            else
            {
              if ( v30 != 332 )
              {
                *a7 = 429;
                return (unsigned int)-1;
              }
              v24 = 32;
            }
            *a4 = v24;
            *a3 = v27;
            v13 = v28;
            *a2 = 3;
            goto LABEL_10;
          }
        }
        return (unsigned int)-1;
      }
    }
    *a7 = 423;
    return (unsigned int)-1;
  }
  v15 = ((((v33 | ((unsigned __int64)buf << 8)) << 8) | v34) << 8) | v35;
  switch ( v15 )
  {
    case 0xCAFEBABEuLL:
      v16 = 32;
      v17 = 1;
      break;
    case 0xBEBAFECAuLL:
      v16 = 32;
      v17 = 2;
      break;
    case 0xCAFEBABFuLL:
      v16 = 64;
      v17 = 1;
      break;
    case 0xBFBAFECAuLL:
      v16 = 64;
      v17 = 2;
      break;
    default:
      switch ( v15 )
      {
        case 0xFEEDFACEuLL:
          v20 = 32;
          v21 = 1;
          break;
        case 0xCEFAEDFEuLL:
          v20 = 32;
          v21 = 2;
          break;
        case 0xFEEDFACFuLL:
          v20 = 64;
          v21 = 1;
          break;
        case 0xCFFAEDFEuLL:
          v20 = 64;
          v21 = 2;
          break;
        default:
          v12 = 0;
          goto LABEL_7;
      }
      *a3 = v21;
      *a4 = v20;
      v13 = v28;
      *a2 = 2;
      goto LABEL_10;
  }
  *a3 = v17;
  *a4 = v16;
  v13 = v28;
  *a2 = 5;
LABEL_10:
  *a6 = v13;
  return v11;
}

