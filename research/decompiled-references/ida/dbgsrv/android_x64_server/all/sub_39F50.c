/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39F50
// Address: 0x0000000000039F50

//----- (0000000000039F50) ----------------------------------------------------
unsigned __int64 __fastcall sub_39F50(__int64 a1)
{
  _DWORD *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // r14
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  char v16[16]; // [rsp+8h] [rbp-50h] BYREF
  int v17; // [rsp+18h] [rbp-40h]
  unsigned int v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v2 = *(_DWORD **)(a1 + 824);
  if ( v2 )
  {
    v3 = sub_36590(v2);
    v5 = (unsigned int)v3;
    v6 = "generic error";
    switch ( v3 )
    {
      case 0LL:
        v7 = v19;
        v8 = sub_36770(v19, (__int64)v16);
        v10 = (unsigned int)v8;
        v11 = "generic error";
        switch ( v8 )
        {
          case 0LL:
            goto LABEL_46;
          case 1LL:
            goto LABEL_45;
          case 2LL:
            v11 = "no thread to satisfy query";
            goto LABEL_45;
          case 3LL:
            v11 = "no sync handle to satisfy query";
            goto LABEL_45;
          case 4LL:
            v11 = "no LWP to satisfy query";
            goto LABEL_45;
          case 5LL:
            v11 = "invalid process handle";
            goto LABEL_45;
          case 6LL:
            v11 = "invalid thread handle";
            goto LABEL_45;
          case 7LL:
            v11 = "invalid synchronization handle";
            goto LABEL_45;
          case 8LL:
            v11 = "invalid thread agent";
            goto LABEL_45;
          case 9LL:
            v11 = "invalid key";
            goto LABEL_45;
          case 10LL:
            v11 = "no event message for getmsg";
            goto LABEL_45;
          case 11LL:
            v11 = "FPU register set not available";
            goto LABEL_45;
          case 12LL:
            v11 = "application not linked with libpthread";
            goto LABEL_45;
          case 13LL:
            v11 = "requested event is not supported";
            goto LABEL_45;
          case 14LL:
            v11 = "capability not available";
            goto LABEL_45;
          case 15LL:
            v11 = "debugger service failed";
            goto LABEL_45;
          case 16LL:
            v11 = "operation not applicable to";
            goto LABEL_45;
          case 17LL:
            v11 = "no thread-specific data for this thread";
            goto LABEL_45;
          case 18LL:
            v11 = "malloc failed";
            goto LABEL_45;
          case 19LL:
            v11 = "only part of register set was written/read";
            goto LABEL_45;
          case 20LL:
            v11 = "X register set not available for this thread";
            goto LABEL_45;
          default:
            v11 = (const char *)qword_155730;
            qsnprintf((char *)qword_155730, 64, "tdb error %d", v8);
LABEL_45:
            v7 = (__int64)"%s: %s\n";
            sub_390A0((int)"%s: %s\n", "td_thr_get_info", v11, v10);
LABEL_46:
            v13 = v18;
            if ( v18 == 1 )
            {
              sub_3A390(a1, v17, 2);
            }
            else if ( v18 )
            {
              sub_390A0((int)"Spurious thread event %d.", v18, v9, v10);
            }
            else
            {
              v14 = *(_QWORD *)(a1 + 1040);
              if ( !v14 )
                goto LABEL_61;
              v13 = a1 + 1040;
              v15 = a1 + 1040;
              do
              {
                v7 = *(_DWORD *)(v14 + 32) < v17;
                if ( *(_DWORD *)(v14 + 32) >= v17 )
                  v15 = v14;
                v14 = *(_QWORD *)(v14 + 8 * v7);
              }
              while ( v14 );
              if ( v15 == v13 || v17 < *(_DWORD *)(v15 + 32) )
              {
LABEL_61:
                if ( sub_3A300(v7, v13, v19) )
                  sub_3A650(a1, v17, -1);
              }
            }
            break;
        }
        return __readfsqword(0x28u);
      case 1LL:
        goto LABEL_24;
      case 2LL:
        v6 = "no thread to satisfy query";
        goto LABEL_24;
      case 3LL:
        v6 = "no sync handle to satisfy query";
        goto LABEL_24;
      case 4LL:
        v6 = "no LWP to satisfy query";
        goto LABEL_24;
      case 5LL:
        v6 = "invalid process handle";
        goto LABEL_24;
      case 6LL:
        v6 = "invalid thread handle";
        goto LABEL_24;
      case 7LL:
        v6 = "invalid synchronization handle";
        goto LABEL_24;
      case 8LL:
        v6 = "invalid thread agent";
        goto LABEL_24;
      case 9LL:
        v6 = "invalid key";
        goto LABEL_24;
      case 10LL:
        return __readfsqword(0x28u);
      case 11LL:
        v6 = "FPU register set not available";
        goto LABEL_24;
      case 12LL:
        v6 = "application not linked with libpthread";
        goto LABEL_24;
      case 13LL:
        v6 = "requested event is not supported";
        goto LABEL_24;
      case 14LL:
        v6 = "capability not available";
        goto LABEL_24;
      case 15LL:
        v6 = "debugger service failed";
        goto LABEL_24;
      case 16LL:
        v6 = "operation not applicable to";
        goto LABEL_24;
      case 17LL:
        v6 = "no thread-specific data for this thread";
        goto LABEL_24;
      case 18LL:
        v6 = "malloc failed";
        goto LABEL_24;
      case 19LL:
        v6 = "only part of register set was written/read";
        goto LABEL_24;
      case 20LL:
        v6 = "X register set not available for this thread";
        goto LABEL_24;
      default:
        v6 = (const char *)qword_155730;
        qsnprintf((char *)qword_155730, 64, "tdb error %d", v3);
LABEL_24:
        sub_390A0((int)"Cannot get thread event message: %s\n", v6, v4, v5);
        break;
    }
  }
  return __readfsqword(0x28u);
}
// 3A0BE: variable 'v4' is possibly undefined
// 3A0BE: variable 'v5' is possibly undefined
// 3A1BF: variable 'v10' is possibly undefined
// 3A258: variable 'v9' is possibly undefined
// 155730: using guessed type __int64 qword_155730[8];
