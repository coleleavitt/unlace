void __fastcall sub_6941B0(__int64 a1, _BYTE **a2, __int64 a3, __int64 *a4)
{
  _DWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // rsi
  void *v13; // rdi
  unsigned int i; // edx
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _BYTE *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  void *v29; // rdi
  __int64 v30; // rdx
  void *v31; // [rsp+8h] [rbp-E0h]
  void *v32; // [rsp+8h] [rbp-E0h]
  __int64 v33; // [rsp+20h] [rbp-C8h]
  unsigned int v34; // [rsp+20h] [rbp-C8h]
  void *v35; // [rsp+20h] [rbp-C8h]
  unsigned int v36; // [rsp+28h] [rbp-C0h]
  _BYTE v37[32]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v39[2]; // [rsp+60h] [rbp-88h] BYREF
  int v40; // [rsp+70h] [rbp-78h] BYREF
  char v41; // [rsp+74h] [rbp-74h]
  __int64 v42; // [rsp+78h] [rbp-70h]
  int v43; // [rsp+80h] [rbp-68h] BYREF
  char v44; // [rsp+84h] [rbp-64h]
  __int64 v45; // [rsp+88h] [rbp-60h]
  __int64 v46; // [rsp+90h] [rbp-58h] BYREF
  __int64 v47; // [rsp+98h] [rbp-50h]
  __int64 v48; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-40h]

  sub_16744A0(v37, *(_QWORD *)(a1 + 8));
  if ( *(_WORD *)(a3 + 4) || *(_DWORD *)(a3 + 24) )
    goto LABEL_6;
  v8 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
  if ( !v8 || *v8 == -1 )
  {
    if ( (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 8), a3) )
    {
      if ( (**a2 & 1) != 0 )
        a3 = sub_15E1A70(*(_QWORD *)(a1 + 8));
      if ( a3 )
        ++*(_DWORD *)(a3 + 8);
      sub_68CF60(*a4, a4[1]);
      *a4 = a3;
      return;
    }
    if ( !*(_WORD *)(a3 + 4) && !*(_DWORD *)(a3 + 24) )
    {
      v8 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( !v8 )
        goto LABEL_11;
      goto LABEL_5;
    }
LABEL_6:
    sub_1872CE0("");
    sub_1873130(114, 950);
  }
LABEL_5:
  if ( *v8 != -1 )
    goto LABEL_6;
LABEL_11:
  v9 = sub_15D1F10(a3);
  if ( !(unsigned __int8)sub_1673B10(v37, v9) )
    goto LABEL_6;
  v10 = *(_QWORD *)(a1 + 4864);
  if ( !v10 )
    goto LABEL_58;
  v11 = *(unsigned int *)(v10 - 4);
  if ( (_DWORD)v11 )
    goto LABEL_16;
  if ( !*(_DWORD *)(v10 - 8) )
  {
LABEL_58:
    sub_53D790((__int64 *)(a1 + 4864));
    v10 = *(_QWORD *)(a1 + 4864);
    v11 = *(unsigned int *)(v10 - 4);
  }
  v12 = (_QWORD *)(32 * v11 + v10);
  *v12 = 0;
  v13 = qword_1C7F2C0;
  v12[1] = 0;
  v12[2] = 1;
  v12[3] = 0;
  sub_27B950((__int64)v13, (__int64)v12, &qword_1C7F280);
  v10 = *(_QWORD *)(a1 + 4864);
  ++*(_DWORD *)(v10 - 4);
LABEL_16:
  if ( !v10 )
    goto LABEL_30;
