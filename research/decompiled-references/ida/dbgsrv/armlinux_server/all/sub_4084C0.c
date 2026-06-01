/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4084C0
// Address: 0x00000000004084C0

//----- (00000000004084C0) ----------------------------------------------------
const char *__fastcall sub_4084C0(int a1)
{
  const char *result; // x0

  switch ( a1 )
  {
    case 0:
      result = "ok";
      break;
    case 1:
      result = "generic error";
      break;
    case 2:
      result = "no thread to satisfy query";
      break;
    case 3:
      result = "no sync handle to satisfy query";
      break;
    case 4:
      result = "no LWP to satisfy query";
      break;
    case 5:
      result = "invalid process handle";
      break;
    case 6:
      result = "invalid thread handle";
      break;
    case 7:
      result = "invalid synchronization handle";
      break;
    case 8:
      result = "invalid thread agent";
      break;
    case 9:
      result = "invalid key";
      break;
    case 10:
      result = "no event message for getmsg";
      break;
    case 11:
      result = "FPU register set not available";
      break;
    case 12:
      result = "application not linked with libpthread";
      break;
    case 13:
      result = "requested event is not supported";
      break;
    case 14:
      result = "capability not available";
      break;
    case 15:
      result = "debugger service failed";
      break;
    case 16:
      result = "operation not applicable to";
      break;
    case 17:
      result = "no thread-specific data for this thread";
      break;
    case 18:
      result = "malloc failed";
      break;
    case 19:
      result = "only part of register set was written/read";
      break;
    case 20:
      result = "X register set not available for this thread";
      break;
    default:
      sub_49B748((const char *)qword_5220D0, 0x40u, "tdb error %d", a1);
      result = (const char *)qword_5220D0;
      break;
  }
  return result;
}
// 5220D0: using guessed type __int64 qword_5220D0[8];
