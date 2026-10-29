/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AFA0
// Address: 0x000000000003AFA0

//----- (000000000003AFA0) ----------------------------------------------------
__int64 __fastcall sub_3AFA0(__int64 *a1, int a2, __int64 a3, double a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // rcx
  const char *v8; // rbx
  const char *v9; // rbx
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = a2;
  v11[1] = __readfsqword(0x28u);
  v6 = sub_367A0(a1[103], a2, v11);
  v7 = (unsigned int)v6;
  v8 = "generic error";
  switch ( v6 )
  {
    case 0LL:
      v9 = (const char *)v11[0];
      if ( (unsigned int)sub_3D950((unsigned __int64)a1, 0xFFFFFFFF, v11[0], a3 + 8, 1, 0) == 1
        && (*(unsigned int (__fastcall **)(__int64 *, _QWORD, __int64, const char *, __int64))(*a1 + 312))(
             a1,
             0,
             4,
             v9,
             0xFFFFFFFFLL) )
      {
        *(_QWORD *)a3 = v9;
        *(_BYTE *)(a3 + 9) = 1;
        sub_9FDA0((__int64)a1, "%a: added BP for thread event %s\n", a4, v9);
        LOBYTE(v5) = 1;
      }
      else
      {
        v5 = 0;
        sub_391F0((__int64)a1, "%a: failed to add thread_db breakpoint\n", a4);
      }
      return v5;
    case 1LL:
      goto LABEL_25;
    case 2LL:
      v8 = "no thread to satisfy query";
      goto LABEL_25;
    case 3LL:
      v8 = "no sync handle to satisfy query";
      goto LABEL_25;
    case 4LL:
      v8 = "no LWP to satisfy query";
      goto LABEL_25;
    case 5LL:
      v8 = "invalid process handle";
      goto LABEL_25;
    case 6LL:
      v8 = "invalid thread handle";
      goto LABEL_25;
    case 7LL:
      v8 = "invalid synchronization handle";
      goto LABEL_25;
    case 8LL:
      v8 = "invalid thread agent";
      goto LABEL_25;
    case 9LL:
      v8 = "invalid key";
      goto LABEL_25;
    case 10LL:
      v8 = "no event message for getmsg";
      goto LABEL_25;
    case 11LL:
      v8 = "FPU register set not available";
      goto LABEL_25;
    case 12LL:
      v8 = "application not linked with libpthread";
      goto LABEL_25;
    case 13LL:
      v8 = "requested event is not supported";
      goto LABEL_25;
    case 14LL:
      v8 = "capability not available";
      goto LABEL_25;
    case 15LL:
      v8 = "debugger service failed";
      goto LABEL_25;
    case 16LL:
      v8 = "operation not applicable to";
      goto LABEL_25;
    case 17LL:
      v8 = "no thread-specific data for this thread";
      goto LABEL_25;
    case 18LL:
      v8 = "malloc failed";
      goto LABEL_25;
    case 19LL:
      v8 = "only part of register set was written/read";
      goto LABEL_25;
    case 20LL:
      v8 = "X register set not available for this thread";
      goto LABEL_25;
    default:
      v8 = (const char *)qword_155730;
      qsnprintf((char *)qword_155730, 64, "tdb error %d", v6);
LABEL_25:
      v5 = 0;
      sub_390A0((int)"%s: %s\n", "td_ta_event_addr", v8, v7);
      return v5;
  }
}
// 3B16E: variable 'v7' is possibly undefined
// 155730: using guessed type __int64 qword_155730[8];
