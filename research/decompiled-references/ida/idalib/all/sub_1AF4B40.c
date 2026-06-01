unsigned __int64 __fastcall sub_1AF4B40(__int64 *a1, char *a2, __int64 a3, unsigned int a4, int a5)
{
  char *v6; // r8
  __int64 v9; // r9
  char *v10; // rax
  char *v11; // rcx
  int v12; // edx
  _QWORD *v13; // rax
  __int64 v14; // r9
  char *v16; // rcx
  _BYTE v17[184]; // [rsp+0h] [rbp-B8h] BYREF

  v6 = &a2[8 * a3];
  if ( a2 == v6 )
    goto LABEL_8;
  v9 = *(_QWORD *)a2;
  v10 = a2 + 8;
  v11 = a2 + 8;
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  if ( v12 != 65 )
  {
    while ( v6 != v11 )
    {
      v9 = *(_QWORD *)v11;
      v11 += 8;
      if ( *(_DWORD *)(v9 + 8) == 65 )
        goto LABEL_7;
    }
    v9 = 0;
LABEL_7:
    if ( v12 != 22 )
      goto LABEL_10;
    goto LABEL_8;
  }
LABEL_10:
  while ( 1 )
  {
    v16 = v10;
    if ( v6 == v10 )
      break;
    v10 += 8;
    if ( *(_DWORD *)(*(_QWORD *)v16 + 8LL) == 22 )
      goto LABEL_8;
  }
  if ( !v9 )
  {
LABEL_8:
    v13 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_F007E0(v13, a4, a5, a2, a3, v14);
  }
  sub_168B9F0((__int64)v17, a1, a4, 0x11D4u, 0);
  sub_15F7200(v17);
  return 1;
}
