__int64 __fastcall sub_195DBD0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // rdi
  __int64 v9; // r15
  int v10; // r14d
  unsigned __int16 *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned __int16 *v15; // rsi
  __int64 v16; // rax
  int v17; // r11d
  int v18; // r9d
  _DWORD *v19; // rax
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  int v23; // ecx
  _DWORD *v24; // rdi
  int v25; // eax
  int v26; // [rsp+Ch] [rbp-8Ch]
  int v27; // [rsp+10h] [rbp-88h]
  int v28; // [rsp+10h] [rbp-88h]
  int v29; // [rsp+18h] [rbp-80h]
  int v30; // [rsp+18h] [rbp-80h]
  int v31; // [rsp+20h] [rbp-78h]
  int v32; // [rsp+28h] [rbp-70h]
  int v33; // [rsp+2Ch] [rbp-6Ch]

  v6 = *(_QWORD *)(a2 + 32);
  if ( v6 )
  {
    v7 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 32), a3, a4);
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
  v26 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(*a1 + 12632) = 0;
  v11 = *(unsigned __int16 **)(a2 + 40);
  if ( !v11 )
  {
    LODWORD(v12) = 0;
LABEL_12:
    v15 = *(unsigned __int16 **)(a2 + 48);
    if ( v15 )
    {
      v27 = v12;
      v16 = sub_1944E10(a1, v15, a3, a4);
      LODWORD(v12) = v27;
      if ( v16 == 1 )
        goto LABEL_7;
      v15 = (unsigned __int16 *)(v16 & 0xFFFFFFFFFFFFFFFELL);
    }
    v17 = *(_DWORD *)(a2 + 24);
    v18 = *(_DWORD *)(a2 + 20);
    if ( !v17 )
    {
      v19 = *(_DWORD **)(a2 + 40);
      if ( !v19 || (v17 = *(_DWORD *)(a2 + 20), (*v19 & 0x4000) == 0) )
      {
        v31 = *(_DWORD *)(a2 + 20);
        v29 = v12;
        v20 = sub_EEC140(*(_QWORD *)(a2 + 48));
        v18 = v31;
        LODWORD(v12) = v29;
        v17 = v20;
      }
    }
    v21 = *(_DWORD *)(a2 + 16);
    v22 = *(_DWORD *)(a2 + 4);
    v23 = v12 & 0xFFFFFFFE;
    if ( !v21 )
    {
      v24 = *(_DWORD **)(a2 + 40);
      v21 = v18;
      if ( v24 )
      {
        if ( (*v24 & 0x4000) != 0 )
        {
          v33 = v18;
          v32 = *(_DWORD *)(a2 + 4);
          v30 = v23;
          v28 = v17;
          v25 = sub_EEB7E0((unsigned __int64)v24, (__int64)v15, *(double *)a3.m128_u64);
          v18 = v33;
          v22 = v32;
          v23 = v30;
          v21 = v25;
          v17 = v28;
        }
      }
    }
    v13 = sub_1E4D400(*a1, v6, v21, v23, v22, v18, (__int64)v15, v17, v26);
    goto LABEL_8;
  }
  v12 = sub_1944E10(a1, v11, a3, a4);
  if ( v12 != 1 )
    goto LABEL_12;
LABEL_7:
  v13 = 1;
LABEL_8:
  *(_DWORD *)(v9 + 12632) = v10;
  return v13;
}
