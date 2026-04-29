__int64 __fastcall sub_3F4C00(__int64 a1, __int64 a2, __m128 a3)
{
  char v3; // al
  int v4; // r13d
  __int16 v5; // ax
  char **v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  int v9; // ecx
  int v10; // r14d
  int v11; // r12d
  int v12; // ebp
  int v13; // r14d
  __int16 v14; // ax
  unsigned int v15; // ecx
  __int16 v16; // ax
  __int64 result; // rax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  __m128i v21; // xmm0
  int v22; // eax
  __m128i v23; // xmm0
  int v24; // eax
  __m128i v25; // xmm0
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  unsigned __int64 v35; // kr00_8
  __int64 v36; // rdx
  char v37; // al
  unsigned int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // ecx
  char v44; // dl
  int v45; // eax
  __int64 v46; // rbx
  int v47; // eax
  __int64 v48; // r9
  __int64 v49; // rcx
  _DWORD *v50; // rcx
  int v51; // edx
  int v52; // edx
  int v53; // eax
  unsigned int v54; // [rsp+18h] [rbp-90h]
  int v55; // [rsp+1Ch] [rbp-8Ch]
  _QWORD v56[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v57; // [rsp+30h] [rbp-78h] BYREF
  int v58; // [rsp+38h] [rbp-70h]
  __int64 v59; // [rsp+40h] [rbp-68h] BYREF
  int v60; // [rsp+48h] [rbp-60h]
  __int64 v61; // [rsp+50h] [rbp-58h] BYREF
  int v62; // [rsp+58h] [rbp-50h]
  unsigned __int64 v63; // [rsp+68h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 384);
  v63 = __readfsqword(0x28u);
  v4 = a2;
  if ( v3 )
  {
    if ( v3 != 1 )
      return 0;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL);
    v5 = *(_WORD *)(a1 + 48);
    if ( v5 == 473 || v5 == 195 )
    {
      a2 = *(unsigned __int16 *)(a1 + 70);
      if ( (_DWORD)a2 == ((*(_BYTE *)(a1 + 57) & 4) == 0 ? 30 : 17) )
        goto LABEL_6;
    }
    else if ( (*(_BYTE *)(v18 + 64) & 2) == 0 && v5 == 544 )
    {
      v5 = 544;
      goto LABEL_6;
    }
    v26 = *(_QWORD **)(v18 + 96);
    a2 = *(_QWORD *)(a1 + 40);
    v27 = &v26[*(_QWORD *)(v18 + 104)];
    if ( v26 == v27 )
      return 0;
    while ( a2 != *v26 )
    {
      if ( v27 == ++v26 )
        return 0;
    }
    if ( v27 == v26 )
      return 0;
  }
  else
  {
    v5 = *(_WORD *)(a1 + 48);
  }
  if ( *(_QWORD *)(a1 + 784) != -1 )
  {
    if ( ((v5 - 31) & 0xFFFD) != 0 )
    {
      if ( (unsigned __int16)(v5 - 131) > 1u && v5 != 126
        || (*(_QWORD *)(a1 + 104) & 0xFFFF00000000FF00LL) != 0x40000000000400LL )
      {
        goto LABEL_6;
      }
    }
    else if ( (*(_QWORD *)(a1 + 104) & 0xFFFF00000000FF00LL) != 0x40000000000100LL )
    {
      goto LABEL_6;
    }
    a2 = *(_QWORD *)(a1 + 40);
    if ( sub_CBD70(0x58u, a2) == 1 && !sub_CBD70(0xBC7u) )
      return 4294967264LL;
    v5 = *(_WORD *)(a1 + 48);
  }
LABEL_6:
  v6 = &off_4CA1C0;
  while ( *((_WORD *)v6 + 4) != v5 )
  {
    v6 += 2;
    if ( &unk_4CA400 == (_UNKNOWN *)v6 )
    {
      v6 = nullptr;
      if ( !(unsigned __int8)sub_3EA750(a1, *(double *)a3.m128_u64) )
        goto LABEL_10;
      goto LABEL_40;
    }
  }
  if ( !(unsigned __int8)sub_3EA750(a1, *(double *)a3.m128_u64) )
  {
LABEL_10:
    *(_WORD *)(a1 + 888) = 0;
    goto LABEL_11;
  }
LABEL_40:
  if ( *(_WORD *)(a1 + 888) )
  {
    if ( !*(_BYTE *)(a1 + 145) )
    {
      v19 = *(_DWORD *)(a1 + 892) & 0x38;
      if ( v19 == 8 )
        goto LABEL_48;
      if ( v19 == 24 )
      {
        a2 = *(_QWORD *)(a1 + 40);
        if ( sub_CBD70(0x58u, a2) != 1 || sub_CBD70(0xBC7u) )
          goto LABEL_48;
        v19 = *(_DWORD *)(a1 + 892) & 0x38;
      }
      if ( v19 == 32 && sub_CBD70(0xBC7u) == 2 )
      {
LABEL_48:
        v22 = *(_DWORD *)(a1 + 136);
        *(__m128i *)(a1 + 144) = _mm_loadu_si128((const __m128i *)(a1 + 104));
        v23 = _mm_loadu_si128((const __m128i *)(a1 + 120));
        *(_DWORD *)(a1 + 176) = v22;
        v24 = *(_DWORD *)(a1 + 96);
        *(__m128i *)(a1 + 160) = v23;
        v25 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        *(_DWORD *)(a1 + 136) = v24;
        *(__m128i *)(a1 + 104) = v25;
        a3 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 80));
        *(__m128 *)(a1 + 120) = a3;
        goto LABEL_11;
      }
    }
    if ( !*(_BYTE *)(a1 + 185) && (*(_DWORD *)(a1 + 892) & 0x38) == 0x10 )
    {
      v20 = *(_DWORD *)(a1 + 176);
      *(__m128i *)(a1 + 184) = _mm_loadu_si128((const __m128i *)(a1 + 144));
      v21 = _mm_loadu_si128((const __m128i *)(a1 + 160));
      *(_DWORD *)(a1 + 216) = v20;
      *(__m128i *)(a1 + 200) = v21;
      goto LABEL_48;
    }
  }
