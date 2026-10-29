__int64 __fastcall sub_14C97B0(__int64 a1, __m128i a2, __m128 a3)
{
  int *v4; // r12
  __int16 v5; // r14
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // dl
  __int64 v13; // rcx
  __int64 *v14; // rsi
  unsigned __int64 v15; // rdx
  void *v16; // rdx
  __int64 *v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  __int64 *v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // [rsp+Ch] [rbp-ACh]
  __int64 v23; // [rsp+10h] [rbp-A8h]
  __int64 v24; // [rsp+10h] [rbp-A8h]
  __int64 v25; // [rsp+18h] [rbp-A0h]
  void *ptr; // [rsp+20h] [rbp-98h] BYREF
  __int64 v27; // [rsp+28h] [rbp-90h]
  _BYTE v28[16]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE *v29; // [rsp+40h] [rbp-78h] BYREF
  char v30; // [rsp+48h] [rbp-70h]
  __int64 v31; // [rsp+50h] [rbp-68h]
  int v32; // [rsp+58h] [rbp-60h]
  __int16 v33; // [rsp+5Ch] [rbp-5Ch]
  __int64 (__fastcall *v34)(__int64); // [rsp+60h] [rbp-58h]
  __int64 v35; // [rsp+68h] [rbp-50h]
  __int64 v36; // [rsp+70h] [rbp-48h]

  v4 = (int *)(a1 + 16);
  v5 = *(_WORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_DWORD *)(a1 + 40);
  v31 = a1;
  v22 = v6;
  v29 = (_BYTE *)(a1 + 1952);
  LOBYTE(v6) = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v30 = v6;
  v33 = 63;
  v32 = 1507350;
  v34 = sub_146A990;
  v35 = 0;
  v36 = 0;
  if ( (unsigned __int8)sub_156A040(&v29, 14, &byte_22F0C30, 0) )
  {
    v7 = 1;
    goto LABEL_3;
  }
  v27 = 0x200000000LL;
  ptr = v28;
  while ( 1 )
  {
    v9 = sub_1496480(
           a1,
           nullptr,
           (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0 ? 5 : 23,
           3u,
           nullptr,
           0,
           a2,
           a3);
    if ( v12
      || *(_WORD *)(a1 + 32) == 27
      && (v17 = *(__int64 **)(a1 + 8),
          v25 = v9,
          v18 = *(_QWORD *)(a1 + 96),
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16),
          v23 = v18,
          sub_14634E0(v17, v4),
          v9 = sub_1E50AF0(v23, v25, *(unsigned int *)(a1 + 40)),
          v19) )
    {
      v7 = 1;
      sub_156E210(&v29);
      goto LABEL_10;
    }
    v13 = (unsigned int)v27;
    v14 = (__int64 *)HIDWORD(v27);
    v15 = (unsigned int)v27 + 1LL;
    if ( v15 > HIDWORD(v27) )
      break;
    v16 = ptr;
    *((_QWORD *)ptr + (unsigned int)v27) = v9;
    LODWORD(v27) = v27 + 1;
    if ( *(_WORD *)(a1 + 32) != 66 )
      goto LABEL_9;
LABEL_15:
    v20 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v20, v4);
  }
  v14 = (__int64 *)v28;
  v24 = v9;
  sub_2237220(&ptr, v28, v15, 8);
  v13 = (unsigned int)v27;
  v16 = ptr;
  *((_QWORD *)ptr + (unsigned int)v27) = v24;
  LODWORD(v27) = v27 + 1;
  if ( *(_WORD *)(a1 + 32) == 66 )
    goto LABEL_15;
