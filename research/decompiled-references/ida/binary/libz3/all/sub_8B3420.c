__int64 __fastcall sub_8B3420(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v3; // rcx
  __int64 v5; // rbp
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // rdi
  unsigned int v9; // ebp
  __int64 v10; // rbx
  char v12; // al
  unsigned int v13; // r15d
  unsigned int v14; // eax
  int *v15; // rbp
  __int64 v16; // [rsp+8h] [rbp-C0h]
  __int64 v17; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v18[2]; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v19[3]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+40h] [rbp-88h]
  _QWORD v21[4]; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v22[12]; // [rsp+68h] [rbp-60h] BYREF

  v2 = a1 + 736;
  v3 = 232LL * a2;
  v5 = *(_QWORD *)(a1 + 1592);
  v17 = a1 + 8;
  v6 = v3 + v5;
  v20 = a1 + 736;
  v18[0] = 0;
  v19[0] = 1;
  v21[0] = 0;
  v21[2] = 1;
  v22[0] = 0;
  v22[2] = 1;
  v7 = *(_BYTE *)(v6 + 3);
  v18[1] = 0;
  v19[1] = 0;
  v21[1] = 0;
  v21[3] = 0;
  v22[1] = 0;
  v22[3] = 0;
  if ( (v7 & 0x40) != 0 )
  {
    v12 = sub_8AEDF0(a1 + 736, v6 + 8, v6 + 72);
    v3 = 232LL * a2;
    v6 = v3 + *(_QWORD *)(a1 + 1592);
    if ( v12 )
    {
      LOBYTE(v13) = *(_DWORD *)(v6 + 200) > 0;
      sub_8ADE80(v20, (__int64)v21, (int *)(v6 + 72));
      sub_8ADE80(v20, (__int64)v22, (int *)(v6 + 104));
      goto LABEL_8;
    }
    if ( *(char *)(v6 + 3) >= 0 )
      goto LABEL_3;
  }
  else if ( v7 >= 0 )
  {
LABEL_3:
    v8 = v20;
LABEL_4:
    v9 = 1;
    goto LABEL_5;
  }
  v16 = v3;
  v8 = v20;
  if ( !sub_8AEDF0(v2, v6 + 136, v6 + 8) )
    goto LABEL_4;
  v15 = (int *)(*(_QWORD *)(a1 + 1592) + v16);
  v13 = (unsigned int)v15[50] >> 31;
  sub_8ADE80(v20, (__int64)v21, v15 + 34);
  sub_8ADE80(v20, (__int64)v22, v15 + 42);
LABEL_8:
  if ( *(_BYTE *)(a1 + 1608) )
    v14 = sub_8B0000(a1, a2, v13, &v17);
  else
    v14 = sub_8B0240(a1, a2, v13, &v17);
  v9 = v14;
  if ( v14 != -1 )
    sub_8B2E60((_QWORD *)a1, a2, v14, (__int64)v18, (__int64)v21);
  v8 = v20;
  LOBYTE(v9) = v9 != -1;
LABEL_5:
  sub_8AD4E0(v8, (__int64)v21);
  v10 = v17;
  sub_182EF00(v17, v18);
  sub_182EF00(v10, v19);
  return v9;
}

