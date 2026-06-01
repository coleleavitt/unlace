__int64 __fastcall sub_214CB10(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  _QWORD *v6; // rdi
  __int64 v7; // rax
  const char **v8; // rax
  bool v9; // zf
  char v10; // dl
  char *v11; // rax
  unsigned __int64 v13; // rax
  const char **v14; // rax
  const char *v15; // [rsp+0h] [rbp-88h] BYREF
  __int64 v16; // [rsp+8h] [rbp-80h]
  _BYTE *v17; // [rsp+10h] [rbp-78h]
  __int16 v18; // [rsp+20h] [rbp-68h]
  const char **v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  char *v21; // [rsp+40h] [rbp-48h]
  char v22; // [rsp+50h] [rbp-38h]
  char v23; // [rsp+51h] [rbp-37h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 152LL))(*(_QWORD *)(a1 + 8));
  v6 = *(_QWORD **)(a1 + 8);
  v7 = v6[6];
  if ( *(_DWORD *)v7 != 4 )
  {
    v8 = (const char **)"invalid ";
    v9 = *a3 == 0;
    v15 = "invalid ";
    if ( v9 )
    {
      v3 = v16;
      v10 = 3;
      v18 = 259;
    }
    else
    {
      v17 = a3;
      v8 = &v15;
      v10 = 2;
      v18 = 771;
    }
    v20 = v3;
    v19 = v8;
    v11 = " version number, integer expected";
LABEL_5:
    v22 = v10;
    v21 = v11;
    v23 = 3;
    return sub_21543E0(v6, &v19, 0, 0);
  }
  if ( *(_DWORD *)(v7 + 32) <= 0x40u )
    v13 = *(_QWORD *)(v7 + 24);
  else
    v13 = **(_QWORD **)(v7 + 24);
  if ( v13 > 0xFF )
  {
    v14 = (const char **)"invalid ";
    v9 = *a3 == 0;
    v15 = "invalid ";
    if ( v9 )
    {
      v4 = v16;
      v18 = 259;
      v10 = 3;
    }
    else
    {
      v17 = a3;
      v14 = &v15;
      v10 = 2;
      v18 = 771;
    }
    v19 = v14;
    v11 = " version number";
    v20 = v4;
    goto LABEL_5;
  }
  *a2 = v13;
  (*(void (__fastcall **)(_QWORD *))(*v6 + 152LL))(v6);
  return 0;
}
