_QWORD *__fastcall sub_221FA40(_QWORD *a1, __int64 a2, _BYTE *a3, unsigned int a4, __int64 a5, unsigned __int64 a6)
{
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // r13
  size_t v12; // r8
  char *v14; // rax
  bool v15; // zf
  char v16; // dl
  __int64 v17; // rbp
  __int64 v19; // [rsp+8h] [rbp-100h]
  unsigned __int64 v20; // [rsp+18h] [rbp-F0h] BYREF
  void *v21[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v22; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v24; // [rsp+60h] [rbp-A8h]
  _QWORD v25[4]; // [rsp+70h] [rbp-98h] BYREF
  char v26; // [rsp+90h] [rbp-78h]
  char v27; // [rsp+91h] [rbp-77h]
  _QWORD v28[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v29; // [rsp+C0h] [rbp-48h]

  v9 = sub_2219FE0((char *)(a2 + 160), (char *)(a2 + 184), (_QWORD *)(a2 + 192));
  v10 = v9;
  v20 = v9;
  if ( v9 >= a6 )
  {
    sub_221F830(a2, a4, v9, (__int64)&byte_22F0C30, 0);
    v14 = "unknown ";
    v15 = *a3 == 0;
    v23[0] = "unknown ";
    if ( v15 )
    {
      v16 = 3;
      v24 = 259;
      v19 = v23[1];
    }
    else
    {
      v23[2] = a3;
      v14 = (char *)v23;
      v24 = 771;
      v16 = 2;
    }
    v25[0] = v14;
    v26 = v16;
    v25[1] = v19;
    v25[2] = " value: ";
    v28[0] = v25;
    v28[2] = &v20;
    v27 = 3;
    v28[1] = 0;
    v29 = 2818;
    v17 = std::_V2::generic_category((std::_V2 *)a2);
    sub_2253560(v21, v28);
    sub_22205D0(a1, v21, 22, v17);
    if ( v21[0] != &v22 )
      operator delete(v21[0]);
  }
  else
  {
    v11 = *(_QWORD *)(a5 + 8 * v9);
    v12 = 0;
    if ( v11 )
      v12 = strlen(*(const char **)(a5 + 8 * v9));
    sub_221F830(a2, a4, v10, v11, v12);
    *a1 = 0;
  }
  return a1;
}
