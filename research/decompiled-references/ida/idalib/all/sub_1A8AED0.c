void __fastcall sub_1A8AED0(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int16 v14; // dx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // r12
  __int64 *v25; // r14
  bool v26; // zf
  __int64 *v27; // rax
  __int64 v28; // r15
  __int64 *i; // rax
  __int64 *v30; // rax
  __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v33; // rax
  int v34; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v35; // [rsp+18h] [rbp-D0h] BYREF
  _DWORD v36[8]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned __int8 *v37; // [rsp+40h] [rbp-A8h] BYREF
  char v38; // [rsp+98h] [rbp-50h]
  char v39; // [rsp+A4h] [rbp-44h]

  v7 = sub_B72B60(a2);
  if ( v7 == 2 )
  {
LABEL_2:
    if ( a4 <= v7 )
      return;
    v12 = *(_QWORD *)(a3 + 8LL * v7);
    if ( (*(_WORD *)v12 & 0x1FF) == 0x57 )
      v12 = *(_QWORD *)(v12 + 16);
    v13 = sub_BFBAE0(v12);
    v14 = *(_WORD *)v13 & 0x1FF;
    if ( v14 == 29 )
    {
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v13 )
        return;
    }
    else if ( v14 != 9 )
    {
      return;
    }
    v15 = v13;
    if ( (unsigned __int8)sub_16C5960(*a1, v13) )
    {
      v32 = sub_C00A40(v12, v15, v16, v17, v18);
      sub_168B9F0((__int64)v36, a1, v32, 0x1C07u, 0);
      if ( v38 )
      {
        sub_AE9DF0(&v37, (__int64)"%s", 1u);
      }
      else if ( v39 )
      {
        sub_1A8A4A0((__int64)v36, (__int64)"%s");
      }
      v34 = 1;
      v33 = sub_1587D10((__int64)v36, &v34);
      LODWORD(v35) = 1;
      sub_1587D10(v33, (int *)&v35);
      sub_15F7200(v36);
      sub_168B9F0((__int64)v36, a1, *(_DWORD *)(a2 + 24), 0x172Eu, 0);
      v35 = *(_QWORD *)(a2 + 40);
      sub_15894B0((__int64)v36, &v35);
      sub_15F7200(v36);
    }
  }
  else if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v19 = sub_B8C3D0(a2, a2, v8, v9, v10, v11);
    v23 = *((unsigned int *)v19 + 2);
    v24 = *v19 + 8 * v23;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v25 = (__int64 *)*sub_B8C3D0(a2, a2, v23, v20, v21, v22);
    else
      v25 = nullptr;
    v26 = v25 == (__int64 *)v24;
    if ( (unsigned __int64)v25 >= v24 )
      goto LABEL_22;
LABEL_15:
    v27 = v25;
    if ( *(_WORD *)(*v25 + 36) == 217 )
      goto LABEL_18;
    while ( (__int64 *)v24 != ++v27 )
    {
      if ( *(_WORD *)(*v27 + 36) == 217 )
      {
        do
        {
LABEL_18:
          v28 = *v25;
          for ( i = v25 + 1; *(_WORD *)(v28 + 36) != 217; ++i )
          {
            v28 = *i;
            v25 = i;
          }
          if ( (unsigned int)sub_16CA900(v28) == 2
            && (unsigned __int8)sub_16C5740(*(_DWORD *)(v28 + 48), *(_DWORD *)(v28 + 52), 0, 1, (__int64)v36) )
          {
            v7 = v36[0];
            goto LABEL_2;
          }
          v26 = ++v25 == (__int64 *)v24;
          if ( (unsigned __int64)v25 < v24 )
            goto LABEL_15;
LABEL_22:
          if ( v26 )
            return;
        }
        while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 217 );
        v30 = (__int64 *)(v24 + 8);
        while ( v25 != v30 )
        {
          v31 = *v30++;
          if ( *(_WORD *)(v31 + 36) == 217 )
            goto LABEL_18;
        }
        return;
      }
    }
  }
}
