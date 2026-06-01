__int64 __fastcall sub_2052B70(__int64 *a1, _QWORD *a2, __int64 **a3)
{
  int v3; // ebp
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r14
  int v10; // ebp
  __int64 v11; // rdx
  __int64 *v12; // r13
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  __int64 v15; // rsi
  char v16; // al
  __int64 v17; // [rsp+0h] [rbp-98h]
  __int64 *v19; // [rsp+10h] [rbp-88h]
  unsigned int v20; // [rsp+18h] [rbp-80h]
  unsigned __int8 v21; // [rsp+18h] [rbp-80h]
  int v22; // [rsp+1Ch] [rbp-7Ch]
  _QWORD v23[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v24[11]; // [rsp+40h] [rbp-58h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v17 = *a1;
    v6 = sub_21F90F0();
    v8 = sub_21F90D0(a1, a2, v7);
    v9 = v8;
    if ( v6 == v8 )
    {
      sub_21FFCB0(v23, v8, 1);
      sub_21FFCB0(v24, v9, 2);
    }
    else
    {
      sub_21FAF40(v23, v6, 1);
      sub_21FAF40(v24, v6, 2);
    }
    v10 = v3 - 1;
    v22 = 1;
    v19 = nullptr;
    v20 = v10 & sub_2205190(a2);
    while ( 1 )
    {
      v11 = 32LL * v20;
      v12 = (__int64 *)(v17 + v11);
      if ( *a2 == *(_QWORD *)(v17 + v11) )
      {
        v15 = v17 + v11;
        v14 = v9 == *a2 ? sub_2201080(a2, v15) : sub_21F96E0(a2, v15);
        if ( v14 )
        {
          *a3 = v12;
          goto LABEL_11;
        }
      }
      if ( (unsigned __int8)sub_2051060(v12, v23, v11) )
        break;
      v16 = sub_2051060(v12, v24, v13);
      if ( !v19 )
      {
        if ( !v16 )
          v12 = nullptr;
        v19 = v12;
      }
      v20 = v10 & (v22 + v20);
      ++v22;
    }
    if ( v19 )
      v12 = v19;
    *a3 = v12;
    v14 = 0;
LABEL_11:
    v21 = v14;
    sub_9955A0(v24);
    sub_9955A0(v23);
    return v21;
  }
  else
  {
    *a3 = nullptr;
    return 0;
  }
}
