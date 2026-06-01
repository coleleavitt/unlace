__int64 __fastcall sub_9D99C0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 i; // rbx
  int *v4; // rax
  bool v5; // al
  void *v6; // r13
  void *v7; // r15
  void *v8; // r14
  void *v9; // r15
  void *v10; // r14
  void *v11; // rbx
  int *v13; // rax
  void *v14; // [rsp+8h] [rbp-1B8h]
  bool v15; // [rsp+2Eh] [rbp-192h]
  char v16; // [rsp+2Fh] [rbp-191h]
  void *v17; // [rsp+38h] [rbp-188h]
  void *v18; // [rsp+38h] [rbp-188h]
  void *v19; // [rsp+38h] [rbp-188h]
  __int64 v20; // [rsp+40h] [rbp-180h]
  void *v21; // [rsp+58h] [rbp-168h]
  char v22; // [rsp+6Eh] [rbp-152h] BYREF
  bool v23; // [rsp+6Fh] [rbp-151h] BYREF
  _QWORD v24[2]; // [rsp+70h] [rbp-150h] BYREF
  _QWORD v25[2]; // [rsp+80h] [rbp-140h] BYREF
  char v26[32]; // [rsp+90h] [rbp-130h] BYREF
  int v27[8]; // [rsp+B0h] [rbp-110h] BYREF
  _QWORD v28[2]; // [rsp+D0h] [rbp-F0h] BYREF
  _QWORD v29[2]; // [rsp+E0h] [rbp-E0h] BYREF
  _QWORD v30[2]; // [rsp+F0h] [rbp-D0h] BYREF
  _QWORD v31[2]; // [rsp+100h] [rbp-C0h] BYREF
  _QWORD v32[2]; // [rsp+110h] [rbp-B0h] BYREF
  _QWORD v33[2]; // [rsp+120h] [rbp-A0h] BYREF
  _QWORD v34[2]; // [rsp+130h] [rbp-90h] BYREF
  _QWORD v35[2]; // [rsp+140h] [rbp-80h] BYREF
  _QWORD v36[2]; // [rsp+150h] [rbp-70h] BYREF
  _QWORD v37[2]; // [rsp+160h] [rbp-60h] BYREF
  _QWORD v38[10]; // [rsp+170h] [rbp-50h] BYREF

  v1 = a1[4];
  if ( v1 )
    v2 = *(int *)(v1 - 4);
  else
    v2 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29[0] = 1;
  v29[1] = 0;
  v30[0] = 0;
  v30[1] = 0;
  v31[0] = 1;
  v31[1] = 0;
  v32[0] = 0;
  v32[1] = 0;
  v33[0] = 1;
  v33[1] = 0;
  v34[0] = 0;
  v34[1] = 0;
  v35[0] = 1;
  v35[1] = 0;
  v24[0] = 0;
  v24[1] = 0;
  v25[0] = 1;
  v25[1] = 0;
  if ( (int)v2 > 0 )
  {
    v20 = v2;
    for ( i = 0; i != v20; ++i )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(a1[82] + 4 * i + 3) & 0x30) != 0 )
          goto LABEL_7;
        sub_9B4200(a1, i, &v22, (__int64)v28, &v23, (__int64)v32, v24);
        if ( (v24[0] & 0x100000000LL) == 0
          && LODWORD(v24[0]) == 1
          && (v25[0] & 0x100000000LL) == 0
          && LODWORD(v25[0]) == 1 )
        {
          v13 = sub_9AA900((__int64)a1, i);
          if ( (v13[5] & 1) == 0 && v13[4] == 1 && !v13[8] )
            goto LABEL_7;
        }
        v4 = sub_9AA900((__int64)a1, i);
        sub_27B620((__int64)v36, (__int64)v4, (__int64)v24);
        if ( (v37[0] & 0x100000000LL) == 0 && LODWORD(v37[0]) == 1 )
        {
          v21 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v36);
          sub_182CBA0(v21, v37);
          goto LABEL_7;
        }
        v17 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v36);
        sub_182CBA0(v17, v37);
        v16 = v22;
        if ( !v22 )
          break;
        if ( v23 )
        {
          v36[0] = 0;
          v36[1] = 0;
          v37[0] = 1;
          v37[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v37);
          BYTE4(v37[0]) &= ~1u;
          LODWORD(v37[0]) = 1;
          v38[0] = 0;
          v38[1] = 0;
          v38[2] = 1;
          v38[3] = 0;
          sub_9D85F0(a1, i, (__int64)v36);
          sub_25A130((char *)v38);
          sub_25A130((char *)v36);
          goto LABEL_7;
        }