LABEL_17:
  for ( i = *(_DWORD *)(v10 - 4); *a2 && i < *((_DWORD *)*a2 - 1); i = 0 )
  {
    v38[0] = 2;
    v38[1] = 0;
    v39[0] = 1;
    v33 = v10 + 32LL * (i - 1);
    v39[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v39);
    BYTE4(v39[0]) &= ~1u;
    v15 = qword_1C7F2C0;
    LODWORD(v39[0]) = 1;
    v46 = 0;
    v47 = 0;
    v48 = 1;
    v49 = 0;
    if ( (v38[0] & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, &v46, v38);
    else
      LODWORD(v46) = v38[0];
    if ( (v39[0] & 0x100000000LL) != 0 )
    {
      sub_182C690(v15, &v48, v39);
    }
    else
    {
      BYTE4(v48) &= ~1u;
      LODWORD(v48) = v39[0];
    }
    if ( (v48 & 0x100000000LL) != 0 || (_DWORD)v48 != 1 || (*(_BYTE *)(v33 + 20) & 1) != 0 || *(_DWORD *)(v33 + 16) != 1 )
    {
      sub_1848FF0(qword_1C7F2C0, &v46, v33);
    }
    else
    {
      v30 = v33;
      v35 = qword_1C7F2C0;
      sub_1831650(qword_1C7F2C0, &v46, v30);
      sub_182CBA0(v35, &v48);
      BYTE4(v48) &= ~1u;
      LODWORD(v48) = 1;
    }
    v40 = 0;
    v41 &= 0xFCu;
    v44 &= 0xFCu;
    v42 = 0;
    v43 = 1;
    v45 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v40, (int *)&v46);
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v46);
    sub_182CBA0(v31, &v48);
    v16 = *(_QWORD *)(a1 + 4864);
    if ( !v16 || (v17 = *(unsigned int *)(v16 - 4), (_DWORD)v17 == *(_DWORD *)(v16 - 8)) )
    {
      sub_53D790((__int64 *)(a1 + 4864));
      v16 = *(_QWORD *)(a1 + 4864);
      v17 = *(unsigned int *)(v16 - 4);
    }
    v18 = qword_1C7F2C0;
    v19 = v16 + 32 * v17;
    *(_DWORD *)v19 = v40;
    *(_BYTE *)(v19 + 4) = v41 & 3 | *(_BYTE *)(v19 + 4) & 0xFC;
    v20 = v42;
    v42 = 0;
    *(_QWORD *)(v19 + 8) = v20;
    *(_DWORD *)(v19 + 16) = v43;
    *(_BYTE *)(v19 + 20) = v44 & 3 | *(_BYTE *)(v19 + 20) & 0xFC;
    v21 = v45;
    v45 = 0;
    *(_QWORD *)(v19 + 24) = v21;
    ++*(_DWORD *)(v16 - 4);
    sub_182CBA0(v18, &v40);
    sub_182CBA0(v18, &v43);
    v32 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v38);
    sub_182CBA0(v32, v39);
    v10 = *(_QWORD *)(a1 + 4864);
    if ( v10 )
      goto LABEL_17;
LABEL_30:
    ;
  }
  v46 = 0;
  v47 = 0;
  v48 = 1;
  v49 = 0;
  sub_182CBA0(qword_1C7F2C0, &v48);
  v22 = *a2;
  v23 = 0;
  BYTE4(v48) &= ~1u;
  LODWORD(v48) = 1;
  if ( !v22 )
  {
LABEL_44:
    v24 = *(_QWORD *)(a1 + 8);
    v25 = 0;
    goto LABEL_45;
  }
  while ( v23 < *((_DWORD *)v22 - 1) )
  {
    if ( (v22[4 * v23] & 1) == 0 )
    {
      v28 = *(_QWORD *)(a1 + 4864) + 32LL * v23;
      v29 = qword_1C7F2C0;
      if ( *(_DWORD *)v28 )
      {
        if ( (_DWORD)v46 )
        {
          if ( (v48 & 0x100000000LL) == 0
            && (_DWORD)v48 == 1
            && (*(_BYTE *)(v28 + 20) & 1) == 0
            && *(_DWORD *)(v28 + 16) == 1 )
          {
            v36 = v23;
            sub_1831A80(qword_1C7F2C0, &v46, v28, &v46);
            sub_182CBA0(v29, &v48);
            BYTE4(v48) &= ~1u;
            v22 = *a2;
            LODWORD(v48) = 1;
            v23 = v36;
            goto LABEL_43;
          }
          v34 = v23;
          sub_1851D20(qword_1C7F2C0, &v46, v28, &v46);
        }
        else
        {
          v34 = v23;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, (int *)v28);
        }
      }
      else
      {
        v34 = v23;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v46, (int *)&v46);
      }
      v22 = *a2;
      v23 = v34;
    }
LABEL_43:
    ++v23;
    if ( !v22 )
      goto LABEL_44;
  }
  v24 = *(_QWORD *)(a1 + 8);
  v25 = *((unsigned int *)v22 - 1);
LABEL_45:
  sub_1674520(v37, &v46, v25);
  v26 = sub_15E1B70(v24);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  sub_68CF60(*a4, a4[1]);
  *a4 = v27;
  sub_25A130((char *)&v46);
}

