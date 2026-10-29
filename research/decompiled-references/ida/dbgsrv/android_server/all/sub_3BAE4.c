/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BAE4
// Address: 0x000000000003BAE4

//----- (000000000003BAE4) ----------------------------------------------------
__int64 __fastcall sub_3BAE4(__int64 *a1, int a2, __int64 a3)
{
  int v5; // w3
  const char *v6; // x19
  const char *v7; // x19
  unsigned int v8; // w23
  double v9; // d0
  __int64 v11[2]; // [xsp+0h] [xbp-50h] BYREF

  v11[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = sub_37E70(a1[191], a2, v11);
  v6 = "generic error";
  switch ( v5 )
  {
    case 0:
      v7 = (const char *)(v11[0] - (v11[0] & 1));
      if ( (v11[0] & 1) != 0 )
        v8 = 2;
      else
        v8 = 4;
      if ( (unsigned int)sub_3E500(
                           (unsigned __int64)a1,
                           0xFFFFFFFF,
                           v11[0] - (v11[0] & 1),
                           (unsigned __int64 *)(a3 + 8),
                           v8,
                           0) != v8
        || !(*(unsigned int (__fastcall **)(__int64 *, _QWORD, __int64, const char *, _QWORD))(*a1 + 312))(
              a1,
              0,
              4,
              v7,
              v8) )
      {
        sub_3A0D8((__int64)a1, "%a: failed to add thread_db breakpoint\n", v9);
        return 0;
      }
      *(_QWORD *)a3 = v7;
      *(_BYTE *)(a3 + 12) = v8;
      sub_99D18((__int64)a1, "%a: added BP for thread event %s\n", v9, v7);
      return 1;
    case 1:
      goto LABEL_27;
    case 2:
      v6 = "no thread to satisfy query";
      goto LABEL_27;
    case 3:
      v6 = "no sync handle to satisfy query";
      goto LABEL_27;
    case 4:
      v6 = "no LWP to satisfy query";
      goto LABEL_27;
    case 5:
      v6 = "invalid process handle";
      goto LABEL_27;
    case 6:
      v6 = "invalid thread handle";
      goto LABEL_27;
    case 7:
      v6 = "invalid synchronization handle";
      goto LABEL_27;
    case 8:
      v6 = "invalid thread agent";
      goto LABEL_27;
    case 9:
      v6 = "invalid key";
      goto LABEL_27;
    case 10:
      v6 = "no event message for getmsg";
      goto LABEL_27;
    case 11:
      v6 = "FPU register set not available";
      goto LABEL_27;
    case 12:
      v6 = "application not linked with libpthread";
      goto LABEL_27;
    case 13:
      v6 = "requested event is not supported";
      goto LABEL_27;
    case 14:
      v6 = "capability not available";
      goto LABEL_27;
    case 15:
      v6 = "debugger service failed";
      goto LABEL_27;
    case 16:
      v6 = "operation not applicable to";
      goto LABEL_27;
    case 17:
      v6 = "no thread-specific data for this thread";
      goto LABEL_27;
    case 18:
      v6 = "malloc failed";
      goto LABEL_27;
    case 19:
      v6 = "only part of register set was written/read";
      goto LABEL_27;
    case 20:
      v6 = "X register set not available for this thread";
      goto LABEL_27;
    default:
      v6 = (const char *)qword_1669F8;
      qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v5);
LABEL_27:
      sub_39FA0((__int64)"%s: %s\n", "td_ta_event_addr", v6);
      return 0;
  }
}
// 3BBDC: variable 'v9' is possibly undefined
// 1669F8: using guessed type __int64 qword_1669F8[8];
