void __fastcall sub_19D6D30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 *v17; // r15
  bool v18; // zf
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 *i; // rax
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // rax
  _QWORD *v39; // rax
  unsigned int v41; // [rsp+10h] [rbp-D8h] BYREF
  int v42; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v43; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v44[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v46; // [rsp+40h] [rbp-A8h] BYREF
  char v47; // [rsp+98h] [rbp-50h]
  unsigned int v48; // [rsp+A0h] [rbp-48h]
  char v49; // [rsp+A4h] [rbp-44h]

  v41 = 0;
  if ( (unsigned int)sub_FDF4D0(a3) == 1 )
  {
    v41 = 0;
    v24 = 0;
LABEL_22:
    if ( a5 > (unsigned int)v24 )
    {
      v25 = *(_QWORD *)(a4 + 8 * v24);
      v26 = sub_BFBAE0(v25);
      if ( (*(_WORD *)v26 & 0x1FF) == 0x1D )
      {
        v27 = *(_QWORD *)(v26 + 16);
        if ( (unsigned __int8)sub_16C5960(a1, v27) )
        {
          v31 = sub_C00A40(v25, v27, v28, v29, v30);
          sub_168B9F0((__int64)v44, (__int64 *)(a1 + 8), v31, 0x1C07u, 0);
          if ( v47 )
          {
            sub_AE9DF0(&v46, (__int64)"%s", 1u);
          }
          else if ( v49 )
          {
            v37 = sub_168B9E0(v44);
            v38 = v45;
            if ( v45 )
              v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 32LL))(v45);
            v43 = v38;
            v39 = sub_1587BC0(v37, &v43, v33, v34, v35, v36);
            sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * v48 + 8), (__int64)"%s", 1u);
          }
          v42 = 0;
          v32 = sub_1587D10((__int64)v44, &v42);
          LODWORD(v43) = 0;
          sub_1587D10(v32, (int *)&v43);
          sub_15F7200(v44);
          if ( a2 )
          {
            sub_168B9F0((__int64)v44, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x17CAu, 0);
            v43 = *(_QWORD *)(a2 + 40);
            sub_15894B0((__int64)v44, &v43);
            sub_15F7200(v44);
          }
        }
      }
    }
  }
  else if ( a2 && (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v11 = sub_B8C3D0(a2, a2, v7, v8, v9, v10);
    v15 = *((unsigned int *)v11 + 2);
    v16 = *v11 + 8 * v15;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v17 = (__int64 *)*sub_B8C3D0(a2, a2, v15, v12, v13, v14);
    else
      v17 = nullptr;
    v18 = v17 == (__int64 *)v16;
    if ( (unsigned __int64)v17 >= v16 )
      goto LABEL_15;
LABEL_7:
    v19 = v17;
    while ( *(_WORD *)(*v19 + 36) != 217 )
    {
      if ( (__int64 *)v16 == ++v19 )
        return;
    }
    do
    {
LABEL_11:
      v20 = *v17;
      for ( i = v17 + 1; *(_WORD *)(v20 + 36) != 217; ++i )
      {
        v20 = *i;
        v17 = i;
      }
      if ( (unsigned __int8)sub_1A86BC0(*(_QWORD *)(a1 + 736), v20, &v41) )
      {
        v24 = v41;
        goto LABEL_22;
      }
      v18 = ++v17 == (__int64 *)v16;
      if ( (unsigned __int64)v17 < v16 )
        goto LABEL_7;
LABEL_15:
      if ( v18 )
        return;
    }
    while ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 217 );
    v22 = (__int64 *)(v16 + 8);
    while ( v22 != v17 )
    {
      v23 = *v22++;
      if ( *(_WORD *)(v23 + 36) == 217 )
        goto LABEL_11;
    }
  }
}
