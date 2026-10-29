__int64 __fastcall sub_A0A480(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r12
  unsigned int v10; // esi
  __int64 v11; // r15
  __int64 v12; // rax
  _BOOL8 v13; // rcx
  __int64 v14; // rdi
  _BOOL8 v15; // rcx
  __int64 v16; // rdi
  void *v17; // r15
  void *v18; // r13
  unsigned int v19; // r12d
  void *v20; // rbx
  void *v21; // rbx
  void *v22; // rbx
  int v24; // eax
  __int64 v25; // rax
  char v26; // dl
  char v27; // cl
  char v28; // si
  __int64 v29; // rax
  char v30; // cl
  __int64 v31; // r12
  unsigned int v32; // eax
  __int64 v33; // rsi
  unsigned int v34; // r9d
  __int64 v35; // r8
  unsigned int v36; // ecx
  void *v38; // [rsp+10h] [rbp-170h]
  __int64 v41; // [rsp+28h] [rbp-158h]
  __int64 *v42; // [rsp+48h] [rbp-138h]
  __int64 v43; // [rsp+58h] [rbp-128h] BYREF
  __int64 v44; // [rsp+60h] [rbp-120h] BYREF
  int v45[2]; // [rsp+68h] [rbp-118h]
  __int64 v46; // [rsp+70h] [rbp-110h] BYREF
  __int64 v47; // [rsp+78h] [rbp-108h]
  __int64 v48; // [rsp+80h] [rbp-100h] BYREF
  __int64 v49; // [rsp+88h] [rbp-F8h]
  _QWORD v50[2]; // [rsp+90h] [rbp-F0h] BYREF
  _QWORD v51[2]; // [rsp+A0h] [rbp-E0h] BYREF
  _QWORD v52[2]; // [rsp+B0h] [rbp-D0h] BYREF
  _QWORD v53[2]; // [rsp+C0h] [rbp-C0h] BYREF
  char v54[16]; // [rsp+D0h] [rbp-B0h] BYREF
  _BYTE v55[16]; // [rsp+E0h] [rbp-A0h] BYREF
  int v56[4]; // [rsp+F0h] [rbp-90h] BYREF
  _BYTE v57[16]; // [rsp+100h] [rbp-80h] BYREF
  __int64 *v58; // [rsp+110h] [rbp-70h] BYREF
  __int64 v59; // [rsp+118h] [rbp-68h]
  int v60; // [rsp+120h] [rbp-60h] BYREF
  char v61; // [rsp+124h] [rbp-5Ch]
  __int64 v62; // [rsp+128h] [rbp-58h]
  __int64 v63[8]; // [rsp+140h] [rbp-40h] BYREF

  v46 = 0;
  v47 = 0;
  v48 = 1;
  v49 = 0;
  sub_182CBA0(qword_1C7F2C0, &v48);
  BYTE4(v48) &= ~1u;
  LODWORD(v48) = 1;
  v50[0] = 0;
  v50[1] = 0;
  v51[0] = 1;
  v51[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v50, a5);
  v52[0] = 0;
  v52[1] = 0;
  v53[0] = 1;
  v53[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v52, a5);
  v7 = *(unsigned int *)(a1 + 1320);
  v44 = a1;
  *(_QWORD *)v45 = a1 + 48 * v7 + 1176;
  sub_9A4DA0(*(__int64 *)v45);
  v8 = *a2;
  ++*(_DWORD *)(a1 + 1320);
  if ( v8 )
  {
    v9 = v8 + 40LL * *(unsigned int *)(v8 - 4);
    while ( v9 != v8 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v8 + 32);
        if ( v10 != -1 && !sub_9B1230(a1, v10) )
          break;
        v8 += 40;
        if ( v9 == v8 )
          goto LABEL_16;
      }
      v11 = *(unsigned int *)(v8 + 32);
      sub_3EBE30((__int64)v54, a4, v8);
      sub_3EC020((__int64)v56, (__int64)v54);
      if ( sub_3ED680((__int64)qword_1C7F2C0, (__int64)v56, a3) )
      {
        if ( *(int *)v54 <= 0 )
        {
          sub_9AF010((__int64)v50, (__int64)v54, *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v11) + 48LL);
          v12 = *(_QWORD *)(a1 + 744);
        }
        else
        {
          sub_9AF010((__int64)v50, (__int64)v54, *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * v11) + 48LL);
          v12 = *(_QWORD *)(a1 + 752);
        }
        sub_9AF010((__int64)v52, (__int64)v54, *(_QWORD *)(v12 + 8 * v11) + 48LL);
        v13 = 1;
        if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          v13 = *(_DWORD *)(a1 + 1632) != 0x7FFFFFFF;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8 * v11);
        (*(void (__fastcall **)(__int64, __int64 *, __int64, _BOOL8))(*(_QWORD *)v14 + 24LL))(v14, &v44, v8, v13);
        v15 = 1;
        if ( !*(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
          v15 = *(_DWORD *)(a1 + 1632) != 0x7FFFFFFF;
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8 * v11);
        (*(void (__fastcall **)(__int64, __int64 *, __int64, _BOOL8))(*(_QWORD *)v16 + 24LL))(v16, &v44, v8, v15);
      }
      else if ( (_DWORD)v46 )
      {
        BYTE4(v58) &= 0xFCu;
        v61 &= 0xFCu;
        LODWORD(v58) = 0;
        v59 = 0;
        v60 = 1;
        v62 = 0;
        v38 = qword_1C7F2C0;
        sub_1832C70(qword_1C7F2C0, &v46, v56, &v58);
        sub_182CBA0(v38, &v60);
        v24 = v46;
        LODWORD(v46) = (_DWORD)v58;
        LODWORD(v58) = v24;
        v25 = v47;
        v47 = v59;
        v59 = v25;
        v26 = BYTE4(v58) & 1;
        v27 = BYTE4(v46) & 0xFC | BYTE4(v58) & 2;
        BYTE4(v58) = BYTE4(v46) & 1 | BYTE4(v58) & 0xFC | BYTE4(v46) & 2;
        BYTE4(v46) = v27 | v26;
        v28 = BYTE4(v48) & 2;
        v60 = v48;
        v29 = v49;
        v49 = v62;
        v62 = v29;
        LODWORD(v48) = 1;
        v30 = BYTE4(v48) & 1;
        BYTE4(v48) = BYTE4(v48) & 0xFC | v61 & 2;
        v61 = v30 | v28 | v61 & 0xFC;
        sub_25A130((char *)&v58);
      }
      else
      {
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, v56);
      }
      v8 += 40;
      v17 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v56);
      sub_182CBA0(v17, v57);
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v54);
      sub_182CBA0(v18, v55);
    }
  }
