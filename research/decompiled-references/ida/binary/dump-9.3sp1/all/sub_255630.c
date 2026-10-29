__int64 __fastcall sub_255630(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbp
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v7; // rbp
  __int64 *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rbp

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0:
    case 0x40:
    case 0x41:
    case 0x45:
      goto LABEL_10;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
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
    case 0x3A:
      goto LABEL_4;
    case 0x10:
      v2 = *(_QWORD *)(a1 + 40);
      if ( v2 )
      {
        sub_255630(*(_QWORD *)(a1 + 40));
        clear_tinfo_t();
        j__qfree(v2);
      }
LABEL_4:
      v3 = *(_QWORD *)(a1 + 32);
      if ( v3 )
      {
        sub_255630(*(_QWORD *)(a1 + 32));
        clear_tinfo_t();
        j__qfree(v3);
      }
      goto LABEL_6;
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x3B:
    case 0x3C:
    case 0x43:
LABEL_6:
      v4 = *(_QWORD *)(a1 + 24);
      if ( !v4 )
        goto LABEL_10;
      sub_255630(*(_QWORD *)(a1 + 24));
      clear_tinfo_t();
      break;
    case 0x39:
      v7 = *(_QWORD *)(a1 + 24);
      if ( v7 )
      {
        sub_255630(*(_QWORD *)(a1 + 24));
        clear_tinfo_t();
        j__qfree(v7);
      }
      v8 = *(__int64 **)(a1 + 32);
      if ( v8 )
      {
        clear_tinfo_t();
        v9 = *v8;
        if ( *v8 )
        {
          v10 = v8[1];
          if ( v10 )
          {
            v11 = 0;
            do
            {
              v12 = 9 * v11++;
              v13 = v9 + 8 * v12;
              clear_tinfo_t();
              sub_255630(v13);
              clear_tinfo_t();
              v9 = *v8;
            }
            while ( v10 != v11 );
          }
          v8[1] = 0;
          qfree(v9);
        }
        qfree((__int64)v8);
      }
      goto LABEL_10;
    case 0x3D:
      v4 = *(_QWORD *)(a1 + 24);
      if ( !v4 )
        goto LABEL_10;
      v14 = *(_QWORD *)(v4 + 16);
      if ( v14 )
      {
        *(_QWORD *)(v4 + 24) = 0;
        qfree(v14);
      }
      break;
    case 0x3E:
      v5 = *(_QWORD *)(a1 + 24);
      if ( !v5 )
        goto LABEL_10;
      goto LABEL_9;
    case 0x3F:
    case 0x44:
      qfree(*(_QWORD *)(a1 + 24));
      goto LABEL_10;
    case 0x42:
      v15 = *(_QWORD *)(a1 + 24);
      if ( v15 )
      {
        sub_255050(*(_QWORD *)(a1 + 24));
        j__qfree(v15);
      }
      goto LABEL_10;
    default:
      if ( !under_debugger )
        sub_383060(50063);
      BUG();
  }
  v5 = v4;
LABEL_9:
  j__qfree(v5);
LABEL_10:
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  return clear_tinfo_t();
}