LABEL_20:
        sub_9A9130((__int64)v36, (__int64)v32);
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v32, (int *)v36);
        v19 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v34);
        sub_182CBA0(v19, v35);
        BYTE4(v35[0]) &= ~1u;
        LODWORD(v35[0]) = 1;
        sub_25A130((char *)v36);
        if ( (v24[0] & 0x100000000LL) != 0
          || LODWORD(v24[0]) != 1
          || (v25[0] & 0x100000000LL) != 0
          || LODWORD(v25[0]) != 1 )
        {
          if ( !v16 )
          {
            v15 = 0;
            goto LABEL_37;
          }
LABEL_23:
          sub_9AFE60((__int64)v36, (__int64)v32, (__int64)v24);
          sub_9A9130((__int64)v26, (__int64)v36);
          sub_3EBE30((__int64)v27, (__int64)v24, (__int64)v26);
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v32, v27);
          v6 = qword_1C7F2C0;
          sub_182CEF0(qword_1C7F2C0, v34);
          sub_182CBA0(v6, v35);
          BYTE4(v35[0]) &= ~1u;
          LODWORD(v35[0]) = 1;
          sub_25A130((char *)v27);
          sub_25A130(v26);
          sub_25A130((char *)v38);
          sub_25A130((char *)v36);
        }
        if ( v16 )
        {
          sub_9D85F0(a1, i, (__int64)v32);
        }
        else if ( !sub_927C80((__int64)v32, (__int64)v28) )
        {
          goto LABEL_26;
        }
LABEL_7:
        if ( ++i == v20 )
          goto LABEL_27;
      }
      sub_9ABE60((__int64)v36, (__int64)v28);
      sub_27B950((__int64)qword_1C7F2C0, (__int64)v28, (int *)v36);
      v18 = qword_1C7F2C0;
      sub_182CEF0(qword_1C7F2C0, v30);
      sub_182CBA0(v18, v31);
      BYTE4(v31[0]) &= ~1u;
      LODWORD(v31[0]) = 1;
      sub_25A130((char *)v36);
      v5 = v23;
      if ( !v23 )
        goto LABEL_20;
      v15 = (v24[0] & 0x100000000LL) == 0;
      if ( (v24[0] & 0x100000000LL) != 0 )
        goto LABEL_19;
      if ( LODWORD(v24[0]) != 1 )
        goto LABEL_37;
      v5 = (v25[0] & 0x100000000LL) == 0;
      if ( (v25[0] & 0x100000000LL) != 0 )
        goto LABEL_37;
      if ( LODWORD(v25[0]) != 1 )
      {
LABEL_19:
        v15 = v5;
LABEL_37:
        sub_9AFE60((__int64)v36, (__int64)v28, (__int64)v24);
        sub_9ABE60((__int64)v26, (__int64)v36);
        sub_3EBE30((__int64)v27, (__int64)v24, (__int64)v26);
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v28, v27);
        v14 = qword_1C7F2C0;
        sub_182CEF0(qword_1C7F2C0, v30);
        sub_182CBA0(v14, v31);
        BYTE4(v31[0]) &= ~1u;
        LODWORD(v31[0]) = 1;
        sub_25A130((char *)v27);
        sub_25A130(v26);
        sub_25A130((char *)v38);
        sub_25A130((char *)v36);
        if ( v15 )
          goto LABEL_26;
        goto LABEL_23;
      }
LABEL_26:
      sub_9D85F0(a1, i, (__int64)v28);
    }
  }
LABEL_27:
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v24);
  sub_182CBA0(v7, v25);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v34);
  sub_182CBA0(v8, v35);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v32);
  sub_182CBA0(v9, v33);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v30);
  sub_182CBA0(v10, v31);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v28);
  return sub_182CBA0(v11, v29);
}

