__int64 __fastcall sub_9F68D0(__int64 a1, unsigned int a2, _BYTE *a3)
{
  __int64 v4; // r12
  unsigned int **v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // eax
  int v8; // edx
  void *v9; // r15
  __int64 v10; // rdx
  char v11; // cl
  __int64 v12; // rdx
  void *v13; // rdi
  int v14; // edx
  __int64 v15; // rdx
  char v16; // cl
  __int64 v17; // rdx
  void *v18; // rbx
  int v19; // eax
  void *v20; // rbp
  void *v21; // rbp
  unsigned int **v24; // [rsp+20h] [rbp-B8h]
  _QWORD v25[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v27; // [rsp+60h] [rbp-78h] BYREF
  __int64 v28; // [rsp+68h] [rbp-70h]
  __int64 v29; // [rsp+70h] [rbp-68h] BYREF
  __int64 v30; // [rsp+78h] [rbp-60h]
  int v31; // [rsp+80h] [rbp-58h] BYREF
  char v32; // [rsp+84h] [rbp-54h]
  __int64 v33; // [rsp+88h] [rbp-50h]
  int v34; // [rsp+90h] [rbp-48h] BYREF
  char v35; // [rsp+94h] [rbp-44h]
  __int64 v36; // [rsp+98h] [rbp-40h]

  v4 = **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2);
  v25[0] = 1;
  v25[1] = 0;
  v5 = (unsigned int **)(v4 + 32);
  v26[0] = 1;
  v26[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v26);
  v6 = *(unsigned int *)(v4 + 24);
  BYTE4(v26[0]) &= ~1u;
  LODWORD(v26[0]) = 1;
  v27 = 0;
  v6 *= 8;
  v28 = 0;
  v29 = 1;
  v30 = 0;
  v24 = (unsigned int **)(v4 + 32 + v6);
  if ( v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = sub_B39350(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **v5), *(unsigned int *)(a1 + 8));
        sub_9F65B0((__int64)&v31, a1, v7, a3);
        v8 = v31;
        v9 = qword_1C7F2C0;
        v31 = v27;
        LODWORD(v27) = v8;
        v10 = v33;
        v33 = v28;
        v28 = v10;
        v11 = v32 & 1;
        LOBYTE(v10) = BYTE4(v27) & 0xFC | v32 & 2;
        v32 = BYTE4(v27) & 1 | v32 & 0xFC | BYTE4(v27) & 2;
        BYTE4(v27) = v11 | v10;
        LODWORD(v10) = v34;
        v34 = v29;
        LODWORD(v29) = v10;
        v12 = v36;
        v36 = v30;
        v30 = v12;
        LOBYTE(v12) = v35 & 1 | BYTE4(v29) & 0xFC | v35 & 2;
        v35 = BYTE4(v29) & 1 | v35 & 0xFC | BYTE4(v29) & 2;
        BYTE4(v29) = v12;
        sub_182CBA0(qword_1C7F2C0, &v31);
        sub_182CBA0(v9, &v34);
        v13 = qword_1C7F2C0;
        if ( (v26[0] & 0x100000000LL) == 0 && LODWORD(v26[0]) == 1 && (v29 & 0x100000000LL) == 0 && (_DWORD)v29 == 1 )
          break;
        sub_1848FF0(qword_1C7F2C0, v25, &v27);
        if ( v24 == ++v5 )
          goto LABEL_9;
      }
      sub_1831650(qword_1C7F2C0, v25, &v27);
      sub_182CBA0(v13, v26);
      BYTE4(v26[0]) &= ~1u;
      ++v5;
      LODWORD(v26[0]) = 1;
    }
    while ( v24 != v5 );
  }
LABEL_9:
  sub_9F65B0((__int64)&v31, a1, a2, a3);
  v14 = v31;
  v31 = v27;
  LODWORD(v27) = v14;
  v15 = v33;
  v33 = v28;
  v28 = v15;
  v16 = v32 & 1;
  LOBYTE(v15) = BYTE4(v27) & 0xFC | v32 & 2;
  v32 = BYTE4(v27) & 1 | v32 & 0xFC | BYTE4(v27) & 2;
  BYTE4(v27) = v16 | v15;
  LODWORD(v15) = v34;
  v34 = v29;
  LODWORD(v29) = v15;
  v17 = v36;
  v36 = v30;
  v30 = v17;
  v18 = qword_1C7F2C0;
  LOBYTE(v17) = v35 & 1 | BYTE4(v29) & 0xFC | v35 & 2;
  v35 = BYTE4(v29) & 1 | v35 & 0xFC | BYTE4(v29) & 2;
  BYTE4(v29) = v17;
  sub_182CBA0(qword_1C7F2C0, &v31);
  sub_182CBA0(v18, &v34);
  LOBYTE(v19) = sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v27, (__int64)v25);
  v20 = qword_1C7F2C0;
  LODWORD(v18) = v19;
  sub_182CBA0(qword_1C7F2C0, &v27);
  sub_182CBA0(v20, &v29);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v25);
  sub_182CBA0(v21, v26);
  return (unsigned int)v18;
}

