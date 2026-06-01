__int64 __fastcall sub_6785C0(__int64 *a1, __int64 *a2, __int16 a3, unsigned __int64 a4, _DWORD *a5, int a6)
{
  __int64 *byte; // rbx
  int v9; // esi
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // r13d
  int v19; // eax
  int v20; // r13d
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v26; // r12
  __int64 v27; // rax
  bool v28; // di
  char v29; // dl
  char v30; // si
  unsigned __int64 v31; // r14
  char v32; // bl
  bool v33; // r13
  bool v34; // cf
  bool v35; // zf
  unsigned __int64 v36; // rax
  _DWORD *v37; // r12
  int v38; // esi
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rdi
  unsigned __int64 *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // [rsp+0h] [rbp-298h]
  bool v48; // [rsp+0h] [rbp-298h]
  __int64 v49; // [rsp+0h] [rbp-298h]
  int v50; // [rsp+Ch] [rbp-28Ch]
  __int64 v51; // [rsp+10h] [rbp-288h]
  unsigned __int64 v52; // [rsp+18h] [rbp-280h]
  __int64 (__fastcall *v53)(__int64 *, __int64 *); // [rsp+20h] [rbp-278h]
  int v54; // [rsp+2Ch] [rbp-26Ch]
  unsigned __int64 v55; // [rsp+38h] [rbp-260h]
  char v56; // [rsp+4Ah] [rbp-24Eh]
  bool v57; // [rsp+4Bh] [rbp-24Dh]
  __int64 *v58; // [rsp+50h] [rbp-248h]
  __int64 v60; // [rsp+60h] [rbp-238h] BYREF
  __int64 v61; // [rsp+68h] [rbp-230h] BYREF
  __int64 v62[16]; // [rsp+70h] [rbp-228h] BYREF
  __int128 v63; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v64; // [rsp+100h] [rbp-198h]
  __int64 v65; // [rsp+108h] [rbp-190h]
  __int64 v66; // [rsp+110h] [rbp-188h]
  char v67; // [rsp+118h] [rbp-180h] BYREF
  unsigned __int64 v68; // [rsp+258h] [rbp-40h] BYREF

  byte = a2;
  v68 = __readfsqword(0x28u);
  v57 = (a3 & 0x20) == 0;
  v54 = a3 & 0x10;
  if ( (a3 & 0x10) == 0 )
    callui(25, (int)a2, (int)&callui, a3 & 0x10, (int)a5, a6);
  v56 = a3 & 1;
  if ( a1[97] )
  {
    if ( (a3 & 1) != 0 )
      v53 = (__int64 (__fastcall *)(__int64 *, __int64 *))sub_3BD3C0;
    else
      v53 = (__int64 (__fastcall *)(__int64 *, __int64 *))sub_3BD420;
  }
  else if ( v56 )
  {
    v53 = (__int64 (__fastcall *)(__int64 *, __int64 *))sub_3C2450;
  }
  else
  {
    v53 = (__int64 (__fastcall *)(__int64 *, __int64 *))sub_3C2650;
  }
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v60, (int)&v61, (int)&callui, a6);
  v51 = -1;
  v55 = 0;
  v52 = 0;
  v50 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
