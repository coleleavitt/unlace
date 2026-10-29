/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BD48
// Address: 0x000000000003BD48

//----- (000000000003BD48) ----------------------------------------------------
__int64 __fastcall sub_3BD48(__int64 a1)
{
  _QWORD *v3; // x28
  _QWORD *v4; // x25
  const char *v5; // x21
  unsigned __int64 v6; // x26
  __int64 v7; // x29
  const char *v8; // x0
  const char *v9; // x0
  const char *v10; // x0
  _QWORD *v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 v14; // x9
  _QWORD *v15; // t1
  int v16; // w3
  const char *v17; // x21
  int v18; // w3
  const char *v19; // x21
  int v20; // w3
  int v21; // w3
  double v22; // d0
  double v23; // d1
  int v24; // w19
  void *v25; // x0
  const char *v26; // x19
  const char *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  _QWORD *v35; // x0
  _QWORD *v36; // x19
  char v37; // [xsp+0h] [xbp-90h]
  int v38; // [xsp+8h] [xbp-88h] BYREF
  void *ptr; // [xsp+10h] [xbp-80h] BYREF
  unsigned __int64 v40; // [xsp+18h] [xbp-78h]
  __int64 v41; // [xsp+20h] [xbp-70h]
  __int64 v42; // [xsp+28h] [xbp-68h]

  v42 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 1528) )
    return 1;
  if ( byte_1669F0 != 1 )
    return 0;
  ptr = nullptr;
  v40 = 0;
  v41 = 0;
  qgetenv("IDA_LIBC_PATH", (__int64)&ptr);
  v3 = *(_QWORD **)(a1 + 1712);
  v4 = (_QWORD *)(a1 + 1720);
  if ( v3 == (_QWORD *)(a1 + 1720) )
  {
LABEL_27:
    sub_99D18(a1, "DBG: /system/lib/libc.so is not loaded yet, use IDA_LIBC_PATH if necessary\n");
    goto LABEL_54;
  }
  v5 = (const char *)ptr;
  v6 = v40;
  while ( 1 )
  {
    v7 = v3[8];
    v8 = v7 ? (const char *)v3[7] : &byte_F154B;
    if ( !strcmp(v8, "/system/lib/libc.so") )
      break;
    v9 = v7 ? (const char *)v3[7] : &byte_F154B;
    if ( !strcmp(v9, "/system/lib64/libc.so") )
      break;
    if ( v6 >= 2 )
    {
      v10 = v7 ? (const char *)v3[7] : &byte_F154B;
      if ( !strcmp(v10, v5) )
        break;
    }
    v11 = (_QWORD *)v3[1];
    if ( v11 )
    {
      do
      {
        v3 = v11;
        v11 = (_QWORD *)*v11;
      }
      while ( v11 );
LABEL_24:
      if ( v3 == v4 )
        goto LABEL_27;
    }
    else
    {
      v12 = (__int64)(v3 + 2);
      v13 = (_QWORD *)v3[2];
      if ( (_QWORD *)*v13 != v3 )
      {
        do
        {
          v14 = *(_QWORD *)v12;
          v15 = *(_QWORD **)(*(_QWORD *)v12 + 16LL);
          v12 = *(_QWORD *)v12 + 16LL;
          v3 = v15;
        }
        while ( *v15 != v14 );
        goto LABEL_24;
      }
      v3 = (_QWORD *)v3[2];
      if ( v13 == v4 )
        goto LABEL_27;
    }
  }
  sub_99D18(a1, "DBG: checking pid %d with thread_db\n", *(_DWORD *)(a1 + 1844));
  *(_DWORD *)(a1 + 1520) = *(_DWORD *)(a1 + 1844);
  v16 = sub_37958((unsigned int *)(a1 + 1520), (_QWORD *)(a1 + 1528));
  v17 = "generic error";
  switch ( v16 )
  {
    case 0:
      v18 = sub_37E1C(*(_QWORD *)(a1 + 1528), *(_DWORD *)(a1 + 1844), &v38);
      v19 = "generic error";
      switch ( v18 )
      {
        case 0:
          v20 = sub_37E68();
          if ( v20 )
          {
            v26 = "generic error";
            switch ( v20 )
            {
              case 1:
                break;
              case 2:
                v26 = "no thread to satisfy query";
                break;
              case 3:
                v26 = "no sync handle to satisfy query";
                break;
              case 4:
                v26 = "no LWP to satisfy query";
                break;
              case 5:
                v26 = "invalid process handle";
                break;
              case 6:
                v26 = "invalid thread handle";
                break;
              case 7:
                v26 = "invalid synchronization handle";
                break;
              case 8:
                v26 = "invalid thread agent";
                break;
              case 9:
                v26 = "invalid key";
                break;
              case 10:
                v26 = "no event message for getmsg";
                break;
              case 11:
                v26 = "FPU register set not available";
                break;
              case 12:
                v26 = "application not linked with libpthread";
                break;
              case 13:
                v26 = "requested event is not supported";
                break;
              case 14:
                v26 = "capability not available";
                break;
              case 15:
                v26 = "debugger service failed";
                break;
              case 16:
                v26 = "operation not applicable to";
                break;
              case 17:
                v26 = "no thread-specific data for this thread";
                break;
              case 18:
                v26 = "malloc failed";
                break;
              case 19:
                v26 = "only part of register set was written/read";
                break;
              case 20:
                v26 = "X register set not available for this thread";
                break;
              default:
                v26 = (const char *)qword_1669F8;
                qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v20);
                break;
            }
            sub_3B1DC("%s: %s\n", "td_thr_event_enable(TD_CREATE)", v26);
LABEL_102:
            v27 = (const char *)qword_1669F8;
            qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v21);
LABEL_121:
            sub_3B1DC("%s: %s\n", "td_ta_set_event", v27);
            v36 = v35;
            if ( ptr )
            {
              v40 = 0;
              qfree(ptr);
              ptr = nullptr;
              v41 = 0;
            }
            Unwind_Resume(v36, v28, v29, v30, v31, v32, v33, v34, v37);
          }
          v37 = 3;
          v21 = sub_37C64();
          if ( v21 )
          {
            v27 = "generic error";
            switch ( v21 )
            {
              case 1:
                goto LABEL_121;
              case 2:
                v27 = "no thread to satisfy query";
                goto LABEL_121;
              case 3:
                v27 = "no sync handle to satisfy query";
                goto LABEL_121;
              case 4:
                v27 = "no LWP to satisfy query";
                goto LABEL_121;
              case 5:
                v27 = "invalid process handle";
                goto LABEL_121;
              case 6:
                v27 = "invalid thread handle";
                goto LABEL_121;
              case 7:
                v27 = "invalid synchronization handle";
                goto LABEL_121;
              case 8:
                v27 = "invalid thread agent";
                goto LABEL_121;
              case 9:
                v27 = "invalid key";
                goto LABEL_121;
              case 10:
                v27 = "no event message for getmsg";
                goto LABEL_121;
              case 11:
                v27 = "FPU register set not available";
                goto LABEL_121;
              case 12:
                v27 = "application not linked with libpthread";
                goto LABEL_121;
              case 13:
                v27 = "requested event is not supported";
                goto LABEL_121;
              case 14:
                v27 = "capability not available";
                goto LABEL_121;
              case 15:
                v27 = "debugger service failed";
                goto LABEL_121;
              case 16:
                v27 = "operation not applicable to";
                goto LABEL_121;
              case 17:
                v27 = "no thread-specific data for this thread";
                goto LABEL_121;
              case 18:
                v27 = "malloc failed";
                goto LABEL_121;
              case 19:
                v27 = "only part of register set was written/read";
                goto LABEL_121;
              case 20:
                v27 = "X register set not available for this thread";
                goto LABEL_121;
              default:
                goto LABEL_102;
            }
          }
          sub_3BAE4((__int64 *)a1, 0, a1 + 1536);
          sub_99D18(a1, "DBG: thread support has been enabled, birth_bpt=%a death_bpt=%a\n", v22, v23);
          sub_3B308(a1);
          v24 = 0;
          v25 = ptr;
          if ( ptr )
            goto LABEL_55;
          return !v24;
        case 1:
          goto LABEL_77;
        case 2:
          v19 = "no thread to satisfy query";
          goto LABEL_77;
        case 3:
          v19 = "no sync handle to satisfy query";
          goto LABEL_77;
        case 4:
          v19 = "no LWP to satisfy query";
          goto LABEL_77;
        case 5:
          v19 = "invalid process handle";
          goto LABEL_77;
        case 6:
          v19 = "invalid thread handle";
          goto LABEL_77;
        case 7:
          v19 = "invalid synchronization handle";
          goto LABEL_77;
        case 8:
          v19 = "invalid thread agent";
          goto LABEL_77;
        case 9:
          v19 = "invalid key";
          goto LABEL_77;
        case 10:
          v19 = "no event message for getmsg";
          goto LABEL_77;
        case 11:
          v19 = "FPU register set not available";
          goto LABEL_77;
        case 12:
          v19 = "application not linked with libpthread";
          goto LABEL_77;
        case 13:
          v19 = "requested event is not supported";
          goto LABEL_77;
        case 14:
          v19 = "capability not available";
          goto LABEL_77;
        case 15:
          v19 = "debugger service failed";
          goto LABEL_77;
        case 16:
          v19 = "operation not applicable to";
          goto LABEL_77;
        case 17:
          v19 = "no thread-specific data for this thread";
          goto LABEL_77;
        case 18:
          v19 = "malloc failed";
          goto LABEL_77;
        case 19:
          v19 = "only part of register set was written/read";
          goto LABEL_77;
        case 20:
          v19 = "X register set not available for this thread";
          goto LABEL_77;
        default:
          v19 = (const char *)qword_1669F8;
          qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v18);