LABEL_16:
  v19 = 1;
  if ( (_DWORD)v46 )
  {
    sub_27B620((__int64)&v58, (__int64)v50, (__int64)&v46);
    sub_992CA0((__int64)v54, (__int64)&v58);
    sub_25A130((char *)&v58);
    sub_27B620((__int64)&v58, (__int64)v52, (__int64)&v46);
    sub_992C20((__int64)v56, (__int64)&v58);
    sub_25A130((char *)&v58);
    v19 = 1;
    if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v56, (__int64)v54) )
    {
      ++*(_DWORD *)(a1 + 348);
      sub_9B12F0(a1, a2, (__int64)&v44);
      v31 = *(_QWORD *)(a1 + 16);
      v41 = sub_A0A3F0(*(__int64 **)v45, (__int64)"gcd-test");
      v42 = *(__int64 **)v45;
      v32 = sub_9A4EF0(*(__int64 *)v45);
      v33 = v42[1];
      if ( v33 )
        v34 = *(_DWORD *)(v33 - 4);
      else
        v34 = 0;
      v35 = *v42;
      if ( *v42 )
        v36 = *(_DWORD *)(v35 - 4);
      else
        v36 = 0;
      sub_9DEA00((__int64)&v58, *(_DWORD *)(a1 + 8), v31, v36, v35, v34, v33, v32, v41);
      v43 = sub_9E8700(v31, (__int64)&v58) | 3;
      sub_8E8670(v31, &v43, -2);
      v19 = 0;
      v58 = qword_1C6E7C8;
      sub_4EB210(v63);
      sub_25A130((char *)v56);
      sub_25A130(v54);
    }
    else
    {
      sub_25A130((char *)v56);
      sub_25A130(v54);
    }
  }
  --*(_DWORD *)(v44 + 1320);
  v20 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v52);
  sub_182CBA0(v20, v53);
  v21 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v50);
  sub_182CBA0(v21, v51);
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v46);
  sub_182CBA0(v22, &v48);
  return v19;
}

