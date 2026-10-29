__int64 __fastcall sub_1984E30(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned __int64 v7; // rax
  _DWORD *v8; // rdi
  __int64 v9; // r15
  int v10; // r14d
  unsigned __int16 *v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int16 *v15; // rsi
  unsigned __int64 v16; // rax
  _DWORD *v17; // r11
  unsigned __int64 v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v26; // [rsp+10h] [rbp-88h]
  int v27; // [rsp+10h] [rbp-88h]
  int v28; // [rsp+10h] [rbp-88h]
  int v29; // [rsp+18h] [rbp-80h]
  _DWORD *v30; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+28h] [rbp-70h]
  int v32; // [rsp+28h] [rbp-70h]
  int v33; // [rsp+2Ch] [rbp-6Ch]

  v5 = a2;
  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v7 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 32), a3, a4);
    LODWORD(v6) = v7 & 0xFFFFFFFE;
    if ( v7 == 1 )
      return 1;
  }
  v8 = *(_DWORD **)(a2 + 40);
  if ( !v8 || (*v8 & 0x4000) == 0 )
    v8 = *(_DWORD **)(a2 + 48);
  sub_1E4CA90(v8);
  v9 = *a1;
  v10 = *(_DWORD *)(*a1 + 12632);
  v25 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(*a1 + 12632) = 0;
  v11 = *(unsigned __int16 **)(a2 + 40);
  if ( !v11 )
  {
    v15 = *(unsigned __int16 **)(v5 + 48);
    v13 = 0;
    if ( !v15 )
      goto LABEL_8;
    goto LABEL_12;
  }
  v12 = sub_190CCA0(a1, v11, a3, a4);
  v13 = v12;
  if ( v12 != 1 )
  {
    v15 = *(unsigned __int16 **)(v5 + 48);
    if ( !v15 )
    {
      v17 = *(_DWORD **)(v5 + 40);
      v19 = v12 & 0xFFFFFFFE;
      if ( (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL) == v17 )
        goto LABEL_8;
      goto LABEL_15;
    }
LABEL_12:
    v26 = v13;
    v16 = sub_190CCA0(a1, v15, a3, a4);
    if ( v16 == 1 )
      goto LABEL_7;
    v17 = *(_DWORD **)(v5 + 40);
    v18 = v16 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v26 & 0xFFFFFFFE;
    v15 = (unsigned __int16 *)v18;
    if ( (_DWORD *)(v26 & 0xFFFFFFFFFFFFFFFELL) == v17 && *(_QWORD *)(v5 + 48) == v18 )
      goto LABEL_8;
LABEL_15:
    v20 = *(_DWORD *)(v5 + 24);
    v21 = *(_DWORD *)(v5 + 20);
    if ( !v20 )
    {
      if ( !v17 || (v20 = *(_DWORD *)(v5 + 20), (*v17 & 0x4000) == 0) )
      {
        v31 = *(_DWORD *)(v5 + 20);
        v30 = v17;
        v27 = v19;
        v22 = sub_EEC140(*(_QWORD *)(v5 + 48));
        v21 = v31;
        v17 = v30;
        v19 = v27;
        v20 = v22;
      }
    }
    v23 = *(_DWORD *)(v5 + 16);
    v24 = *(_DWORD *)(v5 + 4);
    if ( !v23 )
    {
      v23 = v21;
      if ( v17 )
      {
        if ( (*v17 & 0x4000) != 0 )
        {
          v33 = v21;
          v32 = *(_DWORD *)(v5 + 4);
          v29 = v19;
          v28 = v20;
          v23 = sub_EEB7E0((unsigned __int64)v17, (__int64)v15, a3);
          v21 = v33;
          v24 = v32;
          v19 = v29;
          v20 = v28;
        }
      }
    }
    v5 = sub_1E4D400(*a1, v6, v23, v19, v24, v21, (__int64)v15, v20, v25);
    goto LABEL_8;
  }
LABEL_7:
  v5 = 1;
LABEL_8:
  *(_DWORD *)(v9 + 12632) = v10;
  return v5;
}
