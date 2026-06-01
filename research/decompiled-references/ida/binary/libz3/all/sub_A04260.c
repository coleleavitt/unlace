__int64 __fastcall sub_A04260(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  int v5; // edx
  __int64 v6; // rdx
  char v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // esi
  int v11; // edx
  __int64 v12; // rdx
  char v13; // cl
  char v14; // si
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 *v21; // r14
  __int64 v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // r9d
  __int64 v26; // r8
  unsigned int v27; // ecx
  void *v29; // [rsp+8h] [rbp-158h]
  unsigned __int8 v30; // [rsp+2Eh] [rbp-132h]
  bool v31; // [rsp+2Fh] [rbp-131h]
  __int64 v32; // [rsp+48h] [rbp-118h] BYREF
  int v33[8]; // [rsp+50h] [rbp-110h] BYREF
  _QWORD v34[2]; // [rsp+70h] [rbp-F0h] BYREF
  _QWORD v35[2]; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+98h] [rbp-C8h]
  __int64 v38; // [rsp+A0h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-B8h]
  _QWORD v40[2]; // [rsp+B0h] [rbp-B0h] BYREF
  _QWORD v41[2]; // [rsp+C0h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-90h] BYREF
  int v43[2]; // [rsp+D8h] [rbp-88h]
  __int64 *v44; // [rsp+F0h] [rbp-70h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-68h]
  int v46; // [rsp+100h] [rbp-60h] BYREF
  char v47; // [rsp+104h] [rbp-5Ch]
  __int64 v48; // [rsp+108h] [rbp-58h]
  __int64 v49[8]; // [rsp+120h] [rbp-40h] BYREF

  v30 = *(_BYTE *)(*(_QWORD *)(a1 + 400) + 90LL);
  if ( !v30 )
    return 1;
  ++*(_DWORD *)(a1 + 280);
  sub_998230(v33, a2);
  v34[0] = 0;
  v34[1] = 0;
  v35[0] = 1;
  v35[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v35);
  BYTE4(v35[0]) &= ~1u;
  LODWORD(v35[0]) = 1;
  v36 = 0;
  v37 = 0;
  v38 = 1;
  v39 = 0;
  sub_182CBA0(qword_1C7F2C0, &v38);
  BYTE4(v38) &= ~1u;
  LODWORD(v38) = 1;
  v40[0] = 0;
  v40[1] = 0;
  v41[0] = 1;
  v41[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v41);
  v3 = *a2;
  BYTE4(v41[0]) &= ~1u;
  LODWORD(v41[0]) = 1;
  if ( v3 )
  {
    v31 = 0;
    v4 = v3 + 40LL * *(unsigned int *)(v3 - 4);
    if ( v4 != v3 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = *(_DWORD *)(v3 + 32);
          if ( v10 != -1 )
            break;
LABEL_11:
          v3 += 40;
          if ( v4 == v3 )
            goto LABEL_15;
        }
        if ( !sub_9B2ED0(a1, v10) )
          break;
        sub_3EBE30((__int64)&v42, (__int64)v33, v3);
        sub_3EBE30(
          (__int64)&v44,
          (__int64)&v42,
          *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * *(unsigned int *)(v3 + 32)) + 16LL);
        sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v34, (__int64)&v44, (__int64)v34);
        v3 += 40;
        sub_25A130((char *)&v44);
        sub_25A130((char *)&v42);
        if ( v4 == v3 )
          goto LABEL_15;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * *(unsigned int *)(v3 + 32) + 3) & 0x40) == 0 )
        goto LABEL_16;
      if ( !(_DWORD)v36 )
      {
        sub_3EBE30((__int64)&v42, (__int64)v33, v3);
        sub_3EC020((__int64)&v44, (__int64)&v42);
        v5 = (int)v44;
        LODWORD(v44) = v36;
        LODWORD(v36) = v5;
        v6 = v45;
        v45 = v37;
        v37 = v6;
        v7 = BYTE4(v44) & 1;
        LOBYTE(v6) = BYTE4(v36) & 0xFC | BYTE4(v44) & 2;
        BYTE4(v44) = BYTE4(v36) & 1 | BYTE4(v44) & 0xFC | BYTE4(v36) & 2;
        BYTE4(v36) = v7 | v6;
        LODWORD(v6) = v46;
        v46 = v38;
        LODWORD(v38) = v6;
        v8 = v48;
        v48 = v39;
        v39 = v8;
        LOBYTE(v8) = v47 & 1 | BYTE4(v38) & 0xFC | v47 & 2;
        v47 = BYTE4(v38) & 1 | v47 & 0xFC | BYTE4(v38) & 2;
        BYTE4(v38) = v8;
        sub_25A130((char *)&v44);
        sub_25A130((char *)&v42);
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v40, (int *)&v36);
        v9 = *(unsigned int *)(v3 + 32);
        v31 = 0;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v9) )
          v31 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v9) != 0;
        goto LABEL_11;
      }
      sub_3EBE30((__int64)&v44, (__int64)v33, v3);
      sub_3EC020((__int64)&v42, (__int64)&v44);
      sub_25A130((char *)&v44);
      BYTE4(v44) &= 0xFCu;
      v47 &= 0xFCu;
      LODWORD(v44) = 0;
      v45 = 0;
      v46 = 1;
      v48 = 0;
      v29 = qword_1C7F2C0;
      sub_1832C70(qword_1C7F2C0, &v36, &v42, &v44);
      sub_182CBA0(v29, &v46);
      v11 = (int)v44;
      LODWORD(v44) = v36;
      LODWORD(v36) = v11;
      v12 = v45;
      v45 = v37;
      v37 = v12;
      v13 = BYTE4(v44) & 1;
      LOBYTE(v12) = BYTE4(v36) & 0xFC | BYTE4(v44) & 2;
      BYTE4(v44) = BYTE4(v36) & 1 | BYTE4(v44) & 0xFC | BYTE4(v36) & 2;
      BYTE4(v36) = v13 | v12;
      v14 = BYTE4(v38) & 2;
      v46 = v38;
      v15 = v39;
      v39 = v48;
      v48 = v15;
      LODWORD(v38) = 1;
      v16 = BYTE4(v38) & 1;
      BYTE4(v38) = BYTE4(v38) & 0xFC | v47 & 2;
      v47 = v16 | v14 | v47 & 0xFC;
      sub_25A130((char *)&v44);
      if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v42, (__int64)v40) )
      {
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v40, (int *)&v42);
      }
      else
      {
        if ( !v31 )
          goto LABEL_19;
        if ( !sub_3ED680((__int64)qword_1C7F2C0, (__int64)&v42, (__int64)v40) )
          goto LABEL_20;
      }
      v17 = *(unsigned int *)(v3 + 32);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8 * v17) )
      {
        v31 = *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8 * v17) != 0;
        goto LABEL_20;
      }
