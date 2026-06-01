__int64 __fastcall sub_1EAB120(__int64 a1, __int64 a2, void *a3, size_t a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // rsi
  _QWORD *v7; // r12
  __int64 v8; // rax
  void *v9; // rdx
  __int64 v10; // rax
  _QWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  _QWORD *vars10; // [rsp+10h] [rbp+10h]
  void *ptr; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  char vars30; // [rsp+30h] [rbp+30h] BYREF

  sub_1EAAE30((__int64)vars0, a2, a3, a4, a5, a6);
  v6 = (_BYTE *)vars0[0];
  *(_QWORD *)a1 = a1 + 16;
  if ( v6 )
  {
    sub_1EA9D80((_QWORD *)a1, v6, (__int64)&v6[vars0[1]]);
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
  }
  v7 = vars10;
  if ( vars10 != vars0 )
  {
    v8 = vars20;
    if ( vars20 )
    {
      if ( (_QWORD *)*vars10 != vars10 + 3 )
      {
        free((void *)*vars10);
        v8 = vars20;
      }
      v9 = ptr;
      v7[1] = v8;
      v10 = vars28;
      *v7 = v9;
      v7[2] = v10;
      return a1;
    }
    vars10[1] = 0;
  }
  if ( ptr != &vars30 )
    free(ptr);
  return a1;
}
