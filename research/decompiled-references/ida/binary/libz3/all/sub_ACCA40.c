__int64 __fastcall sub_ACCA40(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rdi
  void *v6; // rbx
  void *v7; // rbx
  int v9; // edx
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rdx
  int v13; // edx
  __int64 v14; // rdx
  char v15; // cl
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-88h] BYREF
  __int64 v20; // [rsp+8h] [rbp-80h]
  __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h]
  __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+40h] [rbp-48h] BYREF
  char v28; // [rsp+44h] [rbp-44h]
  __int64 v29; // [rsp+48h] [rbp-40h]
  int v30; // [rsp+50h] [rbp-38h]
  char v31; // [rsp+54h] [rbp-34h]
  __int64 v32; // [rsp+58h] [rbp-30h]

  v5 = *a1;
  v19 = 0;
  v20 = 0;
  v21 = 1;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 1;
  v26 = 0;
  if ( (unsigned __int8)sub_1673C40(v5, a2, &v19) && (unsigned __int8)sub_1673C40(*a1, a3, &v23) )
  {
    sub_1673410(&v27, *a1, &v19, *((unsigned int *)a1 + 2), 1);
    v9 = v27;
    v27 = v19;
    LODWORD(v19) = v9;
    v10 = v29;
    v29 = v20;
    v20 = v10;
    v11 = v28 & 1;
    LOBYTE(v10) = BYTE4(v19) & 0xFC | v28 & 2;
    v28 = BYTE4(v19) & 1 | v28 & 0xFC | BYTE4(v19) & 2;
    BYTE4(v19) = v11 | v10;
    LODWORD(v10) = v30;
    v30 = v21;
    LODWORD(v21) = v10;
    v12 = v32;
    v32 = v22;
    v22 = v12;
    LOBYTE(v12) = v31 & 1 | BYTE4(v21) & 0xFC | v31 & 2;
    v31 = BYTE4(v21) & 1 | v31 & 0xFC | BYTE4(v21) & 2;
    BYTE4(v21) = v12;
    sub_25A130((char *)&v27);
    sub_1673410(&v27, *a1, &v23, *((unsigned int *)a1 + 2), 1);
    v13 = v27;
    v27 = v23;
    LODWORD(v23) = v13;
    v14 = v29;
    v29 = v24;
    v24 = v14;
    v15 = v28 & 1;
    LOBYTE(v14) = BYTE4(v23) & 0xFC | v28 & 2;
    v28 = BYTE4(v23) & 1 | v28 & 0xFC | BYTE4(v23) & 2;
    BYTE4(v23) = v15 | v14;
    LODWORD(v14) = v30;
    v30 = v25;
    LODWORD(v25) = v14;
    v16 = v32;
    v32 = v26;
    v26 = v16;
    LOBYTE(v16) = v31 & 1 | BYTE4(v25) & 0xFC | v31 & 2;
    v31 = BYTE4(v25) & 1 | v31 & 0xFC | BYTE4(v25) & 2;
    BYTE4(v25) = v16;
    sub_25A130((char *)&v27);
    v6 = qword_1C7F2C0;
    if ( (v21 & 0x100000000LL) != 0 || (_DWORD)v21 != 1 || (v25 & 0x100000000LL) != 0 || (_DWORD)v25 != 1 )
    {
      v17 = sub_1848D40(qword_1C7F2C0, &v19, &v23);
      v6 = qword_1C7F2C0;
      LODWORD(a3) = v17;
    }
    else if ( (v19 & 0x100000000LL) != 0 || (v23 & 0x100000000LL) != 0 )
    {
      v18 = sub_182C7B0(qword_1C7F2C0, &v19, &v23);
      v6 = qword_1C7F2C0;
      LODWORD(a3) = v18 >> 31;
    }
    else
    {
      LOBYTE(a3) = (int)v19 < (int)v23;
    }
  }
  else
  {
    v6 = qword_1C7F2C0;
    LOBYTE(a3) = *a2 < *a3;
  }
  sub_182CBA0(v6, &v23);
  sub_182CBA0(v6, &v25);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v19);
  sub_182CBA0(v7, &v21);
  return (unsigned int)a3;
}

