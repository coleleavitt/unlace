unsigned __int64 __fastcall sub_59B9F0(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v3; // r12
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // ebp
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v20; // rax
  unsigned int v21; // [rsp+Ch] [rbp-12Ch]
  char **v22; // [rsp+10h] [rbp-128h]
  __int64 v23; // [rsp+18h] [rbp-120h]
  void *v24; // [rsp+20h] [rbp-118h] BYREF
  __int128 v25; // [rsp+28h] [rbp-110h]
  void *v26; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v27; // [rsp+48h] [rbp-F0h]
  void *v28; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v29; // [rsp+68h] [rbp-D0h]
  void *ptr[4]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v31[88]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+F8h] [rbp-40h]

  v3 = *(_QWORD **)(a2 + 1480);
  v32 = __readfsqword(0x28u);
  v25 = 0;
  v24 = nullptr;
  sub_79BD30(v3 + 294, a2, &v24);
  sub_419620((__int64)v31, v3);
  v7 = a3[1];
  v8 = *a3;
  if ( a3[2] < (unsigned __int64)(v7 + 1) )
  {
    v20 = qvector_reserve(a3, v8, v7 + 1, 24);
    *a3 = v20;
    v7 = a3[1];
    v8 = v20;
  }
  v9 = v8 + 24 * v7;
  *(_QWORD *)v9 = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++a3[1];
  sub_419660((__int64)v31, *((_DWORD *)v3 + 588), nullptr, 1, v5, v6);
  sub_3573A0((char **)v9);
  v10 = sub_79B3A0(v3 + 294, *v3, 0xFFFFFFFFLL, 65);
  v11 = 1;
  v23 = v10;
  if ( v10 )
  {
    while ( 1 )
    {
      v13 = sub_79B3A0(v3 + 294, *v3, (unsigned int)v11, 73);
      v14 = sub_79B3A0(v3 + 294, *v3, v13, 65);
      v15 = sub_3B9110(v3, v14 - 1);
      v26 = nullptr;
      v27 = 0;
      v21 = v15;
      sub_79B6F0(v3 + 294, *v3, &v26, v13, 83);
      v29 = 0;
      v28 = nullptr;
      sub_79B6F0(v3 + 294, *v3, &v28, v13, 70);
      v16 = a3[1];
      v17 = *a3;
      if ( a3[2] < (unsigned __int64)(v16 + 1) )
      {
        v18 = qvector_reserve(a3, v17, v16 + 1, 24);
        *a3 = v18;
        v16 = a3[1];
        v17 = v18;
      }
      v12 = v17 + 24 * v16;
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      ++a3[1];
      v22 = (char **)v12;
      sub_59B4B0((__int64)ptr, v13, v21, (__int64)&v26, (__int64)&v28);
      sub_3573A0(v22);
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
      }
      if ( v28 )
      {
        *(_QWORD *)&v29 = 0;
        qfree(v28);
      }
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v26);
      }
      if ( v23 == v11 )
        break;
      ++v11;
    }
  }
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  return v32 - __readfsqword(0x28u);
}

