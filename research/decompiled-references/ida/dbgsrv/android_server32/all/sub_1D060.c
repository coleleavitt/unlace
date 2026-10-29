/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D060
// Address: 0x0001D060

//----- (0001D060) --------------------------------------------------------
int __fastcall sub_1D060(int *a1, int a2, int a3)
{
  const char *v4; // r7
  int v5; // r7
  int v7; // [sp+14h] [bp-10h]
  int v9; // [sp+1Ch] [bp-8h] BYREF

  v4 = "generic error";
  switch ( sub_1A284(a1[199], a2, &v9) )
  {
    case 0:
      v5 = 4;
      if ( (v9 & 1) != 0 )
        v5 = 2;
      v7 = v9 - (v9 & 1);
      if ( sub_1EE24((int)a1, -1, v7, (unsigned int *)(a3 + 4), v5, 0) != v5
        || !(*(int (__fastcall **)(int *, _DWORD, int, int, int))(*a1 + 156))(a1, 0, 4, v7, v5) )
      {
        sub_1BC48((int)a1, "%a: failed to add thread_db breakpoint\n", v9);
        return 0;
      }
      *(_BYTE *)(a3 + 8) = v5;
      *(_DWORD *)a3 = v7;
      sub_64B30((int)a1, "%a: added BP for thread event %s\n");
      return 1;
    case 1:
      goto LABEL_27;
    case 2:
      v4 = "no thread to satisfy query";
      goto LABEL_27;
    case 3:
      v4 = "no sync handle to satisfy query";
      goto LABEL_27;
    case 4:
      v4 = "no LWP to satisfy query";
      goto LABEL_27;
    case 5:
      v4 = "invalid process handle";
      goto LABEL_27;
    case 6:
      v4 = "invalid thread handle";
      goto LABEL_27;
    case 7:
      v4 = "invalid synchronization handle";
      goto LABEL_27;
    case 8:
      v4 = "invalid thread agent";
      goto LABEL_27;
    case 9:
      v4 = "invalid key";
      goto LABEL_27;
    case 10:
      v4 = "no event message for getmsg";
      goto LABEL_27;
    case 11:
      v4 = "FPU register set not available";
      goto LABEL_27;
    case 12:
      v4 = "application not linked with libpthread";
      goto LABEL_27;
    case 13:
      v4 = "requested event is not supported";
      goto LABEL_27;
    case 14:
      v4 = "capability not available";
      goto LABEL_27;
    case 15:
      v4 = "debugger service failed";
      goto LABEL_27;
    case 16:
      v4 = "operation not applicable to";
      goto LABEL_27;
    case 17:
      v4 = "no thread-specific data for this thread";
      goto LABEL_27;
    case 18:
      v4 = "malloc failed";
      goto LABEL_27;
    case 19:
      v4 = "only part of register set was written/read";
      goto LABEL_27;
    case 20:
      v4 = "X register set not available for this thread";
      goto LABEL_27;
    default:
      v4 = (const char *)dword_DE2F0;
      qsnprintf(dword_DE2F0, 64, "tdb error %d");
LABEL_27:
      sub_1BBA0((int)"%s: %s\n", "td_ta_event_addr", v4);
      return 0;
  }
}
// DE2F0: using guessed type int dword_DE2F0[16];
