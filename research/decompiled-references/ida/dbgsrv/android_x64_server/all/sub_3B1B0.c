/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B1B0
// Address: 0x000000000003B1B0

//----- (000000000003B1B0) ----------------------------------------------------
bool __fastcall sub_3B1B0(unsigned __int64 a1, double a2, double a3)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rbp
  void *v7; // r14
  __int64 v8; // r15
  const char *v9; // rdi
  const char *v10; // rdi
  const char *v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r12
  bool v15; // zf
  __int64 v16; // rax
  const char *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // r15
  int v21; // ecx
  int v22; // ecx
  int v23; // ebx
  const char *v24; // rbx
  const char *v25; // rbx
  _QWORD *v26; // [rsp+0h] [rbp-78h]
  char *s2; // [rsp+8h] [rbp-70h]
  int v28; // [rsp+18h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+30h] [rbp-48h]
  unsigned __int64 v31; // [rsp+40h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 824) )
    return 1;
  if ( byte_155720 != 1 )
    return 0;
  *(_OWORD *)ptr = 0;
  v30 = 0;
  qgetenv("IDA_LIBC_PATH", (__int64)ptr);
  v5 = *(_QWORD **)(a1 + 1008);
  v6 = (_QWORD *)(a1 + 1016);
  if ( v5 == (_QWORD *)(a1 + 1016) )
  {
LABEL_23:
    sub_9FDA0(a1, "DBG: /system/lib/libc.so is not loaded yet, use IDA_LIBC_PATH if necessary\n", 0.0, a3);
  }
  else
  {
    v26 = (_QWORD *)(a1 + 824);
    s2 = (char *)ptr[0];
    v7 = ptr[1];
    while ( 1 )
    {
      v8 = v5[8];
      v9 = s1;
      if ( v8 )
        v9 = (const char *)v5[7];
      if ( !strcmp(v9, "/system/lib/libc.so") )
        break;
      v10 = s1;
      if ( v8 )
        v10 = (const char *)v5[7];
      if ( !strcmp(v10, "/system/lib64/libc.so") )
        break;
      if ( (unsigned __int64)v7 >= 2 )
      {
        v11 = s1;
        if ( v8 )
          v11 = (const char *)v5[7];
        if ( !strcmp(v11, s2) )
          break;
      }
      v12 = (_QWORD *)v5[1];
      if ( v12 )
      {
        do
        {
          v13 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      else
      {
        v13 = (_QWORD *)v5[2];
        if ( (_QWORD *)*v13 != v5 )
        {
          v14 = (__int64)(v5 + 2);
          do
          {
            v13 = *(_QWORD **)(*(_QWORD *)v14 + 16LL);
            v15 = *v13 == *(_QWORD *)v14;
            v14 = *(_QWORD *)v14 + 16LL;
          }
          while ( !v15 );
        }
      }
      v5 = v13;
      if ( v13 == v6 )
        goto LABEL_23;
    }
    sub_9FDA0(a1, "DBG: checking pid %d with thread_db\n", *(_DWORD *)(a1 + 1140));
    *(_DWORD *)(a1 + 820) = *(_DWORD *)(a1 + 1140);
    v16 = sub_36220((unsigned int *)(a1 + 820), v26);
    v17 = "generic error";
    switch ( v16 )
    {
      case 0LL:
        v18 = sub_36750(*(_QWORD *)(a1 + 824), *(_DWORD *)(a1 + 1140), &v28);
        v19 = (unsigned int)v18;
        v20 = "generic error";
        switch ( v18 )
        {
          case 0LL:
            v21 = sub_36790();
            if ( v21 )
            {
              v24 = "generic error";
              switch ( v21 )
              {
                case 1:
                  break;
                case 2:
                  v24 = "no thread to satisfy query";
                  break;
                case 3:
                  v24 = "no sync handle to satisfy query";
                  break;
                case 4:
                  v24 = "no LWP to satisfy query";
                  break;
                case 5:
                  v24 = "invalid process handle";
                  break;
                case 6:
                  v24 = "invalid thread handle";
                  break;
                case 7:
                  v24 = "invalid synchronization handle";
                  break;
                case 8:
                  v24 = "invalid thread agent";
                  break;
                case 9:
                  v24 = "invalid key";
                  break;
                case 10:
                  v24 = "no event message for getmsg";
                  break;
                case 11:
                  v24 = "FPU register set not available";
                  break;
                case 12:
                  v24 = "application not linked with libpthread";
                  break;
                case 13:
                  v24 = "requested event is not supported";
                  break;
                case 14:
                  v24 = "capability not available";
                  break;
                case 15:
                  v24 = "debugger service failed";
                  break;
                case 16:
                  v24 = "operation not applicable to";
                  break;
                case 17:
                  v24 = "no thread-specific data for this thread";
                  break;
                case 18:
                  v24 = "malloc failed";
                  break;
                case 19:
                  v24 = "only part of register set was written/read";
                  break;
                case 20:
                  v24 = "X register set not available for this thread";
                  break;
                default:
                  v24 = (const char *)qword_155730;
                  qsnprintf((char *)qword_155730, 64, "tdb error %d", v21);
                  break;
              }
              sub_3A5C0("%s: %s\n", "td_thr_event_enable(TD_CREATE)", v24);
            }
            v22 = sub_36580();
            if ( v22 )
            {
              v25 = "generic error";
              switch ( v22 )
              {
                case 1:
                  break;
                case 2:
                  v25 = "no thread to satisfy query";
                  break;
                case 3:
                  v25 = "no sync handle to satisfy query";
                  break;
                case 4:
                  v25 = "no LWP to satisfy query";
                  break;
                case 5:
                  v25 = "invalid process handle";
                  break;
                case 6:
                  v25 = "invalid thread handle";
                  break;
                case 7:
                  v25 = "invalid synchronization handle";
                  break;
                case 8:
                  v25 = "invalid thread agent";
                  break;
                case 9:
                  v25 = "invalid key";
                  break;
                case 10:
                  v25 = "no event message for getmsg";
                  break;
                case 11:
                  v25 = "FPU register set not available";
                  break;
                case 12:
                  v25 = "application not linked with libpthread";
                  break;
                case 13:
                  v25 = "requested event is not supported";
                  break;
                case 14:
                  v25 = "capability not available";
                  break;
                case 15:
                  v25 = "debugger service failed";
                  break;
                case 16:
                  v25 = "operation not applicable to";
                  break;
                case 17:
                  v25 = "no thread-specific data for this thread";
                  break;
                case 18:
                  v25 = "malloc failed";
                  break;
                case 19:
                  v25 = "only part of register set was written/read";
                  break;
                case 20:
                  v25 = "X register set not available for this thread";
                  break;
                default:
                  v25 = (const char *)qword_155730;
                  qsnprintf((char *)qword_155730, 64, "tdb error %d", v22);
                  break;
              }
              sub_3A5C0("%s: %s\n", "td_ta_set_event", v25);
            }
            sub_3AFA0((__int64 *)a1, 0, a1 + 832, 0.0);
            sub_9FDA0(a1, "DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n", 0.0, a3);
            sub_3A710(a1);
            v23 = 0;
            goto LABEL_51;
          case 1LL:
            goto LABEL_75;
          case 2LL:
            v20 = "no thread to satisfy query";
            goto LABEL_75;
          case 3LL:
            v20 = "no sync handle to satisfy query";
            goto LABEL_75;
          case 4LL:
            v20 = "no LWP to satisfy query";
            goto LABEL_75;
          case 5LL:
            v20 = "invalid process handle";
            goto LABEL_75;
          case 6LL:
            v20 = "invalid thread handle";
            goto LABEL_75;
          case 7LL:
            v20 = "invalid synchronization handle";
            goto LABEL_75;
          case 8LL:
            v20 = "invalid thread agent";
            goto LABEL_75;
          case 9LL:
            v20 = "invalid key";
            goto LABEL_75;
          case 10LL:
            v20 = "no event message for getmsg";
            goto LABEL_75;
          case 11LL:
            v20 = "FPU register set not available";
            goto LABEL_75;
          case 12LL:
            v20 = "application not linked with libpthread";
            goto LABEL_75;
          case 13LL:
            v20 = "requested event is not supported";
            goto LABEL_75;
          case 14LL:
            v20 = "capability not available";
            goto LABEL_75;
          case 15LL:
            v20 = "debugger service failed";
            goto LABEL_75;
          case 16LL:
            v20 = "operation not applicable to";
            goto LABEL_75;
          case 17LL:
            v20 = "no thread-specific data for this thread";
            goto LABEL_75;
          case 18LL:
            v20 = "malloc failed";
            goto LABEL_75;
          case 19LL:
            v20 = "only part of register set was written/read";
            goto LABEL_75;
          case 20LL:
            v20 = "X register set not available for this thread";
            goto LABEL_75;
          default:
            v20 = (const char *)qword_155730;
            qsnprintf((char *)qword_155730, 64, "tdb error %d", v18);
LABEL_75:
            v23 = 1;
            sub_390A0((int)"%s: %s\n", "td_ta_map_lwp2thr", v20, v19, 0.0, a3);
            break;
        }
        goto LABEL_51;
      case 1LL:
        goto LABEL_49;
      case 2LL:
        v17 = "no thread to satisfy query";
        goto LABEL_49;
      case 3LL:
        v17 = "no sync handle to satisfy query";
        goto LABEL_49;
      case 4LL:
        v17 = "no LWP to satisfy query";
        goto LABEL_49;
      case 5LL:
        v17 = "invalid process handle";
        goto LABEL_49;
      case 6LL:
        v17 = "invalid thread handle";
        goto LABEL_49;
      case 7LL:
        v17 = "invalid synchronization handle";
        goto LABEL_49;
      case 8LL:
        v17 = "invalid thread agent";
        goto LABEL_49;
      case 9LL:
        v17 = "invalid key";
        goto LABEL_49;
      case 10LL:
        v17 = "no event message for getmsg";
        goto LABEL_49;
      case 11LL:
        v17 = "FPU register set not available";
        goto LABEL_49;
      case 12LL:
        v17 = "application not linked with libpthread";
        goto LABEL_49;
      case 13LL:
        v17 = "requested event is not supported";
        goto LABEL_49;
      case 14LL:
        v17 = "capability not available";
        goto LABEL_49;
      case 15LL:
        v17 = "debugger service failed";
        goto LABEL_49;
      case 16LL:
        v17 = "operation not applicable to";
        goto LABEL_49;
      case 17LL:
        v17 = "no thread-specific data for this thread";
        goto LABEL_49;
      case 18LL:
        v17 = "malloc failed";
        goto LABEL_49;
      case 19LL:
        v17 = "only part of register set was written/read";
        goto LABEL_49;
      case 20LL:
        v17 = "X register set not available for this thread";
        goto LABEL_49;
      default:
        v17 = (const char *)qword_155730;
        qsnprintf((char *)qword_155730, 64, "tdb error %d", v16);
LABEL_49:
        sub_9FDA0(a1, "DBG: td_ta_new: %s\n", v17);
        *v26 = 0;
        break;
    }
  }
  v23 = 1;
LABEL_51:
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
    ptr[0] = nullptr;
    v30 = 0;
  }
  return !v23;
}
// 3B67D: variable 'v19' is possibly undefined
// 155720: using guessed type char byte_155720;
// 155730: using guessed type __int64 qword_155730[8];
