__int64 __fastcall sub_9DBF80(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 i; // rbx
  __int64 v4; // rax
  void *v5; // r15
  char v6; // r15
  int v7; // edx
  __int64 v8; // rdx
  char v9; // cl
  __int64 v10; // rdx
  int v11; // edx
  __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // rdx
  void *v15; // r14
  void *v16; // r14
  void *v17; // rbx
  int v19; // edx
  __int64 v20; // rdx
  char v21; // cl
  __int64 v22; // rdx
  int v23; // edx
  __int64 v24; // rdx
  char v25; // cl
  __int64 v26; // rdx
  __int64 v27; // rax
  char v28; // [rsp+7h] [rbp-139h]
  __int64 v29; // [rsp+20h] [rbp-120h]
  _WORD v30[5]; // [rsp+4Eh] [rbp-F2h] BYREF
  __int64 v31; // [rsp+58h] [rbp-E8h]
  __int64 v32; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-D8h]
  __int64 v34; // [rsp+70h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+78h] [rbp-C8h]
  __int64 v36; // [rsp+80h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+88h] [rbp-B8h]
  __int64 v38[2]; // [rsp+90h] [rbp-B0h] BYREF
  _QWORD v39[2]; // [rsp+A0h] [rbp-A0h] BYREF
  char v40[32]; // [rsp+B0h] [rbp-90h] BYREF
  char v41[32]; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+F8h] [rbp-48h]
  __int64 v44; // [rsp+100h] [rbp-40h] BYREF
  __int64 v45; // [rsp+108h] [rbp-38h]

  v1 = a1[4];
  if ( v1 )
    v2 = *(int *)(v1 - 4);
  else
    v2 = 0;
  *(_QWORD *)&v30[1] = 0;
  v31 = 0;
  v32 = 1;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 1;
  v37 = 0;
  v38[0] = 0;
  v38[1] = 0;
  v39[0] = 1;
  v39[1] = 0;
  if ( (int)v2 > 0 )
  {
    v29 = v2;
    for ( i = 0; v29 != i; ++i )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(a1[74] + 4 * i + 3) & 0x30) != 0 )
          goto LABEL_7;
        sub_9B7380(a1, i, v30, (__int64)&v30[1], (_BYTE *)v30 + 1, (__int64)&v34, (int *)v38);
        if ( (v38[0] & 0x100000000LL) == 0
          && LODWORD(v38[0]) == 1
          && (v39[0] & 0x100000000LL) == 0
          && LODWORD(v39[0]) == 1 )
        {
          v27 = sub_999800((__int64)a1, i);
          if ( (*(_BYTE *)(v27 + 20) & 1) == 0 && *(_DWORD *)(v27 + 16) == 1 )
            goto LABEL_7;
        }
        v4 = sub_999800((__int64)a1, i);
        sub_27B620((__int64)&v42, v4, (__int64)v38);
        v5 = qword_1C7F2C0;
        if ( (v44 & 0x100000000LL) == 0 && (_DWORD)v44 == 1 )
        {
          sub_182CBA0(qword_1C7F2C0, &v42);
          sub_182CBA0(v5, &v44);
          goto LABEL_7;
        }
        sub_182CBA0(qword_1C7F2C0, &v42);
        sub_182CBA0(v5, &v44);
        v6 = v30[0];
        if ( !LOBYTE(v30[0]) )
          break;
        if ( HIBYTE(v30[0]) )
        {
          v42 = 0;
          v43 = 0;
          v44 = 1;
          v45 = 0;
          sub_182CBA0(qword_1C7F2C0, &v44);
          BYTE4(v44) &= ~1u;
          LODWORD(v44) = 1;
          sub_9DAE90(a1, i, (__int64)&v42);
          sub_25A130((char *)&v42);
          goto LABEL_7;
        }
LABEL_19:
        sub_992C20((__int64)&v42, (__int64)&v34);
        v19 = v42;
        LODWORD(v42) = v34;
        LODWORD(v34) = v19;
        v20 = v43;
        v43 = v35;
        v35 = v20;
        v21 = BYTE4(v42) & 1;
        LOBYTE(v20) = BYTE4(v34) & 0xFC | BYTE4(v42) & 2;
        BYTE4(v42) = BYTE4(v34) & 1 | BYTE4(v42) & 0xFC | BYTE4(v34) & 2;
        BYTE4(v34) = v21 | v20;
        LODWORD(v20) = v44;
        LODWORD(v44) = v36;
        LODWORD(v36) = v20;
        v22 = v45;
        v45 = v37;
        v37 = v22;
        LOBYTE(v22) = BYTE4(v44) & 1 | BYTE4(v36) & 0xFC | BYTE4(v44) & 2;
        BYTE4(v44) = BYTE4(v36) & 1 | BYTE4(v44) & 0xFC | BYTE4(v36) & 2;
        BYTE4(v36) = v22;
        sub_25A130((char *)&v42);
        if ( (v38[0] & 0x100000000LL) != 0 )
        {
          if ( v6 )
            goto LABEL_22;
          goto LABEL_38;
        }
        if ( LODWORD(v38[0]) != 1 || (v39[0] & 0x100000000LL) != 0 )
        {
          if ( v6 )
            goto LABEL_22;
LABEL_38:
          v28 = 0;
          goto LABEL_16;
        }
        if ( LODWORD(v39[0]) != 1 )
        {
          if ( v6 )
          {
LABEL_22:
            sub_27B620((__int64)v40, (__int64)&v34, (__int64)v38);
            sub_992C20((__int64)v41, (__int64)v40);
            sub_3EBE30((__int64)&v42, (__int64)v38, (__int64)v41);
            v23 = v42;
            LODWORD(v42) = v34;
            LODWORD(v34) = v23;
            v24 = v43;
            v43 = v35;
            v35 = v24;
            v25 = BYTE4(v42) & 1;
            LOBYTE(v24) = BYTE4(v34) & 0xFC | BYTE4(v42) & 2;
            BYTE4(v42) = BYTE4(v34) & 1 | BYTE4(v42) & 0xFC | BYTE4(v34) & 2;
            BYTE4(v34) = v25 | v24;
            LODWORD(v24) = v44;
            LODWORD(v44) = v36;
            LODWORD(v36) = v24;
            v26 = v45;
            v45 = v37;
            v37 = v26;
            LOBYTE(v26) = BYTE4(v44) & 1 | BYTE4(v36) & 0xFC | BYTE4(v44) & 2;
            BYTE4(v44) = BYTE4(v36) & 1 | BYTE4(v44) & 0xFC | BYTE4(v36) & 2;
            BYTE4(v36) = v26;
            sub_25A130((char *)&v42);
            sub_25A130(v41);
            sub_25A130(v40);
            goto LABEL_23;
          }
          goto LABEL_38;
        }
