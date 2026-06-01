/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D244
// Address: 0x0001D244

//----- (0001D244) --------------------------------------------------------
int __fastcall sub_1D244(int *a1)
{
  int v2; // r7
  int *v3; // r6
  int v4; // r7
  const char *v5; // r0
  const char *v6; // r0
  const char *v7; // r0
  int *v8; // r0
  _DWORD *v9; // r0
  bool v10; // zf
  int v11; // r1
  int v12; // r6
  const char *v13; // r4
  int v14; // r0
  int v15; // r0
  const char *v17; // r4
  const char *v18; // r4
  int *v19; // [sp+4h] [bp-3Ch]
  char *v20; // [sp+10h] [bp-30h]
  unsigned int v21; // [sp+14h] [bp-2Ch]
  int v22; // [sp+28h] [bp-18h] BYREF
  char *v23; // [sp+30h] [bp-10h] BYREF
  unsigned int v24; // [sp+34h] [bp-Ch]
  int v25; // [sp+38h] [bp-8h]

  if ( a1[199] )
    return 1;
  v2 = 0;
  if ( byte_DE2E8 == 1 )
  {
    v19 = a1 + 199;
    v24 = 0;
    v23 = nullptr;
    v25 = 0;
    qgetenv("IDA_LIBC_PATH", (int)&v23);
    v3 = (int *)a1[225];
    if ( v3 == a1 + 226 )
    {
LABEL_23:
      v12 = 1;
      v2 = 0;
      sub_64B30((int)a1, "DBG: /system/lib/libc.so is not loaded yet, use IDA_LIBC_PATH if necessary\n");
    }
    else
    {
      v20 = v23;
      v21 = v24;
      while ( 1 )
      {
        v4 = v3[8];
        v5 = &byte_B3CBE;
        if ( v4 )
          v5 = (const char *)v3[7];
        if ( !strcmp(v5, "/system/lib/libc.so") )
          break;
        v6 = &byte_B3CBE;
        if ( v4 )
          v6 = (const char *)v3[7];
        if ( !strcmp(v6, "/system/lib64/libc.so") )
          break;
        if ( v21 >= 2 )
        {
          v7 = v4 ? (const char *)v3[7] : &byte_B3CBE;
          if ( !strcmp(v7, v20) )
            break;
        }
        v8 = (int *)v3[1];
        if ( v8 )
        {
          do
          {
            v3 = v8;
            v8 = (int *)*v8;
          }
          while ( v8 );
        }
        else
        {
          v9 = v3 + 2;
          v10 = *(_DWORD *)v3[2] == (_DWORD)v3;
          v3 = (int *)v3[2];
          if ( !v10 )
          {
            do
            {
              v11 = *v9;
              v9 = (_DWORD *)(*v9 + 8);
              v3 = *(int **)(v11 + 8);
            }
            while ( *v3 != v11 );
          }
        }
        if ( v3 == a1 + 226 )
          goto LABEL_23;
      }
      v2 = 0;
      sub_64B30((int)a1, "DBG: checking pid %d with thread_db\n");
      a1[198] = a1[242];
      switch ( sub_19EFC((int)(a1 + 198), v19) )
      {
        case 0:
          v13 = "generic error";
          switch ( sub_1A25C(*v19, a1[242], &v22) )
          {
            case 0:
              v14 = sub_1A27E();
              if ( v14 )
              {
                v17 = "generic error";
                switch ( v14 )
                {
                  case 1:
                    break;
                  case 2:
                    v17 = "no thread to satisfy query";
                    break;
                  case 3:
                    v17 = "no sync handle to satisfy query";
                    break;
                  case 4:
                    v17 = "no LWP to satisfy query";
                    break;
                  case 5:
                    v17 = "invalid process handle";
                    break;
                  case 6:
                    v17 = "invalid thread handle";
                    break;
                  case 7:
                    v17 = "invalid synchronization handle";
                    break;
                  case 8:
                    v17 = "invalid thread agent";
                    break;
                  case 9:
                    v17 = "invalid key";
                    break;
                  case 10:
                    v17 = "no event message for getmsg";
                    break;
                  case 11:
                    v17 = "FPU register set not available";
                    break;
                  case 12:
                    v17 = "application not linked with libpthread";
                    break;
                  case 13:
                    v17 = "requested event is not supported";
                    break;
                  case 14:
                    v17 = "capability not available";
                    break;
                  case 15:
                    v17 = "debugger service failed";
                    break;
                  case 16:
                    v17 = "operation not applicable to";
                    break;
                  case 17:
                    v17 = "no thread-specific data for this thread";
                    break;
                  case 18:
                    v17 = "malloc failed";
                    break;
                  case 19:
                    v17 = "only part of register set was written/read";
                    break;
                  case 20:
                    v17 = "X register set not available for this thread";
                    break;
                  default:
                    v17 = (const char *)dword_DE2F0;
                    qsnprintf(dword_DE2F0, 64, "tdb error %d");
                    break;
                }
                sub_1C9E4("%s: %s\n", "td_thr_event_enable(TD_CREATE)", v17);
              }
              v15 = sub_1A0F2();
              if ( v15 )
              {
                v18 = "generic error";
                switch ( v15 )
                {
                  case 1:
                    break;
                  case 2:
                    v18 = "no thread to satisfy query";
                    break;
                  case 3:
                    v18 = "no sync handle to satisfy query";
                    break;
                  case 4:
                    v18 = "no LWP to satisfy query";
                    break;
                  case 5:
                    v18 = "invalid process handle";
                    break;
                  case 6:
                    v18 = "invalid thread handle";
                    break;
                  case 7:
                    v18 = "invalid synchronization handle";
                    break;
                  case 8:
                    v18 = "invalid thread agent";
                    break;
                  case 9:
                    v18 = "invalid key";
                    break;
                  case 10:
                    v18 = "no event message for getmsg";
                    break;
                  case 11:
                    v18 = "FPU register set not available";
                    break;
                  case 12:
                    v18 = "application not linked with libpthread";
                    break;
                  case 13:
                    v18 = "requested event is not supported";
                    break;
                  case 14:
                    v18 = "capability not available";
                    break;
                  case 15:
                    v18 = "debugger service failed";
                    break;
                  case 16:
                    v18 = "operation not applicable to";
                    break;
                  case 17:
                    v18 = "no thread-specific data for this thread";
                    break;
                  case 18:
                    v18 = "malloc failed";
                    break;
                  case 19:
                    v18 = "only part of register set was written/read";
                    break;
                  case 20:
                    v18 = "X register set not available for this thread";
                    break;
                  default:
                    v18 = (const char *)dword_DE2F0;
                    qsnprintf(dword_DE2F0, 64, "tdb error %d");
                    break;
                }
                sub_1C9E4("%s: %s\n", "td_ta_set_event", v18);
              }
              sub_1D060(a1, 0, (int)(a1 + 200));
              sub_64B30((int)a1, "DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n");
              sub_1CA94((int)a1);
              v12 = 0;
              goto LABEL_31;
            case 1:
              goto LABEL_55;
            case 2:
              v13 = "no thread to satisfy query";
              goto LABEL_55;
            case 3:
              v13 = "no sync handle to satisfy query";
              goto LABEL_55;
            case 4:
              v13 = "no LWP to satisfy query";
              goto LABEL_55;
            case 5:
              v13 = "invalid process handle";
              goto LABEL_55;
            case 6:
              v13 = "invalid thread handle";
              goto LABEL_55;
            case 7:
              v13 = "invalid synchronization handle";
              goto LABEL_55;
            case 8:
              v13 = "invalid thread agent";
              goto LABEL_55;
            case 9:
              v13 = "invalid key";
              goto LABEL_55;
            case 10:
              v13 = "no event message for getmsg";
              goto LABEL_55;
            case 11:
              v13 = "FPU register set not available";
              goto LABEL_55;
            case 12:
              v13 = "application not linked with libpthread";
              goto LABEL_55;
            case 13:
              v13 = "requested event is not supported";
              goto LABEL_55;
            case 14:
              v13 = "capability not available";
              goto LABEL_55;
            case 15:
              v13 = "debugger service failed";
              goto LABEL_55;
            case 16:
              v13 = "operation not applicable to";
              goto LABEL_55;
            case 17:
              v13 = "no thread-specific data for this thread";
              goto LABEL_55;
            case 18:
              v13 = "malloc failed";
              goto LABEL_55;
            case 19:
              v13 = "only part of register set was written/read";
              goto LABEL_55;
            case 20:
              v13 = "X register set not available for this thread";
              goto LABEL_55;
            default:
              v13 = (const char *)dword_DE2F0;
              qsnprintf(dword_DE2F0, 64, "tdb error %d");
LABEL_55:
              v12 = 1;
              sub_1BBA0((int)"%s: %s\n", "td_ta_map_lwp2thr", v13);
              break;
          }
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
          goto LABEL_30;
        default:
          qsnprintf(dword_DE2F0, 64, "tdb error %d");
LABEL_30:
          sub_64B30((int)a1, "DBG: td_ta_new: %s\n");
          *v19 = 0;
          v12 = 1;
          break;
      }
    }
LABEL_31:
    if ( v23 )
    {
      v24 = 0;
      qfree(v23);
      v25 = 0;
      v23 = nullptr;
    }
    if ( !v12 )
      return 1;
  }
  return v2;
}
// B3CBE: using guessed type char byte_B3CBE;
// DE2E8: using guessed type char byte_DE2E8;
// DE2F0: using guessed type int dword_DE2F0[16];
