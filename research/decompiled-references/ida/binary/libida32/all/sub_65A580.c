__int64 __fastcall sub_65A580(__int64 *a1, int a2, __int16 a3, unsigned int a4, _DWORD *a5, int a6)
{
  unsigned int byte; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r13d
  int v19; // eax
  int v20; // r13d
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  int v28; // r12d
  __int64 v29; // rax
  bool v30; // di
  char v31; // dl
  char v32; // si
  unsigned int v33; // r15d
  char v34; // bl
  bool v35; // r13
  bool v36; // cf
  bool v37; // zf
  __int64 v38; // rax
  _DWORD *v39; // r12
  __int64 v40; // rsi
  int v41; // edx
  int v42; // ecx
  unsigned int v43; // eax
  unsigned __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // [rsp+0h] [rbp-1B8h]
  int v53; // [rsp+0h] [rbp-1B8h]
  bool v54; // [rsp+0h] [rbp-1B8h]
  __int64 v55; // [rsp+0h] [rbp-1B8h]
  int v56; // [rsp+8h] [rbp-1B0h]
  __int64 v57; // [rsp+10h] [rbp-1A8h]
  __int64 (__fastcall *v58)(__int64, unsigned int); // [rsp+18h] [rbp-1A0h]
  int v59; // [rsp+20h] [rbp-198h]
  int v60; // [rsp+24h] [rbp-194h]
  unsigned __int64 v61; // [rsp+30h] [rbp-188h]
  char v62; // [rsp+3Eh] [rbp-17Ah]
  bool v63; // [rsp+3Fh] [rbp-179h]
  unsigned int v64; // [rsp+44h] [rbp-174h]
  int v66; // [rsp+54h] [rbp-164h] BYREF
  __int64 v67; // [rsp+58h] [rbp-160h] BYREF
  _DWORD v68[16]; // [rsp+60h] [rbp-158h] BYREF
  __m128i v69; // [rsp+A0h] [rbp-118h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-108h]
  char v71; // [rsp+B8h] [rbp-100h] BYREF
  unsigned __int64 v72; // [rsp+178h] [rbp-40h] BYREF

  byte = a2;
  v72 = __readfsqword(0x28u);
  v63 = (a3 & 0x20) == 0;
  v60 = a3 & 0x10;
  if ( (a3 & 0x10) == 0 )
    callui(25, a2, (int)&callui, a3 & 0x10, (int)a5, a6);
  v62 = a3 & 1;
  if ( a1[96] )
  {
    if ( (a3 & 1) != 0 )
      v58 = sub_3B87D0;
    else
      v58 = sub_3B8820;
  }
  else if ( v62 )
  {
    v58 = sub_3BD3E0;
  }
  else
  {
    v58 = sub_3BD5D0;
  }
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v66, (int)&v67, (int)&callui, a6);
  v59 = -1;
  v61 = 0;
  v57 = 0;
  v56 = 0;
  do
  {
    while ( 1 )
    {
      do
      {
LABEL_9:
        v9 = byte;
        byte = v58((__int64)a1, byte);
        if ( byte == -1 )
          return 0xFFFFFFFFLL;
        if ( !v60 )
          callui(27, v9, (int)&callui, v10, v11, v12);
        if ( (unsigned __int8)sub_3BB2F0((__int64)a1, byte) )
          break;
        if ( v62 )
        {
          byte = find_byte(byte + 1, ~(byte + 1), 0, 4);
          if ( byte == -1 )
            return 0xFFFFFFFFLL;
        }
        else
        {
          if ( !byte )
            return 0xFFFFFFFFLL;
          byte = find_byter(0, byte - 1, 0, 4);
          if ( byte == -1 )
            return 0xFFFFFFFFLL;
        }
      }
      while ( (sub_3B9AA0((__int64)a1, byte, 1) & 0x600) == 0x200 );
      v13 = byte - v59;
      if ( (int)(byte - v59) < 0 )
        v13 = v59 - byte;
      if ( v13 > 0xFFFF && v63 )
      {
        show_auto(byte, 0);
        v59 = byte;
      }
      v14 = nbits(byte);
      v18 = v14 + 14;
      v19 = v14 + 7;
      if ( v19 >= 0 )
        v18 = v19;
      v20 = v18 >> 3;
      if ( v56 == v20 )
      {
LABEL_22:
        v56 = v20;
      }
      else if ( sub_615160(*a1, 3, 32, v15, v16, v17) )
      {
        LODWORD(v40) = -1;
        v41 = 16 * v20;
        if ( (unsigned __int64)(16 * v20) <= 0x3F )
          v40 = (1LL << v41) - 1;
        v42 = 32 - v41;
        if ( 32 - v41 > 0 )
        {
          while ( 1 )
          {
            v43 = a4 >> v42;
            if ( a4 >> v42 )
              break;
            v42 -= v41;
            if ( v42 <= 0 )
              goto LABEL_85;
          }
        }
        else
        {
LABEL_85:
          v43 = a4 >> v42;
        }
        v56 = v20;
        v61 = (unsigned int)v40 & v43;
        v57 = v61 >> (v41 >> 1);
      }
      else
      {
        switch ( v20 )
        {
          case 1:
            v56 = v20;
            v57 = (unsigned __int8)a4;
            v61 = (unsigned __int16)a4;
            break;
          case 2:
            v56 = v20;
            v57 = (unsigned __int16)a4;
            v61 = a4;
            break;
          case 3:
            v56 = v20;
            v57 = a4 & 0xFFFFFF;
            v61 = a4;
            break;
          case 4:
          case 6:
            v57 = a4;
            v61 = a4;
            goto LABEL_22;
          default:
            goto LABEL_22;
        }
      }
      v21 = sub_3B9AA0((__int64)a1, byte, 1);
      v22 = v21 & 0x600;
      if ( v22 == 1536 )
        break;
      if ( v22 == 1024 )
      {
        v53 = v21;
        v28 = sub_3C4370(a1, byte, v21, nullptr);
        v29 = v53 & 0xF0000000;
        if ( (v53 & 0xF0000000) != 0 )
        {
          if ( v29 == 0x10000000 )
          {
            v31 = 0;
            v32 = 1;
            v30 = 0;
          }
          else
          {
            v30 = v29 == 0x20000000;
            v31 = 0;
            v32 = 0;
          }
        }
        else
        {
          v31 = 1;
          v32 = 0;
          v30 = 0;
        }
        v38 = v20;
        v64 = byte;
        v33 = byte;
        v34 = v31;
        v35 = (unsigned __int64)v20 <= 2;
        v36 = v38 == 0;
        v37 = v38 == 1;
        BYTE1(v38) = BYTE1(v53);
        v54 = v36 || v37;
        while ( 1 )
        {
          if ( (v38 & 0x100) != 0 )
          {
            if ( v34 )
            {
              sub_3BA160(a1, &v67, v33);
              if ( a4 == v67 )
                break;
            }
            if ( v35 && v32 && a4 == sub_3BA340(a1, v33) || v54 && v30 && a4 == sub_3BA450(a1, v33) )
              break;
          }
          v33 += v28;
          LOWORD(v38) = sub_3B9AA0((__int64)a1, v33, 1);
          if ( (v38 & 0x600) != 0x200 )
          {
            byte = v64;
            if ( v62 )
              byte = v33 - 1;
            goto LABEL_9;
          }
        }
        v39 = a5;
        byte = v64;
        if ( !a5 )
          return byte;
LABEL_58:
        *v39 = 0;
        return byte;
      }
      sub_3BA160(a1, &v67, byte);
      v23 = v67;
      if ( v57 == v67 )
      {
        if ( a4 == v67 )
          goto LABEL_94;
        v24 = sub_3BA340(a1, byte);
        if ( v61 == v24 && (unsigned __int64)v20 <= 4 )
        {
          v52 = v24;
          v25 = sub_3B9AA0((__int64)a1, byte + 1, 4);
          v26 = v52;
          if ( (v25 & 0x600) == 0 )
          {
            if ( a4 == v52
              || (v49 = sub_3BA450(a1, byte), v26 = v52, a4 == v49)
              && (v50 = sub_3B9AA0((__int64)a1, byte + 2, 4), v26 = v52, (v50 & 0x600) == 0)
              && (v51 = sub_3B9AA0((__int64)a1, byte + 3, 4), v26 = v52, (v51 & 0x600) == 0) )
            {
LABEL_94:
              v39 = a5;
              if ( !a5 )
                return byte;
              goto LABEL_58;
            }
          }
          v61 = v26;
          v57 = v23;
        }
      }
    }
    v69.m128i_i64[0] = -1;
    v70 = 0;
    v69.m128i_i64[1] = 0xFFFFFFFFLL;
    v44 = (unsigned __int64 *)&v71;
    do
    {
      *(_WORD *)v44 = 0;
      v44 += 3;
      *((_WORD *)v44 - 11) = 0;
      *((_WORD *)v44 - 10) = 0;
      *((_DWORD *)v44 - 1) = 0;
      *((_WORD *)v44 - 9) = 0;
      *(v44 - 2) = 0;
      *((_DWORD *)v44 - 2) = 0;
    }
    while ( v44 != &v72 );
    v55 = v21;
    v45 = sub_55DF80(a1, v68, byte, -1, v21, &v69);
  }
  while ( !v45 );
  v46 = 0;
  while ( v68[v46] != a4 )
  {
    if ( v45 == ++v46 )
      goto LABEL_9;
  }
  if ( !a5 )
    return byte;
  *a5 = 0;
  v47 = sub_55DF80(a1, v68, byte, 1, v55, &v69);
  if ( !v47 )
    return byte;
  v48 = 0;
  while ( v68[v48] != a4 )
  {
    if ( v47 == ++v48 )
      return byte;
  }
  *a5 = 1;
  return byte;
}