LABEL_9:
          v9 = (int)byte;
          byte = (__int64 *)v53(a1, byte);
          if ( byte == (__int64 *)-1LL )
            return -1;
          if ( !v54 )
            callui(27, v9, (int)&callui, v10, v11, v12);
          if ( (unsigned __int8)sub_3C0260(a1, (unsigned __int64)byte) )
            break;
          if ( v56 )
          {
            byte = (__int64 *)find_byte((char *)byte + 1, ~((unsigned __int64)byte + 1), 0, 4);
            if ( byte == (__int64 *)-1LL )
              return -1;
          }
          else
          {
            if ( !byte )
              return -1;
            byte = (__int64 *)find_byter(0, (__int64)byte - 1, 0, 4);
            if ( byte == (__int64 *)-1LL )
              return -1;
          }
        }
        while ( (sub_3BE900(a1, (unsigned __int64)byte, 1) & 0x600) == 0x200 );
        v13 = (__int64)byte - v51;
        if ( (__int64)byte - v51 < 0 )
          v13 = v51 - (_QWORD)byte;
        if ( v13 > 0xFFFF && v57 )
        {
          show_auto(byte, 0);
          v51 = (__int64)byte;
        }
        v14 = nbits(byte);
        v18 = v14 + 14;
        v19 = v14 + 7;
        if ( v19 >= 0 )
          v18 = v19;
        v20 = v18 >> 3;
        if ( v50 == v20 )
        {
LABEL_22:
          v50 = v20;
        }
        else if ( sub_631C90(*a1, 3, 32, v15, v16, v17) )
        {
          v38 = 16 * v20;
          v39 = 64 - 16 * v20;
          if ( (unsigned __int64)(16 * v20) <= 0x3F )
          {
            v40 = 64 - 16 * v20;
            v41 = (1LL << v38) - 1;
            goto LABEL_64;
          }
          v41 = -1;
          v40 = 64 - 16 * v20;
          if ( v39 > 0 )
          {
            do
            {
LABEL_64:
              if ( a4 >> v40 )
              {
                v55 = v41 & (a4 >> v40);
                goto LABEL_66;
              }
              v40 -= v38;
            }
            while ( v40 > 0 );
            v55 = v41 & (a4 >> v40);
          }
          else
          {
            v55 = a4 >> v39;
          }
LABEL_66:
          v50 = v20;
          v52 = v55 >> (v38 >> 1);
        }
        else
        {
          switch ( v20 )
          {
            case 1:
              v50 = v20;
              v52 = (unsigned __int8)a4;
              v55 = (unsigned __int16)a4;
              break;
            case 2:
              v50 = v20;
              v52 = (unsigned __int16)a4;
              v55 = (unsigned int)a4;
              break;
            case 3:
              v50 = v20;
              v52 = a4 & 0xFFFFFF;
              v55 = a4 & 0xFFFFFFFFFFFFLL;
              break;
            case 4:
              v55 = a4;
              v52 = (unsigned int)a4;
              v50 = v20;
              break;
            case 6:
              v55 = a4;
              v52 = a4 & 0xFFFFFFFFFFFFLL;
              goto LABEL_22;
            default:
              goto LABEL_22;
          }
        }
        v21 = sub_3BE900(a1, (unsigned __int64)byte, 1);
        v22 = v21 & 0x600;
        if ( v22 != 1536 )
          break;
        v64 = -1;
        v42 = (unsigned __int64 *)&v67;
        v65 = 0;
        v66 = 0;
        v63 = -1;
        do
        {
          *(_WORD *)v42 = 0;
          v42 += 5;
          *((_WORD *)v42 - 19) = 0;
          *((_WORD *)v42 - 18) = 0;
          *((_DWORD *)v42 - 2) = 0;
          *((_WORD *)v42 - 17) = 0;
          *((_OWORD *)v42 - 2) = 0;
          *(v42 - 2) = 0;
        }
        while ( v42 != &v68 );
        v49 = v21;
        v43 = sub_577940(a1, v62, (__int64)byte, -1, v21, &v63);
        if ( v43 )
        {
          v44 = 0;
          while ( v62[v44] != a4 )
          {
            if ( v43 == ++v44 )
              goto LABEL_9;
          }
          if ( a5 )
          {
            *a5 = 0;
            v45 = sub_577940(a1, v62, (__int64)byte, 1, v49, &v63);
            if ( v45 )
            {
              v46 = 0;
              while ( v62[v46] != a4 )
              {
                if ( v45 == ++v46 )
                  return (__int64)byte;
              }
              *a5 = 1;
            }
          }
          return (__int64)byte;
        }
      }
      if ( v22 == 1024 )
      {
        v47 = v21;
        v26 = sub_3C9650(a1, byte, v21, nullptr);
        v27 = v47 & 0xF0000000;
        if ( (v47 & 0xF0000000) != 0 )
        {
          if ( v27 == 0x10000000 )
          {
            v29 = 0;
            v30 = 1;
            v28 = 0;
          }
          else
          {
            v28 = v27 == 0x20000000;
            v29 = 0;
            v30 = 0;
          }
        }
        else
        {
          v29 = 1;
          v30 = 0;
          v28 = 0;
        }
        v36 = v20;
        v58 = byte;
        v31 = (unsigned __int64)byte;
        v32 = v29;
        v33 = (unsigned __int64)v20 <= 4;
        v34 = v36 < 2;
        v35 = v36 == 2;
        BYTE1(v36) = BYTE1(v47);
        v48 = v34 || v35;
        while ( 1 )
        {
          if ( (v36 & 0x100) != 0 )
          {
            if ( v32 )
            {
              sub_3BEFF0(a1, &v61, v31);
              if ( a4 == v61 )
                break;
            }
            if ( v33 && v30 && a4 == sub_3BF1D0(a1, v31) || v48 && v28 && a4 == sub_3BF2F0(a1, v31) )
              break;
          }
          v31 += v26;
          LOWORD(v36) = sub_3BE900(a1, v31, 1);
          if ( (v36 & 0x600) != 0x200 )
          {
            byte = v58;
            if ( v56 )
              byte = (__int64 *)(v31 - 1);
            goto LABEL_9;
          }
        }
        v37 = a5;
        byte = v58;
        if ( !a5 )
          return (__int64)byte;
        goto LABEL_59;
      }
      sub_3BEFF0(a1, &v61, (unsigned __int64)byte);
      v23 = v61;
      if ( v52 == v61 )
      {
        if ( a4 == v61 )
          goto LABEL_96;
        v24 = sub_3BF1D0(a1, (unsigned __int64)byte);
        if ( v55 == v24 && (unsigned __int64)v20 <= 4 )
          break;
      }
    }
    if ( (sub_3BE900(a1, (unsigned __int64)byte + 1, 4) & 0x600) == 0
      && (a4 == v24
       || a4 == sub_3BF2F0(a1, (unsigned __int64)byte)
       && (sub_3BE900(a1, (unsigned __int64)byte + 2, 4) & 0x600) == 0
       && (sub_3BE900(a1, (unsigned __int64)byte + 3, 4) & 0x600) == 0) )
    {
      break;
    }
    v55 = v24;
    v52 = v23;
  }
LABEL_96:
  v37 = a5;
  if ( a5 )
LABEL_59:
    *v37 = 0;
  return (__int64)byte;
}
