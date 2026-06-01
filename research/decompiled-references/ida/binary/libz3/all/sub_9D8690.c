__int64 __fastcall sub_9D8690(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  __int64 v4; // r15
  unsigned int v5; // ecx
  void *v6; // rdi
  int v7; // eax
  void *v8; // rdi
  unsigned int v9; // eax
  void *v10; // rdi
  unsigned int v11; // eax
  unsigned int v12; // eax
  void *v13; // rdi
  unsigned int v14; // eax
  void *v15; // rdi
  char v16; // [rsp+8h] [rbp-268h]
  char v17; // [rsp+18h] [rbp-258h]
  char v19; // [rsp+5Eh] [rbp-212h] BYREF
  char v20; // [rsp+5Fh] [rbp-211h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-210h] BYREF
  __int64 v22; // [rsp+70h] [rbp-200h]
  __int64 v23; // [rsp+78h] [rbp-1F8h]
  _QWORD v24[2]; // [rsp+80h] [rbp-1F0h] BYREF
  _QWORD v25[2]; // [rsp+90h] [rbp-1E0h] BYREF
  _QWORD v26[2]; // [rsp+A0h] [rbp-1D0h] BYREF
  _QWORD v27[2]; // [rsp+B0h] [rbp-1C0h] BYREF
  int v28[2]; // [rsp+C0h] [rbp-1B0h] BYREF
  __int64 v29; // [rsp+C8h] [rbp-1A8h]
  __int64 v30; // [rsp+D0h] [rbp-1A0h]
  __int64 v31; // [rsp+D8h] [rbp-198h]
  _QWORD v32[4]; // [rsp+E0h] [rbp-190h] BYREF
  int v33[2]; // [rsp+100h] [rbp-170h] BYREF
  __int64 v34; // [rsp+108h] [rbp-168h]
  __int64 v35; // [rsp+110h] [rbp-160h]
  __int64 v36; // [rsp+118h] [rbp-158h]
  _QWORD v37[4]; // [rsp+120h] [rbp-150h] BYREF
  char v38[32]; // [rsp+140h] [rbp-130h] BYREF
  char v39[32]; // [rsp+160h] [rbp-110h] BYREF
  __int64 v40; // [rsp+180h] [rbp-F0h] BYREF
  __int64 v41; // [rsp+188h] [rbp-E8h]
  __int64 v42; // [rsp+190h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+198h] [rbp-D8h]
  __int64 v44; // [rsp+1A0h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+1A8h] [rbp-C8h]
  __int64 v46; // [rsp+1B0h] [rbp-C0h]
  __int64 v47; // [rsp+1B8h] [rbp-B8h]
  _QWORD v48[2]; // [rsp+1C0h] [rbp-B0h] BYREF
  _QWORD v49[2]; // [rsp+1D0h] [rbp-A0h] BYREF
  _QWORD v50[4]; // [rsp+1E0h] [rbp-90h] BYREF
  __int64 v51; // [rsp+200h] [rbp-70h] BYREF
  __int64 v52; // [rsp+208h] [rbp-68h]
  __int64 v53; // [rsp+210h] [rbp-60h] BYREF
  __int64 v54; // [rsp+218h] [rbp-58h]
  _QWORD v55[10]; // [rsp+220h] [rbp-50h] BYREF

  LOBYTE(v2) = !sub_9B2ED0(a1, a2) && a2 != -1;
  if ( (_BYTE)v2 )
  {
    v4 = 4LL * a2;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + v4 + 3) & 0x30) != 0 )
      return 0;
    *(_QWORD *)v28 = 0;
    v29 = 0;
    v30 = 1;
    v31 = 0;
    v32[0] = 0;
    v32[1] = 0;
    v32[2] = 1;
    v32[3] = 0;
    *(_QWORD *)v33 = 0;
    v34 = 0;
    v35 = 1;
    v36 = 0;
    v37[0] = 0;
    v37[1] = 0;
    v37[2] = 1;
    v37[3] = 0;
    v21[0] = 0;
    v21[1] = 0;
    v22 = 1;
    v23 = 0;
    sub_9B4200((_QWORD *)a1, a2, &v19, (__int64)v28, &v20, (__int64)v33, v21);
    v16 = v19;
    if ( !v19 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + v4 + 3) & 0x40) != 0 )
      {
        sub_9ABE60((__int64)&v51, (__int64)v28);
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v28, (int *)&v51);
        sub_992B50((__int64)v32);
        sub_25A130((char *)&v51);
        if ( (v21[0] & 0x100000000LL) != 0 || LODWORD(v21[0]) != 1 || (v22 & 0x100000000LL) != 0 || (_DWORD)v22 != 1 )
        {
          sub_9AFE60((__int64)&v51, (__int64)v28, (__int64)v21);
          sub_9ABE60((__int64)&v40, (__int64)&v51);
          sub_3EBE30((__int64)v48, (__int64)v21, (__int64)&v40);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v28, (int *)v48);
          sub_992B50((__int64)v32);
          sub_25A130((char *)v48);
          sub_25A130((char *)&v40);
          sub_25A130((char *)v55);
          sub_25A130((char *)&v51);
        }
        if ( !v20 )
        {
LABEL_13:
          sub_9A9130((__int64)&v51, (__int64)v33);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v33, (int *)&v51);
          sub_992B50((__int64)v37);
          sub_25A130((char *)&v51);
          if ( (v21[0] & 0x100000000LL) != 0 || LODWORD(v21[0]) != 1 || (v22 & 0x100000000LL) != 0 || (_DWORD)v22 != 1 )
          {
            sub_9AFE60((__int64)&v51, (__int64)v33, (__int64)v21);
            sub_9A9130((__int64)&v40, (__int64)&v51);
            sub_3EBE30((__int64)v48, (__int64)v21, (__int64)&v40);
            sub_27B950((__int64)qword_1C7F2C0, (__int64)v33, (int *)v48);
            sub_992B50((__int64)v37);
            sub_25A130((char *)v48);
            sub_25A130((char *)&v40);
            sub_25A130((char *)v55);
            sub_25A130((char *)&v51);
          }
          if ( !v16 )
            goto LABEL_17;
