/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B308
// Address: 0x000000000003B308

//----- (000000000003B308) ----------------------------------------------------
void __fastcall sub_3B308(__int64 a1)
{
  _DWORD *v2; // x0
  int v3; // w3
  const char *v4; // x20
  unsigned __int64 v5; // x23
  int v6; // w20
  _QWORD v7[2]; // [xsp+0h] [xbp-60h] BYREF
  void *ptr; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int64 v9; // [xsp+18h] [xbp-48h]
  __int64 v10; // [xsp+20h] [xbp-40h]
  __int64 v11; // [xsp+28h] [xbp-38h]

  v11 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_DWORD **)(a1 + 1528);
  if ( v2 )
  {
    ptr = nullptr;
    v9 = 0;
    v10 = 0;
    v7[0] = a1;
    v7[1] = &ptr;
    v3 = sub_37D0C(v2, (unsigned int (__fastcall *)(_DWORD *, __int64))sub_3B580, (__int64)v7);
    v4 = "generic error";
    switch ( v3 )
    {
      case 0:
        if ( v9 )
        {
          v5 = 0;
          v6 = 1;
          do
          {
            if ( v6 != 1 )
              sub_3B6B4(a1, *((_DWORD *)ptr + 6 * v5 + 4), 0);
            sub_3B234(a1, *((_DWORD *)ptr + 6 * v5 + 4), -1);
            v5 = v6++;
          }
          while ( v9 > v5 );
        }
        goto LABEL_29;
      case 1:
        goto LABEL_28;
      case 2:
        v4 = "no thread to satisfy query";
        goto LABEL_28;
      case 3:
        v4 = "no sync handle to satisfy query";
        goto LABEL_28;
      case 4:
        v4 = "no LWP to satisfy query";
        goto LABEL_28;
      case 5:
        v4 = "invalid process handle";
        goto LABEL_28;
      case 6:
        v4 = "invalid thread handle";
        goto LABEL_28;
      case 7:
        v4 = "invalid synchronization handle";
        goto LABEL_28;
      case 8:
        v4 = "invalid thread agent";
        goto LABEL_28;
      case 9:
        v4 = "invalid key";
        goto LABEL_28;
      case 10:
        v4 = "no event message for getmsg";
        goto LABEL_28;
      case 11:
        v4 = "FPU register set not available";
        goto LABEL_28;
      case 12:
        v4 = "application not linked with libpthread";
        goto LABEL_28;
      case 13:
        v4 = "requested event is not supported";
        goto LABEL_28;
      case 14:
        v4 = "capability not available";
        goto LABEL_28;
      case 15:
        v4 = "debugger service failed";
        goto LABEL_28;
      case 16:
        v4 = "operation not applicable to";
        goto LABEL_28;
      case 17:
        v4 = "no thread-specific data for this thread";
        goto LABEL_28;
      case 18:
        v4 = "malloc failed";
        goto LABEL_28;
      case 19:
        v4 = "only part of register set was written/read";
        goto LABEL_28;
      case 20:
        v4 = "X register set not available for this thread";
        goto LABEL_28;
      default:
        v4 = (const char *)qword_1669F8;
        qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v3);
LABEL_28:
        sub_39FA0((__int64)"%s: %s\n", "td_ta_thr_iter", v4);
LABEL_29:
        if ( ptr )
        {
          v9 = 0;
          qfree(ptr);
          ptr = nullptr;
          v10 = 0;
        }
        break;
    }
  }
}
// 1669F8: using guessed type __int64 qword_1669F8[8];
