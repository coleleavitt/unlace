__int64 __fastcall sub_949A20(__int64 a1, __int64 *a2)
{
  int *v2; // rax
  int v3; // edx
  __int64 v4; // r14
  int *v5; // r14
  int v6; // edx
  int v7; // edx
  void *v8; // r13
  __int64 v9; // rdx
  char v10; // cl
  int v11; // ecx
  __int64 v12; // rcx
  char v13; // cl
  void *v14; // rbx
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rcx
  char v18; // si
  __int64 v19; // rdx
  void *v20; // rbx
  __int64 v21; // rbx
  int *v22; // r12
  void *v23; // r13
  char v24; // al
  char v25; // al
  void *v26; // rbx
  int *v28; // [rsp+0h] [rbp-B8h]
  __int64 v29; // [rsp+0h] [rbp-B8h]
  void *v30; // [rsp+8h] [rbp-B0h]
  void *v31; // [rsp+8h] [rbp-B0h]
  __int64 v33; // [rsp+20h] [rbp-98h] BYREF
  __int64 v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h]
  int v37; // [rsp+40h] [rbp-78h] BYREF
  char v38; // [rsp+44h] [rbp-74h]
  __int64 v39; // [rsp+48h] [rbp-70h]
  int v40; // [rsp+50h] [rbp-68h] BYREF
  char v41; // [rsp+54h] [rbp-64h]
  __int64 v42; // [rsp+58h] [rbp-60h]
  __int64 v43; // [rsp+60h] [rbp-58h] BYREF
  __int64 v44; // [rsp+68h] [rbp-50h]
  int v45; // [rsp+70h] [rbp-48h] BYREF
  char v46; // [rsp+74h] [rbp-44h]
  __int64 v47; // [rsp+78h] [rbp-40h]

  v33 = 0;
  v34 = 0;
  v35 = 1;
  v36 = 0;
  sub_182CBA0(qword_1C7F2C0, &v35);
  v2 = (int *)*a2;
  BYTE4(v35) &= ~1u;
  LODWORD(v35) = 1;
  v3 = 0;
  if ( v2 )
  {
    v4 = 8LL * (unsigned int)*(v2 - 1);
    v28 = &v2[v4];
    if ( &v2[v4] != v2 )
    {
      v5 = v2;
      while ( 1 )
      {
        v14 = qword_1C7F2C0;
        if ( v3 )
          goto LABEL_13;
        BYTE4(v43) &= 0xFCu;
        v46 &= 0xFCu;
        LODWORD(v43) = 0;
        v44 = 0;
        v45 = 1;
        v47 = 0;
        if ( (v5[1] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v43, v5);
        else
          LODWORD(v43) = *v5;
        if ( (v5[5] & 1) != 0 )
        {
          sub_182C690(v14, &v45, v5 + 4);
        }
        else
        {
          v6 = v5[4];
          v46 &= ~1u;
          v45 = v6;
        }
        sub_1831690(qword_1C7F2C0, &v43);
        v7 = v33;
        v8 = qword_1C7F2C0;
        LODWORD(v33) = v43;
        LODWORD(v43) = v7;
        v9 = v34;
        v34 = v44;
        v44 = v9;
        v10 = BYTE4(v33) & 0xFC | BYTE4(v43) & 2 | BYTE4(v43) & 1;
        BYTE4(v43) = BYTE4(v33) & 1 | BYTE4(v43) & 0xFC | BYTE4(v33) & 2;
        BYTE4(v33) = v10;
        v11 = v45;
        v45 = v35;
        LODWORD(v35) = v11;
        v12 = v47;
        v47 = v36;
        v36 = v12;
        LOBYTE(v12) = BYTE4(v35) & 0xFC | v46 & 2 | v46 & 1;
        v46 = BYTE4(v35) & 1 | v46 & 0xFC | BYTE4(v35) & 2;
        BYTE4(v35) = v12;
        sub_182CBA0(qword_1C7F2C0, &v43);
        sub_182CBA0(v8, &v45);
LABEL_9:
        v13 = BYTE4(v33);
        v3 = v33;
        if ( (v33 & 0x100000000LL) == 0 && (_DWORD)v33 == 1 )
          break;
        v5 += 8;
        if ( v28 == v5 )
          goto LABEL_26;
      }
      if ( (v35 & 0x100000000LL) == 0 && (_DWORD)v35 == 1 )
        goto LABEL_28;
      v5 += 8;
      if ( v28 == v5 )
        goto LABEL_28;
      v14 = qword_1C7F2C0;
LABEL_13:
      v38 &= 0xFCu;
      v41 &= 0xFCu;
      v37 = 0;
      v39 = 0;
      v40 = 1;
      v42 = 0;
      if ( (v5[1] & 1) != 0 )
        sub_182C690(v14, &v37, v5);
      else
        v37 = *v5;
      if ( (v5[5] & 1) != 0 )
      {
        sub_182C690(v14, &v40, v5 + 4);
      }
      else
      {
        v15 = v5[4];
        v41 &= ~1u;
        v40 = v15;
      }
      sub_1831690(qword_1C7F2C0, &v37);
      BYTE4(v43) &= 0xFCu;
      v46 &= 0xFCu;
      LODWORD(v43) = 0;
      v44 = 0;
      v45 = 1;
      v47 = 0;
      v30 = qword_1C7F2C0;
      sub_1832C70(qword_1C7F2C0, &v37, &v33, &v43);
      sub_182CBA0(v30, &v45);
      v16 = v43;
      LODWORD(v43) = v33;
      LODWORD(v33) = v16;
      v17 = v44;
      v44 = v34;
      v34 = v17;
      LOBYTE(v17) = BYTE4(v43) & 1;
      v18 = BYTE4(v33) & 0xFC | BYTE4(v43) & 2;
      BYTE4(v43) = BYTE4(v33) & 1 | BYTE4(v43) & 0xFC | BYTE4(v33) & 2;
      BYTE4(v33) = v18 | v17;
      v45 = v35;
      v19 = v36;
      v36 = v47;
      v47 = v19;
      LODWORD(v35) = 1;
      LOBYTE(v19) = BYTE4(v35) & 1 | BYTE4(v35) & 2 | v46 & 0xFC;
      v31 = qword_1C7F2C0;
      BYTE4(v35) = BYTE4(v35) & 0xFC | v46 & 2;
      v46 = v19;
      sub_182CBA0(qword_1C7F2C0, &v43);
      sub_182CBA0(v31, &v45);
      v20 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v37);
      sub_182CBA0(v20, &v40);
      goto LABEL_9;
    }
  }
