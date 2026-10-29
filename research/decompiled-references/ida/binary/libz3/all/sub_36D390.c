__int64 __fastcall sub_36D390(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  void *v5; // rbx
  __int64 v6; // rsi
  void *v7; // rbx
  int v8; // edx
  char v9; // al
  bool v10; // al
  int v11; // eax
  __int64 v12; // rax
  _DWORD *v13; // rbx
  __int64 v15; // rdi
  __int64 (*v16)(); // rax
  void (***v17)(); // rdi
  __int64 v18; // rbx
  void (*v19)(); // rax
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  _QWORD *i; // r12
  char v24; // dl
  __int64 v25; // rax
  int v26; // [rsp+10h] [rbp-58h] BYREF
  char v27; // [rsp+14h] [rbp-54h]
  int v28; // [rsp+20h] [rbp-48h] BYREF
  char v29; // [rsp+24h] [rbp-44h]

  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(&v26, *(_QWORD *)(a1 + 16), *a2);
  v4 = *(_DWORD *)(a1 + 80);
  if ( !v4 )
    goto LABEL_7;
  v5 = qword_1C7F2C0;
  v6 = a1 + 80;
  if ( (*(_BYTE *)(a1 + 100) & 1) != 0 || *(_DWORD *)(a1 + 96) != 1 || (v29 & 1) != 0 || v28 != 1 )
  {
    if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v6, &v26) )
      goto LABEL_7;
LABEL_4:
    v5 = qword_1C7F2C0;
    goto LABEL_28;
  }
  v24 = *(_BYTE *)(a1 + 84);
  if ( (v24 & 1) == 0 && (v27 & 1) == 0 )
  {
    if ( v4 < v26 )
      goto LABEL_28;
    *(_DWORD *)(a1 + 80) = v26;
    *(_BYTE *)(a1 + 84) = v24 & 0xFE;
    goto LABEL_10;
  }
  if ( (int)sub_182C7B0(qword_1C7F2C0, v6, &v26) < 0 )
    goto LABEL_4;
LABEL_7:
  v7 = qword_1C7F2C0;
  if ( (v27 & 1) != 0 )
  {
    sub_182C690(qword_1C7F2C0, a1 + 80, &v26);
    v10 = (v29 & 1) == 0;
  }
  else
  {
    v8 = v26;
    v9 = v29;
    *(_BYTE *)(a1 + 84) &= ~1u;
    *(_DWORD *)(a1 + 80) = v8;
    v10 = (v9 & 1) == 0;
  }
  if ( v10 )
  {
LABEL_10:
    v11 = v28;
    *(_BYTE *)(a1 + 100) &= ~1u;
    *(_DWORD *)(a1 + 96) = v11;
    goto LABEL_11;
  }
  sub_182C690(v7, a1 + 96, &v28);
LABEL_11:
  v12 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v12 + 16);
  v13 = *(_DWORD **)(a1 + 112);
  if ( v13 )
  {
    if ( v13[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v13)(v13);
      sub_186B220(v13);
      v12 = *a2;
    }
  }
  v15 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 112) = v12;
  v16 = *(__int64 (**)())(*(_QWORD *)v15 + 168LL);
  if ( v16 == sub_343070 )
  {
    v17 = *(void (****)())(a1 + 120);
    v18 = 0;
    if ( !v17 )
      goto LABEL_22;
    goto LABEL_18;
  }
  v25 = ((__int64 (__fastcall *)(__int64))v16)(v15);
  v17 = *(void (****)())(a1 + 120);
  v18 = v25;
  if ( v17 != (void (***)())v25 )
  {
    if ( !v17 )
    {
LABEL_21:
      *(_QWORD *)(a1 + 120) = v18;
      goto LABEL_22;
    }
LABEL_18:
    v19 = **v17;
    if ( v19 != nullsub_164 )
      ((void (__fastcall *)(void (***)()))v19)(v17);
    sub_186B220(v17);
    goto LABEL_21;
  }
LABEL_22:
  v20 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 76) = 0;
  v21 = *(_QWORD **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20) + 8);
  if ( v21 )
  {
    for ( i = &v21[*((unsigned int *)v21 - 1)]; i != v21; ++v21 )
    {
      if ( !(unsigned __int8)sub_1374270(*a2, *v21) )
        ++*(_DWORD *)(a1 + 76);
    }
  }
  v5 = qword_1C7F2C0;
LABEL_28:
  sub_182CBA0(v5, &v26);
  return sub_182CBA0(v5, &v28);
}

