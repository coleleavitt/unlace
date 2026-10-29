__int64 __fastcall sub_1ECCAE0(
        void *a1,
        size_t a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _BYTE *a9,
        __int64 a10,
        char a11)
{
  int v13; // eax
  unsigned int v14; // ebx
  _QWORD v17[4]; // [rsp+20h] [rbp-88h] BYREF
  void *v18; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v19[16]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v20; // [rsp+60h] [rbp-48h]
  char v21; // [rsp+68h] [rbp-40h]

  v17[2] = a7;
  v17[1] = a6;
  v17[3] = a8;
  v17[0] = &off_2BE4720;
  v18 = v19;
  sub_1EA9D80(&v18, a9, (__int64)&a9[a10]);
  v20 = a3;
  v21 = a11;
  v13 = sub_1ECB7B0(a1, a2, a3, a4, a5, 0, (__int64)v17, 1u, 0xAu);
  v17[0] = &off_2BE4720;
  v14 = v13 ^ 1;
  if ( v18 != v19 )
    operator delete(v18);
  return v14;
}
