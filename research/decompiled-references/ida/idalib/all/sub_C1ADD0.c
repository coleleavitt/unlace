__int64 __fastcall sub_C1ADD0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // r12
  unsigned __int64 v6; // rax
  unsigned __int8 **v7; // r15
  __int64 v8; // rcx
  _BYTE *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r15
  _QWORD *v18; // rcx
  __int64 v19; // r9
  int v20; // edx
  unsigned __int8 **v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int8 **v24; // r14
  _QWORD *v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int8 **v29; // r14
  __int64 v30; // rcx
  _BYTE *v31; // rsi
  bool v32; // al
  __int64 v33; // [rsp+0h] [rbp-A8h]
  __int64 v34; // [rsp+0h] [rbp-A8h]
  __int64 v35; // [rsp+8h] [rbp-A0h]
  __int64 v36; // [rsp+8h] [rbp-A0h]
  void *v37; // [rsp+10h] [rbp-98h] BYREF
  signed __int64 v38; // [rsp+18h] [rbp-90h]
  _BYTE v39[16]; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v40; // [rsp+30h] [rbp-78h] BYREF
  char v41; // [rsp+34h] [rbp-74h]

  v6 = *(_QWORD *)a3;
  if ( !*(_QWORD *)a3 || (*(_QWORD *)a3 & 3LL) != 3 || (v14 = v6 >> 3, !(unsigned int)(v6 >> 3)) )
  {
    v7 = (unsigned __int8 **)sub_E33C10(a1, a2, 2400, 0);
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 19056LL);
    v35 = *(_QWORD *)(a1 + 16);
    v41 &= ~1u;
    v33 = v8;
    v40 = 0;
    sub_C0F890(a3, (__int64)&v40);
    sub_A53AF0((__int64)&v37, &v40, v35, v33);
    if ( v40 > 1 )
    {
      sub_A4F8E0((int *)&v40);
      v9 = v37;
      if ( !v7 )
        goto LABEL_6;
    }
    else
    {
      v9 = v37;
      if ( !v7 )
      {
LABEL_6:
        if ( v9 != v39 )
          operator delete(v9);
        if ( sub_A4F700((_QWORD *)a3) )
          sub_C11AA0(a1, *(_QWORD *)a3, *(_QWORD *)(a3 + 8), v10, v11);
        return v4;
      }
    }
    sub_AEC220(v7, v9, v38);
    v9 = v37;
    goto LABEL_6;
  }
  v15 = *(_QWORD *)(a1 + 864);
  if ( !v15 )
    goto LABEL_21;
  v16 = v14 - 1;
  v17 = a1 + 856;
  do
  {
    while ( *(_DWORD *)(v15 + 32) - 1 >= v16 )
    {
      v17 = v15;
      v15 = *(_QWORD *)(v15 + 16);
      if ( !v15 )
        goto LABEL_19;
    }
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v15 );
LABEL_19:
  if ( a1 + 856 == v17 || *(_DWORD *)(v17 + 32) - 1 > v16 )
  {
LABEL_21:
    sub_E33C10(a1, a2, 2405, 0);
    return v4;
  }
  v18 = *(_QWORD **)(v17 + 96);
  v19 = v17 + 40;
  v20 = 2;
  if ( (*(_WORD *)v18 & 0x1FF) == 0x6A )
    v20 = (*v18 & 0x100000) != 0;
  if ( v20 != a4 )
  {
    v36 = sub_A4F520(a3);
    v21 = (unsigned __int8 **)sub_E33C10(a1, a2, 2446, 0);
    v24 = v21;
    if ( v21 )
    {
      sub_C11320(v21, a4);
      v25 = *(_QWORD **)(v17 + 96);
      if ( (*(_WORD *)v25 & 0x1FF) == 0x6A )
        v26 = (*v25 & 0x100000) != 0;
      else
        v26 = 2;
      sub_C11320(v24, v26);
      sub_AE9DF0(v24, v36, 8u);
    }
    sub_C11AA0(a1, *(_QWORD *)a3, *(_QWORD *)(a3 + 8), v22, v23);
    return v4;
  }
  if ( v20 )
  {
    if ( *(_DWORD *)(a3 + 56) == 1 && !**(_QWORD **)(a3 + 48) )
      return v19;
  }
  else if ( (*(_DWORD *)(a3 + 24) & 0xFFFFFFF0) == 0 && !sub_C105C0(a3 + 24) )
  {
    return v19;
  }
  v27 = sub_E33C10(a1, a2, 2401, 0);
  v28 = *(_QWORD *)(a1 + 16);
  v29 = (unsigned __int8 **)v27;
  v30 = *(_QWORD *)(v28 + 19056);
  v41 &= ~1u;
  v40 = 0;
  v34 = v30;
  sub_C0F890(a3, (__int64)&v40);
  sub_A53AF0((__int64)&v37, &v40, v28, v34);
  if ( v40 > 1 )
    sub_A4F8E0((int *)&v40);
  v31 = v37;
  if ( v29 )
  {
    sub_AEC220(v29, v37, v38);
    v32 = sub_C105C0(a3 + 24);
    sub_C11320(v29, v32);
    v31 = v37;
  }
  if ( v31 != v39 )
    operator delete(v31);
  return v4;
}
