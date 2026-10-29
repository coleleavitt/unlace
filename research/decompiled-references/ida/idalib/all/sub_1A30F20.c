void __fastcall sub_1A30F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rax
  __int64 v8; // r15
  int v9; // eax
  __int16 v10; // r14
  int v11; // edx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int *p_base; // r12
  int *v15; // r14
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  int v18; // edx
  _BOOL8 (__fastcall *v19)(__int64, int); // rax
  _BOOL4 v20; // eax
  __int64 *v21; // rdx
  int *v22; // rsi
  int *v23; // rax
  unsigned __int64 v24; // rdi
  int v25; // ecx
  int v26; // [rsp+0h] [rbp-68h]
  __int64 v27; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+0h] [rbp-68h]
  unsigned int v29; // [rsp+8h] [rbp-60h]
  int v30; // [rsp+Ch] [rbp-5Ch]
  int base; // [rsp+10h] [rbp-58h] BYREF
  int v32; // [rsp+14h] [rbp-54h] BYREF
  __int64 v33; // [rsp+18h] [rbp-50h] BYREF
  int v34; // [rsp+20h] [rbp-48h] BYREF
  int v35; // [rsp+24h] [rbp-44h]
  int v36; // [rsp+28h] [rbp-40h] BYREF
  int v37; // [rsp+2Ch] [rbp-3Ch] BYREF

  v29 = a2;
  v7 = (__int64 *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v7;
  if ( *(_BYTE *)(*v7 + 16) != 26 )
    v8 = sub_F63050(*v7, a2, a3, a4);
  v26 = sub_A64670(*(_QWORD *)(a1 + 248), (unsigned __int8)BYTE3(*(_QWORD *)(v8 + 16)) >> 7, 0, 0);
  v9 = sub_A64670(*(_QWORD *)(a1 + 248), (unsigned __int8)BYTE3(*(_QWORD *)(v8 + 16)) >> 7, 1, 0);
  v10 = v9;
  v11 = (*(_WORD *)(v8 + 20) >> 2) & 0x3F;
  if ( (**(_BYTE **)(a1 + 232) & 0x20) == 0 )
  {
    if ( v9 == v11 && v26 != v9 )
    {
      v12 = sub_1A2DFC0(a1, v8, v26);
      sub_1A301C0(a1, (unsigned int)a2, a3, a4, v12);
      LOWORD(v11) = v10;
    }
    v13 = sub_1A2DFC0(a1, v8, v11);
    sub_1A301C0(a1, (unsigned int)a2, a3, a4, v13);
    return;
  }
  p_base = &base;
  v36 = (*(_WORD *)(v8 + 20) >> 2) & 0x3F;
  v33 = 0x400000002LL;
  base = 0;
  v32 = 1;
  v34 = v26;
  v35 = v9;
  qsort(&base, 7u, 4u, (__compar_fn_t)sub_1A2C730);
  if ( base == v32 )
  {
    v21 = (__int64 *)&base;
LABEL_23:
    v22 = (int *)v21 + 1;
    v23 = (int *)(v21 + 1);
    v24 = (unsigned __int64)v21 + 4 * ((unsigned __int64)((char *)&v34 - (char *)v21) >> 2) + 12;
    while ( 1 )
    {
      v25 = *v23;
      if ( *(_DWORD *)v21 == *v23 )
      {
        ++v23;
        v15 = (int *)v21 + 1;
        if ( v23 == (int *)v24 )
          goto LABEL_29;
      }
      else
      {
        ++v23;
        *((_DWORD *)v21 + 1) = v25;
        v15 = v22 + 1;
        if ( v23 == (int *)v24 )
          goto LABEL_29;
        v21 = (__int64 *)v22;
      }
      v22 = v15;
    }
  }
  if ( v32 == (_DWORD)v33 )
  {
    v21 = (__int64 *)&v32;
    goto LABEL_23;
  }
  if ( (_DWORD)v33 == HIDWORD(v33) )
  {
    v21 = &v33;
    goto LABEL_23;
  }
  if ( v34 == HIDWORD(v33) )
  {
    v21 = (__int64 *)((char *)&v33 + 4);
    goto LABEL_23;
  }
  if ( v34 == v35 )
  {
    v21 = (__int64 *)&v34;
    goto LABEL_23;
  }
  if ( v36 != v35 )
  {
    v15 = &v37;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
    goto LABEL_19;
  }
  v15 = &v36;
LABEL_29:
  if ( v15 != &base )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL);
LABEL_19:
    while ( 1 )
    {
      v18 = *p_base;
      v19 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v16 + 760LL);
      if ( v19 != sub_102BB30 )
        break;
      if ( !v18 )
        goto LABEL_17;
LABEL_18:
      if ( v15 == ++p_base )
        return;
    }
    v30 = *p_base;
    v28 = v16;
    v20 = v19(v16, v18);
    v16 = v28;
    LOWORD(v18) = v30;
    if ( v20 )
      goto LABEL_18;
LABEL_17:
    v27 = v16;
    v17 = sub_1A2DFC0(a1, v8, v18);
    sub_1A301C0(a1, v29, a3, a4, v17);
    v16 = v27;
    goto LABEL_18;
  }
}
