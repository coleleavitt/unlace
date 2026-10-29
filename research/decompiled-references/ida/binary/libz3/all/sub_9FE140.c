__int64 __fastcall sub_9FE140(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  unsigned int v4; // eax
  void *v5; // rdi
  unsigned int v6; // ecx
  void *v7; // rdi
  int v8; // eax
  unsigned int v9; // eax
  void *v10; // rdi
  unsigned int v11; // eax
  void *v12; // rdi
  unsigned int v13; // eax
  void *v14; // rdi
  char v15; // [rsp+8h] [rbp-318h]
  _BYTE *v16; // [rsp+20h] [rbp-300h]
  char v17; // [rsp+28h] [rbp-2F8h]
  char v19; // [rsp+4Eh] [rbp-2D2h] BYREF
  char v20; // [rsp+4Fh] [rbp-2D1h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-2D0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-2C0h]
  __int64 v23; // [rsp+68h] [rbp-2B8h]
  _QWORD v24[2]; // [rsp+70h] [rbp-2B0h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp-2A0h] BYREF
  _QWORD v26[2]; // [rsp+90h] [rbp-290h] BYREF
  _QWORD v27[2]; // [rsp+A0h] [rbp-280h] BYREF
  int v28[2]; // [rsp+B0h] [rbp-270h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-268h]
  __int64 v30; // [rsp+C0h] [rbp-260h]
  __int64 v31; // [rsp+C8h] [rbp-258h]
  _QWORD v32[8]; // [rsp+D0h] [rbp-250h] BYREF
  int v33[2]; // [rsp+110h] [rbp-210h] BYREF
  __int64 v34; // [rsp+118h] [rbp-208h]
  __int64 v35; // [rsp+120h] [rbp-200h]
  __int64 v36; // [rsp+128h] [rbp-1F8h]
  _QWORD v37[8]; // [rsp+130h] [rbp-1F0h] BYREF
  char v38[96]; // [rsp+170h] [rbp-1B0h] BYREF
  __int64 v39; // [rsp+1D0h] [rbp-150h] BYREF
  __int64 v40; // [rsp+1D8h] [rbp-148h]
  __int64 v41; // [rsp+1E0h] [rbp-140h]
  __int64 v42; // [rsp+1E8h] [rbp-138h]
  __int64 v43; // [rsp+1F0h] [rbp-130h]
  __int64 v44; // [rsp+1F8h] [rbp-128h]
  __int64 v45; // [rsp+200h] [rbp-120h] BYREF
  __int64 v46; // [rsp+208h] [rbp-118h]
  __int64 v47; // [rsp+210h] [rbp-110h]
  __int64 v48; // [rsp+218h] [rbp-108h]
  __int64 v49; // [rsp+220h] [rbp-100h]
  __int64 v50; // [rsp+228h] [rbp-F8h]
  _QWORD v51[4]; // [rsp+230h] [rbp-F0h] BYREF
  _QWORD v52[2]; // [rsp+250h] [rbp-D0h] BYREF
  _QWORD v53[6]; // [rsp+260h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+290h] [rbp-90h] BYREF
  __int64 v55; // [rsp+298h] [rbp-88h]
  __int64 v56; // [rsp+2A0h] [rbp-80h] BYREF
  __int64 v57; // [rsp+2A8h] [rbp-78h]
  _QWORD v58[2]; // [rsp+2B0h] [rbp-70h] BYREF
  _QWORD v59[12]; // [rsp+2C0h] [rbp-60h] BYREF

  LOBYTE(v2) = !sub_9B1230(a1, a2) && a2 != -1;
  if ( (_BYTE)v2 )
  {
    v16 = (_BYTE *)(4LL * a2);
    if ( (v16[*(_QWORD *)(a1 + 720) + 3] & 0x30) != 0 )
      return 0;
    *(_QWORD *)v28 = 0;
    v29 = 0;
    v30 = 1;
    v31 = 0;
    v32[0] = 0;
    v32[1] = 0;
    v32[2] = 1;
    memset(&v32[3], 0, 24);
    v32[6] = 1;
    v32[7] = 0;
    *(_QWORD *)v33 = 0;
    v34 = 0;
    v35 = 1;
    v36 = 0;
    v37[0] = 0;
    v37[1] = 0;
    v37[2] = 1;
    memset(&v37[3], 0, 24);
    v37[6] = 1;
    v37[7] = 0;
    v21[0] = 0;
    v21[1] = 0;
    v22 = 1;
    v23 = 0;
    sub_9FAB60((_QWORD *)a1, a2, &v19, (__int64)v28, &v20, (__int64)v33, v21);
    v15 = v19;
    if ( v19 )
    {
      if ( v20 )
      {
        v58[0] = 0;
        v13 = 214013 * *(_DWORD *)(a1 + 1112);
        v14 = qword_1C7F2C0;
        v54 = 0;
        v55 = 0;
        v56 = 1;
        v13 += 2531011;
        v57 = 0;
        *(_DWORD *)(a1 + 1112) = v13;
        v58[1] = 0;
        v59[0] = 1;
        v59[1] = 0;
        LODWORD(v58[0]) = (HIWORD(v13) & 0x7FFF) % 0x2711u;
        sub_182CBA0(v14, v59);
        BYTE4(v59[0]) &= ~1u;
        LODWORD(v59[0]) = 1;
        v59[2] = 0;
        v59[3] = 0;
        v59[4] = 1;
        v59[5] = 0;
        sub_9FD3E0((_QWORD *)a1, a2, (__int64)&v54);
        sub_2A6060((__int64)&v54);
        goto LABEL_23;
      }
      if ( (v16[*(_QWORD *)(a1 + 720) + 3] & 0x40) == 0 )
        goto LABEL_21;
      goto LABEL_12;
    }
    if ( (v16[*(_QWORD *)(a1 + 720) + 3] & 0x40) != 0 )
    {
      sub_9ABE60((__int64)v51, (__int64)v32);
      sub_894960((__int64)&v54, (__int64)v51);
      sub_992B50((__int64)v28);
      sub_98B520((__int64)v32, (int *)&v54);
      sub_25A130((char *)v58);
      sub_25A130((char *)&v54);
      sub_25A130((char *)v51);
      if ( (v21[0] & 0x100000000LL) != 0 || LODWORD(v21[0]) != 1 || (v22 & 0x100000000LL) != 0 || (_DWORD)v22 != 1 )
      {
        sub_8A6550((__int64)&v54, (__int64)v28);
        sub_98BA40((int *)&v54, (__int64)v21);
        sub_9ABE60((__int64)v38, (__int64)v58);
        sub_3EBE30((__int64)&v39, (__int64)v21, (__int64)v38);
        sub_894960((__int64)v51, (__int64)&v39);
        sub_992B50((__int64)v28);
        sub_98B520((__int64)v32, (int *)v51);
        sub_25A130((char *)v52);
        sub_25A130((char *)v51);
        sub_25A130((char *)&v39);
        sub_25A130(v38);
        sub_2A6060((__int64)&v54);
        if ( !v20 )
        {
LABEL_12:
          sub_9A9130((__int64)v51, (__int64)v37);
          sub_894960((__int64)&v54, (__int64)v51);
          sub_992B50((__int64)v33);
          sub_98B520((__int64)v37, (int *)&v54);
          sub_25A130((char *)v58);
          sub_25A130((char *)&v54);
          sub_25A130((char *)v51);
          if ( (v21[0] & 0x100000000LL) != 0 || LODWORD(v21[0]) != 1 || (v22 & 0x100000000LL) != 0 || (_DWORD)v22 != 1 )
          {
            sub_8A6550((__int64)&v54, (__int64)v33);
            sub_98BA40((int *)&v54, (__int64)v21);
            sub_9A9130((__int64)v38, (__int64)v58);
            sub_3EBE30((__int64)&v39, (__int64)v21, (__int64)v38);
            sub_894960((__int64)v51, (__int64)&v39);
            sub_992B50((__int64)v33);
            sub_98B520((__int64)v37, (int *)v51);
            sub_25A130((char *)v52);
            sub_25A130((char *)v51);
            sub_25A130((char *)&v39);
            sub_25A130(v38);
            sub_2A6060((__int64)&v54);
          }
          if ( !v15 )
            goto LABEL_16;
LABEL_21:
          v43 = 0;
          v39 = 0;
          v9 = 214013 * *(_DWORD *)(a1 + 1112);
          v10 = qword_1C7F2C0;
          v40 = 0;
          v41 = 1;
          v42 = 0;
          v44 = 0;
          v9 += 2531011;
          *(_DWORD *)(a1 + 1112) = v9;
          v45 = 1;
          v46 = 0;
          LODWORD(v43) = (HIWORD(v9) & 0x7FFF) % 0x2711u;
          sub_182CBA0(v10, &v45);
          BYTE4(v45) &= ~1u;
          LODWORD(v45) = 1;
          v47 = 0;
          v48 = 0;
          v49 = 1;
          v50 = 0;
          sub_8A6550((__int64)&v54, (__int64)&v39);
          sub_98B740((__int64)&v54, (__int64)v21);
          sub_9F7AE0((__int64)v51, (__int64)v33, (__int64)&v54);
          sub_2A6060((__int64)&v54);
          sub_9FD3E0((_QWORD *)a1, a2, (__int64)v51);
          goto LABEL_22;
        }
      }
      else if ( !v20 )
      {
        goto LABEL_12;
      }
    }
    else if ( !v20 )
    {
LABEL_16:
      if ( sub_33D280((__int64)v28, (__int64)v33) )
      {
        if ( (v16[*(_QWORD *)(a1 + 720) + 3] & 0x40) != 0 )
        {
          sub_3EBB80((__int64)&v54, (__int64)v37, (__int64)v32);
          sub_27B620((__int64)v38, (__int64)&v54, (__int64)v21);
          sub_25A130((char *)&v54);
          v54 = 10000;
          v55 = 0;
          v56 = 1;
          v57 = 0;
          sub_182CBA0(qword_1C7F2C0, &v56);
          LODWORD(v56) = 1;
          BYTE4(v56) &= ~1u;
          v17 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v38, (__int64)&v54);
          sub_25A130((char *)&v54);
          if ( v17 )
            v6 = sub_182D020(qword_1C7F2C0, v38) + 1;
          else
            v6 = 10001;
          v7 = qword_1C7F2C0;
          v52[0] = 0;
          v51[0] = 0;
          v8 = 214013 * *(_DWORD *)(a1 + 1112);
          v51[1] = 0;
          v51[2] = 1;
          v51[3] = 0;
          v52[1] = 0;
          v8 += 2531011;
          *(_DWORD *)(a1 + 1112) = v8;
          v53[0] = 1;
          v53[1] = 0;
          LODWORD(v52[0]) = (HIWORD(v8) & 0x7FFFu) % v6;
          sub_182CBA0(v7, v53);
          BYTE4(v53[0]) &= ~1u;
          LODWORD(v53[0]) = 1;
          v53[2] = 0;
          v53[3] = 0;
          v53[4] = 1;
          v53[5] = 0;
          sub_8A6550((__int64)&v54, (__int64)v51);
          sub_98B740((__int64)&v54, (__int64)v21);
          sub_9F7840((__int64)&v39, (__int64)v28, (__int64)&v54);
          sub_2A6060((__int64)&v54);
          sub_2A6060((__int64)v51);
          sub_9FD3E0((_QWORD *)a1, a2, (__int64)&v39);
          sub_2A6060((__int64)&v39);
          sub_25A130(v38);
        }
        else
        {
          v24[0] = 0;
          v24[1] = 0;
          v11 = 214013 * *(_DWORD *)(a1 + 1112);
          v12 = qword_1C7F2C0;
          v25[0] = 1;
          v25[1] = 0;
          v11 += 2531011;
          *(_DWORD *)(a1 + 1112) = v11;
          LODWORD(v24[0]) = (HIWORD(v11) & 0x7FFF) % 0x2711u;
          sub_182CBA0(v12, v25);
          BYTE4(v25[0]) &= ~1u;
          LODWORD(v25[0]) = 1;
          v26[0] = 10000;
          v26[1] = 0;
          v27[0] = 1;
          v27[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v27);
          LODWORD(v27[0]) = 1;
          BYTE4(v27[0]) &= ~1u;
          sub_9F7AE0((__int64)&v39, (__int64)v33, (__int64)v28);
          sub_8A6550((__int64)v51, (__int64)&v39);
          sub_98B740((__int64)v51, (__int64)v24);
          sub_8A6550((__int64)&v54, (__int64)v51);
          sub_98BA40((int *)&v54, (__int64)v26);
          sub_9F7840((__int64)v38, (__int64)v28, (__int64)&v54);
          sub_2A6060((__int64)&v54);
          sub_2A6060((__int64)v51);
          sub_2A6060((__int64)&v39);
          sub_25A130((char *)v26);
          sub_9FD3E0((_QWORD *)a1, a2, (__int64)v38);
          sub_2A6060((__int64)v38);
          sub_25A130((char *)v24);
        }
      }
      else
      {
        v2 = 0;
      }
      goto LABEL_23;
    }
    v43 = 0;
    v39 = 0;
    v4 = 214013 * *(_DWORD *)(a1 + 1112);
    v5 = qword_1C7F2C0;
    v40 = 0;
    v41 = 1;
    v42 = 0;
    v44 = 0;
    v4 += 2531011;
    *(_DWORD *)(a1 + 1112) = v4;
    v45 = 1;
    v46 = 0;
    LODWORD(v43) = (HIWORD(v4) & 0x7FFF) % 0x2711u;
    sub_182CBA0(v5, &v45);
    BYTE4(v45) &= ~1u;
    LODWORD(v45) = 1;
    v47 = 0;
    v48 = 0;
    v49 = 1;
    v50 = 0;
    sub_8A6550((__int64)&v54, (__int64)&v39);
    sub_98B740((__int64)&v54, (__int64)v21);
    sub_9F7840((__int64)v51, (__int64)v28, (__int64)&v54);
    sub_2A6060((__int64)&v54);
    sub_9FD3E0((_QWORD *)a1, a2, (__int64)v51);
LABEL_22:
    sub_2A6060((__int64)v51);
    sub_2A6060((__int64)&v39);
LABEL_23:
    sub_25A130((char *)v21);
    sub_2A6060((__int64)v33);
    sub_2A6060((__int64)v28);
  }
  return v2;
}

