__int64 __fastcall sub_A96880(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  unsigned __int64 v6; // r12
  unsigned int **v8; // rbp
  unsigned int *v9; // rbx
  unsigned int *v10; // r13
  int v11; // eax
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // eax
  int *i; // rbx
  bool v16; // r13
  __int64 v17; // rax
  void *v18; // rdi
  void *v19; // r15
  unsigned int v20; // r15d
  __int64 v21; // rdi
  int *v22; // rbx
  char v23; // r15
  bool v24; // r13
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  unsigned int v29; // [rsp+8h] [rbp-1B0h]
  char v30; // [rsp+17h] [rbp-1A1h]
  int *v31; // [rsp+28h] [rbp-190h]
  void *v32; // [rsp+28h] [rbp-190h]
  int *v33; // [rsp+48h] [rbp-170h]
  int v34; // [rsp+50h] [rbp-168h]
  __int64 v35; // [rsp+60h] [rbp-158h] BYREF
  __int64 v36; // [rsp+68h] [rbp-150h]
  __int64 v37; // [rsp+70h] [rbp-148h]
  __int64 v38; // [rsp+78h] [rbp-140h]
  _QWORD v39[2]; // [rsp+80h] [rbp-138h] BYREF
  _QWORD v40[2]; // [rsp+90h] [rbp-128h] BYREF
  _QWORD v41[4]; // [rsp+A0h] [rbp-118h] BYREF
  _QWORD v42[4]; // [rsp+C0h] [rbp-F8h] BYREF
  unsigned int **v43; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-D0h]
  __int64 v45; // [rsp+F0h] [rbp-C8h]
  _QWORD v46[4]; // [rsp+F8h] [rbp-C0h] BYREF
  _QWORD v47[4]; // [rsp+118h] [rbp-A0h] BYREF
  _QWORD v48[4]; // [rsp+138h] [rbp-80h] BYREF
  _QWORD v49[2]; // [rsp+158h] [rbp-60h] BYREF
  _QWORD v50[10]; // [rsp+168h] [rbp-50h] BYREF

  v4 = sub_FF9B30(a1);
  v5 = 24LL * a2;
  v6 = 0xCCCCCCCCCCCCCCCDLL
     * ((__int64)(*(_QWORD *)(v5 + *(_QWORD *)(v4 + 256) + 8) - *(_QWORD *)(v5 + *(_QWORD *)(v4 + 256))) >> 3);
  if ( *(unsigned int *)(sub_FF9A10(a1) + 296) < v6 )
    return 0;
  v30 = sub_FF9D60(a1, a2);
  if ( v30 )
    return 0;
  v43 = nullptr;
  v44 = 0;
  v45 = 1;
  v46[0] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v43, &qword_1C7F2A0);
  v39[0] = 0;
  v39[1] = 0;
  v40[0] = 1;
  v40[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v39, &qword_1C7F2A0);
  v41[0] = 0;
  v41[1] = 0;
  v41[2] = 1;
  v41[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v41, (int *)v39);
  v42[0] = 0;
  v42[1] = 0;
  v42[2] = 1;
  v42[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v42, (int *)&v43);
  sub_25A130((char *)v39);
  sub_25A130((char *)&v43);
  v8 = (unsigned int **)(*(_QWORD *)(sub_FF9B30(a1) + 256) + v5);
  v44 = a3;
  v43 = v8;
  v45 = -1;
  v46[0] = 0;
  v46[1] = 0;
  v46[2] = 1;
  v46[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v46, (int *)v41);
  v47[0] = 0;
  v47[1] = 0;
  v47[2] = 1;
  v47[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v47, (int *)v42);
  v48[0] = 0;
  v48[2] = 1;
  v49[0] = 0;
  v50[0] = 1;
  v9 = v43[1];
  v48[1] = 0;
  v10 = *v43;
  v48[3] = 0;
  v49[1] = 0;
  v50[1] = 0;
  if ( v10 != v9 )
  {
    while ( 1 )
    {
      if ( v45 == 0xFFFFFFFEFFFFFFFELL )
      {
        v14 = 0;
        goto LABEL_25;
      }
      v12 = *v10;
      v13 = *(_DWORD *)(*(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(v44 + 56) + 504LL)) + 88) + 4LL * v12);
      if ( v13 == 1 )
        break;
      if ( v13 == 2 )
      {
        if ( (v10[2] & 0x80000000) == 0 )
          goto LABEL_10;
LABEL_18:
        if ( (_DWORD)v45 != -1 )
          v12 = -2;
        v10 += 10;
        LODWORD(v45) = v12;
        if ( v9 == v10 )
          goto LABEL_21;
      }
      else
      {
        if ( !v13 )
        {
          v11 = v12;
          if ( (_DWORD)v45 != -1 )
            v11 = -2;
          LODWORD(v45) = v11;
LABEL_10:
          if ( HIDWORD(v45) != -1 )
            v12 = -2;
          HIDWORD(v45) = v12;
        }
        v10 += 10;
        if ( v9 == v10 )
          goto LABEL_21;
      }
    }
    if ( (int)v10[2] > 0 )
      goto LABEL_18;
    goto LABEL_10;
  }