LABEL_23:
        if ( v6 )
        {
          sub_9DAE90(a1, i, (__int64)&v34);
        }
        else if ( !sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v34, (__int64)&v30[1]) )
        {
          goto LABEL_17;
        }
LABEL_7:
        if ( v29 == ++i )
          goto LABEL_18;
      }
      sub_992CA0((__int64)&v42, (__int64)&v30[1]);
      v7 = v42;
      LODWORD(v42) = *(_DWORD *)&v30[1];
      *(_DWORD *)&v30[1] = v7;
      v8 = v43;
      v43 = v31;
      v31 = v8;
      v9 = BYTE4(v42) & 1;
      LOBYTE(v8) = v30[3] & 0xFC | BYTE4(v42) & 2;
      BYTE4(v42) = v30[3] & 1 | BYTE4(v42) & 0xFC | v30[3] & 2;
      LOBYTE(v30[3]) = v9 | v8;
      LODWORD(v8) = v44;
      LODWORD(v44) = v32;
      LODWORD(v32) = v8;
      v10 = v45;
      v45 = v33;
      v33 = v10;
      LOBYTE(v10) = BYTE4(v44) & 1 | BYTE4(v32) & 0xFC | BYTE4(v44) & 2;
      BYTE4(v44) = BYTE4(v32) & 1 | BYTE4(v44) & 0xFC | BYTE4(v32) & 2;
      BYTE4(v32) = v10;
      sub_25A130((char *)&v42);
      v28 = HIBYTE(v30[0]);
      if ( !HIBYTE(v30[0]) )
        goto LABEL_19;
      if ( (v38[0] & 0x100000000LL) == 0 )
      {
        v28 = 1;
        if ( LODWORD(v38[0]) == 1 )
        {
          v28 = (v39[0] & 0x100000000LL) == 0;
          if ( (v39[0] & 0x100000000LL) != 0 )
          {
            v28 = (v38[0] & 0x100000000LL) == 0;
          }
          else if ( LODWORD(v39[0]) == 1 )
          {
            goto LABEL_17;
          }
        }
      }
LABEL_16:
      sub_27B620((__int64)v40, (__int64)&v30[1], (__int64)v38);
      sub_992CA0((__int64)v41, (__int64)v40);
      sub_3EBE30((__int64)&v42, (__int64)v38, (__int64)v41);
      v11 = v42;
      LODWORD(v42) = *(_DWORD *)&v30[1];
      *(_DWORD *)&v30[1] = v11;
      v12 = v43;
      v43 = v31;
      v31 = v12;
      v13 = BYTE4(v42) & 1;
      LOBYTE(v12) = v30[3] & 0xFC | BYTE4(v42) & 2;
      BYTE4(v42) = v30[3] & 1 | BYTE4(v42) & 0xFC | v30[3] & 2;
      LOBYTE(v30[3]) = v13 | v12;
      LODWORD(v12) = v44;
      LODWORD(v44) = v32;
      LODWORD(v32) = v12;
      v14 = v45;
      v45 = v33;
      v33 = v14;
      LOBYTE(v14) = BYTE4(v44) & 1 | BYTE4(v32) & 0xFC | BYTE4(v44) & 2;
      BYTE4(v44) = BYTE4(v32) & 1 | BYTE4(v44) & 0xFC | BYTE4(v32) & 2;
      BYTE4(v32) = v14;
      sub_25A130((char *)&v42);
      sub_25A130(v41);
      sub_25A130(v40);
      if ( !v28 )
        goto LABEL_22;
LABEL_17:
      sub_9DAE90(a1, i, (__int64)&v30[1]);
    }
  }
LABEL_18:
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v38);
  sub_182CBA0(v15, v39);
  v16 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v34);
  sub_182CBA0(v16, &v36);
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v30[1]);
  return sub_182CBA0(v17, &v32);
}

