/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C4C4
// Address: 0x0001C4C4

//----- (0001C4C4) --------------------------------------------------------
int __fastcall sub_1C4C4(int a1)
{
  _DWORD *v2; // r0
  const char *v3; // r5
  const char *v4; // r5
  _DWORD *v6; // r2
  int v7; // r3
  int v8; // r5
  _DWORD *v9; // r7
  int v10; // [sp+4h] [bp-1Ch] BYREF
  int v11; // [sp+Ch] [bp-14h]
  _DWORD v12[4]; // [sp+10h] [bp-10h] BYREF

  v2 = *(_DWORD **)(a1 + 796);
  if ( v2 )
  {
    v3 = "generic error";
    switch ( sub_1A0F8(v2, v12) )
    {
      case 0:
        v4 = "generic error";
        switch ( sub_1A26E(v12[1], &v10) )
        {
          case 0:
            goto LABEL_46;
          case 1:
            goto LABEL_45;
          case 2:
            v4 = "no thread to satisfy query";
            goto LABEL_45;
          case 3:
            v4 = "no sync handle to satisfy query";
            goto LABEL_45;
          case 4:
            v4 = "no LWP to satisfy query";
            goto LABEL_45;
          case 5:
            v4 = "invalid process handle";
            goto LABEL_45;
          case 6:
            v4 = "invalid thread handle";
            goto LABEL_45;
          case 7:
            v4 = "invalid synchronization handle";
            goto LABEL_45;
          case 8:
            v4 = "invalid thread agent";
            goto LABEL_45;
          case 9:
            v4 = "invalid key";
            goto LABEL_45;
          case 10:
            v4 = "no event message for getmsg";
            goto LABEL_45;
          case 11:
            v4 = "FPU register set not available";
            goto LABEL_45;
          case 12:
            v4 = "application not linked with libpthread";
            goto LABEL_45;
          case 13:
            v4 = "requested event is not supported";
            goto LABEL_45;
          case 14:
            v4 = "capability not available";
            goto LABEL_45;
          case 15:
            v4 = "debugger service failed";
            goto LABEL_45;
          case 16:
            v4 = "operation not applicable to";
            goto LABEL_45;
          case 17:
            v4 = "no thread-specific data for this thread";
            goto LABEL_45;
          case 18:
            v4 = "malloc failed";
            goto LABEL_45;
          case 19:
            v4 = "only part of register set was written/read";
            goto LABEL_45;
          case 20:
            v4 = "X register set not available for this thread";
            goto LABEL_45;
          default:
            v4 = (const char *)dword_DE2F0;
            qsnprintf(dword_DE2F0, 64, "tdb error %d");
LABEL_45:
            sub_1BBA0((int)"%s: %s\n", "td_thr_get_info", v4);
LABEL_46:
            if ( v12[0] == 1 )
            {
              sub_1C868(a1, v11, 2);
            }
            else if ( v12[0] )
            {
              sub_1BBA0((int)"Spurious thread event %d.", v12[0]);
            }
            else
            {
              v6 = *(_DWORD **)(a1 + 916);
              if ( !v6 )
                goto LABEL_63;
              v7 = a1 + 916;
              do
              {
                v8 = v6[4];
                if ( v8 >= v11 )
                  v7 = (int)v6;
                v9 = v6 + 1;
                if ( v8 >= v11 )
                  v9 = v6;
                v6 = (_DWORD *)*v9;
              }
              while ( *v9 );
              if ( v7 == a1 + 916 || v11 < *(_DWORD *)(v7 + 16) )
              {
LABEL_63:
                if ( sub_1C7FC() )
                  sub_1C9F8(a1, v11, -1);
              }
            }
            break;
        }
        return _stack_chk_guard - v12[3];
      case 1:
        goto LABEL_24;
      case 2:
        v3 = "no thread to satisfy query";
        goto LABEL_24;
      case 3:
        v3 = "no sync handle to satisfy query";
        goto LABEL_24;
      case 4:
        v3 = "no LWP to satisfy query";
        goto LABEL_24;
      case 5:
        v3 = "invalid process handle";
        goto LABEL_24;
      case 6:
        v3 = "invalid thread handle";
        goto LABEL_24;
      case 7:
        v3 = "invalid synchronization handle";
        goto LABEL_24;
      case 8:
        v3 = "invalid thread agent";
        goto LABEL_24;
      case 9:
        v3 = "invalid key";
        goto LABEL_24;
      case 10:
        return _stack_chk_guard - v12[3];
      case 11:
        v3 = "FPU register set not available";
        goto LABEL_24;
      case 12:
        v3 = "application not linked with libpthread";
        goto LABEL_24;
      case 13:
        v3 = "requested event is not supported";
        goto LABEL_24;
      case 14:
        v3 = "capability not available";
        goto LABEL_24;
      case 15:
        v3 = "debugger service failed";
        goto LABEL_24;
      case 16:
        v3 = "operation not applicable to";
        goto LABEL_24;
      case 17:
        v3 = "no thread-specific data for this thread";
        goto LABEL_24;
      case 18:
        v3 = "malloc failed";
        goto LABEL_24;
      case 19:
        v3 = "only part of register set was written/read";
        goto LABEL_24;
      case 20:
        v3 = "X register set not available for this thread";
        goto LABEL_24;
      default:
        v3 = (const char *)dword_DE2F0;
        qsnprintf(dword_DE2F0, 64, "tdb error %d");
LABEL_24:
        sub_1BBA0((int)"Cannot get thread event message: %s\n", v3);
        break;
    }
  }
  return _stack_chk_guard - v12[3];
}
// DE2F0: using guessed type int dword_DE2F0[16];
