__int64 __fastcall sub_880D90(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // r15d
  __int64 v16; // rdi
  char v17; // al
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rsi
  char v22; // al
  __int64 v23; // rdx
  char v24; // dl
  unsigned int v25; // eax
  void *v26; // rcx
  char v27; // r13
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-148h]
  void *v31; // [rsp+0h] [rbp-148h]
  __int64 v32; // [rsp+8h] [rbp-140h]
  __int64 v33; // [rsp+18h] [rbp-130h]
  __int64 v34; // [rsp+20h] [rbp-128h]
  char v35; // [rsp+2Fh] [rbp-119h]
  void *v36; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-110h]
  char v38; // [rsp+3Ch] [rbp-10Ch]
  void *v39; // [rsp+40h] [rbp-108h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-100h]
  char v41; // [rsp+50h] [rbp-F8h]
  __int64 v42; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+88h] [rbp-C0h]
  __int64 v44; // [rsp+90h] [rbp-B8h] BYREF
  char v45; // [rsp+98h] [rbp-B0h]
  __int64 v46; // [rsp+A8h] [rbp-A0h]
  void *ptr; // [rsp+B0h] [rbp-98h]
  __int64 v48; // [rsp+B8h] [rbp-90h]
  _BYTE v49[65]; // [rsp+C0h] [rbp-88h] BYREF
  char v50; // [rsp+101h] [rbp-47h]

  v9 = *(unsigned __int8 *)(a1 + 3) + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + v9) + 8LL);
  v11 = sub_87D960(*(_QWORD *)(a1 + v9 + 8), v10, (__int64)a2, a4, a5, a6);
  if ( !(_BYTE)v11 )
    return 0;
  v15 = v11;
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(_BYTE *)(v16 + 16);
  switch ( v17 )
  {
    case 41:
      v19 = *(unsigned __int8 *)(a1 + 3);
      v45 |= 1u;
      v48 = 0x800000000LL;
      v20 = *(_BYTE *)(a1 + 2);
      v42 = 0;
      v43 = 0;
      ptr = v49;
      v44 = 0;
      v21 = *(_QWORD *)(a1 + 8LL * ((v20 & 8) != 0) + 8 + v19);
      v46 = 0;
      v50 = 0;
      v39 = a2;
      v40 = &v42;
      v41 = 0;
      if ( !(unsigned __int8)sub_871080((__int64)&v39, v21, &v42, v19, v13, v14) )
      {
        if ( ptr != v49 )
          free(ptr);
        return 0;
      }
      v27 = v49[64] & 1;
      if ( (v45 & 1) != 0 )
      {
        v28 = v43;
        LODWORD(v39) = 0;
        BYTE4(v39) &= ~1u;
        v30 = v42;
        sub_6A37F0((__int64)&v39);
        sub_6A3550((__int64)&v39, v30, v28, &v44, v27);
        sub_6A01B0(a3, (__int64)&v39);
        if ( (unsigned int)v39 <= 1 )
        {
LABEL_25:
          if ( v50 )
            *(_BYTE *)(a3 + 4) |= 1u;
          if ( ptr != v49 )
            free(ptr);
          return v15;
        }
      }
      else
      {
        BYTE4(v39) &= ~1u;
        v35 = v45;
        v34 = v42;
        v33 = v43;
        v31 = ptr;
        v32 = (unsigned int)v48;
        LODWORD(v39) = 0;
        sub_6A37F0((__int64)&v39);
        sub_6A3690((__int64)&v39, v34, v33, &v44, v31, v32, (v35 & 2) != 0, v27);
        sub_6A01B0(a3, (__int64)&v39);
        if ( (unsigned int)v39 <= 1 )
          goto LABEL_25;
      }
      sub_69F740((__int64)&v39);
      goto LABEL_25;
    case 13:
      if ( (((*(_WORD *)(v16 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      {
LABEL_5:
        sub_A2E130(
          a2,
          *(_QWORD *)(a1 + 8LL * ((*(_BYTE *)(a1 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a1 + 3)),
          110,
          0);
        return 0;
      }
      break;
    case 46:
      v29 = sub_B14A40(v16);
      if ( (*(_BYTE *)(v29 + 74) & 1) == 0 && *(_QWORD *)(v29 + 128) <= 7u )
        goto LABEL_5;
      break;
    case 10:
      break;
    default:
      goto LABEL_5;
  }
  v22 = *(_BYTE *)(a1 + 2);
  v23 = *(unsigned __int8 *)(a1 + 3);
  v37 = 1;
  v38 = 0;
  v36 = nullptr;
  v24 = sub_87D880(*(_QWORD *)(a1 + 8LL * ((v22 & 8) != 0) + 8 + v23), (__int64)&v36, (__int64)a2, v12, v13, v14);
  v25 = v37;
  if ( !v24 )
  {
    if ( v37 > 0x40 && v36 )
      operator delete[](v36);
    return 0;
  }
  LODWORD(v40) = v37;
  if ( v37 > 0x40 )
  {
    sub_2585B30(&v39);
    v25 = (unsigned int)v40;
    v26 = v39;
  }
  else
  {
    v26 = v36;
    v39 = v36;
  }
  BYTE4(v42) &= ~1u;
  LODWORD(v40) = 0;
  BYTE4(v40) = v38;
  LODWORD(v42) = 2;
  v43 = (__int64)v26;
  LODWORD(v44) = v25;
  BYTE4(v44) = v38;
  sub_6A01B0(a3, (__int64)&v42);
  if ( (unsigned int)v42 > 1 )
    sub_69F740((__int64)&v42);
  if ( (unsigned int)v40 > 0x40 && v39 )
    operator delete[](v39);
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  return v15;
}

