__int64 __fastcall sub_9865A0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  void *v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rdi
  unsigned int v15; // ebp
  __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  unsigned int v18; // eax
  __int64 *v19; // r13
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  signed __int64 v27; // r10
  unsigned __int8 **v28; // rax
  unsigned __int8 **v29; // rbx
  __int64 v30; // rax
  __int64 v31; // r10
  _QWORD *v32; // rax
  __int64 v33; // rsi
  unsigned __int8 **v34; // rax
  unsigned __int8 **v35; // rbx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  _QWORD *v38; // rax
  unsigned int v39; // [rsp+4h] [rbp-A4h]
  unsigned __int8 v40; // [rsp+4h] [rbp-A4h]
  unsigned __int8 v41; // [rsp+4h] [rbp-A4h]
  char v42; // [rsp+Bh] [rbp-9Dh]
  unsigned int v43; // [rsp+Ch] [rbp-9Ch]
  _QWORD *v44; // [rsp+10h] [rbp-98h]
  __int64 v45; // [rsp+18h] [rbp-90h]
  __int64 v46; // [rsp+18h] [rbp-90h]
  unsigned __int8 v47; // [rsp+18h] [rbp-90h]
  __int64 v48; // [rsp+18h] [rbp-90h]
  unsigned int v49; // [rsp+20h] [rbp-88h]
  unsigned int v50; // [rsp+20h] [rbp-88h]
  void *v51; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v52; // [rsp+38h] [rbp-70h]

  v4 = *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3));
  if ( (*(_BYTE *)(v4 + 1) & 6) != 0 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
      return 0;
  }
  else
  {
    v6 = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(v4 + 8));
    if ( !BYTE4(v6) || (_DWORD)v6 != 13 )
      return 0;
  }
  v7 = sub_97DE10(a1, a2);
  v8 = sub_A1A5A0(*(_QWORD *)(a1 + 184), v7);
  v9 = *(__int64 **)(a1 + 192);
  v10 = v8;
  v11 = *(_QWORD *)(*(unsigned __int8 *)(a2 + 3) + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8);
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    v50 = sub_985340(v9, v11);
    sub_97E960((__int64)&v51, *(_QWORD *)(a1 + 184), v50, 0);
    v42 = 0;
    v43 = 0;
    v19 = (__int64 *)v51;
    v39 = v52;
    v44 = nullptr;
  }
  else
  {
    v12 = (void *)sub_985340(v9, v11);
    v13 = *(unsigned __int8 *)(a2 + 3);
    v14 = *(__int64 **)(a1 + 192);
    v15 = (unsigned int)v12;
    v51 = v12;
    v51 = (void *)sub_985340(v14, *(_QWORD *)(v13 + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 16));
    v16 = sub_A24BE0(v15);
    v17 = ((sub_A24BE0((unsigned int)v51) + 7) & 0xFFFFFFFFFFFFFFF8LL) + ((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v18 = sub_985340(
            *(__int64 **)(a1 + 192),
            *(_QWORD *)(*(unsigned __int8 *)(a2 + 3) + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 8));
    sub_97E960((__int64)&v51, *(_QWORD *)(a1 + 184), v18, v17);
    v19 = (__int64 *)v51;
    v39 = v52;
    v49 = sub_985340(
            *(__int64 **)(a1 + 192),
            *(_QWORD *)(*(unsigned __int8 *)(a2 + 3) + a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + 16));
    sub_97E960((__int64)&v51, *(_QWORD *)(a1 + 184), v49, 0);
    v42 = 1;
    v43 = v52;
    v44 = v51;
  }
  v20 = (__int64)v19;
  if ( v39 > 0x40 )
    v20 = *v19;
  if ( *(_DWORD *)(v10 + 48) )
  {
LABEL_20:
    v30 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_A1E120(&v51, v10, v30);
    v31 = *(_QWORD *)sub_6A34F0((__int64)&v51);
    if ( v42 )
    {
      v32 = v44;
      if ( v43 > 0x40 )
        v32 = (_QWORD *)*v44;
      v31 -= (__int64)v32;
    }
    if ( v31 == v20 * ((v31 != 0) + (v31 - (unsigned __int64)(v31 != 0)) / v20) )
    {
      v36 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
      sub_A1BFE0(v36, v10);
      result = 1;
LABEL_30:
      if ( (unsigned int)v51 > 1 )
      {
        v47 = result;
        sub_69F740((__int64)&v51);
        result = v47;
      }
      goto LABEL_32;
    }
    v46 = v31;
    v33 = *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3));
    if ( *(_DWORD *)(v10 + 48) )
    {
      v35 = (unsigned __int8 **)sub_A2E240(a1, v33, 2182, 0);
      if ( !v35 )
        goto LABEL_29;
    }
    else
    {
      v34 = (unsigned __int8 **)sub_A2E240(a1, v33, 2181, 0);
      v35 = v34;
      if ( !v34 )
      {
LABEL_29:
        result = 0;
        goto LABEL_30;
      }
      sub_8356A0(v34, 1, 2u);
    }
    sub_8356A0(v35, v46, 2u);
    sub_8356A0(v35, v20, 2u);
    goto LABEL_29;
  }
  v21 = **(_QWORD **)(*(_QWORD *)(v10 + 24) + 32LL);
  v22 = v21 >> 1;
  if ( (v21 & 2) == 0 )
  {
    v23 = v21 & 0xFFFFFFFFFFFFFFFCLL;
    v24 = v23;
    v25 = v23;
    if ( !v23 )
      goto LABEL_48;
    if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 24 <= 0x1A )
    {
      v26 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, unsigned __int64))(**(_QWORD **)(a1 + 24) + 104LL))(
                        *(_QWORD *)(a1 + 24),
                        v23,
                        v22,
                        v23);
      v27 = sub_70E4E0(v26, v24, 0);
      goto LABEL_16;
    }
    if ( (v22 & 1) == 0 )
    {
LABEL_48:
      v27 = 0;
      goto LABEL_16;
    }
LABEL_46:
    v48 = v25;
    v38 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v27 = sub_844DE0(v38, v48, 2);
    goto LABEL_16;
  }
  v27 = 0;
  if ( (v22 & 1) != 0 )
  {
    v37 = v21 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v37 )
    {
      v25 = v37;
      goto LABEL_46;
    }
  }
LABEL_16:
  if ( v20 <= v27 )
    goto LABEL_20;
  v45 = v27;
  v28 = (unsigned __int8 **)sub_A2E240(
                              a1,
                              *(_QWORD *)(a2 + 8LL * ((*(_BYTE *)(a2 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(a2 + 3)),
                              2181,
                              0);
  v29 = v28;
  if ( v28 )
  {
    sub_8356A0(v28, 0, 2u);
    sub_8356A0(v29, v45, 2u);
    sub_8356A0(v29, v20, 2u);
  }
  result = 0;
LABEL_32:
  if ( v39 > 0x40 && v19 )
  {
    v40 = result;
    operator delete[](v19);
    result = v40;
  }
  if ( v42 && v43 > 0x40 )
  {
    if ( v44 )
    {
      v41 = result;
      operator delete[](v44);
      return v41;
    }
  }
  return result;
}

