/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A710
// Address: 0x000000000003A710

//----- (000000000003A710) ----------------------------------------------------
unsigned __int64 __fastcall sub_3A710(unsigned __int64 a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  const char *v5; // r14
  int v6; // ebp
  void *v7; // rbx
  _QWORD v9[2]; // [rsp+10h] [rbp-58h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  unsigned __int64 v12; // [rsp+40h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  v2 = *(_DWORD **)(a1 + 824);
  if ( v2 )
  {
    *(_OWORD *)ptr = 0;
    v11 = 0;
    v9[0] = a1;
    v9[1] = ptr;
    v3 = sub_36640(v2, (unsigned int (__fastcall *)(_DWORD *, __int64))sub_3A9A0, (__int64)v9);
    v4 = (unsigned int)v3;
    v5 = "generic error";
    switch ( v3 )
    {
      case 0LL:
        if ( ptr[1] )
        {
          v6 = 1;
          v7 = nullptr;
          do
          {
            if ( v6 != 1 )
              sub_3AAD0(a1, *((_DWORD *)ptr[0] + 6 * (_QWORD)v7 + 4), 0);
            sub_3A650(a1, *((_DWORD *)ptr[0] + 6 * (_QWORD)v7 + 4), -1);
            v7 = (void *)v6++;
          }
          while ( ptr[1] > v7 );
        }
        goto LABEL_30;
      case 1LL:
        goto LABEL_29;
      case 2LL:
        v5 = "no thread to satisfy query";
        goto LABEL_29;
      case 3LL:
        v5 = "no sync handle to satisfy query";
        goto LABEL_29;
      case 4LL:
        v5 = "no LWP to satisfy query";
        goto LABEL_29;
      case 5LL:
        v5 = "invalid process handle";
        goto LABEL_29;
      case 6LL:
        v5 = "invalid thread handle";
        goto LABEL_29;
      case 7LL:
        v5 = "invalid synchronization handle";
        goto LABEL_29;
      case 8LL:
        v5 = "invalid thread agent";
        goto LABEL_29;
      case 9LL:
        v5 = "invalid key";
        goto LABEL_29;
      case 10LL:
        v5 = "no event message for getmsg";
        goto LABEL_29;
      case 11LL:
        v5 = "FPU register set not available";
        goto LABEL_29;
      case 12LL:
        v5 = "application not linked with libpthread";
        goto LABEL_29;
      case 13LL:
        v5 = "requested event is not supported";
        goto LABEL_29;
      case 14LL:
        v5 = "capability not available";
        goto LABEL_29;
      case 15LL:
        v5 = "debugger service failed";
        goto LABEL_29;
      case 16LL:
        v5 = "operation not applicable to";
        goto LABEL_29;
      case 17LL:
        v5 = "no thread-specific data for this thread";
        goto LABEL_29;
      case 18LL:
        v5 = "malloc failed";
        goto LABEL_29;
      case 19LL:
        v5 = "only part of register set was written/read";
        goto LABEL_29;
      case 20LL:
        v5 = "X register set not available for this thread";
        goto LABEL_29;
      default:
        v5 = (const char *)qword_155730;
        qsnprintf((char *)qword_155730, 64, "tdb error %d", v3);
LABEL_29:
        sub_390A0((int)"%s: %s\n", "td_ta_thr_iter", v5, v4);
LABEL_30:
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v11 = 0;
        }
        break;
    }
  }
  return __readfsqword(0x28u);
}
// 3A8FD: variable 'v4' is possibly undefined
// 155730: using guessed type __int64 qword_155730[8];
