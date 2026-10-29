_BOOL8 __fastcall sub_147F000(__int64 a1)
{
  int v2; // eax
  char v3; // al
  __int64 v4; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int16 v8; // ax
  __int64 v9; // rdi
  unsigned __int64 v10; // rax

  v2 = *(unsigned __int16 *)(a1 + 32);
  while ( 2 )
  {
    switch ( v2 )
    {
      case 5:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 13LL) & 6) == 0 )
          goto LABEL_9;
        v3 = sub_141A630(5u);
        v4 = 0;
        if ( !v3 )
          v4 = *(_QWORD *)(a1 + 24);
        if ( *(_QWORD *)(a1 + 376) != v4 || !(unsigned __int8)sub_147E8E0(a1) )
          goto LABEL_9;
        return 1;
      case 47:
        return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 4) != 0;
      case 72:
        v6 = *(_QWORD *)(a1 + 8);
        v7 = *(_QWORD *)(v6 + 2944);
        if ( v7 < *(unsigned int *)(v6 + 2912) )
        {
          v8 = *(_WORD *)(*(_QWORD *)(v6 + 2904) + 24 * v7 + 16);
          if ( v8 == 139 )
            return 0;
LABEL_17:
          if ( v8 == 131 )
            return 0;
          if ( (unsigned __int8)sub_1565E90(a1, 0) )
            return 1;
          v2 = *(unsigned __int16 *)(a1 + 32);
          continue;
        }
        if ( *(_WORD *)(sub_14180A0(v6, 1u) + 16) != 139 )
        {
          v9 = *(_QWORD *)(a1 + 8);
          v10 = *(_QWORD *)(v9 + 2944);
          if ( v10 < *(unsigned int *)(v9 + 2912) )
            v8 = *(_WORD *)(*(_QWORD *)(v9 + 2904) + 24 * v10 + 16);
          else
            v8 = *(_WORD *)(sub_14180A0(v9, 1u) + 16);
          goto LABEL_17;
        }
        return 0;
      case 79:
      case 80:
      case 84:
      case 86:
      case 88:
      case 92:
      case 93:
      case 94:
      case 95:
      case 98:
      case 99:
      case 103:
      case 106:
      case 107:
      case 108:
      case 109:
      case 113:
      case 114:
      case 115:
      case 117:
      case 124:
      case 127:
      case 129:
      case 155:
      case 156:
      case 160:
      case 161:
      case 177:
      case 178:
      case 179:
      case 180:
      case 181:
      case 182:
      case 183:
      case 184:
      case 185:
      case 186:
      case 189:
      case 202:
      case 203:
      case 205:
      case 321:
      case 322:
      case 323:
      case 324:
      case 325:
      case 326:
      case 328:
      case 330:
      case 331:
      case 332:
      case 333:
      case 334:
      case 336:
      case 337:
      case 338:
      case 341:
      case 342:
      case 343:
      case 344:
      case 345:
      case 346:
      case 347:
      case 348:
      case 349:
      case 350:
      case 351:
      case 352:
      case 362:
      case 367:
      case 368:
      case 371:
      case 372:
      case 379:
      case 380:
      case 381:
      case 382:
      case 383:
      case 384:
      case 385:
      case 386:
      case 389:
      case 394:
      case 400:
      case 415:
      case 417:
        return 1;
      case 141:
        return (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 47LL) & 0x20) != 0;
      case 151:
LABEL_9:
        if ( (unsigned __int8)sub_1565E90(a1, 0) )
          return 1;
        v2 = *(unsigned __int16 *)(a1 + 32);
        if ( (_WORD)v2 == 5 )
          return 0;
        continue;
      case 358:
      case 359:
      case 360:
      case 361:
        return *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 89LL) & 1;
      default:
        return 0;
    }
  }
}
