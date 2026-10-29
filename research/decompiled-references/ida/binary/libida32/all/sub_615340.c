unsigned __int64 __fastcall sub_615340(_QWORD *a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // r9
  int v10; // r13d
  int v11; // eax
  int v12; // r14d
  bool v13; // r15
  __int64 v14; // rdi
  char v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  __int64 view_options; // rcx
  const char *v19; // rsi
  __int64 v20; // [rsp+10h] [rbp-68h] BYREF
  int v21; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a2 != 100 )
  {
    switch ( a2 )
    {
      case 2u:
        v16 = getinf_flag(2, 1);
        return enable_auto(v16);
      case 3u:
        v8 = getinf(3);
        if ( (((unsigned __int16)a3 ^ (unsigned __int16)v8) & 0x1006) == 0 )
          return v24 - __readfsqword(0x28u);
        v9 = (a3 >> 2) & 1;
        v10 = ((unsigned __int8)(v8 & 4) >> 2) & 1;
        v11 = ((unsigned __int8)(v8 & 2) >> 1) ^ 1;
        if ( (v8 & 0x1000) != 0 )
        {
          if ( (_BYTE)v11 || (v8 & 4) != 0 )
          {
            sub_613BB0((__int64)a1, (__int64)&unk_2B0AE20, v8, v8 & 0xFFFFFFF9 | 2, 3);
            LOBYTE(v9) = (a3 & 4) != 0;
          }
          LOBYTE(v12) = 1;
          LOBYTE(v10) = 0;
          v13 = 1;
        }
        else
        {
          LOBYTE(v12) = v11 & (a3 >> 1);
          if ( (_BYTE)v12 )
          {
            LOBYTE(v10) = 0;
            v13 = 0;
            sub_613BB0((__int64)a1, (__int64)&unk_2B0AE20, v8, v8 & 0xFFFFFFFB, 3);
            LOBYTE(v9) = (a3 & 4) != 0;
          }
          else
          {
            if ( (_BYTE)v11 && (v8 & 4) != 0 )
            {
              sub_613BB0((__int64)a1, (__int64)&unk_2B0AE20, v8, v8 | 2, 3);
              if ( (getinf(58) & 3) == 1 )
                return v24 - __readfsqword(0x28u);
              return sub_5ED560(*(_QWORD **)(*a1 + 1480LL), 1);
            }
            v12 = ((unsigned __int8)(v8 & 4) >> 2) ^ 1;
            v13 = (v8 & 2) != 0;
            LOBYTE(v9) = v12 & ((a3 & 4) != 0);
          }
        }
        if ( (_BYTE)v9 )
        {
          v14 = *a1;
          v20 = -1;
          v21 = 4;
          ptr = nullptr;
          v23 = 0;
          LOBYTE(v12) = sub_4F90D0(v14, &v20, &ptr);
          if ( !(_BYTE)v12 )
          {
            sub_613BB0((__int64)a1, (__int64)&unk_2B0AE20, v8, a3, 3);
            v19 = haystack;
            if ( (_QWORD)v23 )
              v19 = (const char *)ptr;
            sub_375320((__int64)&unk_22B285A, v19);
          }
          if ( ptr )
          {
            *(_QWORD *)&v23 = 0;
            qfree(ptr);
          }
          LOBYTE(v10) = 0;
        }
        v15 = getinf(58) & 3;
        if ( (v15 == 1) == (_BYTE)v10 && ((v15 == 3) == v13 || !(_BYTE)v12) )
          return v24 - __readfsqword(0x28u);
        return sub_5ED560(*(_QWORD **)(*a1 + 1480LL), 1);
      case 0x1Eu:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
        if ( a4 && (unsigned __int8)sub_3E8690() )
        {
          v17 = getinf_flag(2, 128);
          view_options = get_view_options(v17);
          switch ( a2 )
          {
            case 0x1Eu:
              *(_BYTE *)(view_options + 5) = *(_BYTE *)(*a1 + 668LL);
              break;
            case 0x28u:
              *(_BYTE *)(view_options + 8) = *(_BYTE *)(*a1 + 686LL);
              break;
            case 0x29u:
              *(_BYTE *)(view_options + 7) = *(_BYTE *)(*a1 + 687LL);
              break;
            case 0x2Au:
              *(_WORD *)(view_options + 10) = *(_WORD *)(*a1 + 688LL);
              break;
            case 0x2Eu:
              *(_BYTE *)(view_options + 9) = *(_BYTE *)(*a1 + 697LL);
              break;
            case 0x2Fu:
              *(_WORD *)(view_options + 12) = *(_WORD *)(*a1 + 698LL);
              break;
            case 0x30u:
              *(_BYTE *)(view_options + 14) = *(_BYTE *)(*a1 + 700LL);
              break;
            default:
              return v24 - __readfsqword(0x28u);
          }
        }
        return v24 - __readfsqword(0x28u);
      case 0x38u:
      case 0x3Au:
      case 0x62u:
      case 0x63u:
        v7 = getinf(99);
        if ( v7 == 176 || v7 == 256 )
          sub_5ED320(*a1);
        if ( a2 == 58 || a2 == 99 )
          sub_633BB0(*a1, 5, 0, 0, 0);
        return sub_396090(0xBu, 0);
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
        if ( a3 == (unsigned __int8)getinf(a2) )
          return v24 - __readfsqword(0x28u);
        return sub_633BB0(*a1, 5, 0, 0, 0);
      case 0x55u:
        return mark_builtin_widgets(0x20000000, 0, 1);
      default:
        return v24 - __readfsqword(0x28u);
    }
  }
  return v24 - __readfsqword(0x28u);
}

