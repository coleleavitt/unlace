__int64 __fastcall sub_2807B0(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v5; // ecx
  __int64 *v7; // r8
  __int64 v8; // rdi
  unsigned int tinfo_size; // eax
  __int64 v11; // rax
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v12[1] = __readfsqword(0x28u);
  v5 = *(_DWORD *)(a1 + 24) + ~a4;
  if ( v5 >= 0 )
  {
    v7 = (__int64 *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v5);
    while ( 1 )
    {
      v8 = *v7;
      if ( !*v7 )
        break;
      switch ( *(_DWORD *)(v8 + 8) )
      {
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          return (unsigned int)get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(v8 + 24) + 48LL), 0);
        case 9:
        case 0xA:
        case 0xB:
        case 0x20:
        case 0x21:
        case 0x22:
          if ( *(_QWORD *)(v8 + 24) != a2 )
            return 1;
          return a3;
        case 0x10:
          if ( *(_QWORD *)(v8 + 24) != a2 )
            goto LABEL_8;
          return a3;
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x2F:
        case 0x32:
LABEL_8:
          --v5;
          --v7;
          if ( v5 == -1 )
            return a3;
          a2 = v8;
          break;
        case 0x30:
          tinfo_size = get_tinfo_size(0, *(_QWORD *)(v8 + 48), 0);
          if ( (int)a3 > (int)tinfo_size )
            return tinfo_size;
          return a3;
        case 0x39:
          if ( *(_QWORD *)(v8 + 24) != a2 )
          {
            v11 = sub_2806E0(v8, a2, nullptr);
            return (unsigned int)get_tinfo_size(0, *(_QWORD *)(v11 + 64), 0);
          }
          return a3;
        case 0x50:
          sub_3695A0(v12, *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL), 0);
          a3 = get_tinfo_size(0, v12[0], 0);
          clear_tinfo_t(v12);
          return a3;
        default:
          return a3;
      }
    }
    if ( !under_debugger )
      sub_37EEE0(50603);
    BUG();
  }
  return a3;
}