LABEL_9:
  v7 = 1;
  if ( !(unsigned __int8)sub_14808E0((__int64)&v29, v14, (__int64)v16, v13, v10, v11) )
  {
    switch ( v5 )
    {
      case 199:
        v21 = 65;
        break;
      case 200:
      case 201:
      case 202:
      case 203:
      case 204:
      case 205:
      case 206:
      case 207:
      case 208:
      case 209:
      case 210:
      case 211:
      case 212:
      case 213:
      case 214:
      case 215:
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
      case 288:
      case 289:
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
      case 365:
        v21 = 64;
        break;
      case 216:
        v21 = 0;
        break;
      case 217:
        v21 = 1;
        break;
      case 218:
        v21 = 2;
        break;
      case 219:
        v21 = 3;
        break;
      case 220:
        v21 = 4;
        break;
      case 221:
        v21 = 66;
        break;
      case 222:
        v21 = 82;
        break;
      case 223:
        v21 = 83;
        break;
      case 224:
        v21 = 67;
        break;
      case 225:
        v21 = 5;
        break;
      case 226:
        v21 = 6;
        break;
      case 227:
        v21 = 7;
        break;
      case 228:
        v21 = 8;
        break;
      case 229:
        v21 = 68;
        break;
      case 230:
        v21 = 9;
        break;
      case 231:
        v21 = 10;
        break;
      case 232:
        v21 = 11;
        break;
      case 233:
        v21 = 12;
        break;
      case 234:
        v21 = 13;
        break;
      case 235:
        v21 = 14;
        break;
      case 236:
        v21 = 15;
        break;
      case 237:
        v21 = 16;
        break;
      case 238:
        v21 = 17;
        break;
      case 239:
        v21 = 18;
        break;
      case 240:
        v21 = 69;
        break;
      case 241:
        v21 = 19;
        break;
      case 242:
        v21 = 70;
        break;
      case 243:
        v21 = 20;
        break;
      case 244:
        v21 = 21;
        break;
      case 245:
        v21 = 22;
        break;
      case 246:
        v21 = 23;
        break;
      case 247:
        v21 = 24;
        break;
      case 248:
        v21 = 25;
        break;
      case 249:
        v21 = 26;
        break;
      case 250:
        v21 = 27;
        break;
      case 251:
        v21 = 71;
        break;
      case 252:
        v21 = 84;
        break;
      case 253:
        v21 = 28;
        break;
      case 254:
        v21 = 29;
        break;
      case 255:
        v21 = 30;
        break;
      case 256:
        v21 = 72;
        break;
      case 257:
        v21 = 73;
        break;
      case 274:
        v21 = 31;
        break;
      case 275:
        v21 = 32;
        break;
      case 276:
        v21 = 33;
        break;
      case 277:
        v21 = 34;
        break;
      case 278:
        v21 = 35;
        break;
      case 279:
        v21 = 74;
        break;
      case 280:
        v21 = 75;
        break;
      case 281:
        v21 = 76;
        break;
      case 282:
        v21 = 77;
        break;
      case 283:
        v21 = 36;
        break;
      case 284:
        v21 = 37;
        break;
      case 285:
        v21 = 38;
        break;
      case 286:
        v21 = 39;
        break;
      case 287:
        v21 = 40;
        break;
      case 290:
        v21 = 41;
        break;
      case 291:
        v21 = 42;
        break;
      case 292:
        v21 = 43;
        break;
      case 293:
        v21 = 44;
        break;
      case 294:
        v21 = 45;
        break;
      case 295:
        v21 = 46;
        break;
      case 296:
        v21 = 47;
        break;
      case 297:
        v21 = 48;
        break;
      case 298:
        v21 = 49;
        break;
      case 299:
        v21 = 50;
        break;
      case 300:
        v21 = 51;
        break;
      case 301:
        v21 = 52;
        break;
      case 302:
        v21 = 53;
        break;
      case 303:
        v21 = 54;
        break;
      case 304:
        v21 = 55;
        break;
      case 305:
        v21 = 56;
        break;
      case 306:
        v21 = 57;
        break;
      case 307:
        v21 = 58;
        break;
      case 308:
        v21 = 59;
        break;
      case 309:
        v21 = 60;
        break;
      case 310:
        v21 = 61;
        break;
      case 311:
        v21 = 62;
        break;
      case 312:
        v21 = 78;
        break;
      case 313:
        v21 = 79;
        break;
      case 314:
        v21 = 80;
        break;
      case 363:
        v21 = 81;
        break;
      case 364:
        v21 = 63;
        break;
    }
    v7 = sub_1E8FD90(*(_QWORD *)(a1 + 96), v21, v22, ptr, (unsigned int)v27, HIDWORD(v36));
  }
LABEL_10:
  if ( ptr != v28 )
    free(ptr);
LABEL_3:
  *v29 = v30;
  return v7;
}