LABEL_21:
  if ( (int)v45 >= 0 )
  {
    v35 = 0;
    v36 = 0;
    v37 = 1;
    v38 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v49, (int *)v46);
    v33 = (int *)v43[1];
    if ( *v43 == (unsigned int *)v33 )
    {
      v23 = 0;
    }
    else
    {
      v22 = (int *)(*v43 + 2);
      v23 = 0;
      while ( 1 )
      {
        v27 = (unsigned int)*(v22 - 2);
        if ( (_DWORD)v27 == (_DWORD)v45 )
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v35, v22);
        }
        else
        {
          v28 = *(_QWORD *)(*(_QWORD *)(v44 + 56) + 504LL);
          if ( *v22 > 0 )
          {
            v24 = *(_DWORD *)(sub_FFA020(v28) + 32) != 0;
            v25 = sub_FFA020(*(_QWORD *)(*(_QWORD *)(v44 + 56) + 504LL));
          }
          else
          {
            v24 = *(_DWORD *)(sub_FFA040(v28, v27) + 32) != 0;
            v25 = sub_FFA040(*(_QWORD *)(*(_QWORD *)(v44 + 56) + 504LL), (unsigned int)v27);
          }
          sub_3EBE30((__int64)v39, (__int64)v22, v25);
          v26 = qword_1C7F2C0;
          if ( (v50[0] & 0x100000000LL) != 0
            || LODWORD(v50[0]) != 1
            || (v40[0] & 0x100000000LL) != 0
            || LODWORD(v40[0]) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v49, v39);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, v49, v39);
            sub_182CBA0(v26, v50);
            BYTE4(v50[0]) &= ~1u;
            LODWORD(v50[0]) = 1;
          }
          v23 |= v24;
          v32 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v39);
          sub_182CBA0(v32, v40);
        }
        if ( v33 == v22 + 8 )
          break;
        v22 += 10;
      }
    }
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v49, (__int64)&v35, (__int64)v49);
    if ( (int)v35 <= 0 )
      sub_A95670((__int64 *)&v43, v45, (int *)v49, 0, 0, v23);
    else
      sub_A95670((__int64 *)&v43, v45, (int *)v49, 1, 1u, v23);
    sub_25A130((char *)&v35);
  }
  else
  {
    v34 = 1;
    v14 = 0;
    if ( (_DWORD)v45 != -1 )
      goto LABEL_23;
    sub_A95AF0((int *)&v43);
  }
  v34 = 2;
  v14 = 1;
LABEL_23:
  if ( v45 >= 0 )
  {
    v35 = 0;
    v36 = 0;
    v37 = 1;
    v38 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v49, (int *)v46);
    v31 = (int *)v43[1];
    if ( *v43 != (unsigned int *)v31 )
    {
      for ( i = (int *)(*v43 + 2); ; i += 10 )
      {
        v20 = *(i - 2);
        if ( v20 == HIDWORD(v45) )
        {
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v35, i);
        }
        else
        {
          v21 = *(_QWORD *)(*(_QWORD *)(v44 + 56) + 504LL);
          if ( *i >= 0 )
          {
            v16 = *(_DWORD *)(sub_FFA040(v21, v20) + 32) != 0;
            v17 = sub_FFA040(*(_QWORD *)(*(_QWORD *)(v44 + 56) + 504LL), v20);
          }
          else
          {
            v16 = *(_DWORD *)(sub_FFA020(v21) + 32) != 0;
            v17 = sub_FFA020(*(_QWORD *)(*(_QWORD *)(v44 + 56) + 504LL));
          }
          sub_3EBE30((__int64)v39, (__int64)i, v17);
          v18 = qword_1C7F2C0;
          if ( (v50[0] & 0x100000000LL) != 0
            || LODWORD(v50[0]) != 1
            || (v40[0] & 0x100000000LL) != 0
            || LODWORD(v40[0]) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v49, v39);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, v49, v39);
            sub_182CBA0(v18, v50);
            BYTE4(v50[0]) &= ~1u;
            LODWORD(v50[0]) = 1;
          }
          v19 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v39);
          sub_182CBA0(v19, v40);
          v30 |= v16;
        }
        if ( v31 == i + 8 )
          break;
      }
    }
    sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v49, (__int64)&v35, (__int64)v49);
    if ( (int)v35 <= 0 )
      sub_A95670((__int64 *)&v43, HIDWORD(v45), (int *)v49, 0, 1u, v30);
    else
      sub_A95670((__int64 *)&v43, HIDWORD(v45), (int *)v49, 1, 0, v30);
    sub_25A130((char *)&v35);
  }
  else
  {
    if ( HIDWORD(v45) != -1 )
      goto LABEL_25;
    sub_A961B0((int *)&v43);
  }
  v14 = v34;
LABEL_25:
  v29 = v14;
  sub_25A130((char *)v49);
  sub_25A130((char *)v48);
  sub_25A130((char *)v47);
  sub_25A130((char *)v46);
  sub_25A130((char *)v42);
  sub_25A130((char *)v41);
  return v29;
}

