__int64 __fastcall sub_828FD0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  char v7; // r12
  __int64 v8; // r15
  int v9; // r10d
  bool v10; // dl
  char v11; // r11
  void *v12; // rcx
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v17; // ebx
  __int64 v18; // rbp
  void *v19; // rdx
  char v20; // r12
  __int64 v21; // rdx
  void *v22; // r14
  int v23; // eax
  void *v24; // rdi
  void *v25; // r15
  __int64 v26; // rsi
  char v27; // r12
  char v28; // [rsp+Ch] [rbp-ACh]
  char v29; // [rsp+Ch] [rbp-ACh]
  int v30; // [rsp+Ch] [rbp-ACh]
  int v31; // [rsp+10h] [rbp-A8h]
  void *v32; // [rsp+10h] [rbp-A8h]
  bool v33; // [rsp+10h] [rbp-A8h]
  unsigned int v34; // [rsp+10h] [rbp-A8h]
  char v35; // [rsp+1Bh] [rbp-9Dh]
  char v36; // [rsp+1Bh] [rbp-9Dh]
  int v37; // [rsp+1Ch] [rbp-9Ch]
  void *v38; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+28h] [rbp-90h]
  char v40; // [rsp+2Ch] [rbp-8Ch]
  void *v41; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-80h]
  char v43; // [rsp+3Ch] [rbp-7Ch]
  void *v44; // [rsp+40h] [rbp-78h] BYREF
  void *v45; // [rsp+48h] [rbp-70h]
  unsigned int v46; // [rsp+50h] [rbp-68h]
  char v47; // [rsp+54h] [rbp-64h]

  v28 = *(_BYTE *)(a3 + 80);
  v6 = *(unsigned int *)(a3 + 64);
  if ( (unsigned __int64)(v6 + 63) > 0x7F )
  {
    sub_2585D40(&v44, v6, (unsigned __int64)(v6 + 63) >> 6, *(_QWORD *)(a3 + 56));
    v25 = v44;
    v34 = (unsigned int)v45;
    v7 = sub_B10310(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v35 = v7 ^ v28;
    if ( v34 > 0x40 && v25 )
      operator delete[](v25);
  }
  else
  {
    v7 = sub_B10310(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v35 = v7 ^ v28;
  }
  v8 = *(unsigned int *)(a3 + 64);
  if ( (unsigned __int64)(v8 + 63) > 0x7F )
  {
    sub_2585D40(&v44, (unsigned int)v8, (unsigned __int64)(v8 + 63) >> 6, *(_QWORD *)(a3 + 56));
    LODWORD(v8) = (_DWORD)v45;
    v32 = v44;
    v23 = sub_70B280(*(_QWORD *)(*a1 + 16LL), *(_QWORD *)(a2 + 8));
    v9 = v23;
    v10 = (_DWORD)v8 == v23;
    if ( (unsigned int)v8 > 0x40 && v32 )
    {
      v24 = v32;
      v33 = (_DWORD)v8 == v23;
      v37 = v23;
      operator delete[](v24);
      v9 = v37;
      v10 = v33;
    }
  }
  else
  {
    v9 = sub_70B280(*(_QWORD *)(*a1 + 16LL), *(_QWORD *)(a2 + 8));
    v10 = v9 == (_DWORD)v8;
  }
  v11 = *(_BYTE *)(a3 + 80);
  v12 = *(void **)(a3 + 56);
  v13 = *(unsigned int *)(a3 + 64);
  v14 = (unsigned __int64)(v13 + 63) >> 6;
  if ( !v35 || !v10 )
  {
    if ( v14 > 1 )
    {
      v31 = v9;
      v36 = *(_BYTE *)(a3 + 80);
      sub_2585D40(&v44, v13, (unsigned int)((unsigned __int64)(v13 + 63) >> 6), v12);
      LODWORD(v13) = (_DWORD)v45;
      v12 = v44;
      v9 = v31;
      v11 = v36;
    }
    v39 = v13;
    v38 = v12;
    v40 = v11;
    if ( v28 == v7 )
    {
      v26 = *(unsigned int *)(a3 + 64);
      v27 = *(_BYTE *)(a3 + 80) ^ 1;
      if ( (unsigned __int64)(v26 + 63) > 0x7F )
      {
        v30 = v9;
        sub_2585D40(&v44, v26, (unsigned __int64)(v26 + 63) >> 6, *(_QWORD *)(a3 + 56));
        v40 = v27;
        v9 = v30;
        if ( (unsigned int)v45 > 0x40 && v44 )
        {
          operator delete[](v44);
          v9 = v30;
        }
      }
      else
      {
        v40 = *(_BYTE *)(a3 + 80) ^ 1;
      }
    }
    if ( (_DWORD)v8 == v9 )
    {
      v17 = v39;
      v18 = a1[1];
      v42 = v39;
      if ( v39 <= 0x40 )
      {
LABEL_23:
        v19 = v38;
        v41 = v38;
        goto LABEL_24;
      }
    }
    else
    {
      v20 = v40;
      v21 = (unsigned int)sub_70B280(*(_QWORD *)(*a1 + 16LL), *(_QWORD *)(a2 + 8));
      if ( v40 )
        sub_2587E20(&v44, &v38, v21);
      else
        sub_2587E80(&v44, &v38, v21);
      v17 = (unsigned int)v45;
      v22 = v44;
      if ( v39 > 0x40 && v38 )
        operator delete[](v38);
      v38 = v22;
      v18 = a1[1];
      v39 = v17;
      v40 = v20;
      v42 = v17;
      if ( v17 <= 0x40 )
        goto LABEL_23;
    }
    sub_2585B30(&v41);
    v17 = v42;
    v19 = v41;
LABEL_24:
    BYTE4(v44) &= ~1u;
    LODWORD(v44) = 2;
    v43 = v40;
    v42 = 0;
    v45 = v19;
    v46 = v17;
    v47 = v40;
    sub_6A01B0(v18, (__int64)&v44);
    if ( (unsigned int)v44 <= 1 )
      goto LABEL_11;
LABEL_25:
    sub_69F740((__int64)&v44);
    goto LABEL_11;
  }
  if ( v14 <= 1 )
  {
    v39 = *(_DWORD *)(a3 + 64);
    v15 = a1[1];
    v38 = v12;
    v40 = v11;
LABEL_9:
    v41 = v12;
    goto LABEL_10;
  }
  v29 = *(_BYTE *)(a3 + 80);
  sub_2585D40(&v44, v13, (unsigned int)v14, v12);
  LODWORD(v13) = (_DWORD)v45;
  v12 = v44;
  v11 = v29;
  v15 = a1[1];
  v39 = (unsigned int)v45;
  v38 = v44;
  v40 = v29;
  v42 = (unsigned int)v45;
  if ( (unsigned int)v45 <= 0x40 )
    goto LABEL_9;
  sub_2585B30(&v41);
  v11 = v40;
  LODWORD(v13) = v42;
  v12 = v41;
LABEL_10:
  v46 = v13;
  BYTE4(v44) &= ~1u;
  v43 = v11;
  LODWORD(v44) = 2;
  v42 = 0;
  v45 = v12;
  v47 = v11;
  sub_6A01B0(v15, (__int64)&v44);
  if ( (unsigned int)v44 > 1 )
    goto LABEL_25;
LABEL_11:
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  return 1;
}

