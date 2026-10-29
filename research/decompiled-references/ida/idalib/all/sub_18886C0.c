__int64 __fastcall sub_18886C0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 a4, unsigned int a5)
{
  __int64 v7; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9
  bool v28; // al
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // r15d
  int v44; // r15d
  unsigned __int64 v45; // rax
  __int64 v46; // rsi
  bool v47; // al
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int8 v55; // [rsp+0h] [rbp-148h]
  _QWORD *v56; // [rsp+0h] [rbp-148h]
  __int64 v57; // [rsp+8h] [rbp-140h]
  __int64 v58; // [rsp+8h] [rbp-140h]
  __int64 v59; // [rsp+8h] [rbp-140h]
  __int64 v60; // [rsp+10h] [rbp-138h]
  int v61; // [rsp+18h] [rbp-130h]
  int v62; // [rsp+1Ch] [rbp-12Ch]
  unsigned __int64 v63; // [rsp+20h] [rbp-128h] BYREF
  __int64 v64; // [rsp+28h] [rbp-120h] BYREF
  unsigned __int64 v65; // [rsp+30h] [rbp-118h] BYREF
  _BOOL8 v66; // [rsp+38h] [rbp-110h]
  int v67; // [rsp+40h] [rbp-108h]
  unsigned __int8 v68[24]; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-E0h]
  __m128 v70[2]; // [rsp+80h] [rbp-C8h] BYREF
  char v71; // [rsp+A1h] [rbp-A7h]
  unsigned __int8 v72; // [rsp+A2h] [rbp-A6h]
  char v73; // [rsp+A3h] [rbp-A5h]
  int v74; // [rsp+A4h] [rbp-A4h]
  char v75; // [rsp+A8h] [rbp-A0h]

  v7 = a2 + 72;
  v10 = sub_B72690(a2 + 72);
  if ( v10 )
    v10 -= 64LL;
  v14 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
  v63 = v10;
  if ( (v14 & 8) == 0 )
    return 0;
  if ( (v14 & 0x10) != 0 )
  {
    if ( *(char *)(v10 + 28) < 0 )
      return 0;
    v16 = *(_QWORD *)(v10 + 128);
    if ( !v16 || (*(_BYTE *)(v16 + 10) & 0x20) == 0 )
    {
LABEL_16:
      if ( a3 && a3 != 5 && (*(_BYTE *)(v63 + 75) & 1) != 0 )
        return 0;
      if ( (*(_BYTE *)(a2 + 29) & 2) == 0 || (a3 & 0xFFFFFFFD) != 1 )
        goto LABEL_33;
      v18 = *(_QWORD *)(a1 + 232);
      v19 = *(_QWORD *)(v63 + 104);
      v20 = (__int64 *)(v19 + 96);
      if ( (*(_BYTE *)v18 & 0x20) != 0 && *(_DWORD *)(v18 + 152) <= 0xB532B7Fu )
      {
        sub_7052B0(v20, v19, v16, v11, v12, v13);
        if ( (**(_BYTE **)(v63 + 128) & 8) == 0 )
        {
          v46 = *(_QWORD *)(v63 + 104);
          sub_7052B0((__int64 *)(v46 + 96), v46, v21, v22, v23, v24);
          if ( (**(_BYTE **)(v63 + 128) & 0x20) == 0 || a3 != 3 )
            goto LABEL_33;
          goto LABEL_53;
        }
        if ( a3 == 1 )
          goto LABEL_27;
      }
      else
      {
        sub_7052B0(v20, v19, v16, v11, v12, v13);
        if ( (**(_BYTE **)(v63 + 128) & 8) != 0 )
        {
LABEL_27:
          if ( !(_BYTE)a5 )
            return 1;
          v27 = sub_183A950(v63);
          if ( v27 )
          {
LABEL_29:
            v57 = v27;
            v70[0].m128_i32[0] = 0;
            v28 = sub_B99060(v27, v70, v25, v26);
            v27 = v57;
            if ( v28 )
            {
LABEL_60:
              v56 = (_QWORD *)v27;
              sub_168B9F0((__int64)v70, (__int64 *)(a1 + 8), *(_DWORD *)(v27 + 24), 0x1710u, 0);
              LOBYTE(v65) = a3 == 3;
              v49 = sub_1588420((__int64)v70, (unsigned __int8 *)&v65);
              v50 = sub_185AB80(v49, (__int64 *)&v63);
              v68[0] = sub_B98360(v56, (__int64)&v63);
              sub_1588420(v50, v68);
              sub_15F7200(v70);
              return 1;
            }
            while ( 1 )
            {
              v29 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v27 = v29;
              if ( !v29 )
                break;
              if ( (*(_BYTE *)(v29 + 28) & 0x7F) == 0x26 )
                goto LABEL_29;
            }
LABEL_33:
            v30 = *(_QWORD *)(a1 + 544);
            *(_QWORD *)(a1 + 544) = v7;
            v58 = v30;
            v31 = *(_QWORD *)(a1 + 512);
            *(_QWORD *)(a1 + 512) = 0;
            v60 = v31;
            v32 = *(_QWORD *)(a1 + 9944);
            *(_QWORD *)(a1 + 9944) = 0;
            v69 = v32;
            v61 = *(_DWORD *)(a1 + 80);
            v62 = *(_DWORD *)(a1 + 2632);
            *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
            *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
            if ( a3 == 5 && sub_AED5B0(a2) )
            {
              v40 = *(_QWORD *)(a1 + 248);
              v64 = 0;
              v41 = sub_A7A9D0(v40, v63, v36, v37, v38, v39);
              v42 = *(_QWORD *)(a1 + 248);
              v43 = v42 + 17624;
              LODWORD(v42) = *(_DWORD *)(v42 + 1368);
              v65 = v41;
              v67 = 0;
              v44 = v43 | 6;
              v66 = (_DWORD)v42 != 0;
              if ( (v41 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
                v65 = sub_6D5440(&v65);
              v45 = sub_B72690(v7);
              if ( v45 )
                LODWORD(v45) = v45 - 64;
              result = sub_19BAC90(a1, *(_DWORD *)(a2 + 24), v45, v44, (unsigned int)&v64, 0, v65, v66);
              if ( (_BYTE)result )
              {
                if ( (_BYTE)a5 )
                {
                  v55 = result;
                  sub_168B9F0((__int64)v70, (__int64 *)(a1 + 8), *(_DWORD *)(v63 + 24), 0x1713u, 0);
                  sub_15F7200(v70);
                  result = v55;
                }
LABEL_36:
                if ( v58 )
                {
                  v35 = v69;
                  *(_QWORD *)(a1 + 544) = v58;
                  *(_QWORD *)(a1 + 9944) = v35;
                  *(_QWORD *)(a1 + 512) = v60;
                  *(_DWORD *)(a1 + 80) = v61;
                  *(_DWORD *)(a1 + 2632) = v62;
                }
                return result;
              }
            }
LABEL_34:
            sub_183A610(v70, a1, (_QWORD *)a2, a3, a4);
            v33 = *(_DWORD *)(a2 + 24);
            v73 = a5;
            v74 = v33;
            v34 = 2 - (unsigned int)(v71 != 0);
            v75 = 1;
            if ( (unsigned __int8)sub_1887B70(v70, v34) || (result = sub_1852FC0((__int64)v70, v34), (_BYTE)result) )
            {
              result = 1;
            }
            else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) != 0 )
            {
              if ( a4 )
                a3 = (unsigned __int8)sub_183C740(a1, (_DWORD *)a2);
              result = sub_17974D0(*(__int64 **)(a1 + 664), v63, a3, (_BYTE *)a2, v72, a5);
            }
            goto LABEL_36;
          }
          goto LABEL_62;
        }
      }
      v46 = *(_QWORD *)(v63 + 104);
      sub_7052B0((__int64 *)(v46 + 96), v46, v21, v22, v23, v24);
      if ( (**(_BYTE **)(v63 + 128) & 0x20) == 0 )
        goto LABEL_33;
LABEL_53:
      if ( !(_BYTE)a5 )
        return 1;
      v27 = sub_183A900(v63);
      if ( v27 )
      {
LABEL_55:
        v59 = v27;
        v47 = sub_B98360((_QWORD *)v27, v46);
        v27 = v59;
        if ( v47 )
          goto LABEL_60;
        while ( 1 )
        {
          v48 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v27 = v48;
          if ( !v48 )
            goto LABEL_33;
          if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 35 <= 3 )
            goto LABEL_55;
        }
      }
LABEL_62:
      v51 = *(_QWORD *)(a1 + 544);
      *(_QWORD *)(a1 + 544) = v7;
      v58 = v51;
      v52 = *(_QWORD *)(a1 + 512);
      *(_QWORD *)(a1 + 512) = 0;
      v60 = v52;
      v53 = *(_QWORD *)(a1 + 9944);
      *(_QWORD *)(a1 + 9944) = 0;
      v69 = v53;
      v61 = *(_DWORD *)(a1 + 80);
      v62 = *(_DWORD *)(a1 + 2632);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
      goto LABEL_34;
    }
  }
  else
  {
    v15 = *(_QWORD *)(v10 + 128);
    if ( !v15 || (*(_BYTE *)(v15 + 10) & 0x20) == 0 || *(char *)(v10 + 28) < 0 )
      return 0;
  }
  if ( (unsigned __int8)sub_B96D80(v10) || a3 && a3 != 3 )
    goto LABEL_16;
  if ( !(_BYTE)a5 )
    return 1;
  sub_168B9F0((__int64)v70, (__int64 *)(a1 + 8), *(_DWORD *)(v63 + 24), 0x17ABu, 0);
  sub_15F7200(v70);
  return a5;
}
