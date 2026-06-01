/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E9E0
// Address: 0x0001E9E0

//----- (0001E9E0) --------------------------------------------------------
bool __cdecl sub_1E9E0(int *a1)
{
  int *v2; // edi
  int v3; // esi
  const char *v4; // eax
  const char *v5; // eax
  const char *v6; // eax
  int *v7; // ecx
  int *v8; // eax
  int v9; // edi
  bool v10; // zf
  int v11; // edi
  int v12; // eax
  const char *v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // [esp+Ch] [ebp-50h]
  const char *v18; // [esp+14h] [ebp-48h]
  unsigned int v19; // [esp+18h] [ebp-44h]
  int v20; // [esp+30h] [ebp-2Ch] BYREF
  int v21; // [esp+38h] [ebp-24h] BYREF
  unsigned int v22; // [esp+3Ch] [ebp-20h]
  int v23; // [esp+40h] [ebp-1Ch]
  unsigned int v24; // [esp+48h] [ebp-14h]

  v24 = __readgsdword(0x14u);
  if ( a1[116] )
    return 1;
  if ( byte_13BCD8 != 1 )
    return 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  qgetenv("IDA_LIBC_PATH", (int)&v21);
  v2 = (int *)a1[139];
  if ( a1 + 140 == v2 )
  {
LABEL_24:
    v11 = 1;
    sub_8A3F0((int)a1, "DBG: /system/lib/libc.so is not loaded yet, use IDA_LIBC_PATH if necessary\n");
  }
  else
  {
    v17 = a1 + 116;
    v18 = (const char *)v21;
    v19 = v22;
    while ( 1 )
    {
      v3 = v2[8];
      v4 = byte_EF875;
      if ( v3 )
        v4 = (const char *)v2[7];
      if ( !strcmp(v4, "/system/lib/libc.so") )
        break;
      v5 = byte_EF875;
      if ( v3 )
        v5 = (const char *)v2[7];
      if ( !strcmp(v5, "/system/lib64/libc.so") )
        break;
      if ( v19 >= 2 )
      {
        v6 = v3 ? (const char *)v2[7] : byte_EF875;
        if ( !strcmp(v6, v18) )
          break;
      }
      v7 = (int *)v2[1];
      if ( v7 )
      {
        do
        {
          v8 = v7;
          v7 = (int *)*v7;
        }
        while ( v7 );
      }
      else
      {
        v8 = (int *)v2[2];
        if ( (int *)*v8 != v2 )
        {
          v9 = (int)(v2 + 2);
          do
          {
            v8 = *(int **)(*(_DWORD *)v9 + 8);
            v10 = *v8 == *(_DWORD *)v9;
            v9 = *(_DWORD *)v9 + 8;
          }
          while ( !v10 );
        }
      }
      v2 = v8;
      if ( a1 + 140 == v8 )
        goto LABEL_24;
    }
    sub_8A3F0((int)a1, "DBG: checking pid %d with thread_db\n", a1[156]);
    a1[115] = a1[156];
    v12 = sub_19710((int)(a1 + 115), v17);
    v13 = "generic error";
    switch ( v12 )
    {
      case 0:
        v14 = sub_19C60(a1[116], a1[156], &v20);
        switch ( v14 )
        {
          case 0:
            v15 = sub_19CD0();
            if ( v15 )
            {
              switch ( v15 )
              {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                  break;
                default:
                  qsnprintf(dword_13BCE0, 64, "tdb error %d", v15);
                  break;
              }
              sub_1DE10("%s: %s\n");
            }
            v16 = sub_19A20();
            if ( v16 )
            {
              switch ( v16 )
              {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                case 18:
                case 19:
                case 20:
                  break;
                default:
                  qsnprintf(dword_13BCE0, 64, "tdb error %d", v16);
                  break;
              }
              sub_1DE10("%s: %s\n");
            }
            sub_1E7F0(a1, 0, (int)(a1 + 117));
            sub_8A3F0((int)a1, "DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n", a1[117], a1[119]);
            sub_1DF10((int)a1);
            v11 = 0;
            break;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
            goto LABEL_56;
          default:
            qsnprintf(dword_13BCE0, 64, "tdb error %d", v14);
LABEL_56:
            v11 = 1;
            sub_1C900();
            break;
        }
        break;
      case 1:
        goto LABEL_50;
      case 2:
        v13 = "no thread to satisfy query";
        goto LABEL_50;
      case 3:
        v13 = "no sync handle to satisfy query";
        goto LABEL_50;
      case 4:
        v13 = "no LWP to satisfy query";
        goto LABEL_50;
      case 5:
        v13 = "invalid process handle";
        goto LABEL_50;
      case 6:
        v13 = "invalid thread handle";
        goto LABEL_50;
      case 7:
        v13 = "invalid synchronization handle";
        goto LABEL_50;
      case 8:
        v13 = "invalid thread agent";
        goto LABEL_50;
      case 9:
        v13 = "invalid key";
        goto LABEL_50;
      case 10:
        v13 = "no event message for getmsg";
        goto LABEL_50;
      case 11:
        v13 = "FPU register set not available";
        goto LABEL_50;
      case 12:
        v13 = "application not linked with libpthread";
        goto LABEL_50;
      case 13:
        v13 = "requested event is not supported";
        goto LABEL_50;
      case 14:
        v13 = "capability not available";
        goto LABEL_50;
      case 15:
        v13 = "debugger service failed";
        goto LABEL_50;
      case 16:
        v13 = "operation not applicable to";
        goto LABEL_50;
      case 17:
        v13 = "no thread-specific data for this thread";
        goto LABEL_50;
      case 18:
        v13 = "malloc failed";
        goto LABEL_50;
      case 19:
        v13 = "only part of register set was written/read";
        goto LABEL_50;
      case 20:
        v13 = "X register set not available for this thread";
        goto LABEL_50;
      default:
        v13 = (const char *)dword_13BCE0;
        qsnprintf(dword_13BCE0, 64, "tdb error %d", v12);
LABEL_50:
        sub_8A3F0((int)a1, "DBG: td_ta_new: %s\n", v13);
        *v17 = 0;
        v11 = 1;
        break;
    }
  }
  if ( v21 )
  {
    v22 = 0;
    qfree((void *)v21);
    v21 = 0;
    v23 = 0;
  }
  return !v11;
}
// 13BCD8: using guessed type char byte_13BCD8;
// 13BCE0: using guessed type int dword_13BCE0[10];
