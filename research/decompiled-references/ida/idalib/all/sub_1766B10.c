__int64 __fastcall sub_1766B10(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // rdi
  __int64 v8; // r15
  int v9; // r14d
  unsigned __int16 *v10; // rsi
  __int64 v11; // rcx
  unsigned __int16 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // rcx
  int v17; // r11d
  int v18; // r9d
  _DWORD *v19; // rax
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  _DWORD *v23; // rdi
  int v24; // eax
  int v25; // [rsp+Ch] [rbp-8Ch]
  __int64 v26; // [rsp+10h] [rbp-88h]
  int v27; // [rsp+10h] [rbp-88h]
  int v28; // [rsp+18h] [rbp-80h]
  int v29; // [rsp+20h] [rbp-78h]
  int v30; // [rsp+28h] [rbp-70h]
  int v31; // [rsp+28h] [rbp-70h]
  int v32; // [rsp+2Ch] [rbp-6Ch]

  v4 = a2;
  v5 = *(_QWORD *)(a2 + 32);
  if ( v5 )
  {
    v6 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 32));
    LODWORD(v5) = v6 & 0xFFFFFFFE;
    if ( v6 == 1 )
      return 1;
  }
  v7 = *(_DWORD **)(a2 + 40);
  if ( !v7 || (*v7 & 0x4000) == 0 )
    v7 = *(_DWORD **)(a2 + 48);
  sub_1E4CA90(v7);
  v8 = *a1;
  v9 = *(_DWORD *)(*a1 + 12632);
  v25 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(*a1 + 12632) = 0;
  v10 = *(unsigned __int16 **)(a2 + 40);
  if ( !v10 )
  {
    v11 = 0;
LABEL_12:
    v13 = *(unsigned __int16 **)(v4 + 48);
    if ( v13 )
    {
      v26 = v11;
      v14 = sub_175B800(a1, v13);
      v11 = v26;
      if ( v14 == 1 )
        goto LABEL_7;
      v13 = (unsigned __int16 *)(v14 & 0xFFFFFFFFFFFFFFFELL);
    }
    v15 = *a1;
    v16 = v11 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(v15 + 12632) || *(_QWORD *)(v4 + 40) != v16 || *(unsigned __int16 **)(v4 + 48) != v13 )
    {
      v17 = *(_DWORD *)(v4 + 24);
      v18 = *(_DWORD *)(v4 + 20);
      if ( !v17 )
      {
        v19 = *(_DWORD **)(v4 + 40);
        if ( !v19 || (v17 = *(_DWORD *)(v4 + 20), (*v19 & 0x4000) == 0) )
        {
          v30 = *(_DWORD *)(v4 + 20);
          v28 = v16;
          v20 = sub_EEC140(*(_QWORD *)(v4 + 48));
          v18 = v30;
          LODWORD(v16) = v28;
          v17 = v20;
        }
      }
      v21 = *(_DWORD *)(v4 + 16);
      v22 = *(_DWORD *)(v4 + 4);
      if ( !v21 )
      {
        v23 = *(_DWORD **)(v4 + 40);
        v21 = v18;
        if ( v23 )
        {
          if ( (*v23 & 0x4000) != 0 )
          {
            v32 = v18;
            v29 = v16;
            v31 = *(_DWORD *)(v4 + 4);
            v27 = v17;
            v24 = sub_EEB7E0((unsigned __int64)v23, (__int64)v13, a3);
            v18 = v32;
            LODWORD(v16) = v29;
            v22 = v31;
            v21 = v24;
            v17 = v27;
          }
        }
      }
      v4 = sub_1E4D400(v15, v5, v21, v16, v22, v18, (__int64)v13, v17, v25);
    }
    goto LABEL_8;
  }
  v11 = sub_175B800(a1, v10);
  if ( v11 != 1 )
    goto LABEL_12;
LABEL_7:
  v4 = 1;
LABEL_8:
  *(_DWORD *)(v8 + 12632) = v9;
  return v4;
}
