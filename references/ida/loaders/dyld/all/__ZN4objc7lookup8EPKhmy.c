unsigned __int64 __fastcall objc::lookup8(objc *this, const unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // x9
  const unsigned __int8 *v4; // x10
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x14
  unsigned __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x11
  unsigned __int64 v10; // x9
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x11
  unsigned __int64 v13; // x9
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x11
  unsigned __int64 v16; // x9
  unsigned __int64 v17; // x9
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x10
  unsigned __int64 v20; // x9
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x10
  unsigned __int64 v23; // x9
  unsigned __int64 v24; // x8
  unsigned __int64 v25; // x10
  unsigned __int64 v26; // x9
  unsigned __int64 v27; // x8

  v3 = 0x9E3779B97F4A7C13LL;
  if ( (unsigned __int64)a2 < 0x18 )
  {
    v5 = a3;
    v4 = a2;
  }
  else
  {
    v4 = a2;
    v5 = a3;
    do
    {
      v6 = a3
         + ((unsigned __int64)*((unsigned __int8 *)this + 14) << 48)
         + (*((unsigned int *)this + 2)
          | ((unsigned __int64)*((unsigned __int8 *)this + 12) << 32) & 0xFFFF00FFFFFFFFFFLL
          | ((unsigned __int64)*((unsigned __int8 *)this + 13) << 40))
         + ((unsigned __int64)*((unsigned __int8 *)this + 15) << 56);
      v7 = v3
         + ((unsigned __int64)*((unsigned __int8 *)this + 22) << 48)
         + (*((unsigned int *)this + 4)
          | ((unsigned __int64)*((unsigned __int8 *)this + 20) << 32) & 0xFFFF00FFFFFFFFFFLL
          | ((unsigned __int64)*((unsigned __int8 *)this + 21) << 40))
         + ((unsigned __int64)*((unsigned __int8 *)this + 23) << 56);
      v8 = (v5
          + ((unsigned __int64)*((unsigned __int8 *)this + 6) << 48)
          + (*(unsigned int *)this
           | ((unsigned __int64)*((unsigned __int8 *)this + 4) << 32) & 0xFFFF00FFFFFFFFFFLL
           | ((unsigned __int64)*((unsigned __int8 *)this + 5) << 40))
          + ((unsigned __int64)*((unsigned __int8 *)this + 7) << 56)
          - (v6
           + v7))
         ^ (v7 >> 43);
      v9 = (v6 - (v7 + v8)) ^ (v8 << 9);
      v10 = (v7 - (v8 + v9)) ^ (v9 >> 8);
      v11 = (v8 - (v9 + v10)) ^ (v10 >> 38);
      v12 = (v9 - (v10 + v11)) ^ (v11 << 23);
      v13 = (v10 - (v11 + v12)) ^ (v12 >> 5);
      v14 = (v11 - (v12 + v13)) ^ (v13 >> 35);
      v15 = (v12 - (v13 + v14)) ^ (v14 << 49);
      v16 = (v13 - (v14 + v15)) ^ (v15 >> 11);
      v5 = (v14 - (v15 + v16)) ^ (v16 >> 12);
      a3 = (v15 - (v16 + v5)) ^ (v5 << 18);
      v3 = (v16 - (v5 + a3)) ^ (a3 >> 22);
      this = (objc *)((char *)this + 24);
      v4 -= 24;
    }
    while ( (unsigned __int64)v4 > 0x17 );
  }
  v17 = (unsigned __int64)&a2[v3];
  if ( (unsigned __int64)(v4 - 1) <= 0x16 )
  {
    switch ( (unsigned __int64)v4 )
    {
      case 1uLL:
        goto LABEL_30;
      case 2uLL:
        goto LABEL_29;
      case 3uLL:
        goto LABEL_28;
      case 4uLL:
        goto LABEL_27;
      case 5uLL:
        goto LABEL_26;
      case 6uLL:
        goto LABEL_25;
      case 7uLL:
        goto LABEL_24;
      case 8uLL:
        goto LABEL_23;
      case 9uLL:
        goto LABEL_22;
      case 0xAuLL:
        goto LABEL_21;
      case 0xBuLL:
        goto LABEL_20;
      case 0xCuLL:
        goto LABEL_19;
      case 0xDuLL:
        goto LABEL_18;
      case 0xEuLL:
        goto LABEL_17;
      case 0xFuLL:
        goto LABEL_16;
      case 0x10uLL:
        goto LABEL_15;
      case 0x11uLL:
        goto LABEL_14;
      case 0x12uLL:
        goto LABEL_13;
      case 0x13uLL:
        goto LABEL_12;
      case 0x14uLL:
        goto LABEL_11;
      case 0x15uLL:
        goto LABEL_10;
      case 0x16uLL:
        goto LABEL_9;
      case 0x17uLL:
        v17 += (unsigned __int64)*((unsigned __int8 *)this + 22) << 56;
LABEL_9:
        v17 += (unsigned __int64)*((unsigned __int8 *)this + 21) << 48;
LABEL_10:
        v17 += (unsigned __int64)*((unsigned __int8 *)this + 20) << 40;
LABEL_11:
        v17 += (unsigned __int64)*((unsigned __int8 *)this + 19) << 32;
LABEL_12:
        v17 += (unsigned __int64)*((unsigned __int8 *)this + 18) << 24;
LABEL_13:
        v17 += (unsigned __int64)*((unsigned __int8 *)this + 17) << 16;
LABEL_14:
        v17 += (unsigned __int64)*((unsigned __int8 *)this + 16) << 8;
LABEL_15:
        a3 += (unsigned __int64)*((unsigned __int8 *)this + 15) << 56;
LABEL_16:
        a3 += (unsigned __int64)*((unsigned __int8 *)this + 14) << 48;
LABEL_17:
        a3 += (unsigned __int64)*((unsigned __int8 *)this + 13) << 40;
LABEL_18:
        a3 += (unsigned __int64)*((unsigned __int8 *)this + 12) << 32;
LABEL_19:
        a3 += (unsigned __int64)*((unsigned __int8 *)this + 11) << 24;
LABEL_20:
        a3 += (unsigned __int64)*((unsigned __int8 *)this + 10) << 16;
LABEL_21:
        a3 += (unsigned __int64)*((unsigned __int8 *)this + 9) << 8;
LABEL_22:
        a3 += *((unsigned __int8 *)this + 8);
LABEL_23:
        v5 += (unsigned __int64)*((unsigned __int8 *)this + 7) << 56;
LABEL_24:
        v5 += (unsigned __int64)*((unsigned __int8 *)this + 6) << 48;
LABEL_25:
        v5 += (unsigned __int64)*((unsigned __int8 *)this + 5) << 40;
LABEL_26:
        v5 += (unsigned __int64)*((unsigned __int8 *)this + 4) << 32;
LABEL_27:
        v5 += (unsigned __int64)*((unsigned __int8 *)this + 3) << 24;
LABEL_28:
        v5 += (unsigned __int64)*((unsigned __int8 *)this + 2) << 16;
LABEL_29:
        v5 += (unsigned __int64)*((unsigned __int8 *)this + 1) << 8;
LABEL_30:
        v5 += *(unsigned __int8 *)this;
        break;
    }
  }
  v18 = (v5 - (a3 + v17)) ^ (v17 >> 43);
  v19 = (a3 - (v17 + v18)) ^ (v18 << 9);
  v20 = (v17 - (v18 + v19)) ^ (v19 >> 8);
  v21 = (v18 - (v19 + v20)) ^ (v20 >> 38);
  v22 = (v19 - (v20 + v21)) ^ (v21 << 23);
  v23 = (v20 - (v21 + v22)) ^ (v22 >> 5);
  v24 = (v21 - (v22 + v23)) ^ (v23 >> 35);
  v25 = (v22 - (v23 + v24)) ^ (v24 << 49);
  v26 = (v23 - (v24 + v25)) ^ (v25 >> 11);
  v27 = (v24 - (v25 + v26)) ^ (v26 >> 12);
  return (v26 - (v27 + ((v25 - (v26 + v27)) ^ (v27 << 18)))) ^ (((v25 - (v26 + v27)) ^ (v27 << 18)) >> 22);
}