LABEL_25:
          v10 = qword_1C7F2C0;
          v40 = 0;
          v11 = 214013 * *(_DWORD *)(a1 + 1016);
          v41 = 0;
          v42 = 1;
          v43 = 0;
          v11 += 2531011;
          *(_DWORD *)(a1 + 1016) = v11;
          LODWORD(v40) = (HIWORD(v11) & 0x7FFF) % 0x2711u;
          sub_182CBA0(v10, &v42);
          BYTE4(v42) &= ~1u;
          LODWORD(v42) = 1;
          v44 = 0;
          v45 = 0;
          v46 = 1;
          v47 = 0;
          sub_993140((__int64)&v51, (__int64)v21, (__int64)&v40);
          sub_992E80((__int64)v48, (__int64)v33, (__int64)&v51);
          sub_25A130((char *)v55);
          sub_25A130((char *)&v51);
          sub_9D85F0((_QWORD *)a1, a2, (__int64)v48);
          sub_25A130((char *)v50);
          sub_25A130((char *)v48);
          sub_25A130((char *)&v44);
          sub_25A130((char *)&v40);
          goto LABEL_24;
        }
      }
      else if ( !v20 )
      {
LABEL_17:
        if ( sub_927C80((__int64)v28, (__int64)v33) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + v4 + 3) & 0x40) != 0 )
          {
            sub_3EBB80((__int64)&v51, (__int64)v33, (__int64)v28);
            sub_27B620((__int64)v38, (__int64)&v51, (__int64)v21);
            sub_25A130((char *)&v51);
            v51 = 10000;
            v52 = 0;
            v53 = 1;
            v54 = 0;
            sub_182CBA0(qword_1C7F2C0, &v53);
            BYTE4(v53) &= ~1u;
            LODWORD(v53) = 1;
            v17 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v38, (__int64)&v51);
            sub_25A130((char *)&v51);
            if ( v17 )
              v5 = sub_182D020(qword_1C7F2C0, v38) + 1;
            else
              v5 = 10001;
            v6 = qword_1C7F2C0;
            v48[0] = 0;
            v48[1] = 0;
            v7 = 214013 * *(_DWORD *)(a1 + 1016);
            v49[0] = 1;
            v49[1] = 0;
            v7 += 2531011;
            *(_DWORD *)(a1 + 1016) = v7;
            LODWORD(v48[0]) = (HIWORD(v7) & 0x7FFFu) % v5;
            sub_182CBA0(v6, v49);
            BYTE4(v49[0]) &= ~1u;
            LODWORD(v49[0]) = 1;
            v50[0] = 0;
            v50[1] = 0;
            v50[2] = 1;
            v50[3] = 0;
            sub_993140((__int64)&v51, (__int64)v21, (__int64)v48);
            sub_89A7E0((__int64)&v40, (__int64)v28, (__int64)&v51);
            sub_25A130((char *)v55);
            sub_25A130((char *)&v51);
            sub_25A130((char *)v50);
            sub_25A130((char *)v48);
            sub_9D85F0((_QWORD *)a1, a2, (__int64)&v40);
            sub_25A130((char *)&v44);
            sub_25A130((char *)&v40);
            sub_25A130(v38);
          }
          else
          {
            v24[0] = 0;
            v24[1] = 0;
            v12 = 214013 * *(_DWORD *)(a1 + 1016);
            v13 = qword_1C7F2C0;
            v25[0] = 1;
            v25[1] = 0;
            v12 += 2531011;
            *(_DWORD *)(a1 + 1016) = v12;
            LODWORD(v24[0]) = (HIWORD(v12) & 0x7FFF) % 0x2711u;
            sub_182CBA0(v13, v25);
            BYTE4(v25[0]) &= ~1u;
            LODWORD(v25[0]) = 1;
            v26[0] = 10000;
            v26[1] = 0;
            v27[0] = 1;
            v27[1] = 0;
            sub_182CBA0(qword_1C7F2C0, v27);
            LODWORD(v27[0]) = 1;
            BYTE4(v27[0]) &= ~1u;
            sub_992E80((__int64)&v40, (__int64)v33, (__int64)v28);
            sub_993140((__int64)v48, (__int64)v24, (__int64)&v40);
            sub_9AFE60((__int64)&v51, (__int64)v48, (__int64)v26);
            sub_89A7E0((__int64)v38, (__int64)v28, (__int64)&v51);
            sub_25A130((char *)v55);
            sub_25A130((char *)&v51);
            sub_25A130((char *)v50);
            sub_25A130((char *)v48);
            sub_25A130((char *)&v44);
            sub_25A130((char *)&v40);
            sub_25A130((char *)v26);
            sub_9D85F0((_QWORD *)a1, a2, (__int64)v38);
            sub_25A130(v39);
            sub_25A130(v38);
            sub_25A130((char *)v24);
          }
        }
        else
        {
          v2 = 0;
        }
        goto LABEL_24;
      }
      v8 = qword_1C7F2C0;
      v40 = 0;
      v41 = 0;
      v9 = 214013 * *(_DWORD *)(a1 + 1016);
      v42 = 1;
      v43 = 0;
      v9 += 2531011;
      *(_DWORD *)(a1 + 1016) = v9;
      LODWORD(v40) = (HIWORD(v9) & 0x7FFF) % 0x2711u;
      sub_182CBA0(v8, &v42);
      BYTE4(v42) &= ~1u;
      LODWORD(v42) = 1;
      v44 = 0;
      v45 = 0;
      v46 = 1;
      v47 = 0;
      sub_993140((__int64)&v51, (__int64)v21, (__int64)&v40);
      sub_89A7E0((__int64)v48, (__int64)v28, (__int64)&v51);
      sub_25A130((char *)v55);
      sub_25A130((char *)&v51);
      sub_9D85F0((_QWORD *)a1, a2, (__int64)v48);
      sub_25A130((char *)v50);
      sub_25A130((char *)v48);
      sub_25A130((char *)&v44);
      sub_25A130((char *)&v40);
LABEL_24:
      sub_25A130((char *)v21);
      sub_25A130((char *)v37);
      sub_25A130((char *)v33);
      sub_25A130((char *)v32);
      sub_25A130((char *)v28);
      return v2;
    }
    if ( v20 )
    {
      v51 = 0;
      v14 = 214013 * *(_DWORD *)(a1 + 1016);
      v15 = qword_1C7F2C0;
      v52 = 0;
      v53 = 1;
      v54 = 0;
      v14 += 2531011;
      *(_DWORD *)(a1 + 1016) = v14;
      LODWORD(v51) = (HIWORD(v14) & 0x7FFF) % 0x2711u;
      sub_182CBA0(v15, &v53);
      BYTE4(v53) &= ~1u;
      LODWORD(v53) = 1;
      v55[0] = 0;
      v55[1] = 0;
      v55[2] = 1;
      v55[3] = 0;
      sub_9D85F0((_QWORD *)a1, a2, (__int64)&v51);
      sub_25A130((char *)v55);
      sub_25A130((char *)&v51);
      goto LABEL_24;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + v4 + 3) & 0x40) == 0 )
      goto LABEL_25;
    goto LABEL_13;
  }
  return v2;
}