LABEL_77:
          sub_39FA0((__int64)"%s: %s\n", "td_ta_map_lwp2thr", v19);
          break;
      }
      break;
    case 1:
      goto LABEL_53;
    case 2:
      v17 = "no thread to satisfy query";
      goto LABEL_53;
    case 3:
      v17 = "no sync handle to satisfy query";
      goto LABEL_53;
    case 4:
      v17 = "no LWP to satisfy query";
      goto LABEL_53;
    case 5:
      v17 = "invalid process handle";
      goto LABEL_53;
    case 6:
      v17 = "invalid thread handle";
      goto LABEL_53;
    case 7:
      v17 = "invalid synchronization handle";
      goto LABEL_53;
    case 8:
      v17 = "invalid thread agent";
      goto LABEL_53;
    case 9:
      v17 = "invalid key";
      goto LABEL_53;
    case 10:
      v17 = "no event message for getmsg";
      goto LABEL_53;
    case 11:
      v17 = "FPU register set not available";
      goto LABEL_53;
    case 12:
      v17 = "application not linked with libpthread";
      goto LABEL_53;
    case 13:
      v17 = "requested event is not supported";
      goto LABEL_53;
    case 14:
      v17 = "capability not available";
      goto LABEL_53;
    case 15:
      v17 = "debugger service failed";
      goto LABEL_53;
    case 16:
      v17 = "operation not applicable to";
      goto LABEL_53;
    case 17:
      v17 = "no thread-specific data for this thread";
      goto LABEL_53;
    case 18:
      v17 = "malloc failed";
      goto LABEL_53;
    case 19:
      v17 = "only part of register set was written/read";
      goto LABEL_53;
    case 20:
      v17 = "X register set not available for this thread";
      goto LABEL_53;
    default:
      v17 = (const char *)qword_1669F8;
      qsnprintf((pthread_mutex_t *)qword_1669F8, 64, "tdb error %d", v16);
LABEL_53:
      sub_99D18(a1, "DBG: td_ta_new: %s\n", v17);
      *(_QWORD *)(a1 + 1528) = 0;
      break;
  }
LABEL_54:
  v24 = 1;
  v25 = ptr;
  if ( ptr )
  {
LABEL_55:
    v40 = 0;
    qfree(v25);
    ptr = nullptr;
    v41 = 0;
  }
  return !v24;
}
// 3BF90: variable 'v22' is possibly undefined
// 3BF90: variable 'v23' is possibly undefined
// 3C3C4: variable 'v21' is possibly undefined
// 3C4C8: variable 'v35' is possibly undefined
// 3C4E8: variable 'v28' is possibly undefined
// 3C4E8: variable 'v29' is possibly undefined
// 3C4E8: variable 'v30' is possibly undefined
// 3C4E8: variable 'v31' is possibly undefined
// 3C4E8: variable 'v32' is possibly undefined
// 3C4E8: variable 'v33' is possibly undefined
// 3C4E8: variable 'v34' is possibly undefined
// 3C4E8: variable 'v37' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 1669F0: using guessed type char byte_1669F0;
// 1669F8: using guessed type __int64 qword_1669F8[8];
