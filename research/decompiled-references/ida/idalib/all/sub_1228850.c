__int64 __fastcall sub_1228850(__int64 a1, _DWORD *a2, void *a3, __int64 *a4, __int64 *a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, void ***); // r15
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // [rsp+8h] [rbp-158h]
  unsigned __int8 v19; // [rsp+8h] [rbp-158h]
  void *v21[2]; // [rsp+18h] [rbp-148h] BYREF
  __int64 v22; // [rsp+28h] [rbp-138h] BYREF
  __int64 v23[4]; // [rsp+38h] [rbp-128h] BYREF
  __int16 v24; // [rsp+58h] [rbp-108h]
  _BYTE v25[32]; // [rsp+68h] [rbp-F8h] BYREF
  __int16 v26; // [rsp+88h] [rbp-D8h]
  _BYTE v27[32]; // [rsp+98h] [rbp-C8h] BYREF
  __int16 v28; // [rsp+B8h] [rbp-A8h]
  _BYTE v29[32]; // [rsp+C8h] [rbp-98h] BYREF
  __int16 v30; // [rsp+E8h] [rbp-78h]
  void **v31; // [rsp+F8h] [rbp-68h] BYREF
  __int16 v32; // [rsp+118h] [rbp-48h]

  v8 = *(_QWORD *)(a1 + 64);
  v9 = **(_QWORD **)(v8 + 8);
  v18 = *(_QWORD *)(v8 + 8);
  v28 = 257;
  v10 = *(__int64 (__fastcall **)(__int64, void ***))(v9 + 96);
  v26 = 257;
  v30 = 257;
  v11 = *(_BYTE **)(v8 + 488);
  v23[0] = a1 + 1056;
  v12 = *(_QWORD *)(v8 + 496);
  v24 = 260;
  sub_1130220(v21, v11, v12, (__int64)v23, (__int64)v25, (__int64)v27, (__int64)v29);
  v31 = v21;
  v32 = 260;
  result = v10(v18, &v31);
  if ( v21[0] != &v22 )
  {
    v19 = result;
    operator delete(v21[0]);
    result = v19;
  }
  if ( (_BYTE)result )
  {
    v14 = *a4;
    v15 = *a4 + 16LL * *((unsigned int *)a4 + 2);
    if ( v14 == v15 )
    {
LABEL_9:
      v16 = *a5;
      v17 = *a5 + 16LL * *((unsigned int *)a5 + 2);
      if ( *a5 == v17 )
      {
        return 0;
      }
      else
      {
        while ( 1 )
        {
          result = sub_1227920(a1, a2, a3, *(_BYTE **)v16, *(_QWORD *)(v16 + 8), 1u);
          if ( (_BYTE)result )
            break;
          v16 += 16;
          if ( v17 == v16 )
            return 0;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        result = sub_1227920(a1, a2, a3, *(_BYTE **)v14, *(_QWORD *)(v14 + 8), 0);
        if ( (_BYTE)result )
          break;
        v14 += 16;
        if ( v15 == v14 )
          goto LABEL_9;
      }
    }
  }
  return result;
}
