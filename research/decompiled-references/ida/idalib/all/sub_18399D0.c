__int64 __fastcall sub_18399D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned __int64 v18; // rdx
  _BYTE *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  _BYTE *v23; // rbp
  __int64 v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 *v30; // rdx
  __int64 *v31; // r14
  char v32; // al
  __int64 v33; // rax
  signed __int64 v34; // r14
  __int64 v35; // r15
  __int64 *v36; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  __int64 v38; // [rsp+18h] [rbp-80h]
  _BYTE v39[120]; // [rsp+20h] [rbp-78h] BYREF

  v8 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_QWORD *)(v8 + 8) & 7LL;
  v10 = v9 | (*(__int64 *)(v8 + 8) >> 3) & 1;
  if ( v10 )
    v8 = sub_F64F00(**(_QWORD **)(a2 + 16), a2, v9, v10, a5);
  v11 = sub_F60F10(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a2,
          v9,
          v10,
          a5,
          a6);
  v12 = *(_QWORD *)(a1 + 8);
  v38 = 0x800000000LL;
  v13 = *(_QWORD *)(v12 + 40);
  ptr = v39;
  v16 = sub_B94670((unsigned __int64)(v11 + 8), v13, (__int64)v39, 0x800000000LL, v14, v15);
  *(_QWORD *)(a3 + 120) = v16;
  if ( !v16 )
  {
    v23 = ptr;
    v17 = 0;
    goto LABEL_16;
  }
  v17 = 0;
  while ( 1 )
  {
    v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    v19 = (_BYTE *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v16 & 4) == 0 )
      break;
    v19 = nullptr;
    if ( v18 )
      v19 = *(_BYTE **)v18;
    if ( (v19[28] & 0x7Fu) - 35 > 3 )
      goto LABEL_13;
LABEL_9:
    v20 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v19 + 32LL))(v19);
    v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
    if ( (*(_QWORD *)(v21 + 80) & 0x40000LL) == 0
      && ((*(_QWORD *)(v21 + 80) >> 16) & 8) == 0
      && !(unsigned int)sub_B984E0(v21) )
    {
      goto LABEL_12;
    }
    if ( !(unsigned __int8)sub_1BDCB50(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), v20, 0, 1) )
    {
      v23 = ptr;
      v17 = 1;
      goto LABEL_16;
    }
    if ( (unsigned int)sub_B984E0(v20) )
    {
      v31 = (__int64 *)sub_B98510(v20);
      if ( v31 == v30 )
        goto LABEL_28;
      while ( 1 )
      {
        v36 = v30;
        v32 = sub_1838E40(*v31, a1 + 16);
        v30 = v36;
        if ( v32 )
          break;
        if ( v36 == ++v31 )
          goto LABEL_28;
      }
    }
    else
    {
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
      if ( !*(_BYTE *)(a1 + 36) )
      {
        if ( sub_2236570(a1 + 16, v25) )
          goto LABEL_12;
LABEL_28:
        v28 = (unsigned int)v38;
        v29 = (unsigned int)v38 + 1LL;
        if ( v29 > HIDWORD(v38) )
        {
          sub_2237220(&ptr, v39, v29, 8);
          v28 = (unsigned int)v38;
        }
        *((_QWORD *)ptr + v28) = v20;
        LODWORD(v38) = v38 + 1;
        goto LABEL_12;
      }
      v26 = *(_QWORD **)(a1 + 16);
      v27 = &v26[*(unsigned int *)(a1 + 28)];
      if ( v26 == v27 )
        goto LABEL_28;
      while ( v25 != *v26 )
      {
        if ( v27 == ++v26 )
          goto LABEL_28;
      }
    }
LABEL_12:
    v16 = *(_QWORD *)(a3 + 120);
    v17 = 1;
    if ( (v16 & 4) == 0 )
      goto LABEL_20;
LABEL_13:
    v22 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v22 )
      goto LABEL_20;
    v16 = *(_QWORD *)(v22 + 8);
    *(_QWORD *)(a3 + 120) = v16;
    if ( !v16 )
    {
      v23 = ptr;
      if ( !(_BYTE)v17 )
        goto LABEL_16;
      goto LABEL_37;
    }
  }
  if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 35 <= 3 )
    goto LABEL_9;
LABEL_20:
  *(_QWORD *)(a3 + 120) = 0;
  v23 = ptr;
  if ( !(_BYTE)v17 )
    goto LABEL_16;
LABEL_37:
  v33 = *(unsigned int *)(a1 + 112);
  v34 = 8LL * (unsigned int)v38;
  v35 = v34 >> 3;
  if ( (v34 >> 3) + v33 > (unsigned __int64)*(unsigned int *)(a1 + 116) )
  {
    sub_2237220(a1 + 104, a1 + 120, v35 + v33, 8);
    v33 = *(unsigned int *)(a1 + 112);
  }
  if ( v34 )
  {
    memcpy((void *)(*(_QWORD *)(a1 + 104) + 8 * v33), v23, v34);
    LODWORD(v33) = *(_DWORD *)(a1 + 112);
  }
  v23 = ptr;
  *(_DWORD *)(a1 + 112) = v35 + v33;
LABEL_16:
  if ( v23 != v39 )
    free(v23);
  return v17;
}