LABEL_19:
      v31 = 0;
LABEL_20:
      sub_25A130((char *)&v42);
      goto LABEL_11;
    }
  }
  else
  {
    v31 = 0;
  }
LABEL_15:
  if ( (_DWORD)v36 )
  {
    sub_27B620((__int64)&v44, (__int64)v34, (__int64)&v36);
    if ( (v47 & 1) == 0 && v46 == 1 )
    {
      sub_25A130((char *)&v44);
      if ( v31 )
        v30 = sub_A03A40(a1, a2, (__int64)v40, (__int64)v33, (int *)v34);
    }
    else
    {
      sub_25A130((char *)&v44);
      v18 = *(unsigned int *)(a1 + 1224);
      v42 = a1;
      *(_QWORD *)v43 = a1 + 48 * v18 + 1080;
      sub_998560(*(__int64 *)v43);
      ++*(_DWORD *)(a1 + 1224);
      ++*(_DWORD *)(a1 + 284);
      sub_9B2FA0(a1, a2, (__int64)&v42);
      v19 = *(_QWORD *)(a1 + 16);
      v20 = sub_A039B0(*(__int64 **)v43, (__int64)"gcd-test");
      v21 = *(__int64 **)v43;
      v22 = v20;
      v23 = sub_9986B0(*(__int64 *)v43);
      v24 = v21[1];
      if ( v24 )
        v25 = *(_DWORD *)(v24 - 4);
      else
        v25 = 0;
      v26 = *v21;
      if ( *v21 )
        v27 = *(_DWORD *)(v26 - 4);
      else
        v27 = 0;
      sub_9DEA00((__int64)&v44, *(_DWORD *)(a1 + 8), v19, v27, v26, v25, v24, v23, v22);
      v32 = sub_9E8700(v19, (__int64)&v44) | 3;
      sub_8E8670(v19, &v32, -2);
      v44 = qword_1C6E7C8;
      sub_4EB210(v49);
      v30 = 0;
      --*(_DWORD *)(v42 + 1224);
    }
  }
LABEL_16:
  sub_25A130((char *)v40);
  sub_25A130((char *)&v36);
  sub_25A130((char *)v34);
  sub_25A130((char *)v33);
  return v30;
}

