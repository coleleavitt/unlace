/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140043D20
// Address: 0x0000000140043D20

//----- (0000000140043D20) ----------------------------------------------------
bool __fastcall sub_140043D20(void **a1, _QWORD *a2, __int64 a3, int a4)
{
  double v4; // xmm2_8
  char v5; // r12
  void **v9; // rsi
  _QWORD *v10; // rax
  void *v11; // r8
  _QWORD *i; // rcx
  void *v13; // r14
  unsigned __int64 v14; // r8
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rax
  _DWORD *v19; // r12
  _DWORD *v20; // r13
  int v21; // [rsp+30h] [rbp-58h] BYREF
  void *Block[2]; // [rsp+38h] [rbp-50h]
  __int64 v23; // [rsp+48h] [rbp-40h]
  __int64 v24; // [rsp+90h] [rbp+8h] BYREF
  int v25; // [rsp+A8h] [rbp+20h]

  v25 = a4;
  v5 = a4;
  if ( ((_BYTE)a1[79] & 0x10) == 0
    || *((_DWORD *)a2 + 8) != 4 && (void *)*sub_140043920(a1, &v24, *a2, *((_DWORD *)a2 + 107)) != a1[59] )
  {
    v9 = a1 + 41;
    v10 = a1[41];
    v11 = a1[42];
    for ( i = &v10[(_QWORD)v11]; v10 != i; ++v10 )
    {
      if ( *a2 == *v10 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(616);
      }
    }
    v13 = (void *)*a2;
    v14 = (unsigned __int64)v11 + 1;
    if ( v14 > (unsigned __int64)a1[43] )
      *v9 = sub_14005ABE0((__int64)(a1 + 41), a1[41], v14, 8u);
    *((_QWORD *)*v9 + (_QWORD)a1[42]) = v13;
    a1[42] = (char *)a1[42] + 1;
    if ( (v5 & 1) == 0 )
    {
      v21 = -2;
      *(_OWORD *)Block = 0;
      v23 = 0;
      Block[0] = *(void **)a2;
      if ( (*((int (__fastcall **)(void **, _QWORD, _QWORD, int *, _QWORD))*a1 + 28))(
             a1,
             *(unsigned int *)(a3 + 4),
             *((unsigned int *)a1 + 154),
             &v21,
             0) <= 0 )
      {
        sub_140043640((__int64)(a1 + 41), a2);
        if ( v21 >= -1 )
        {
          if ( Block[0] )
          {
            Block[1] = nullptr;
            j_free(Block[0]);
          }
        }
        return 0;
      }
      if ( v21 >= -1 && Block[0] )
      {
        Block[1] = nullptr;
        j_free(Block[0]);
        Block[0] = nullptr;
        v23 = 0;
      }
    }
    v16 = (*((__int64 (__fastcall **)(void **, _QWORD))*a1 + 1))(a1, *(unsigned int *)(a3 + 4));
    if ( v16 > 0 )
    {
      v17 = *((unsigned int *)a2 + 8);
      v18 = 48;
      if ( (_DWORD)v17 != 4 )
        v18 = 428;
      LODWORD(v24) = *(_DWORD *)((char *)a2 + v18);
      v16 = (*((__int64 (__fastcall **)(void **, __int64, _QWORD, _QWORD, _DWORD))*a1 + 39))(a1, v17, *a2, a2[5], v24);
      v19 = (_DWORD *)(a3 + 4);
      if ( v16 > 0 )
      {
        v20 = (_DWORD *)(a3 + 4);
        if ( (*(int (__fastcall **)(void **, __int64, _QWORD *))*a1)(a1, a3, a2 + 8) <= 0 )
        {
          v16 = 0;
          sub_140012410((__int64)a1, (struct __crt_locale_pointers *)"%a: failed to single step\n", v4);
          v20 = (_DWORD *)(a3 + 4);
        }
        v19 = (_DWORD *)(a3 + 4);
        if ( (*((int (__fastcall **)(void **, _QWORD, _QWORD, _QWORD, _DWORD))*a1 + 38))(
               a1,
               0,
               *((unsigned int *)a2 + 8),
               *a2,
               v24) <= 0 )
        {
          v16 = 0;
          sub_140012440((__int64)a1, (struct __crt_locale_pointers *)"%a: could not restore deleted bpt\n", v4);
          v19 = v20;
        }
      }
      if ( (*((int (__fastcall **)(void **, _QWORD))*a1 + 2))(a1, *(unsigned int *)(a3 + 4)) <= 0 )
      {
        sub_140012440((__int64)a1, (struct __crt_locale_pointers *)"%d: could not resume suspended threads\n", *v19);
        sub_140043640((__int64)(a1 + 41), a2);
        return 0;
      }
      v5 = v25;
    }
    sub_140043640((__int64)(a1 + 41), a2);
    if ( v16 <= 0 || (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) != 6 )
      return 0;
  }
  return (v5 & 2) != 0 || (*((int (__fastcall **)(void **, __int64))*a1 + 20))(a1, a3) > 0;
}
// 140043F16: variable 'v4' is possibly undefined
// 1400CB61C: using guessed type char byte_1400CB61C;
