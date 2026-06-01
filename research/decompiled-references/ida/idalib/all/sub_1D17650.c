__int64 __fastcall sub_1D17650(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r15
  int v16; // r14d
  unsigned __int16 *v17; // rsi
  unsigned __int64 v18; // rcx
  unsigned __int16 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // rcx
  int v24; // r11d
  int v25; // r9d
  _DWORD *v26; // rax
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  _DWORD *v30; // rdi
  int v31; // eax
  int v32; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v33; // [rsp+10h] [rbp-88h]
  int v34; // [rsp+10h] [rbp-88h]
  int v35; // [rsp+18h] [rbp-80h]
  int v36; // [rsp+20h] [rbp-78h]
  int v37; // [rsp+28h] [rbp-70h]
  int v38; // [rsp+28h] [rbp-70h]
  int v39; // [rsp+2Ch] [rbp-6Ch]

  v8 = a2;
  v9 = *(_QWORD *)(a2 + 32);
  if ( v9 )
  {
    v10 = sub_1D11200(a1, *(unsigned __int16 **)(a2 + 32), a6, a7, a3, a4, a5);
    LODWORD(v9) = v10 & 0xFFFFFFFE;
    if ( v10 == 1 )
      return 1;
  }
  v11 = *(_DWORD **)(a2 + 40);
  if ( !v11 || (*v11 & 0x4000) == 0 )
    v11 = *(_DWORD **)(a2 + 48);
  sub_1E4CA90(v11);
  v15 = *a1;
  v16 = *(_DWORD *)(*a1 + 12632);
  v32 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(*a1 + 12632) = 0;
  v17 = *(unsigned __int16 **)(a2 + 40);
  if ( !v17 )
  {
    v18 = 0;
LABEL_12:
    v20 = *(unsigned __int16 **)(v8 + 48);
    if ( v20 )
    {
      v33 = v18;
      v21 = sub_1D11200(a1, v20, a6, a7, v12, v18, v14);
      v18 = v33;
      if ( v21 == 1 )
        goto LABEL_7;
      v20 = (unsigned __int16 *)(v21 & 0xFFFFFFFFFFFFFFFELL);
    }
    v22 = *a1;
    v23 = v18 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(v22 + 12632) || *(_QWORD *)(v8 + 40) != v23 || *(unsigned __int16 **)(v8 + 48) != v20 )
    {
      v24 = *(_DWORD *)(v8 + 24);
      v25 = *(_DWORD *)(v8 + 20);
      if ( !v24 )
      {
        v26 = *(_DWORD **)(v8 + 40);
        if ( !v26 || (v24 = *(_DWORD *)(v8 + 20), (*v26 & 0x4000) == 0) )
        {
          v37 = *(_DWORD *)(v8 + 20);
          v35 = v23;
          v27 = sub_EEC140(*(_QWORD *)(v8 + 48));
          v25 = v37;
          LODWORD(v23) = v35;
          v24 = v27;
        }
      }
      v28 = *(_DWORD *)(v8 + 16);
      v29 = *(_DWORD *)(v8 + 4);
      if ( !v28 )
      {
        v30 = *(_DWORD **)(v8 + 40);
        v28 = v25;
        if ( v30 )
        {
          if ( (*v30 & 0x4000) != 0 )
          {
            v39 = v25;
            v36 = v23;
            v38 = *(_DWORD *)(v8 + 4);
            v34 = v24;
            v31 = sub_EEB7E0((unsigned __int64)v30, (__int64)v20, *(double *)a6.m128_u64);
            v25 = v39;
            LODWORD(v23) = v36;
            v29 = v38;
            v28 = v31;
            v24 = v34;
          }
        }
      }
      v8 = sub_1E4D400(v22, v9, v28, v23, v29, v25, (__int64)v20, v24, v32);
    }
    goto LABEL_8;
  }
  v18 = sub_1D11200(a1, v17, a6, a7, v12, v13, v14);
  if ( v18 != 1 )
    goto LABEL_12;
LABEL_7:
  v8 = 1;
LABEL_8:
  *(_DWORD *)(v15 + 12632) = v16;
  return v8;
}