LABEL_26:
  if ( v3 )
  {
    v13 = BYTE4(v33);
LABEL_28:
    if ( (v13 & 1) != 0 || v3 != 1 || (v35 & 0x100000000LL) != 0 || (_DWORD)v35 != 1 )
    {
      v21 = *a2;
      if ( *a2 )
      {
        v29 = v21 + 32LL * *(unsigned int *)(v21 - 4);
        if ( v29 != v21 )
        {
          v22 = (int *)(v21 + 16);
          while ( 1 )
          {
            v23 = qword_1C7F2C0;
            if ( *(_DWORD *)v21
              && ((v33 & 0x100000000LL) != 0 || (_DWORD)v33 != 1 || (v35 & 0x100000000LL) != 0 || (_DWORD)v35 != 1) )
            {
              if ( (__int64 *)v21 == &v33 )
              {
                v43 = 0;
                v44 = 0;
                sub_1831650(qword_1C7F2C0, v21, &v35);
                sub_1831650(v23, v22, &v33);
                if ( (v43 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v23, &v33, &v43);
                }
                else
                {
                  BYTE4(v33) &= ~1u;
                  LODWORD(v33) = v43;
                }
                sub_182CBA0(v23, &v43);
                if ( *v22 < 0 )
                {
LABEL_46:
                  sub_1831620(v23, v21);
                  sub_1831620(v23, v22);
                }
              }
              else
              {
                sub_1831650(qword_1C7F2C0, v21, &v35);
                sub_1831650(v23, v22, &v33);
                if ( *v22 < 0 )
                  goto LABEL_46;
              }
              v43 = 0;
              v44 = 0;
              sub_1832C70(v23, v21, v22, &v43);
              if ( (v43 & 0x100000000LL) != 0 || (_DWORD)v43 != 1 )
              {
                sub_1833EB0(v23, v21, &v43, v21);
                sub_1833EB0(v23, v22, &v43, v22);
              }
              sub_182CBA0(v23, &v43);
              goto LABEL_38;
            }
            v24 = *(_BYTE *)(v21 + 4);
            if ( (v24 & 1) != 0 )
              break;
            *(_BYTE *)(v21 + 4) = v24 & 0xFE;
            v25 = *(_BYTE *)(v21 + 20);
            if ( (v25 & 1) != 0 )
            {
LABEL_58:
              sub_182C690(v23, v22, v22);
LABEL_38:
              v21 += 32;
              v22 += 8;
              if ( v29 == v21 )
                goto LABEL_55;
            }
            else
            {
LABEL_51:
              v21 += 32;
              v22 += 8;
              *(_BYTE *)(v21 - 12) = v25 & 0xFE;
              if ( v29 == v21 )
                goto LABEL_55;
            }
          }
          sub_182C690(qword_1C7F2C0, v21, v21);
          v25 = *(_BYTE *)(v21 + 20);
          if ( (v25 & 1) == 0 )
            goto LABEL_51;
          goto LABEL_58;
        }
      }
    }
  }
LABEL_55:
  v26 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v33);
  return sub_182CBA0(v26, &v35);
}

