/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AB44
// Address: 0x000000000003AB44

//----- (000000000003AB44) ----------------------------------------------------
void __fastcall sub_3AB44(__int64 a1)
{
  _DWORD *v2; // x0
  int v3; // w3
  const char *v4; // x20
  int v5; // w3
  const char *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x10
  char v9[16]; // [xsp+8h] [xbp-58h] BYREF
  int v10; // [xsp+18h] [xbp-48h]
  int v11; // [xsp+20h] [xbp-40h]
  __int64 v12; // [xsp+28h] [xbp-38h]
  __int64 v13; // [xsp+38h] [xbp-28h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_DWORD **)(a1 + 1528);
  if ( v2 )
  {
    v3 = sub_37C6C(v2);
    v4 = "generic error";
    switch ( v3 )
    {
      case 0:
        v5 = sub_37E48(v12, (__int64)v9);
        v6 = "generic error";
        switch ( v5 )
        {
          case 0:
            goto LABEL_44;
          case 1:
            goto LABEL_43;
          case 2:
            v6 = "no thread to satisfy query";
            goto LABEL_43;
          case 3:
            v6 = "no sync handle to satisfy query";
            goto LABEL_43;
          case 4:
            v6 = "no LWP to satisfy query";
            goto LABEL_43;
          case 5:
            v6 = "invalid process handle";
            goto LABEL_43;
          case 6:
            v6 = "invalid thread handle";
            goto LABEL_43;
          case 7:
            v6 = "invalid synchronization handle";
            goto LABEL_43;
          case 8:
            v6 = "invalid thread agent";
            goto LABEL_43;
          case 9:
            v6 = "invalid key";
            goto LABEL_43;
          case 10:
            v6 = "no event message for getmsg";
            goto LABEL_43;
          case 11:
            v6 = "FPU register set not available";
            goto LABEL_43;
          case 12:
            v6 = "application not linked with libpthread";
            goto LABEL_43;
          case 13:
            v6 = "requested event is not supported";
            goto LABEL_43;
          case 14:
            v6 = "capability not available";
            goto LABEL_43;
          case 15:
            v6 = "debugger service failed";
            goto LABEL_43;
          case 16:
            v6 = "operation not applicable to";
            goto LABEL_43;
          case 17:
            v6 = "no thread-specific data for this thread";
            goto LABEL_43;
          case 18:
            v6 = "malloc failed";
            goto LABEL_43;
          case 19:
            v6 = "only part of register set was written/read";
            goto LABEL_43;
          case 20:
            v6 = "X register set not available for this thread";
            goto LABEL_43;
          default:
            v6 = (const char *)qword_1669F8;
            qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v5);
LABEL_43:
            sub_39FA0((__int64)"%s: %s\n", "td_thr_get_info", v6);
LABEL_44:
            if ( v11 == 1 )
            {
              sub_3AFD0(a1, v10, 2);
            }
            else if ( v11 )
            {
              sub_39FA0((__int64)"Spurious thread event %d.", v11);
            }
            else
            {
              v7 = *(_QWORD *)(a1 + 1744);
              if ( !v7 )
                goto LABEL_53;
              v8 = a1 + 1744;
              do
              {
                if ( *(_DWORD *)(v7 + 32) >= v10 )
                  v8 = v7;
                v7 = *(_QWORD *)(v7 + 8LL * (*(_DWORD *)(v7 + 32) < v10));
              }
              while ( v7 );
              if ( v8 == a1 + 1744 || v10 < *(_DWORD *)(v8 + 32) )
              {
LABEL_53:
                if ( sub_3AF40() )
                  sub_3B234(a1, v10, -1);
              }
            }
            break;
        }
        return;
      case 1:
        goto LABEL_23;
      case 2:
        v4 = "no thread to satisfy query";
        goto LABEL_23;
      case 3:
        v4 = "no sync handle to satisfy query";
        goto LABEL_23;
      case 4:
        v4 = "no LWP to satisfy query";
        goto LABEL_23;
      case 5:
        v4 = "invalid process handle";
        goto LABEL_23;
      case 6:
        v4 = "invalid thread handle";
        goto LABEL_23;
      case 7:
        v4 = "invalid synchronization handle";
        goto LABEL_23;
      case 8:
        v4 = "invalid thread agent";
        goto LABEL_23;
      case 9:
        v4 = "invalid key";
        goto LABEL_23;
      case 10:
        return;
      case 11:
        v4 = "FPU register set not available";
        goto LABEL_23;
      case 12:
        v4 = "application not linked with libpthread";
        goto LABEL_23;
      case 13:
        v4 = "requested event is not supported";
        goto LABEL_23;
      case 14:
        v4 = "capability not available";
        goto LABEL_23;
      case 15:
        v4 = "debugger service failed";
        goto LABEL_23;
      case 16:
        v4 = "operation not applicable to";
        goto LABEL_23;
      case 17:
        v4 = "no thread-specific data for this thread";
        goto LABEL_23;
      case 18:
        v4 = "malloc failed";
        goto LABEL_23;
      case 19:
        v4 = "only part of register set was written/read";
        goto LABEL_23;
      case 20:
        v4 = "X register set not available for this thread";
        goto LABEL_23;
      default:
        v4 = (const char *)qword_1669F8;
        qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v3);
LABEL_23:
        sub_39FA0((__int64)"Cannot get thread event message: %s\n", v4);
        break;
    }
  }
}
// 1669F8: using guessed type __int64 qword_1669F8[8];
