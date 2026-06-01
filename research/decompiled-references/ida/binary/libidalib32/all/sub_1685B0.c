_BOOL8 __fastcall sub_1685B0(int a1, double (__fastcall ***a2)(__int64, __int64, __int64 *), double a3, double a4)
{
  double (__fastcall **v5)(__int64, __int64, __int64 *); // rax
  unsigned int v7; // r13d
  double v8; // xmm0_8
  int v9; // eax
  void *v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  _BYTE *v13; // [rsp+20h] [rbp-48h] BYREF
  __int128 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a1 == -3 )
    return 1;
  if ( a1 != -2 )
    return a1 == -7;
  v5 = *a2;
  v11 = 0;
  v13 = nullptr;
  v12 = 0;
  v14 = 0;
  v7 = *(_DWORD *)((__int64 (__fastcall *)(double (__fastcall ***)(__int64, __int64, __int64 *)))v5[9])(a2);
  v8 = (**a2)((__int64)a2, 1, &v11);
  v9 = sub_1679B0((__int64 *)&v13, v7, (__int64)&v11, v8, a4);
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree();
      }
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree();
      }
      return 1;
    }
    v10 = v13;
    if ( *((_QWORD *)&v14 + 1) <= 0xDu )
    {
      v13 = (_BYTE *)qvector_reserve();
      v10 = v13;
    }
    *(_QWORD *)&v14 = 14;
    qmemcpy(v10, "Bad register!", 13);
    v13[13] = 0;
  }
  (*a2)[1]((__int64)a2, 2, (__int64 *)&v13);
  ((void (__fastcall *)(double (__fastcall ***)(__int64, __int64, __int64 *), __int64))(*a2)[6])(a2, 1);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return 0;
}

