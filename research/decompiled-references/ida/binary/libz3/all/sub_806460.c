__int64 __fastcall sub_806460(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  _QWORD *v6; // r13
  void *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // r14
  int v13; // eax
  char v14; // dl
  char v15; // al
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  void (__fastcall ***v23)(_QWORD); // rbp
  void *v25; // r14
  int v26; // eax
  char v27; // [rsp+7h] [rbp-61h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+10h] [rbp-58h] BYREF
  __int64 v30; // [rsp+18h] [rbp-50h]
  __int64 v31; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+28h] [rbp-40h]
  __int64 v33; // [rsp+30h] [rbp-38h] BYREF
  __int64 v34; // [rsp+38h] [rbp-30h]

  v6 = (_QWORD *)a2[47];
  ptr = nullptr;
  (*(void (__fastcall **)(_QWORD *, void **))(*v6 + 32LL))(v6, &ptr);
  v7 = ptr;
  if ( ptr )
  {
    v8 = v6[7];
    if ( v8 )
    {
      (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)v8 + 32LL))(v6[7], &ptr);
      v7 = ptr;
    }
  }
  v9 = a2[16];
  v10 = a2[35];
  v29 = 0;
  v30 = v9;
  if ( v10 )
  {
    v11 = *a3;
    if ( (unsigned int)v11 >= *(_DWORD *)(v10 - 4) )
    {
      v10 = 0;
    }
    else
    {
      v10 = *(_QWORD *)(v10 + 8 * v11);
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
    }
  }
  v29 = v10;
  v31 = 0;
  v32 = 0;
  v33 = 1;
  v34 = 0;
  if ( !(unsigned __int8)sub_1373520(v7, v10, &v29, 1) )
  {
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    v12 = qword_1C7F2C0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_QWORD *)(a1 + 24) = 0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    {
      sub_182C690(v12, a1, &qword_1C7F2A0);
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
        goto LABEL_11;
    }
    else
    {
      *(_DWORD *)a1 = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
      {
LABEL_11:
        v13 = qword_1C7F2B0;
        *(_BYTE *)(a1 + 20) &= ~1u;
        *(_DWORD *)(a1 + 16) = v13;
        goto LABEL_14;
      }
    }
    sub_182C690(v12, a1 + 16, &qword_1C7F2B0);
    goto LABEL_14;
  }
  if ( (unsigned __int8)sub_1666AE0(a2 + 20, v29, &v31, &v27) )
  {
    v14 = BYTE4(v31);
    *(_DWORD *)a1 = v31;
    v15 = v14 & 3 | *(_BYTE *)(a1 + 4) & 0xFC;
    v16 = BYTE4(v33);
    *(_BYTE *)(a1 + 4) = v15;
    v17 = v32;
    v32 = 0;
    *(_QWORD *)(a1 + 8) = v17;
    *(_DWORD *)(a1 + 16) = v33;
    *(_BYTE *)(a1 + 20) = v16 & 3 | *(_BYTE *)(a1 + 20) & 0xFC;
    v18 = v34;
    v34 = 0;
    *(_QWORD *)(a1 + 24) = v18;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 20) &= 0xFCu;
    v25 = qword_1C7F2C0;
    *(_DWORD *)(a1 + 16) = 1;
    *(_BYTE *)(a1 + 4) &= 0xFCu;
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 24) = 0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
      sub_182C690(v25, a1, &qword_1C7F2A0);
    else
      *(_DWORD *)a1 = qword_1C7F2A0;
    if ( (qword_1C7F2B0 & 0x100000000LL) != 0 )
    {
      sub_182C690(v25, a1 + 16, &qword_1C7F2B0);
    }
    else
    {
      v26 = qword_1C7F2B0;
      *(_BYTE *)(a1 + 20) &= ~1u;
      *(_DWORD *)(a1 + 16) = v26;
    }
  }
LABEL_14:
  v19 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  sub_182CBA0(v19, &v33);
  v20 = v29;
  if ( v29 )
  {
    v21 = v30;
    v22 = (*(_DWORD *)(v29 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v21, v20);
  }
  v23 = (void (__fastcall ***)(_QWORD))ptr;
  if ( !ptr )
    return a1;
  v22 = (*((_DWORD *)ptr + 4))-- == 1;
  if ( !v22 )
    return a1;
  (**v23)(v23);
  sub_186B220(v23);
  return a1;
}

