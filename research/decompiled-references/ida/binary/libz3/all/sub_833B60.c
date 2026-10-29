__int64 __fastcall sub_833B60(__int64 a1, __int64 a2, __int64 *a3)
{
  char *v5; // rax
  unsigned int v6; // r14d
  __int64 v7; // r15
  unsigned int v8; // r13d
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rdi
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  unsigned __int8 v29; // bl
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r14
  __int64 v35; // rbx
  int v36; // edx
  __int64 v37; // rdx
  char v38; // cl
  char v39; // si
  __int64 v40; // rax
  char v41; // cl
  unsigned __int8 v42; // al
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  void *v46; // [rsp+8h] [rbp-80h]
  int v47; // [rsp+10h] [rbp-78h] BYREF
  char v48; // [rsp+14h] [rbp-74h]
  __int64 v49; // [rsp+18h] [rbp-70h]
  int v50; // [rsp+20h] [rbp-68h]
  char v51; // [rsp+24h] [rbp-64h]
  __int64 v52; // [rsp+28h] [rbp-60h]
  int v53; // [rsp+30h] [rbp-58h] BYREF
  char v54; // [rsp+34h] [rbp-54h]
  __int64 v55; // [rsp+38h] [rbp-50h]
  int v56; // [rsp+40h] [rbp-48h] BYREF
  char v57; // [rsp+44h] [rbp-44h]
  __int64 v58; // [rsp+48h] [rbp-40h]

  if ( *(int *)(a2 + 88) >> 8 == -1 )
  {
LABEL_28:
    v6 = -1;
  }
  else
  {
    v5 = (char *)(a2 + 88);
    while ( *(_DWORD *)(a1 + 12) != *v5 )
    {
      v5 = *((char **)v5 + 1);
      if ( !v5 )
        goto LABEL_28;
    }
    v6 = *(int *)v5 >> 8;
  }
  v7 = *(_QWORD *)a2;
  v8 = sub_15D26C0(*(_QWORD *)(a1 + 72), **(_QWORD **)(a2 + 64));
  if ( (_BYTE)v8 )
  {
    v9 = **(_QWORD **)(a2 + 64);
    if ( v9 )
      ++*(_DWORD *)(v9 + 8);
    v10 = *a3;
    if ( *a3 )
    {
      v11 = a3[1];
      if ( (*(_DWORD *)(v10 + 8))-- == 1 )
        sub_15D7BC0(v11, v10);
    }
    *a3 = v9;
    return 1;
  }
  if ( *(_QWORD *)(a1 + 472)
    && *(_BYTE *)(a1 + 480)
    && (unsigned __int8)sub_1021D60()
    && (unsigned int)sub_FF9FB0(*(_QWORD *)(a1 + 496), v6) != -1 )
  {
    v22 = sub_1021DA0(*(_QWORD *)(a1 + 472));
    v23 = sub_8333F0((_QWORD *)a1, v6, v22);
    if ( (unsigned __int8)sub_828D80(v7)
      && (v24 = sub_1021D80(*(_QWORD *)(a1 + 472)), !(unsigned __int8)sub_17B3C10(v24, v23, v25, v26, v27, v28)) )
    {
      v42 = sub_828D80(v7);
      v35 = sub_27B900(a1 + 832, (int)&qword_1C7F2A0, v42, v43, v44, v45);
      if ( !v35 )
        goto LABEL_37;
    }
    else
    {
      v29 = sub_828D80(v7);
      v30 = sub_1021DA0(*(_QWORD *)(a1 + 472));
      v31 = sub_8333F0((_QWORD *)a1, v6, v30);
      v32 = sub_1021D80(*(_QWORD *)(a1 + 472));
      v33 = *(_QWORD *)(a1 + 840);
      v34 = v32;
      if ( !v33 )
      {
        sub_16669E0(a1 + 832);
        v33 = *(_QWORD *)(a1 + 840);
      }
      v35 = sub_166B840(v33, v34, v31, v29);
      if ( !v35 )
        goto LABEL_37;
    }
    ++*(_DWORD *)(v35 + 8);
LABEL_37:
    sub_828D60(*a3, a3[1]);
    *a3 = v35;
    return 1;
  }
  if ( v6 == -1 )
    return v8;
  sub_8299C0((__int64)&v47, a1, v6);
  v14 = *(_DWORD **)(sub_15D1F10(v7) + 24);
  if ( v14 && *v14 == 5 && v14[1] == 1 && ((v51 & 1) != 0 || v50 != 1) )
  {
    v54 &= 0xFCu;
    v57 &= 0xFCu;
    v53 = 0;
    v55 = 0;
    v56 = 1;
    v58 = 0;
    v46 = qword_1C7F2C0;
    sub_18495B0(qword_1C7F2C0, &v47, &v53);
    sub_182CBA0(v46, &v56);
    v36 = v53;
    v53 = v47;
    v47 = v36;
    v37 = v55;
    v55 = v49;
    v49 = v37;
    v38 = v54 & 1;
    LOBYTE(v37) = v48 & 0xFC | v54 & 2;
    v54 = v48 & 1 | v54 & 0xFC | v48 & 2;
    v48 = v38 | v37;
    v39 = v51 & 2;
    v56 = v50;
    v40 = v52;
    v52 = v58;
    v58 = v40;
    v50 = 1;
    v41 = v51 & 1;
    v51 = v51 & 0xFC | v57 & 2;
    v57 = v41 | v39 | v57 & 0xFC;
    sub_25A130((char *)&v53);
  }
  v15 = *(_DWORD **)(sub_15D1F10(v7) + 24);
  if ( v15 && *v15 == 5 )
    LOBYTE(v8) = v15[1] == 1;
  v19 = *(_QWORD *)(a1 + 840);
  if ( !v19 )
  {
    sub_16669E0(a1 + 832);
    v19 = *(_QWORD *)(a1 + 840);
  }
  v20 = sub_166A700(v19, (unsigned int)&v47, (unsigned __int8)v8, v16, v17, v18);
  v21 = v20;
  if ( v20 )
    ++*(_DWORD *)(v20 + 8);
  sub_828D60(*a3, a3[1]);
  *a3 = v21;
  sub_25A130((char *)&v47);
  return 1;
}

