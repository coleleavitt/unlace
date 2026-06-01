/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deep_copy_idcv
// Address: 0x000000010003AD10

//----- (000000010003AD10) ----------------------------------------------------
__int64 __fastcall deep_copy_idcv(unsigned __int8 *a1, __int64 a2)
{
  _QWORD **v2; // r14
  _QWORD *v3; // rax
  char *v4; // r15
  char *v5; // r13
  int v6; // eax
  void *v7; // rdi
  __int64 **v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rsi
  _QWORD *v11; // rax
  char *v12; // rcx
  char *v13; // rax
  bool v14; // zf
  _Unwind_Exception *v16; // rax
  int v17; // edx
  _QWORD *v19; // [rsp+10h] [rbp-60h]
  __int64 v20; // [rsp+18h] [rbp-58h] BYREF
  __int64 v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 *v22; // [rsp+28h] [rbp-48h] BYREF

  if ( *(_BYTE *)a2 != 5 )
    return copy_idcv(a1, (unsigned __int8 *)a2);
  v2 = (_QWORD **)operator new(0x20u);
  v3 = *(_QWORD **)(a2 + 8);
  *(_OWORD *)(v2 + 1) = 0;
  *v2 = v2 + 1;
  v4 = (char *)*v3;
  v19 = v3;
  v5 = (char *)(v3 + 1);
  if ( (_QWORD *)*v3 != v3 + 1 )
  {
    do
    {
      v8 = (__int64 **)sub_100043D50(v2, v2 + 1, &v21, &v20, v4 + 32);
      if ( !*v8 )
      {
        sub_100044010((__int64)&v22, (__int64)v2, (__int64)(v4 + 32));
        v9 = v21;
        v10 = v22;
        *(_OWORD *)v22 = 0;
        v10[2] = v9;
        *v8 = v10;
        v11 = (_QWORD *)**v2;
        if ( v11 )
        {
          *v2 = v11;
          v10 = *v8;
        }
        sub_10000C830(v2[1], v10);
        v2[2] = (_QWORD *)((char *)v2[2] + 1);
      }
      v12 = *((char **)v4 + 1);
      if ( v12 )
      {
        do
        {
          v13 = v12;
          v12 = *(char **)v12;
        }
        while ( v12 );
      }
      else
      {
        do
        {
          v13 = *((char **)v4 + 2);
          v14 = *(_QWORD *)v13 == (_QWORD)v4;
          v4 = v13;
        }
        while ( !v14 );
      }
      v4 = v13;
    }
    while ( v13 != v5 );
  }
  *((_DWORD *)v2 + 6) = 1;
  *((_DWORD *)v2 + 7) = *((_DWORD *)v19 + 7);
  if ( !a1 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0xA60u);
    if ( v17 )
      sub_100001690(v16);
    _Unwind_Resume(v16);
  }
  v6 = *a1;
  if ( v6 == 5 )
  {
    sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
  }
  else if ( v6 == 7 )
  {
    v7 = *((void **)a1 + 1);
    if ( v7 )
    {
      *((_QWORD *)a1 + 2) = 0;
      qfree(v7);
      *((_QWORD *)a1 + 1) = 0;
      *((_QWORD *)a1 + 3) = 0;
    }
  }
  *a1 = 5;
  *((_QWORD *)a1 + 1) = v2;
  return 0;
}
// 10003AEF0: variable 'v17' is possibly undefined
// 10003AEF5: variable 'v16' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
