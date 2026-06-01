__int64 __fastcall sub_638F70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // edx

  result = a1;
  v6 = *(unsigned __int16 *)(a2 + 32);
  *(_DWORD *)(result + 4) = 0;
  if ( (unsigned __int16)v6 > 0x149u )
  {
    LOWORD(v6) = v6 - 386;
    switch ( v6 )
    {
      case 0LL:
        v7 = 417;
        break;
      case 1LL:
        v7 = 439;
        break;
      case 2LL:
        v7 = 440;
        break;
      case 29LL:
        v7 = 436;
        break;
      case 31LL:
        v7 = 434;
        break;
      case 37LL:
        v7 = 435;
        break;
      default:
        goto LABEL_4;
    }
  }
  else if ( (unsigned __int16)v6 <= 0x42u )
  {
LABEL_4:
    v7 = 400;
  }
  else
  {
    switch ( (int)v6 )
    {
      case 67:
        v7 = 420;
        break;
      case 86:
        v7 = 406;
        break;
      case 94:
        v7 = 424;
        break;
      case 118:
        v7 = 441;
        break;
      case 131:
        v7 = 407;
        break;
      case 153:
        v7 = 412;
        break;
      case 154:
        v7 = 413;
        break;
      case 157:
        v7 = 414;
        break;
      case 159:
        v7 = 415;
        break;
      case 162:
        v7 = 416;
        break;
      case 175:
        v7 = 410;
        break;
      case 181:
        v7 = 438;
        break;
      case 189:
        v7 = 418;
        break;
      case 191:
        v7 = 419;
        break;
      case 209:
        v7 = 404;
        break;
      case 210:
        v7 = 437;
        break;
      case 226:
        v7 = 401;
        break;
      case 227:
        v7 = 402;
        break;
      case 228:
        v7 = 403;
        break;
      case 255:
        v7 = 423;
        break;
      case 257:
        v7 = 422;
        break;
      case 258:
        v7 = 421;
        break;
      case 266:
        v7 = 411;
        break;
      case 298:
        v7 = 425;
        break;
      case 299:
        v7 = 433;
        break;
      case 301:
        v7 = 427;
        break;
      case 303:
        v7 = 426;
        break;
      case 304:
        v7 = 428;
        break;
      case 306:
        v7 = 430;
        break;
      case 307:
        v7 = 429;
        break;
      case 308:
        v7 = 431;
        break;
      case 309:
        v7 = 432;
        break;
      case 313:
        v7 = 405;
        break;
      case 316:
        v7 = 408;
        break;
      case 329:
        v7 = 409;
        break;
      default:
        goto LABEL_4;
    }
  }
  *(_DWORD *)result = v7;
  *(_QWORD *)(result + 8) = a3;
  *(_QWORD *)(result + 16) = a2;
  *(_QWORD *)(result + 24) = a4;
  return result;
}

