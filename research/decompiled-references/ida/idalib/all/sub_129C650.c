__int64 __fastcall sub_129C650(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE *v6; // rsi
  __int64 v7; // rbx
  void **v9; // rbx
  void *v10; // rdi
  int v11; // eax
  bool v12; // zf
  void **v13; // rax
  __int64 v14[2]; // [rsp+0h] [rbp-F8h] BYREF
  void *v15[2]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v16[16]; // [rsp+20h] [rbp-D8h] BYREF
  void *v17[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-B8h] BYREF
  void *v19[2]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-98h] BYREF
  void *v21[2]; // [rsp+70h] [rbp-88h] BYREF
  char v22[16]; // [rsp+80h] [rbp-78h] BYREF
  char *v23; // [rsp+90h] [rbp-68h]
  __int64 v24; // [rsp+98h] [rbp-60h]
  char v25[16]; // [rsp+A0h] [rbp-58h] BYREF
  char *v26; // [rsp+B0h] [rbp-48h]
  __int64 v27; // [rsp+B8h] [rbp-40h]
  char v28[16]; // [rsp+C0h] [rbp-38h] BYREF
  char v29; // [rsp+D0h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 496);
  if ( v5 )
  {
    v6 = *(_BYTE **)(v4 + 488);
    v15[0] = v16;
    sub_129A5D0(v15, v6, (__int64)&v6[v5]);
  }
  else
  {
    v9 = (void **)&v29;
    v19[0] = v20;
    sub_129A5D0(v19, *(_BYTE **)(v4 + 104), *(_QWORD *)(v4 + 104) + *(_QWORD *)(v4 + 112));
    v21[0] = v22;
    v23 = v25;
    strcpy(v25, "..");
    strcpy(v22, "..");
    v21[1] = &dword_0 + 2;
    v24 = 2;
    v26 = v28;
    strcpy(v28, "sysroot");
    v17[0] = v19;
    v27 = 7;
    v17[1] = &byte_4;
    sub_129A750(v15, (__int64 *)v17);
    while ( 1 )
    {
      v9 -= 4;
      v10 = *v9;
      if ( *v9 != v9 + 2 )
        break;
LABEL_12:
      if ( v9 == v19 )
        goto LABEL_3;
    }
    while ( 1 )
    {
      operator delete(v10);
      if ( v9 == v19 )
        break;
      v9 -= 4;
      v10 = *v9;
      if ( *v9 == v9 + 2 )
        goto LABEL_12;
    }
  }
LABEL_3:
  v19[0] = v15;
  LOWORD(v21[0]) = 260;
  v7 = a1 + 16;
  if ( (unsigned int)sub_228C1E0(v19, 0) )
  {
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  else
  {
    v19[0] = v20;
    sub_129A5D0(v19, (_BYTE *)v15[0], (__int64)v15[0] + (unsigned __int64)v15[1]);
    sub_129BDF0((char *)v21, a2 + 16);
    v14[0] = (__int64)v19;
    v14[1] = 2;
    sub_129A750(v17, v14);
    if ( v21[0] != v22 )
      operator delete(v21[0]);
    if ( v19[0] != v20 )
      operator delete(v19[0]);
    v19[0] = v17;
    LOWORD(v21[0]) = 260;
    v11 = sub_228C1E0(v19, 0);
    *(_QWORD *)a1 = v7;
    v12 = v11 == 0;
    v13 = v15;
    if ( v12 )
      v13 = v17;
    sub_129A5D0((_QWORD *)a1, *v13, (__int64)v13[1] + (_QWORD)*v13);
    if ( v17[0] != &v18 )
      operator delete(v17[0]);
  }
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  return a1;
}
