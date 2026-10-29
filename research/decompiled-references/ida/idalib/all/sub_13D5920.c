__int64 __fastcall sub_13D5920(__int64 a1, unsigned __int8 **a2, __int64 a3)
{
  unsigned __int8 *v6; // rbx
  unsigned __int8 v7; // al
  int v8; // r14d
  unsigned __int8 *v9; // r12
  unsigned int v10; // eax
  _BYTE *v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rsi
  int v16; // edx
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  int v19; // edx
  unsigned __int64 v20; // rax
  int v21; // edx
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // rdx
  __int64 (__fastcall **v29)(); // rax
  int v30; // edx
  int v31; // ecx
  __int64 v32; // rdx
  char v33; // [rsp+Bh] [rbp-7Dh] BYREF
  unsigned int v34; // [rsp+Ch] [rbp-7Ch] BYREF
  _DWORD v35[6]; // [rsp+10h] [rbp-78h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+28h] [rbp-60h]
  int v37; // [rsp+30h] [rbp-58h]
  unsigned __int64 v38; // [rsp+34h] [rbp-54h]
  int v39; // [rsp+3Ch] [rbp-4Ch]
  unsigned int *v40; // [rsp+40h] [rbp-48h] BYREF
  int v41; // [rsp+48h] [rbp-40h]

  v6 = *a2;
  v7 = **a2;
  if ( v7 == 63 || (v8 = 1, v7 == 92) )
  {
    v18 = sub_13D1690(a1, *a2, 0) >> 32;
    v8 = v18;
    v6 = &(*a2)[v18 - 1];
  }
  v9 = *(unsigned __int8 **)(a1 + 120);
  *(_QWORD *)v35 = v6;
  v40 = &v34;
  if ( v6 == v9 )
    return 0;
  v10 = sub_2218990(*v6);
  if ( v10 > (__int64)&v9[-*(_QWORD *)v35] || (unsigned int)sub_2218E30(v35, v10 + *(_QWORD *)v35, &v40, v40 + 1, 0) )
    return 0;
  v12 = *(_BYTE **)(a1 + 136);
  v33 = 0;
  if ( sub_13D34C0(v34, v12, &v33) )
  {
    if ( !*(_BYTE *)(a1 + 26) )
    {
      v19 = v35[0];
      if ( v33 )
      {
        v29 = (__int64 (__fastcall **)())sub_13D08D0(a1, (int)v6, v35[0]);
        v37 = v30;
        v31 = v30;
        v32 = *(_QWORD *)(a1 + 8);
        v36 = v29;
        sub_13D0970(*(_QWORD *)(v32 + 48), v34, v29, v31);
        v19 = v35[0];
      }
      v20 = sub_13D08D0(a1, (int)v6, v19);
      v22 = v21;
      v39 = v21;
      v23 = *(_QWORD *)(a1 + 8);
      v38 = v20;
      sub_13D3040(*(_QWORD *)(v23 + 48), v34, v20, v22, 0, v24);
      v25 = sub_13D08D0(a1, (int)v6, v35[0]);
      v41 = v26;
      v27 = v26;
      v28 = *(_QWORD *)(a1 + 8);
      v40 = (unsigned int *)v25;
      sub_13D0D30(*(_QWORD *)(v28 + 48), v34, v25, v27);
    }
    goto LABEL_14;
  }
  if ( v34 <= 0x7F )
    return 0;
  LODWORD(v40) = v34;
  if ( sub_13D2FE0(&byte_2611808[-72], byte_2611808, &v40) )
    return 0;
  if ( !*(_BYTE *)(a1 + 26) && !*(_BYTE *)(a1 + 24) && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 545LL) & 2) == 0 )
  {
    v13 = sub_13D08D0(a1, (int)v6, v35[0]);
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_BYTE **)(a1 + 136);
    v35[5] = v16;
    v17 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)&v35[3] = v13;
    sub_13D5670(v17, v15, v34, v13, v16, 0);
  }
LABEL_14:
  if ( v8 != 1 )
    sub_13D1690(a1, *a2, a3);
  *a2 = *(unsigned __int8 **)v35;
  return 1;
}