LABEL_11:
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v8 = *(unsigned __int16 *)(a1 + 48);
  v9 = *(_DWORD *)(v7 + 104);
  if ( v8 >= v9 && v8 < *(_DWORD *)(v7 + 108) )
  {
    v54 = *(_DWORD *)(*(_QWORD *)(v7 + 112) + 16LL * (v8 - v9) + 8);
    v10 = v54 & 0x400;
    if ( (v54 & 0x100) != 0 || (v11 = -1, (*(_BYTE *)(a1 + 65) & 0xF7) == 1) )
    {
      a2 = 0;
      v11 = sub_3ED570(a1, 0, 0, *(double *)a3.m128_u64);
    }
    if ( (v54 & 0x200) != 0 )
      goto LABEL_15;
LABEL_14:
    if ( (*(_BYTE *)(a1 + 105) & 0xF7) == 1 )
      goto LABEL_15;
    goto LABEL_57;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0xF7) == 1 )
  {
    a2 = 0;
    v10 = 0;
    v54 = 0;
    v11 = sub_3ED570(a1, 0, 0, *(double *)a3.m128_u64);
    goto LABEL_14;
  }
  v10 = 0;
  v54 = 0;
  v11 = -1;
  if ( (*(_BYTE *)(a1 + 105) & 0xF7) == 1 )
    goto LABEL_15;
LABEL_57:
  if ( !sub_3EA630(*(unsigned __int16 *)(a1 + 48)) )
  {
    v12 = -1;
    goto LABEL_16;
  }
LABEL_15:
  a2 = 1;
  v12 = sub_3ED570(a1, 1, 0, *(double *)a3.m128_u64);
LABEL_16:
  if ( v10 || (v13 = -1, (*(_BYTE *)(a1 + 145) & 0xF7) == 1) )
  {
    a2 = 2;
    v13 = sub_3ED570(a1, 2, 0, *(double *)a3.m128_u64);
  }
  if ( v6 )
  {
    a2 = (__int64)v6;
    if ( (unsigned __int8)sub_3EE5C0(a1, (__int64)v6, v11, v12, v13) )
      return 0;
  }
  if ( !*(_WORD *)(a1 + 888) )
  {
    sub_3F46C0((_QWORD *)a1, v54, v11, v12, v13, v4);
    return 0;
  }
  v14 = *(_WORD *)(a1 + 48);
  if ( (v14 == 128 || v14 == 145) && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 4 && (*(_BYTE *)(a1 + 70) & 1) != 0 )
  {
    sub_3F46C0((_QWORD *)a1, v54, v11, v12, v13, v4);
    sub_32C190(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x31u);
    return 0;
  }
  if ( !*(_BYTE *)(a1 + 145) )
  {
    if ( (*(_DWORD *)(a1 + 892) & 0x38) == 0x18 )
    {
      a2 = *(_QWORD *)(a1 + 40);
      if ( sub_CBD70(0x58u, a2) == 1 && !sub_CBD70(0xBC7u) )
      {
        v13 = v12;
        v12 = v11;
        v11 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 452LL);
      }
      if ( *(_BYTE *)(a1 + 145) )
        goto LABEL_71;
      v14 = *(_WORD *)(a1 + 48);
    }
    if ( (unsigned __int16)(v14 - 178) <= 0xFu )
    {
      if ( v13 != -1 )
      {
        if ( !under_debugger )
          sub_37E160(0xCCBCu, a2, *(double *)a3.m128_u64);
        goto LABEL_238;
      }
      v13 = v12;
      v12 = v11;
      v11 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 644LL);
      goto LABEL_29;
    }
  }
