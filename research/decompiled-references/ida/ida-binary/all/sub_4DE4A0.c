char __fastcall sub_4DE4A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rbp
  _QWORD *v6; // r12
  int v7; // eax
  int v8; // esi
  __int64 v9; // rdi
  int v10; // eax
  const char *v11; // rdx
  const char *v12; // rbp
  const char *v13; // rdx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  int v23; // ebp
  int v24; // eax
  bool v25; // zf
  bool v26; // sf
  bool v27; // of
  bool v28; // cc
  int v29; // eax
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rdi
  __int64 v32; // rsi
  unsigned int v33; // ebp
  unsigned int v34; // eax
  int v35; // edx
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rbp
  __int64 v40; // rax

  v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)a1[1] + 48LL))(a1[1], *a1, a2);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)a1[1] + 48LL))(a1[1], *a1, a3);
  LOBYTE(v7) = v6 == nullptr || v5 == nullptr;
  if ( (_BYTE)v7 )
  {
    LOBYTE(v7) = 0;
    return v7;
  }
  v8 = *((_DWORD *)a1 + 4);
  if ( v8 >= 0 && (unsigned __int64)v8 < v5[1] && (unsigned __int64)v8 < v6[1] )
  {
    v9 = *a1;
    v10 = *((_DWORD *)a1 + 5) & 0x70000;
    if ( v10 != 196608 )
    {
      if ( v10 == 0x40000 )
      {
        v36 = sub_4D8CF0(v5, *a1, v8);
        v37 = sub_4D8CF0(v6, *a1, *((int *)a1 + 4));
        v35 = -1;
        if ( v36 < v37 )
          goto LABEL_23;
        goto LABEL_26;
      }
      if ( v10 != 0x20000 )
      {
        sub_4D89F0(v9, *(_DWORD *)(*v5 + 24LL * v8), 0);
        v12 = v11;
        sub_4D89F0(*a1, *(_DWORD *)(*v6 + 24LL * *((int *)a1 + 4)), 0);
        if ( *((_BYTE *)a1 + 24) )
          v14 = strcmp(v13, v12);
        else
          v14 = strcmp(v12, v13);
        return v14 >> 31;
      }
      v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 368) + 296LL))(*(_QWORD *)(v9 + 368));
      v30 = *((int *)a1 + 4);
      v31 = v5;
      v32 = *a1;
      if ( (v29 & 0x10000000) != 0 )
        goto LABEL_21;
      v36 = sub_4D8BD0(v5, v32, v30);
      v37 = sub_4D8BD0(v6, *a1, *((int *)a1 + 4));
      v35 = -1;
      if ( v36 >= v37 )
LABEL_26:
        v35 = v37 < v36;
LABEL_23:
      if ( *((_BYTE *)a1 + 24) )
        LOBYTE(v7) = v35 == 1;
      else
        LOBYTE(v7) = v35 == -1;
      return v7;
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 368) + 296LL))(*(_QWORD *)(v9 + 368));
    v16 = *((unsigned int *)a1 + 4);
    v17 = v15 & 0x20000000;
    v18 = *(_QWORD *)(*a1 + 368LL);
    v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 296LL);
    if ( !(_DWORD)v17 )
    {
      v38 = v19(v18, v16);
      v30 = *((int *)a1 + 4);
      v31 = v5;
      v32 = *a1;
      if ( (v38 & 0x10000000) != 0 )
      {
LABEL_21:
        v33 = sub_4D8C90(v31, v32, v30);
        v34 = sub_4D8C90(v6, *a1, *((int *)a1 + 4));
        v35 = -1;
        if ( v33 >= v34 )
          v35 = v34 < v33;
        goto LABEL_23;
      }
      v36 = sub_4D8D50(v5, v32, v30);
      v37 = sub_4D8D50(v6, *a1, *((int *)a1 + 4));
      v35 = -1;
      if ( v36 >= v37 )
        goto LABEL_26;
      goto LABEL_23;
    }
    v20 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v19)(v18, v16, v17);
    v21 = *((int *)a1 + 4);
    v22 = *a1;
    if ( (v20 & 0x10000000) != 0 )
    {
      v23 = sub_4D8C30(v5, v22, v21);
      v24 = sub_4D8C30(v6, *a1, *((int *)a1 + 4));
      v27 = __OFSUB__(v23, v24);
      v25 = v23 == v24;
      v26 = v23 - v24 < 0;
      v28 = v23 < v24;
    }
    else
    {
      v39 = sub_4D8D50(v5, v22, v21);
      v40 = sub_4D8D50(v6, *a1, *((int *)a1 + 4));
      v27 = __OFSUB__(v39, v40);
      v25 = v39 == v40;
      v26 = v39 - v40 < 0;
      v28 = v39 < v40;
    }
    v7 = !(v26 ^ v27 | v25);
    if ( v28 )
      v7 = -1;
    if ( *((_BYTE *)a1 + 24) )
      LOBYTE(v7) = v7 == 1;
    else
      LOBYTE(v7) = v7 == -1;
  }
  return v7;
}
