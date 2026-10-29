__int64 __fastcall sub_AB4F30(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v5; // eax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rsi
  void *v11; // rbx
  void *v12; // rdi
  void *v13; // rbx
  int v14; // edx
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // si
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rdx
  void *v22; // rbx
  void *v23; // rbx
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // r12
  void *v27; // rbx
  void *v28; // rbx
  void *v29; // rdi
  __int64 *v30; // [rsp+28h] [rbp-D0h]
  unsigned __int8 v31; // [rsp+37h] [rbp-C1h]
  int v32; // [rsp+40h] [rbp-B8h] BYREF
  char v33; // [rsp+44h] [rbp-B4h]
  int v34; // [rsp+50h] [rbp-A8h] BYREF
  char v35; // [rsp+54h] [rbp-A4h]
  int v36; // [rsp+60h] [rbp-98h] BYREF
  char v37; // [rsp+64h] [rbp-94h]
  __int64 v38; // [rsp+68h] [rbp-90h]
  int v39; // [rsp+70h] [rbp-88h] BYREF
  char v40; // [rsp+74h] [rbp-84h]
  __int64 v41; // [rsp+78h] [rbp-80h]
  __int64 v42; // [rsp+80h] [rbp-78h] BYREF
  __int64 v43; // [rsp+88h] [rbp-70h]
  _QWORD v44[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-50h]
  __int64 v47; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-40h]

  v5 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  if ( v5 == -1 )
    return 0;
  v7 = 8LL * v5;
  v8 = sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 32) + v7));
  v31 = sub_1673B10(a1 + 80, v8);
  if ( !v31 )
  {
    return 0;
  }
  else
  {
    v9 = (__int64 *)(*(_QWORD *)(a1 + 504) + v7);
    v30 = v9;
    if ( *v9 )
      v10 = *(unsigned int *)(*v9 - 4);
    else
      v10 = 0;
    sub_17F6290(&v32, v10);
    v42 = 1;
    v43 = 0;
    v44[0] = 1;
    v44[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v44);
    BYTE4(v44[0]) &= ~1u;
    v11 = qword_1C7F2C0;
    LODWORD(v44[0]) = 1;
    v45 = 0;
    v46 = 0;
    v47 = 1;
    v48 = 0;
    if ( (v33 & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v45, &v32);
    else
      LODWORD(v45) = v32;
    if ( (v35 & 1) != 0 )
    {
      sub_182C690(v11, &v47, &v34);
    }
    else
    {
      BYTE4(v47) &= ~1u;
      LODWORD(v47) = v34;
    }
    v12 = qword_1C7F2C0;
    if ( (v47 & 0x100000000LL) != 0 || (_DWORD)v47 != 1 || (v44[0] & 0x100000000LL) != 0 || LODWORD(v44[0]) != 1 )
    {
      sub_1852000(qword_1C7F2C0, &v45, &v42);
    }
    else
    {
      sub_1832A70(qword_1C7F2C0, &v45, &v42);
      sub_182CBA0(v12, &v47);
      BYTE4(v47) &= ~1u;
      LODWORD(v47) = 1;
    }
    v37 &= 0xFCu;
    v13 = qword_1C7F2C0;
    v40 &= 0xFCu;
    v36 = 0;
    v38 = 0;
    v39 = 1;
    v41 = 0;
    if ( (v45 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v36, &v45);
    else
      v36 = v45;
    if ( (v47 & 0x100000000LL) != 0 )
    {
      sub_182C690(v13, &v39, &v47);
    }
    else
    {
      v40 &= ~1u;
      v39 = v47;
    }
    sub_25A130((char *)&v45);
    sub_25A130((char *)&v42);
    v14 = v36;
    v15 = v37;
    v36 = *a3;
    v16 = *((_QWORD *)a3 + 1);
    *a3 = v14;
    v17 = v38;
    v38 = v16;
    LOBYTE(v16) = *((_BYTE *)a3 + 4);
    *((_QWORD *)a3 + 1) = v17;
    LOBYTE(v17) = v15;
    v15 &= ~2u;
    v18 = v16 & 0xFD;
    v37 = v16 & 1 | v15 & 0xFE | v16 & 2;
    LODWORD(v16) = a3[4];
    *((_BYTE *)a3 + 4) = v15 & 1 | v18 & 0xFE | v17 & 2;
    LODWORD(v17) = v39;
    v39 = v16;
    v19 = *((_QWORD *)a3 + 3);
    v20 = v40;
    a3[4] = v17;
    v21 = v41;
    v41 = v19;
    LOBYTE(v19) = *((_BYTE *)a3 + 20);
    *((_QWORD *)a3 + 3) = v21;
    LOBYTE(v21) = v20;
    v20 &= ~2u;
    v40 = v19 & 1 | v20 & 0xFE | v19 & 2;
    *((_BYTE *)a3 + 20) = v20 & 1 | v19 & 0xFC | v21 & 2;
    sub_25A130((char *)&v36);
    v45 = 2;
    v46 = 0;
    v47 = 1;
    v48 = 0;
    sub_182CBA0(qword_1C7F2C0, &v47);
    LODWORD(v47) = 1;
    v22 = qword_1C7F2C0;
    BYTE4(v47) &= ~1u;
    if ( v32 && ((v45 & 0x100000000LL) != 0 || (_DWORD)v45 != 1) )
    {
      sub_1831650(qword_1C7F2C0, &v32, &v47);
      sub_1831650(v22, &v34, &v45);
      if ( v34 < 0 )
      {
        sub_1831620(v22, &v32);
        sub_1831620(v22, &v34);
      }
      v42 = 0;
      v43 = 0;
      sub_1832C70(v22, &v32, &v34, &v42);
      if ( (v42 & 0x100000000LL) != 0 || (_DWORD)v42 != 1 )
      {
        sub_1833EB0(v22, &v32, &v42, &v32);
        sub_1833EB0(v22, &v34, &v42, &v34);
      }
      sub_182CBA0(v22, &v42);
    }
    else
    {
      if ( (v33 & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v32, &v32);
      else
        v33 &= ~1u;
      if ( (v35 & 1) != 0 )
        sub_182C690(v22, &v34, &v34);
      else
        v35 &= ~1u;
    }
    v23 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v45);
    sub_182CBA0(v23, &v47);
    v24 = *v30;
    if ( *v30 )
    {
      v25 = *(_DWORD *)(v24 - 4);
      if ( v25 )
      {
        v26 = 4LL * (unsigned int)(v25 - 1);
        while ( 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + *(unsigned int *)(v24 + v26)) == 0xFF )
          {
            v29 = qword_1C7F2C0;
            if ( (a3[5] & 1) != 0 || a3[4] != 1 || (v35 & 1) != 0 || v34 != 1 )
            {
              sub_1852000(qword_1C7F2C0, a3, &v32);
            }
            else
            {
              sub_1832A70(qword_1C7F2C0, a3, &v32);
              sub_182CBA0(v29, a3 + 4);
              *((_BYTE *)a3 + 20) &= ~1u;
              a3[4] = 1;
            }
          }
          v45 = 2;
          v46 = 0;
          v47 = 1;
          v48 = 0;
          sub_182CBA0(qword_1C7F2C0, &v47);
          LODWORD(v47) = 1;
          v27 = qword_1C7F2C0;
          BYTE4(v47) &= ~1u;
          if ( v32 && ((v45 & 0x100000000LL) != 0 || (_DWORD)v45 != 1) )
          {
            sub_1831650(qword_1C7F2C0, &v32, &v47);
            sub_1831650(v27, &v34, &v45);
            if ( v34 < 0 )
            {
              sub_1831620(v27, &v32);
              sub_1831620(v27, &v34);
            }
            v42 = 0;
            v43 = 0;
            sub_1832C70(v27, &v32, &v34, &v42);
            if ( (v42 & 0x100000000LL) != 0 || (_DWORD)v42 != 1 )
            {
              sub_1833EB0(v27, &v32, &v42, &v32);
              sub_1833EB0(v27, &v34, &v42, &v34);
            }
            sub_182CBA0(v27, &v42);
          }
          else
          {
            if ( (v33 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v32, &v32);
            else
              v33 &= ~1u;
            if ( (v35 & 1) != 0 )
              sub_182C690(v27, &v34, &v34);
            else
              v35 &= ~1u;
          }
          v28 = qword_1C7F2C0;
          v26 -= 4;
          sub_182CBA0(qword_1C7F2C0, &v45);
          sub_182CBA0(v28, &v47);
          if ( v26 == -4 )
            break;
          v24 = *v30;
        }
      }
    }
    sub_25A130((char *)&v32);
  }
  return v31;
}

