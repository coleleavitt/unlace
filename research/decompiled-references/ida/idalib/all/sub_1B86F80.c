__int64 __fastcall sub_1B86F80(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
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
  __int64 v19; // rbx
  unsigned __int16 *v21; // rsi
  __int64 v22; // rax
  int v23; // r11d
  int v24; // r9d
  _DWORD *v25; // rax
  int v26; // eax
  int v27; // edx
  int v28; // r8d
  int v29; // ecx
  _DWORD *v30; // rdi
  int v31; // eax
  int v32; // [rsp+Ch] [rbp-8Ch]
  int v33; // [rsp+10h] [rbp-88h]
  int v34; // [rsp+10h] [rbp-88h]
  int v35; // [rsp+18h] [rbp-80h]
  int v36; // [rsp+18h] [rbp-80h]
  int v37; // [rsp+20h] [rbp-78h]
  int v38; // [rsp+28h] [rbp-70h]
  int v39; // [rsp+2Ch] [rbp-6Ch]

  v9 = *(_QWORD *)(a2 + 32);
  if ( v9 )
  {
    v10 = sub_1B7CAD0(a1, *(unsigned __int16 **)(a2 + 32), a6, a7, a3, a4, a5);
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
    v21 = *(unsigned __int16 **)(a2 + 48);
    if ( v21 )
    {
      v33 = v18;
      v22 = sub_1B7CAD0(a1, v21, a6, a7, v12, v18, v14);
      LODWORD(v18) = v33;
      if ( v22 == 1 )
        goto LABEL_7;
      v21 = (unsigned __int16 *)(v22 & 0xFFFFFFFFFFFFFFFELL);
    }
    v23 = *(_DWORD *)(a2 + 24);
    v24 = *(_DWORD *)(a2 + 20);
    if ( !v23 )
    {
      v25 = *(_DWORD **)(a2 + 40);
      if ( !v25 || (v23 = *(_DWORD *)(a2 + 20), (*v25 & 0x4000) == 0) )
      {
        v37 = *(_DWORD *)(a2 + 20);
        v35 = v18;
        v26 = sub_EEC140(*(_QWORD *)(a2 + 48));
        v24 = v37;
        LODWORD(v18) = v35;
        v23 = v26;
      }
    }
    v27 = *(_DWORD *)(a2 + 16);
    v28 = *(_DWORD *)(a2 + 4);
    v29 = v18 & 0xFFFFFFFE;
    if ( !v27 )
    {
      v30 = *(_DWORD **)(a2 + 40);
      v27 = v24;
      if ( v30 )
      {
        if ( (*v30 & 0x4000) != 0 )
        {
          v39 = v24;
          v38 = *(_DWORD *)(a2 + 4);
          v36 = v29;
          v34 = v23;
          v31 = sub_EEB7E0((unsigned __int64)v30, (__int64)v21, *(double *)a6.m128_u64);
          v24 = v39;
          v28 = v38;
          v29 = v36;
          v27 = v31;
          v23 = v34;
        }
      }
    }
    v19 = sub_1E4D400(*a1, v9, v27, v29, v28, v24, (__int64)v21, v23, v32);
    goto LABEL_8;
  }
  v18 = sub_1B7CAD0(a1, v17, a6, a7, v12, v13, v14);
  if ( v18 != 1 )
    goto LABEL_12;
LABEL_7:
  v19 = 1;
LABEL_8:
  *(_DWORD *)(v15 + 12632) = v16;
  return v19;
}
