__int64 __fastcall sub_E60D10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r13
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v46; // rsi
  __int64 v47; // r13
  __int64 v48; // rbx
  _BYTE *v49; // rax
  __int64 v50; // r13
  __int64 v51; // r13
  void *v52[4]; // [rsp+0h] [rbp-78h] BYREF
  __int16 v53; // [rsp+20h] [rbp-58h] BYREF
  char v54; // [rsp+28h] [rbp-50h]

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v7 = *(_QWORD *)(a2 + 104);
  sub_7052B0((__int64 *)(v7 + 96), v7, a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) != 0 || (unsigned __int8)sub_B9C100(a2, v7, v8, v9, v10, v11) )
  {
    v54 = 1;
    v53 = 1;
    sub_E59B60((void ***)v52, "exists");
    v12 = sub_222E220(a1, v52);
    sub_222B2A0(v12);
    sub_2229580(v12, &v53);
    if ( v52[0] )
      sub_E58590((void **)v52[0]);
    sub_222B2A0(&v53);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v13, v14, v15, v16);
  if ( (**(_BYTE **)(a2 + 128) & 0x20) == 0 )
  {
    v46 = *(_QWORD *)(a2 + 104);
    sub_7052B0((__int64 *)(v46 + 96), v46, v17, v18, v19, v20);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) != 0
      || (unsigned __int8)sub_B9C100(a2, v46, v17, v18, v19, v20) )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v17, v18, v19, v20);
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 0x20) == 0 )
      {
        v54 = 1;
        v53 = 1;
        sub_E59B60((void ***)v52, "simple");
        v47 = sub_222E220(a1, v52);
        sub_222B2A0(v47);
        sub_2229580(v47, &v53);
        if ( v52[0] )
          sub_E58590((void **)v52[0]);
        sub_222B2A0(&v53);
      }
    }
  }
  v21 = *(_QWORD *)(a2 + 104);
  sub_7052B0((__int64 *)(v21 + 96), v21, v17, v18, v19, v20);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) != 0 || (unsigned __int8)sub_B9C100(a2, v21, v22, v23, v24, v25) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v22, v23, v24, v25);
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 8) != 0 )
    {
      v54 = 1;
      v53 = 1;
      sub_E59B60((void ***)v52, "trivial");
      v26 = sub_222E220(a1, v52);
      sub_222B2A0(v26);
      sub_2229580(v26, &v53);
      if ( v52[0] )
        sub_E58590((void **)v52[0]);
      sub_222B2A0(&v53);
    }
  }
  v27 = *(_QWORD *)(a2 + 104);
  sub_7052B0((__int64 *)(v27 + 96), v27, v22, v23, v24, v25);
  if ( *(char *)(*(_QWORD *)(a2 + 128) + 6LL) < 0
    || (unsigned __int8)sub_B9C100(a2, v27, v28, v29, v30, v31)
    && (sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v33, v34, v35, v36),
        (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 5LL) & 8) == 0) )
  {
    v54 = 1;
    v53 = 1;
    sub_E59B60((void ***)v52, "nonTrivial");
    v32 = sub_222E220(a1, v52);
    sub_222B2A0(v32);
    sub_2229580(v32, &v53);
    if ( v52[0] )
      sub_E58590((void **)v52[0]);
    sub_222B2A0(&v53);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v33, v34, v35, v36);
  if ( (**(_BYTE **)(a2 + 128) & 0x20) != 0 )
  {
    v54 = 1;
    v53 = 1;
    sub_E59B60((void ***)v52, "userDeclared");
    v51 = sub_222E220(a1, v52);
    sub_222B2A0(v51);
    sub_2229580(v51, &v53);
    if ( v52[0] )
      sub_E58590((void **)v52[0]);
    sub_222B2A0(&v53);
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v37, v38, v39, v40);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 9LL) & 0x10) == 0 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
    if ( (**(_BYTE **)(a2 + 128) & 4) == 0 )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
      if ( (**(_BYTE **)(a2 + 128) & 0x10) == 0 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
        if ( (**(_BYTE **)(a2 + 128) & 8) == 0 )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
          v49 = *(_BYTE **)(a2 + 128);
          if ( (*v49 & 0x40) == 0 && ((v49[10] & 0x20) == 0 || (unsigned __int8)sub_B96D80(a2)) )
          {
            v54 = 1;
            v53 = 1;
            sub_E59B60((void ***)v52, "needsImplicit");
            v50 = sub_222E220(a1, v52);
            sub_222B2A0(v50);
            sub_2229580(v50, &v53);
            if ( v52[0] )
              sub_E58590((void **)v52[0]);
            sub_222B2A0(&v53);
          }
        }
      }
    }
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v41, v42, v43, v44);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 4LL) & 1) == 0 )
    return a1;
  v54 = 1;
  v53 = 1;
  sub_E59B60((void ***)v52, "needsOverloadResolution");
  v48 = sub_222E220(a1, v52);
  sub_222B2A0(v48);
  sub_2229580(v48, &v53);
  if ( v52[0] )
    sub_E58590((void **)v52[0]);
  sub_222B2A0(&v53);
  return a1;
}
