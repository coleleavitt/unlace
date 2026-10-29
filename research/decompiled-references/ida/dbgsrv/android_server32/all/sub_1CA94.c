/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1CA94
// Address: 0x0001CA94

//----- (0001CA94) --------------------------------------------------------
int __fastcall sub_1CA94(int a1)
{
  _DWORD *v2; // r0
  const char *v3; // r6
  int v4; // r6
  unsigned int i; // r4
  int result; // r0
  _DWORD v7[2]; // [sp+14h] [bp-18h] BYREF
  char *v8; // [sp+1Ch] [bp-10h] BYREF
  unsigned int v9; // [sp+20h] [bp-Ch]
  int v10; // [sp+24h] [bp-8h]
  int v11; // [sp+28h] [bp-4h]

  v2 = *(_DWORD **)(a1 + 796);
  if ( !v2 )
    return _stack_chk_guard - v11;
  v9 = 0;
  v8 = nullptr;
  v10 = 0;
  v7[1] = &v8;
  v7[0] = a1;
  v3 = "generic error";
  switch ( sub_1A15C(v2, (int (__fastcall *)(_DWORD *, int))sub_1CC80, (int)v7) )
  {
    case 0:
      if ( v9 )
      {
        v4 = 8;
        for ( i = 0; i < v9; ++i )
        {
          if ( i )
            sub_1CD58(a1, *(_DWORD *)&v8[v4], 0);
          sub_1C9F8(a1, *(_DWORD *)&v8[v4], -1);
          v4 += 12;
        }
      }
      goto LABEL_31;
    case 1:
      goto LABEL_30;
    case 2:
      v3 = "no thread to satisfy query";
      goto LABEL_30;
    case 3:
      v3 = "no sync handle to satisfy query";
      goto LABEL_30;
    case 4:
      v3 = "no LWP to satisfy query";
      goto LABEL_30;
    case 5:
      v3 = "invalid process handle";
      goto LABEL_30;
    case 6:
      v3 = "invalid thread handle";
      goto LABEL_30;
    case 7:
      v3 = "invalid synchronization handle";
      goto LABEL_30;
    case 8:
      v3 = "invalid thread agent";
      goto LABEL_30;
    case 9:
      v3 = "invalid key";
      goto LABEL_30;
    case 10:
      v3 = "no event message for getmsg";
      goto LABEL_30;
    case 11:
      v3 = "FPU register set not available";
      goto LABEL_30;
    case 12:
      v3 = "application not linked with libpthread";
      goto LABEL_30;
    case 13:
      v3 = "requested event is not supported";
      goto LABEL_30;
    case 14:
      v3 = "capability not available";
      goto LABEL_30;
    case 15:
      v3 = "debugger service failed";
      goto LABEL_30;
    case 16:
      v3 = "operation not applicable to";
      goto LABEL_30;
    case 17:
      v3 = "no thread-specific data for this thread";
      goto LABEL_30;
    case 18:
      v3 = "malloc failed";
      goto LABEL_30;
    case 19:
      v3 = "only part of register set was written/read";
      goto LABEL_30;
    case 20:
      v3 = "X register set not available for this thread";
      goto LABEL_30;
    default:
      v3 = (const char *)dword_DE2F0;
      qsnprintf(dword_DE2F0, 64, "tdb error %d");
LABEL_30:
      sub_1BBA0((int)"%s: %s\n", "td_ta_thr_iter", v3);
LABEL_31:
      if ( v8 )
      {
        v9 = 0;
        qfree(v8);
        v10 = 0;
        v8 = nullptr;
      }
      result = _stack_chk_guard - v11;
      break;
  }
  return result;
}
// DE2F0: using guessed type int dword_DE2F0[16];
