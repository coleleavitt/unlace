_QWORD *__fastcall sub_218B440(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, int *a5, __int64 *a6)
{
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r12
  _BYTE *v11; // rdi
  void *v16[2]; // [rsp+1Ch] [rbp-B8h] BYREF
  _BYTE v17[16]; // [rsp+2Ch] [rbp-A8h] BYREF
  _QWORD v18[3]; // [rsp+3Ch] [rbp-98h] BYREF
  int v19; // [rsp+54h] [rbp-80h]
  void **v20; // [rsp+5Ch] [rbp-78h] BYREF
  int v21; // [rsp+64h] [rbp-70h]
  __int128 v22; // [rsp+6Ch] [rbp-68h]
  __int64 v23; // [rsp+7Ch] [rbp-58h]
  char v24; // [rsp+84h] [rbp-50h]
  int v25; // [rsp+88h] [rbp-4Ch]
  void **v26; // [rsp+8Ch] [rbp-48h]

  v22 = 0;
  v26 = v16;
  v16[0] = v17;
  v16[1] = nullptr;
  v17[0] = 0;
  v21 = 0;
  v24 = 0;
  v25 = 1;
  v23 = 0;
  v20 = (void **)&off_2BEBE68;
  sub_227B8B0(&v20, 0, 0, 0);
  v18[1] = a4;
  v8 = *a6;
  v9 = *a5;
  v18[0] = off_2C720D8;
  v18[2] = v8;
  v19 = v9;
  sub_227C560(&v20, v18);
  v20 = (void **)&off_2BEBE68;
  sub_227B7A0(&v20);
  v20 = v16;
  LOWORD(v23) = 260;
  v10 = operator new(0x40u);
  sub_2220590(v10, &v20, a2, a3);
  v11 = v16[0];
  *a1 = v10;
  if ( v11 != v17 )
    operator delete(v11);
  return a1;
}
