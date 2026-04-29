__int64 __fastcall sub_265CB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r15
  __int64 *v15; // r14
  __int64 v16; // r13
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 *v21; // rcx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx

  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 0:
    case 1:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1C:
    case 0x1D:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
      return 0;
    case 2:
      v2 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v2 + 8) != 65 )
        return 0;
      v14 = *(int *)(v2 + 32);
      v15 = (__int64 *)(a1 + 96);
      v16 = 8 * v14;
      if ( !sub_605B0((_QWORD *)(a1 + 96), *(_DWORD *)(v2 + 32)) )
      {
        sub_5FE10(v15, v14);
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v14) = 0;
      }
      v17 = *(_QWORD *)(a2 + 32);
      if ( !sub_605B0(v15, v14) )
        goto LABEL_32;
      v18 = *(_DWORD *)(v17 + 8);
      if ( v18 == 37 )
      {
        v19 = *(_QWORD *)(v17 + 24);
        if ( *(_DWORD *)(v19 + 8) == 61 || (v19 = *(_QWORD *)(v17 + 32), *(_DWORD *)(v19 + 8) == 61) )
        {
          if ( v19 )
          {
LABEL_24:
            v20 = sub_250E30(*(__int64 **)(v19 + 24), (_QWORD *)(v19 + 48));
            v21 = (unsigned __int64 *)(v16 + *(_QWORD *)(a1 + 72));
            v22 = *v21;
            if ( *v21 )
            {
              while ( 1 )
              {
                v23 = v20 % v22;
                v20 = v22;
                if ( !v23 )
                  break;
                v22 = v23;
              }
            }
            else
            {
              v22 = v20;
            }
LABEL_33:
            *v21 = v22;
            return 0;
          }
        }
      }
      else if ( v17 && v18 == 61 )
      {
        v19 = v17;
        goto LABEL_24;
      }
LABEL_32:
      v22 = 1;
      v21 = (unsigned __int64 *)(v16 + *(_QWORD *)(a1 + 72));
      goto LABEL_33;
    case 3:
    case 4:
    case 5:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      v4 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v4 + 8) == 65 )
        *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL * *(int *)(v4 + 32)) = 1;
      return 0;
    case 6:
    case 7:
      v5 = *(_QWORD *)(a2 + 24);
      if ( *(_DWORD *)(v5 + 8) != 65 )
        return 0;
      v6 = *(_QWORD *)(a2 + 32);
      v7 = 8LL * *(int *)(v5 + 32);
      if ( !sub_605B0((_QWORD *)(a1 + 96), *(_DWORD *)(v5 + 32)) )
        goto LABEL_37;
      v8 = *(_DWORD *)(v6 + 8);
      if ( v8 != 37 )
      {
        if ( v6 && v8 == 61 )
        {
          v9 = v6;
          goto LABEL_12;
        }
LABEL_37:
        v11 = (unsigned __int64 *)(*(_QWORD *)(a1 + 72) + v7);
        v12 = 1;
        goto LABEL_38;
      }
      v9 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v9 + 8) != 61 )
      {
        v9 = *(_QWORD *)(v6 + 32);
        if ( *(_DWORD *)(v9 + 8) != 61 )
          goto LABEL_37;
      }
      if ( !v9 )
        goto LABEL_37;
LABEL_12:
      v10 = sub_250E30(*(__int64 **)(v9 + 24), (_QWORD *)(v9 + 48));
      v11 = (unsigned __int64 *)(*(_QWORD *)(a1 + 72) + v7);
      v12 = *v11;
      if ( *v11 )
      {
        while ( 1 )
        {
          v13 = v10 % v12;
          v10 = v12;
          if ( !v13 )
            break;
          v12 = v13;
        }
      }
      else
      {
        v12 = v10;
      }
LABEL_38:
      *v11 = v12;
      return 0;
    default:
      return 0;
  }
}
