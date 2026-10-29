__int64 __fastcall sub_C50710(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, __int64 a5, __int64 a6)
{
  unsigned int v10; // ebx
  void *v11; // rbp
  __int64 v13; // rbp
  __int64 v14; // rbp
  void *v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  char v18; // si
  char v19; // dl
  char v20; // cl
  char v21; // si
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  int v28[2]; // [rsp+8h] [rbp-B0h]
  void *v29; // [rsp+18h] [rbp-A0h]
  char v30; // [rsp+2Fh] [rbp-89h] BYREF
  __int64 v31; // [rsp+30h] [rbp-88h] BYREF
  __int64 v32; // [rsp+38h] [rbp-80h] BYREF
  int v33[2]; // [rsp+40h] [rbp-78h] BYREF
  char v34[8]; // [rsp+48h] [rbp-70h]
  _QWORD v35[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v36; // [rsp+60h] [rbp-58h] BYREF
  __int64 v37; // [rsp+68h] [rbp-50h]
  int v38[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v39; // [rsp+78h] [rbp-40h]

  if ( *(_WORD *)(a2 + 4)
    || (v10 = sub_C4E470(a1, *(_QWORD *)(a2 + 16), *(unsigned int *)(a2 + 24), (_QWORD *)(a2 + 32), &v31, &v32, a5, a6),
        !(_BYTE)v10) )
  {
    *(_QWORD *)v33 = 0;
    *(_QWORD *)v34 = 0;
    v35[0] = 1;
    v35[1] = 0;
    v10 = sub_1666AE0(a1 + 8, a2, v33, &v30);
    if ( (_BYTE)v10 )
    {
      if ( v30 )
      {
        v10 = 0;
      }
      else
      {
        BYTE4(v36) &= 0xFCu;
        LOBYTE(v38[1]) &= 0xFCu;
        LODWORD(v36) = 0;
        v15 = qword_1C7F2C0;
        v37 = 0;
        v38[0] = 1;
        v39 = 0;
        if ( (v35[0] & 0x100000000LL) != 0 )
        {
          v29 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, &v36, v35);
          v15 = v29;
        }
        else
        {
          LODWORD(v36) = v35[0];
        }
        sub_182CBA0(v15, v38);
        v16 = *(_DWORD *)a5;
        *(_DWORD *)a5 = v36;
        LODWORD(v36) = v16;
        v17 = *(_QWORD *)(a5 + 8);
        *(_QWORD *)(a5 + 8) = v37;
        v37 = v17;
        v18 = *(_BYTE *)(a5 + 4);
        LOBYTE(v17) = v18 & 2;
        v18 &= ~2u;
        v19 = BYTE4(v36) & 1;
        LOBYTE(v17) = v18 & 1 | BYTE4(v36) & 0xFC | v17 & 0xFE;
        v20 = v18 & 0xFE | BYTE4(v36) & 2;
        v21 = *(_BYTE *)(a5 + 20);
        BYTE4(v36) = v17;
        LODWORD(v17) = *(_DWORD *)(a5 + 16);
        *(_BYTE *)(a5 + 4) = v20 | v19;
        v38[0] = v17;
        v22 = *(_QWORD *)(a5 + 24);
        *(_QWORD *)(a5 + 24) = v39;
        v39 = v22;
        LOBYTE(v22) = v38[1];
        *(_DWORD *)(a5 + 16) = 1;
        *(_BYTE *)(a5 + 20) = v21 & 0xFC | v22 & 2;
        LOBYTE(v38[1]) = v21 & 1 | v21 & 2 | v22 & 0xFC;
        sub_25A130((char *)&v36);
        sub_27B950((__int64)qword_1C7F2C0, a6, (int *)(a1 + 160));
        BYTE4(v36) &= 0xFCu;
        v23 = qword_1C7F2C0;
        LOBYTE(v38[1]) &= 0xFCu;
        LODWORD(v36) = 0;
        v37 = 0;
        v38[0] = 1;
        v39 = 0;
        if ( (v33[1] & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v36, v33);
        else
          LODWORD(v36) = v33[0];
        sub_182CBA0(v23, v38);
        LOBYTE(v38[1]) &= ~1u;
        v38[0] = 1;
        v24 = sub_C4FD60(a1, (__int64)&v36);
        if ( v24 )
          ++*(_DWORD *)(v24 + 8);
        *(_QWORD *)v28 = v24;
        sub_C4E2C0(*a3, a3[1]);
        *a3 = *(_QWORD *)v28;
        sub_25A130((char *)&v36);
        v36 = 0;
        v37 = 0;
        *(_QWORD *)v38 = 1;
        v39 = 0;
        sub_182CBA0(qword_1C7F2C0, v38);
        LOBYTE(v38[1]) &= ~1u;
        v38[0] = 1;
        v25 = sub_C4FD60(a1, (__int64)&v36);
        v26 = v25;
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        sub_C4E2C0(*a4, a4[1]);
        *a4 = v26;
        sub_25A130((char *)&v36);
      }
    }
    v11 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v33);
    sub_182CBA0(v11, v35);
  }
  else
  {
    v13 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    sub_C4E2C0(*a3, a3[1]);
    *a3 = v13;
    v14 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    sub_C4E2C0(*a4, a4[1]);
    *a4 = v14;
  }
  return v10;
}

