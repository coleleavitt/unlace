/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100043C20
// Address: 0x0000000100043C20

//----- (0000000100043C20) ----------------------------------------------------
__int64 __fastcall sub_100043C20(_QWORD **a1, _QWORD *a2)
{
  char *v2; // r15
  char *v3; // r14
  __int64 **v4; // r12
  __int64 v5; // rax
  __int64 *v6; // rsi
  _QWORD *v7; // rax
  char *v8; // rcx
  char *v9; // rax
  bool v10; // zf
  __int64 v12; // [rsp+8h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-50h] BYREF
  __int64 *v14; // [rsp+18h] [rbp-48h] BYREF

  *(_OWORD *)(a1 + 1) = 0;
  *a1 = a1 + 1;
  v2 = (char *)*a2;
  v3 = (char *)(a2 + 1);
  if ( (_QWORD *)*a2 != a2 + 1 )
  {
    do
    {
      v4 = (__int64 **)sub_100043D50(a1, a1 + 1, &v13, &v12, v2 + 32);
      if ( !*v4 )
      {
        sub_100044010((__int64)&v14, (__int64)a1, (__int64)(v2 + 32));
        v5 = v13;
        v6 = v14;
        *(_OWORD *)v14 = 0;
        v6[2] = v5;
        *v4 = v6;
        v7 = (_QWORD *)**a1;
        if ( v7 )
        {
          *a1 = v7;
          v6 = *v4;
        }
        sub_10000C830(a1[1], v6);
        a1[2] = (_QWORD *)((char *)a1[2] + 1);
      }
      v8 = *((char **)v2 + 1);
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = *(char **)v8;
        }
        while ( v8 );
      }
      else
      {
        do
        {
          v9 = *((char **)v2 + 2);
          v10 = *(_QWORD *)v9 == (_QWORD)v2;
          v2 = v9;
        }
        while ( !v10 );
      }
      v2 = v9;
    }
    while ( v9 != v3 );
  }
  return __stack_chk_guard;
}
