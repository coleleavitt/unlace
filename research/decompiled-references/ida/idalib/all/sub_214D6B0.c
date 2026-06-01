__int64 __fastcall sub_214D6B0(__int64 a1, _DWORD *a2, _DWORD *a3, char *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  _QWORD *v9; // rdi
  __int64 v10; // rax
  const char **v11; // rax
  bool v12; // zf
  char v13; // dl
  const char *v14; // rax
  __int64 v16; // rax
  const char **v17; // rax
  __int64 v18; // rax
  const char **v19; // rax
  unsigned __int64 *v20; // rsi
  unsigned __int64 v21; // rax
  const char **v22; // rax
  const char *v25; // [rsp+10h] [rbp-78h] BYREF
  __int64 v26; // [rsp+18h] [rbp-70h]
  char *v27; // [rsp+20h] [rbp-68h]
  __int16 v28; // [rsp+30h] [rbp-58h]
  const char *v29; // [rsp+40h] [rbp-48h] BYREF
  __int64 v30; // [rsp+48h] [rbp-40h]
  const char *v31; // [rsp+50h] [rbp-38h]
  __int16 v32; // [rsp+60h] [rbp-28h]

  v9 = *(_QWORD **)(a1 + 8);
  v10 = v9[6];
  if ( *(_DWORD *)v10 != 4 )
  {
    v11 = (const char **)"invalid ";
    v12 = *a4 == 0;
    v25 = "invalid ";
    if ( v12 )
    {
      a5 = v26;
      v13 = 3;
      v28 = 259;
    }
    else
    {
      v27 = a4;
      v11 = &v25;
      v13 = 2;
      v28 = 771;
    }
    v30 = a5;
    v29 = (const char *)v11;
    v14 = " major version number, integer expected";
LABEL_5:
    v31 = v14;
    LOBYTE(v32) = v13;
    HIBYTE(v32) = 3;
    return sub_21543E0(v9, &v29, 0, 0);
  }
  if ( *(_DWORD *)(v10 + 32) <= 0x40u )
    v16 = *(_QWORD *)(v10 + 24);
  else
    v16 = **(_QWORD **)(v10 + 24);
  if ( (unsigned __int64)(v16 - 1) > 0xFFFE )
  {
    v17 = (const char **)"invalid ";
    v12 = *a4 == 0;
    v25 = "invalid ";
    if ( v12 )
    {
      a6 = v26;
      v13 = 3;
      v28 = 259;
    }
    else
    {
      v27 = a4;
      v17 = &v25;
      v13 = 2;
      v28 = 771;
    }
    v29 = (const char *)v17;
    v14 = " major version number";
    v30 = a6;
    goto LABEL_5;
  }
  *a2 = v16;
  (*(void (__fastcall **)(_QWORD *))(*v9 + 152LL))(v9);
  v9 = *(_QWORD **)(a1 + 8);
  if ( *(_DWORD *)v9[6] != 26 )
  {
    if ( *a4 )
    {
      v29 = a4;
      v31 = " minor version number required, comma expected";
      v32 = 771;
    }
    else
    {
      v29 = " minor version number required, comma expected";
      v32 = 259;
    }
    return sub_21543E0(v9, &v29, 0, 0);
  }
  (*(void (__fastcall **)(_QWORD *))(*v9 + 152LL))(v9);
  v9 = *(_QWORD **)(a1 + 8);
  v18 = v9[6];
  if ( *(_DWORD *)v18 != 4 )
  {
    v19 = (const char **)"invalid ";
    v12 = *a4 == 0;
    v25 = "invalid ";
    if ( v12 )
    {
      v6 = v26;
      v13 = 3;
      v28 = 259;
    }
    else
    {
      v27 = a4;
      v19 = &v25;
      v13 = 2;
      v28 = 771;
    }
    v29 = (const char *)v19;
    v14 = " minor version number, integer expected";
    v30 = v6;
    goto LABEL_5;
  }
  v20 = *(unsigned __int64 **)(v18 + 24);
  if ( *(_DWORD *)(v18 + 32) <= 0x40u )
    v21 = *(_QWORD *)(v18 + 24);
  else
    v21 = *v20;
  if ( v21 > 0xFF )
  {
    v22 = (const char **)"invalid ";
    v12 = *a4 == 0;
    v25 = "invalid ";
    if ( v12 )
    {
      v7 = v26;
      v28 = 259;
      v13 = 3;
    }
    else
    {
      v27 = a4;
      v22 = &v25;
      v13 = 2;
      v28 = 771;
    }
    v29 = (const char *)v22;
    v14 = " minor version number";
    v30 = v7;
    goto LABEL_5;
  }
  *a3 = v21;
  (*(void (__fastcall **)(_QWORD *, unsigned __int64 *, _DWORD *, char *))(*v9 + 152LL))(v9, v20, a3, a4);
  return 0;
}
