void __fastcall sub_10B7510(__int64 a1, unsigned __int8 a2)
{
  int v2; // r13d
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 v9; // r14
  int v10; // r12d
  int v11; // ebp
  int v12; // eax
  void *v13; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-D0h]
  _QWORD v15[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 (__fastcall **v16)(); // [rsp+20h] [rbp-B8h] BYREF
  int v17; // [rsp+28h] [rbp-B0h]
  __int128 v18; // [rsp+30h] [rbp-A8h]
  __int64 v19; // [rsp+40h] [rbp-98h]
  char v20; // [rsp+48h] [rbp-90h]
  int v21; // [rsp+4Ch] [rbp-8Ch]
  void **v22; // [rsp+50h] [rbp-88h]
  _QWORD v23[4]; // [rsp+60h] [rbp-78h] BYREF
  char v24; // [rsp+80h] [rbp-58h]
  _QWORD v25[2]; // [rsp+88h] [rbp-50h] BYREF
  _QWORD *v26; // [rsp+98h] [rbp-40h] BYREF

  v2 = 2;
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 != 3 )
  {
    v2 = 64;
    if ( v3 != 5 )
    {
      v2 = 16;
      if ( v3 != 4 )
        v2 = 1;
    }
  }
  LOBYTE(v15[0]) = 0;
  v23[0] = "{0} [options] file...";
  v23[2] = &v26;
  v18 = 0;
  v24 = 1;
  v25[0] = off_2C0C258;
  v25[1] = a1 + 72;
  v26 = v25;
  v13 = v15;
  v16 = &off_2BC1EC8;
  v23[1] = 21;
  v23[3] = 1;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v21 = 1;
  v19 = 0;
  v22 = &v13;
  sub_2257B70(&v16, 0, 0, 0);
  sub_2258A10(&v16, v23);
  if ( v19 != (_QWORD)v18 )
    sub_2257CB0(&v16, v23, v4, v5, v6, v7, v13, v14, v15[0]);
  v16 = &off_2BC1EC8;
  sub_2257A60(&v16);
  v8 = sub_10E2140();
  v9 = *(_QWORD *)(a1 + 552);
  v10 = (int)v13;
  v11 = v8;
  v12 = sub_22598C0(&v16, v23);
  sub_219B150(v11, v12, v10, v9, a2, 0, v2);
  if ( v13 != v15 )
    operator delete(v13);
}