LABEL_71:
  if ( !*(_BYTE *)(a1 + 105) )
  {
    v28 = *(unsigned __int16 *)(a1 + 48);
    v29 = (unsigned int)(v28 - 83);
    if ( (unsigned __int16)(v28 - 83) > 0xCu )
    {
      if ( (unsigned __int16)(v28 - 536) <= 1u || (unsigned __int16)(v28 - 548) <= 3u )
      {
        a2 = *(_QWORD *)(a1 + 40);
        if ( sub_CBD70(0x58u, a2) == 1 && !sub_CBD70(0xBC7u) )
        {
          if ( (v13 & v12) != 0xFFFFFFFF )
          {
            if ( !under_debugger )
              sub_37E160(0xCC65u, a2, *(double *)a3.m128_u64);
            goto LABEL_238;
          }
          v12 = v11;
        }
      }
    }
    else
    {
      v30 = 4369;
      if ( _bittest64(&v30, v29) )
      {
        if ( v12 != -1 )
        {
          if ( !under_debugger )
            sub_37E160(0xCCBDu, a2, *(double *)a3.m128_u64);
          goto LABEL_238;
        }
        v12 = v11;
        v11 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 644LL);
        if ( (unsigned __int8)sub_3EA990(a1) )
          goto LABEL_30;
LABEL_76:
        v31 = *(unsigned __int16 *)(a1 + 48);
        v32 = (unsigned int)(v31 - 83);
        if ( (unsigned __int16)(v31 - 83) <= 0xCu )
        {
          v33 = 4369;
          if ( _bittest64(&v33, v32) )
          {
            sub_3EB130(a1, (unsigned int)v11, v4, *(double *)a3.m128_u64);
            return 0;
          }
          goto LABEL_78;
        }
        if ( (unsigned __int16)v31 > 0x241u )
        {
          if ( (unsigned __int16)v31 <= 0x341u )
          {
            if ( (unsigned __int16)v31 <= 0x33Du )
              goto LABEL_108;
            goto LABEL_78;
          }
          if ( (unsigned __int16)(v31 - 1743) <= 0xDu )
            goto LABEL_78;
          v32 = (unsigned int)(v31 - 1690);
          if ( (unsigned __int16)(v31 - 1690) > 1u )
            goto LABEL_108;
        }
        else
        {
          if ( (unsigned __int16)v31 > 0x23Du )
            goto LABEL_78;
          if ( (unsigned __int16)v31 <= 0xC9u )
          {
            if ( (unsigned __int16)v31 <= 0xC5u )
            {
              v32 = (unsigned int)(v31 - 82);
              if ( (unsigned __int16)(v31 - 82) > 0x1Fu )
              {
                if ( (unsigned __int16)v31 <= 0x2Cu )
                {
                  if ( (unsigned __int16)v31 <= 0x26u )
                  {
                    if ( !(_WORD)v31 )
                    {
LABEL_98:
                      if ( !(unsigned __int8)sub_3F17D0(
                                               a1,
                                               (unsigned int)v11,
                                               v12,
                                               *(unsigned __int16 *)(a1 + 890),
                                               0,
                                               *(double *)a3.m128_u64) )
                      {
                        if ( !under_debugger )
                          sub_37E160(0xCC5Cu, (unsigned int)v11, *(double *)a3.m128_u64);
                        goto LABEL_238;
                      }
LABEL_99:
                      v34 = *(_DWORD *)(a1 + 892);
                      if ( (v34 & 2) != 0 )
                      {
                        sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), v11);
                      }
                      else if ( (v34 & 4) != 0
                             && *(_WORD *)(a1 + 890) == 4
                             && *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
                      {
                        sub_1D1F50(a1, 0x3Du, 4, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, v11 + 4, 0);
                      }
                      return 0;
                    }
                    goto LABEL_108;
                  }
                  return sub_3EBB00(a1, (unsigned int)v11, v12, *(double *)a3.m128_u64);
                }
                v32 = (unsigned int)(v31 - 59);
                if ( (unsigned __int16)(v31 - 59) <= 5u )
                  return sub_3EBB00(a1, (unsigned int)v11, v12, *(double *)a3.m128_u64);
LABEL_108:
                v35 = v32;
                v36 = (unsigned __int16)v31;
                switch ( (__int16)v31 )
                {
                  case 0:
                  case 39:
                  case 40:
                  case 41:
                  case 42:
                  case 43:
                  case 44:
                  case 45:
                  case 46:
                  case 47:
                  case 48:
                  case 49:
                  case 50:
                  case 51:
                  case 52:
                  case 53:
                  case 55:
                  case 56:
                  case 58:
                  case 59:
                  case 60:
                  case 61:
                  case 62:
                  case 63:
                  case 64:
                  case 77:
                  case 78:
                  case 79:
                  case 80:
                  case 81:
                  case 82:
                  case 83:
                  case 84:
                  case 85:
                  case 86:
                  case 87:
                  case 88:
                  case 89:
                  case 90:
                  case 91:
                  case 92:
                  case 93:
                  case 94:
                  case 95:
                  case 96:
                  case 97:
                  case 98:
                  case 99:
                  case 100:
                  case 101:
                  case 102:
                  case 103:
                  case 104:
                  case 105:
                  case 106:
                  case 107:
                  case 108:
                  case 109:
                  case 110:
                  case 111:
                  case 112:
                  case 113:
                  case 119:
                  case 120:
                  case 121:
                  case 122:
                  case 123:
                  case 124:
                  case 125:
                  case 126:
                  case 127:
                  case 128:
                  case 129:
                  case 130:
                  case 131:
                  case 132:
                  case 133:
                  case 134:
                  case 136:
                  case 137:
                  case 138:
                  case 139:
                  case 140:
                  case 141:
                  case 142:
                  case 143:
                  case 144:
                  case 145:
                  case 146:
                  case 147:
                  case 148:
                  case 149:
                  case 150:
                  case 151:
                  case 152:
                  case 153:
                  case 154:
                  case 155:
                  case 156:
                  case 157:
                  case 162:
                  case 167:
                  case 169:
                  case 170:
                  case 171:
                  case 173:
                  case 174:
                  case 177:
                  case 198:
                  case 199:
                  case 200:
                  case 201:
                  case 206:
                  case 207:
                  case 208:
                  case 209:
                  case 210:
                  case 215:
                  case 216:
                  case 217:
                  case 218:
                  case 219:
                  case 220:
                  case 221:
                  case 222:
                  case 227:
                  case 228:
                  case 229:
                  case 230:
                  case 231:
                  case 232:
                  case 233:
                  case 234:
                  case 235:
                  case 236:
                  case 237:
                  case 238:
                  case 239:
                  case 240:
                  case 241:
                  case 242:
                  case 243:
                  case 244:
                  case 245:
                  case 246:
                  case 247:
                  case 248:
                  case 249:
                  case 250:
                  case 251:
                  case 252:
                  case 253:
                  case 254:
                  case 255:
                  case 256:
                  case 257:
                  case 258:
                  case 259:
                  case 260:
                  case 261:
                  case 262:
                  case 263:
                  case 264:
                  case 265:
                  case 266:
                  case 267:
                  case 268:
                  case 269:
                  case 270:
                  case 271:
                  case 272:
                  case 273:
                  case 274:
                  case 275:
                  case 276:
                  case 277:
                  case 278:
                  case 279:
                  case 280:
                  case 281:
                  case 282:
                  case 283:
                  case 284:
                  case 285:
                  case 286:
                  case 287:
                  case 288:
                  case 289:
                  case 290:
                  case 291:
                  case 292:
                  case 293:
                  case 294:
                  case 295:
                  case 296:
                  case 297:
                  case 298:
                  case 299:
                  case 300:
                  case 301:
                  case 302:
                  case 303:
                  case 304:
                  case 305:
                  case 306:
                  case 307:
                  case 308:
                  case 309:
                  case 310:
                  case 311:
                  case 312:
                  case 313:
                  case 314:
                  case 315:
                  case 316:
                  case 317:
                  case 318:
                  case 319:
                  case 320:
                  case 321:
                  case 322:
                  case 323:
                  case 324:
                  case 325:
                  case 326:
                  case 327:
                  case 328:
                  case 329:
                  case 330:
                  case 331:
                  case 332:
                  case 333:
                  case 334:
                  case 335:
                  case 336:
                  case 337:
                  case 338:
                  case 339:
                  case 340:
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
                  case 353:
                  case 354:
                  case 355:
                  case 356:
                  case 357:
                  case 358:
                  case 359:
                  case 360:
                  case 361:
                  case 362:
                  case 363:
                  case 364:
                  case 365:
                  case 366:
                  case 367:
                  case 368:
                  case 369:
                  case 370:
                  case 371:
                  case 372:
                  case 373:
                  case 374:
                  case 375:
                  case 376:
                  case 377:
                  case 378:
                  case 379:
                  case 380:
                  case 381:
                  case 382:
                  case 383:
                  case 384:
                  case 385:
                  case 386:
                  case 387:
                  case 388:
                  case 389:
                  case 390:
                  case 391:
                  case 392:
                  case 393:
                  case 394:
                  case 395:
                  case 396:
                  case 397:
                  case 398:
                  case 399:
                  case 400:
                  case 401:
                  case 402:
                  case 403:
                  case 404:
                  case 405:
                  case 406:
                  case 407:
                  case 408:
                  case 409:
                  case 410:
                  case 411:
                  case 412:
                  case 413:
                  case 414:
                  case 415:
                  case 416:
                  case 417:
                  case 418:
                  case 419:
                  case 420:
                  case 421:
                  case 422:
                  case 423:
                  case 424:
                  case 425:
                  case 426:
                  case 427:
                  case 428:
                  case 429:
                  case 432:
                  case 433:
                  case 434:
                  case 435:
                  case 436:
                  case 437:
                  case 438:
                  case 439:
                  case 440:
                  case 443:
                  case 444:
                  case 445:
                  case 446:
                  case 447:
                  case 448:
                  case 449:
                  case 450:
                  case 451:
                  case 452:
                  case 453:
                  case 454:
                  case 455:
                  case 456:
                  case 457:
                  case 458:
                  case 459:
                  case 460:
                  case 461:
                  case 462:
                  case 463:
                  case 464:
                  case 465:
                  case 466:
                  case 467:
                  case 468:
                  case 469:
                  case 470:
                  case 471:
                  case 472:
                  case 474:
                  case 475:
                  case 476:
                  case 478:
                  case 479:
                  case 480:
                  case 481:
                  case 482:
                  case 483:
                  case 484:
                  case 485:
                  case 486:
                  case 487:
                  case 488:
                  case 489:
                  case 490:
                  case 491:
                  case 492:
                  case 493:
                  case 494:
                  case 496:
                  case 497:
                  case 498:
                  case 499:
                  case 505:
                  case 506:
                  case 507:
                  case 508:
                  case 509:
                  case 510:
                  case 511:
                  case 513:
                  case 514:
                  case 515:
                  case 519:
                  case 520:
                  case 522:
                  case 523:
                  case 525:
                  case 526:
                  case 527:
                  case 528:
                  case 529:
                  case 530:
                  case 531:
                  case 532:
                  case 533:
                  case 538:
                  case 539:
                  case 540:
                  case 541:
                  case 552:
                  case 557:
                  case 558:
                  case 559:
                  case 566:
                  case 567:
                  case 571:
                  case 572:
                  case 573:
                  case 574:
                  case 575:
                  case 576:
                  case 577:
                  case 581:
                  case 584:
                  case 585:
                  case 586:
                  case 587:
                  case 588:
                  case 589:
                  case 590:
                  case 591:
                  case 592:
                  case 597:
                  case 598:
                  case 599:
                  case 600:
                  case 601:
                  case 602:
                  case 603:
                  case 604:
                  case 605:
                  case 606:
                  case 607:
                  case 608:
                  case 609:
                  case 610:
                  case 611:
                  case 612:
                  case 613:
                  case 614:
                  case 615:
                  case 616:
                  case 617:
                  case 618:
                  case 619:
                  case 620:
                  case 621:
                  case 622:
                  case 623:
                  case 624:
                  case 625:
                  case 626:
                  case 627:
                  case 628:
                  case 629:
                  case 630:
                  case 631:
                  case 632:
                  case 633:
                  case 634:
                  case 635:
                  case 636:
                  case 637:
                  case 638:
                  case 639:
                  case 640:
                  case 641:
                  case 642:
                  case 643:
                  case 644:
                  case 645:
                  case 646:
                  case 647:
                  case 648:
                  case 649:
                  case 650:
                  case 651:
                  case 652:
                  case 653:
                  case 654:
                  case 655:
                  case 656:
                  case 657:
                  case 658:
                  case 659:
                  case 660:
                  case 661:
                  case 662:
                  case 663:
                  case 664:
                  case 665:
                  case 666:
                  case 667:
                  case 668:
                  case 669:
                  case 670:
                  case 671:
                  case 672:
                  case 673:
                  case 674:
                  case 675:
                  case 676:
                  case 677:
                  case 678:
                  case 679:
                  case 680:
                  case 681:
                  case 682:
                  case 683:
                  case 684:
                  case 685:
                  case 686:
                  case 687:
                  case 688:
                  case 689:
                  case 690:
                  case 691:
                  case 692:
                  case 693:
                  case 694:
                  case 695:
                  case 696:
                  case 697:
                  case 698:
                  case 699:
                  case 700:
                  case 701:
                  case 702:
                  case 703:
                  case 704:
                  case 705:
                  case 706:
                  case 707:
                  case 708:
                  case 709:
                  case 710:
                  case 711:
                  case 712:
                  case 713:
                  case 714:
                  case 715:
                  case 716:
                  case 717:
                  case 718:
                  case 719:
                  case 720:
                  case 721:
                  case 722:
                  case 723:
                  case 724:
                  case 725:
                  case 726:
                  case 727:
                  case 728:
                  case 729:
                  case 730:
                  case 731:
                  case 732:
                  case 733:
                  case 734:
                  case 735:
                  case 736:
                  case 737:
                  case 738:
                  case 739:
                  case 740:
                  case 741:
                  case 742:
                  case 743:
                  case 744:
                  case 745:
                  case 746:
                  case 747:
                  case 748:
                  case 749:
                  case 750:
                  case 751:
                  case 752:
                  case 753:
                  case 754:
                  case 755:
                  case 756:
                  case 757:
                  case 758:
                  case 759:
                  case 760:
                  case 761:
                  case 762:
                  case 763:
                  case 764:
                  case 765:
                  case 766:
                  case 767:
                  case 768:
                  case 769:
                  case 770:
                  case 771:
                  case 772:
                  case 773:
                  case 774:
                  case 775:
                  case 776:
                  case 777:
                  case 778:
                  case 779:
                  case 780:
                  case 781:
                  case 782:
                  case 783:
                  case 784:
                  case 785:
                  case 786:
                  case 787:
                  case 788:
                  case 789:
                  case 790:
                  case 791:
                  case 792:
                  case 793:
                  case 794:
                  case 795:
                  case 796:
                  case 797:
                  case 798:
                  case 799:
                  case 800:
                  case 801:
                  case 802:
                  case 803:
                  case 804:
                  case 805:
                  case 806:
                  case 807:
                  case 808:
                  case 809:
                  case 810:
                  case 811:
                  case 812:
                  case 813:
                  case 814:
                  case 815:
                  case 816:
                  case 817:
                  case 818:
                  case 819:
                  case 820:
                  case 822:
                  case 823:
                  case 826:
                  case 827:
                  case 830:
                  case 831:
                  case 832:
                  case 833:
                    goto LABEL_98;
                  case 1:
                  case 4:
                  case 30:
                  case 32:
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 4) == 0 )
                      goto LABEL_148;
                    sub_3EB640(a1, 26, v12, v13, *(double *)a3.m128_u64);
                    if ( ((*(_WORD *)(a1 + 48) - 30) & 0xFFFD) != 0 )
                      goto LABEL_148;
                    v37 = *(_BYTE *)(a1 + 145);
                    if ( v37 == 5 )
                    {
                      v38 = 2;
                    }
                    else if ( v37 || (v38 = 1, *(_BYTE *)(a1 + 105) != 5) )
                    {
                      if ( !under_debugger )
                        sub_37E160(0xCC5Du, 26, *(double *)a3.m128_u64);
                      break;
                    }
                    if ( (unsigned __int8)sub_60860((_QWORD *)(*(_QWORD *)(a1 + 832) + 104LL), v13, 1) )
                    {
                      sub_3E8540(*(_QWORD *)(a1 + 832), v13);
                      v13 = sub_3ED570(a1, v38, 0, *(double *)a3.m128_u64);
LABEL_148:
                      sub_3EAB70(a1, 0xCu, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                      goto LABEL_99;
                    }
                    if ( !under_debugger )
                      sub_37E160(0xCC5Eu, (unsigned int)v13, *(double *)a3.m128_u64);
                    break;
                  case 2:
                  case 5:
                  case 31:
                  case 33:
                    goto LABEL_148;
                  case 3:
                  case 36:
                    sub_3EAB70(a1, 0x14u, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    goto LABEL_99;
                  case 6:
                  case 12:
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 4) != 0 )
                      sub_3EB640(a1, 30, v12, v13, *(double *)a3.m128_u64);
                    goto LABEL_137;
                  case 7:
                  case 13:
LABEL_137:
                    sub_3EAB70(a1, 0xDu, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    goto LABEL_99;
                  case 8:
                    sub_3EAB70(a1, 0x13u, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    sub_3EAB70(a1, 7u, *(unsigned __int16 *)(a1 + 890), v11, 0x3BEA45E214ADDC55LL, v11, 0);
                    goto LABEL_99;
                  case 9:
                  case 37:
                    sub_3EAB70(a1, 0x13u, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    goto LABEL_99;
                  case 10:
                  case 11:
                  case 34:
                  case 35:
                  case 593:
                  case 594:
                  case 595:
                  case 596:
                    sub_3EDE90(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 14:
                  case 38:
                  case 441:
                  case 442:
                    sub_3EAB70(a1, 0x15u, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    goto LABEL_99;
                  case 15:
                  case 16:
                  case 17:
                  case 18:
                  case 19:
                  case 20:
                  case 21:
                  case 22:
                  case 23:
                  case 24:
                  case 25:
                  case 26:
                  case 27:
                  case 28:
                  case 29:
                    sub_3EAC60(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 54:
                  case 57:
                  case 521:
                  case 524:
                  case 542:
                  case 543:
                    sub_3EAF50(a1, (unsigned int)v11, v12, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 65:
                  case 66:
                  case 67:
                  case 68:
LABEL_189:
                    sub_3EE3A0(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 69:
                  case 70:
                  case 71:
                  case 72:
                  case 500:
                  case 501:
                  case 502:
                  case 503:
                    if ( *(_BYTE *)(a1 + 65) == 9 && *(_BYTE *)(a1 + 97) == 17 )
                      sub_3F0680(a1, (unsigned int)v12, v13, *(unsigned __int16 *)(a1 + 70), *(double *)a3.m128_u64);
                    else
                      sub_3F0680(a1, (unsigned int)v11, v12, 0, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 73:
                  case 74:
                  case 75:
                  case 76:
                    if ( *(_BYTE *)(a1 + 105) == 9 && *(_BYTE *)(a1 + 137) == 17 )
                    {
                      v50 = *(_DWORD **)(a1 + 832);
                      v51 = 2 * v50[20] * *(unsigned __int16 *)(a1 + 110);
                    }
                    else
                    {
                      v50 = *(_DWORD **)(a1 + 832);
                      v51 = 0;
                    }
                    if ( (_WORD)v31 == 75 )
                    {
                      v39 = v50[153] + v51;
                    }
                    else
                    {
                      if ( (_WORD)v31 != 76 )
                      {
                        if ( (_WORD)v31 == 73 )
                          v52 = v50[153] + v51;
                        else
                          v52 = v50[154] + v51;
                        sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v11, 0x3BEA45E214ADDC55LL, v52, 0);
                        goto LABEL_99;
                      }
                      v39 = v50[154] + v51;
                    }
LABEL_154:
                    sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v39, 0x3BEA45E214ADDC55LL, v11, 0);
                    goto LABEL_99;
                  case 114:
                  case 517:
                  case 546:
                  case 835:
                  case 836:
LABEL_158:
                    sub_3EAB70(
                      a1,
                      0x39u,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                      *(int *)(*(_QWORD *)(a1 + 832) + 64LL),
                      v12,
                      0x3BEA45E214ADDC55LL,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
                    goto LABEL_99;
                  case 115:
                  case 202:
LABEL_157:
                    sub_3EAB70(
                      a1,
                      0x37u,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL),
                      *(_QWORD *)(a1 + 80),
                      0x3BEA45E214ADDC55LL,
                      0x3BEA45E214ADDC55LL,
                      0);
                    goto LABEL_99;
                  case 116:
                  case 518:
                  case 547:
                    v49 = *(_QWORD *)(a1 + 832);
                    goto LABEL_176;
                  case 117:
                  case 118:
                  case 821:
                    goto LABEL_155;
                  case 135:
                  case 195:
                  case 204:
                  case 205:
                  case 473:
                  case 495:
                  case 838:
LABEL_153:
                    v39 = v12;
                    goto LABEL_154;
                  case 158:
                    sub_3EAB70(a1, 0x45u, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    goto LABEL_99;
                  case 159:
                    sub_3EAB70(a1, 0x46u, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    goto LABEL_99;
                  case 160:
                    sub_3EAB70(a1, 0x47u, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    goto LABEL_99;
                  case 161:
                    sub_3EAB70(a1, 0x48u, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    goto LABEL_99;
                  case 163:
                  case 164:
                  case 165:
                  case 166:
                  case 168:
                  case 172:
                    sub_3EB890(a1, (unsigned int)v11, v12, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 175:
                  case 553:
                  case 554:
                    sub_3EAB70(a1, 0x43u, *(unsigned __int16 *)(a1 + 890), v12, 0x3BEA45E214ADDC55LL, v11, 0);
                    goto LABEL_99;
                  case 176:
                    sub_3EAB70(a1, 0x44u, *(unsigned __int16 *)(a1 + 890), v12, 0x3BEA45E214ADDC55LL, v11, 0);
                    goto LABEL_99;
                  case 178:
                  case 179:
                  case 180:
                  case 181:
                  case 182:
                  case 183:
                  case 184:
                  case 185:
                  case 186:
                  case 187:
                  case 188:
                  case 189:
                  case 190:
                  case 191:
                  case 192:
                  case 193:
                    sub_3EB3E0(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 194:
                    goto LABEL_99;
                  case 196:
                  case 555:
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 800) + 606LL) & 4) != 0 )
                      sub_3EB640(a1, 30, **(_DWORD **)(*(_QWORD *)(a1 + 832) + 696LL), v12, *(double *)a3.m128_u64);
                    goto LABEL_140;
                  case 197:
                  case 556:
LABEL_140:
                    sub_3EAB70(a1, 5u, *(unsigned __int16 *)(a1 + 890), v12, 0x3BEA45E214ADDC55LL, v11, 0);
                    goto LABEL_99;
                  case 203:
LABEL_168:
                    if ( (unsigned __int8)sub_3E8360(a1 + 24, a2, v36, v15) )
                    {
                      v41 = *(_QWORD *)(a1 + 832);
LABEL_170:
                      sub_3ED470(a1, **(unsigned int **)(v41 + 728), *(double *)a3.m128_u64);
                    }
                    else
                    {
LABEL_155:
                      v40 = *(_QWORD *)(a1 + 80);
                      v41 = *(_QWORD *)(a1 + 832);
LABEL_156:
                      sub_3EAB70(a1, 0x38u, *(_DWORD *)(v41 + 84), v40, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
                    }
                    goto LABEL_99;
                  case 211:
                  case 212:
                  case 213:
                  case 214:
                  case 223:
                  case 224:
                  case 225:
                  case 226:
                    v53 = sub_3EDD30(a1, v54, 3u, *(double *)a3.m128_u64);
                    sub_3EAD10(a1, (unsigned int)v12, v13, v53, v11, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 430:
                  case 431:
                    sub_3F0680(a1, (unsigned int)v12, v13, 0, *(double *)a3.m128_u64);
                    v39 = *(int *)(*(_QWORD *)(a1 + 832) + 616LL);
                    goto LABEL_154;
                  case 477:
                    sub_3EAB70(a1, 7u, *(unsigned __int16 *)(a1 + 890), v12, 0x3BEA45E214ADDC55LL, v11, 0);
                    goto LABEL_99;
                  case 504:
                  case 580:
                    sub_3EAB70(a1, 0xEu, *(unsigned __int16 *)(a1 + 890), v12, v13, v11, 0);
                    sub_1D1F50(
                      a1,
                      0x3Du,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                      0x3BEA45E214ADDC55LL,
                      0x3BEA45E214ADDC55LL,
                      *(int *)(*(_QWORD *)(a1 + 832) + 616LL),
                      0);
                    sub_1D1F50(
                      a1,
                      0x3Du,
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                      0x3BEA45E214ADDC55LL,
                      0x3BEA45E214ADDC55LL,
                      *(int *)(*(_QWORD *)(a1 + 832) + 612LL),
                      0);
                    goto LABEL_99;
                  case 512:
                  case 560:
                  case 561:
                  case 562:
                    sub_3EC7E0(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 516:
                  case 563:
                  case 564:
                  case 565:
                    if ( !(unsigned __int8)sub_3F4960(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64) )
                      return 0;
                    goto LABEL_99;
                  case 534:
                  case 535:
                  case 568:
                  case 569:
                  case 570:
                    sub_3EAA80(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 536:
                  case 537:
                  case 548:
                    sub_3EDDF0(
                      (_QWORD *)a1,
                      *(unsigned __int16 *)(a1 + 890),
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                      v12,
                      v11,
                      1u);
                    goto LABEL_99;
                  case 544:
                  case 545:
LABEL_201:
                    if ( (v11 & v13) == 0xFFFFFFFF )
                    {
                      sub_3F1DB0(a1, (unsigned int)v12, *(double *)a3.m128_u64);
                      goto LABEL_99;
                    }
                    if ( !under_debugger )
                      sub_37E160(0xCCD3u, a2, *(double *)a3.m128_u64);
                    return result;
                  case 549:
                  case 550:
                  case 551:
                    sub_3EDDF0(
                      (_QWORD *)a1,
                      *(unsigned __int16 *)(a1 + 890),
                      *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL),
                      v12,
                      v11,
                      0);
                    goto LABEL_99;
                  case 578:
                  case 579:
                    sub_3ECB40(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 582:
                  case 583:
                    sub_3EC960(a1, (unsigned int)v11, v12, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 824:
                  case 825:
                  case 828:
                  case 829:
LABEL_204:
                    sub_3F0A50((__int64 *)a1, (unsigned int)v11, v12, *(double *)a3.m128_u64);
                    goto LABEL_99;
                  case 834:
                    v48 = *(int *)(*(_QWORD *)(a1 + 832) + 60LL);
                    sub_1D1F50(a1, 0xCu, 4, v48, v11, v48, 0);
                    sub_3EE280(a1, 4u, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL));
                    sub_3E8540(*(_QWORD *)(a1 + 832), v11);
                    v49 = *(_QWORD *)(a1 + 832);
                    v11 = **(_DWORD **)(v49 + 728);
LABEL_176:
                    sub_3EAB70(
                      a1,
                      0x36u,
                      *(_DWORD *)(v49 + 84),
                      0x3BEA45E214ADDC55LL,
                      *(int *)(v49 + 64),
                      v11,
                      *(_DWORD *)(v49 + 84));
                    goto LABEL_99;
                  case 837:
                    sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v13, 0x3BEA45E214ADDC55LL, v11, 0);
                    v47 = sub_3EDD30(a1, v54, 3u, *(double *)a3.m128_u64);
                    if ( v47 != -1 )
                    {
                      sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v47, 0x3BEA45E214ADDC55LL, v12, 0);
                      goto LABEL_99;
                    }
                    if ( !under_debugger )
                      sub_37E160(0xCCEEu, v54, *(double *)a3.m128_u64);
                    break;
                  default:
                    v36 = v35;
                    LOWORD(v31) = v31 - 1672;
                    switch ( v31 )
                    {
                      case 0LL:
                        v45 = sub_3E85C0(*(_QWORD *)(a1 + 832), a2, *(double *)a3.m128_u64);
                        v46 = v45;
                        sub_3EC710(a1, *(_QWORD *)(a1 + 192), 1, v45, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
                        sub_3EAB70(a1, 0x16u, *(unsigned __int16 *)(a1 + 890), v12, v46, v46, 0);
                        sub_3EAB70(a1, 0xCu, *(unsigned __int16 *)(a1 + 890), v13, v46, v11, 0);
                        goto LABEL_99;
                      case 22LL:
                      case 23LL:
                      case 24LL:
                        sub_3EDF90(a1, (unsigned int)v12, v13, v11, *(double *)a3.m128_u64);
                        goto LABEL_99;
                      case 25LL:
                      case 26LL:
                        goto LABEL_189;
                      case 43LL:
                        if ( *(_BYTE *)(a1 + 185) == 5 )
                        {
                          if ( *(_WORD *)(a1 + 890) == 4 )
                          {
                            v56[0] = 0xFFFFFFFF00000000LL;
                            v56[1] = 0;
                            sub_1210A0((__int64)v56, v12, v13, 4);
                            v55 = sub_3E85C0(*(_QWORD *)(a1 + 832), (unsigned int)v12, *(double *)a3.m128_u64);
                            v58 = v55;
                            v57 = 0x800000001LL;
                            v60 = sub_3EDD30(a1, v54, 3u, *(double *)a3.m128_u64);
                            v59 = 0x100000001LL;
                            v61 = 0x400000001LL;
                            v62 = v11;
                            sub_3EB6F0(
                              (_QWORD *)a1,
                              23,
                              (unsigned __int8 *)v56,
                              (unsigned __int8 *)&v59,
                              (unsigned __int8 *)&v57);
                            sub_3EB6F0((_QWORD *)a1, 10, (unsigned __int8 *)&v57, nullptr, (unsigned __int8 *)&v61);
                            sub_3E8540(*(_QWORD *)(a1 + 832), v55);
                            sub_118BA0((__int64)&v61);
                            sub_118BA0((__int64)&v59);
                            sub_118BA0((__int64)&v57);
                            sub_118BA0((__int64)v56);
                            goto LABEL_99;
                          }
                          if ( !under_debugger )
                            sub_37E160(0xCE2Au, a2, *(double *)a3.m128_u64);
                        }
                        else if ( !under_debugger )
                        {
                          sub_37E160(0xCE29u, a2, *(double *)a3.m128_u64);
                        }
                        return result;
                      case 56LL:
                      case 57LL:
                      case 92LL:
                      case 93LL:
                        goto LABEL_204;
                      case 64LL:
                        goto LABEL_157;
                      case 65LL:
                        goto LABEL_168;
                      case 66LL:
                        goto LABEL_201;
                      case 67LL:
                        sub_3EAB70(a1, 4u, *(unsigned __int16 *)(a1 + 890), v12, 0x3BEA45E214ADDC55LL, v11, 0);
                        v44 = sub_3E8360(a1 + 24, 4, v42, v43);
                        v41 = *(_QWORD *)(a1 + 832);
                        if ( v44 )
                          goto LABEL_170;
                        v40 = *(_QWORD *)(a1 + 160);
                        goto LABEL_156;
                      case 68LL:
                      case 70LL:
                        goto LABEL_153;
                      case 69LL:
                        goto LABEL_158;
                      default:
                        goto LABEL_98;
                    }
                    break;
                }
LABEL_238:
                BUG();
              }
            }
LABEL_78:
            sub_3ECDD0(a1, (unsigned int)v11, v12, v4, *(double *)a3.m128_u64);
            return 0;
          }
          v32 = (unsigned int)(v31 - 439);
          if ( (unsigned __int16)(v31 - 439) <= 1u )
            goto LABEL_78;
          if ( (unsigned __int16)v31 > 0xDEu || (unsigned __int16)v31 <= 0xD6u )
            goto LABEL_108;
        }
        sub_3EC080(a1, (unsigned int)v11, v12, v13, *(double *)a3.m128_u64);
        return 0;
      }
    }
  }
LABEL_29:
  if ( !(unsigned __int8)sub_3EA990(a1) )
    goto LABEL_76;
LABEL_30:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
  {
    v16 = *(_WORD *)(a1 + 48);
    if ( v16 != 202 && v16 != 115 )
      return 0;
    sub_3EAB70(a1, 0x3Au, 1, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
  }
  return 1;
}
