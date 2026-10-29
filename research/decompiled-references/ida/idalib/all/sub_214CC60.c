__int64 __fastcall sub_214CC60(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v7; // r13
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD *v16; // r12
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rdi
  __int64 v23; // [rsp+10h] [rbp-128h]
  _QWORD v24[4]; // [rsp+40h] [rbp-F8h] BYREF
  __int16 v25; // [rsp+60h] [rbp-D8h]
  _QWORD *v26; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+78h] [rbp-C0h]
  _QWORD *v28; // [rsp+80h] [rbp-B8h]
  __int64 v29; // [rsp+88h] [rbp-B0h]
  __int16 v30; // [rsp+90h] [rbp-A8h]
  _QWORD v31[4]; // [rsp+A0h] [rbp-98h] BYREF
  char v32; // [rsp+C0h] [rbp-78h]
  char v33; // [rsp+C1h] [rbp-77h]
  _QWORD v34[4]; // [rsp+D0h] [rbp-68h] BYREF
  __int16 v35; // [rsp+F0h] [rbp-48h]

  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  result = *(unsigned int *)(v10 + 68);
  if ( a7 != (_DWORD)result )
  {
    v16 = a2;
    v18 = sub_22B75A0(v10 + 24, a2);
    if ( a5 )
    {
      LOBYTE(v23) = 32;
      v24[2] = a4;
      v24[0] = v23;
      v26 = a2;
      v16 = &v26;
      v28 = v24;
      v20 = 2;
      v24[3] = a5;
      v25 = 1288;
      v27 = a3;
      v29 = 0;
      v30 = 517;
    }
    else
    {
      v26 = a2;
      v7 = a3;
      v25 = 257;
      v20 = 5;
      v27 = a3;
      v30 = 261;
    }
    v32 = v20;
    v21 = *(_QWORD *)(a1 + 8);
    v34[0] = v31;
    v31[2] = " used while targeting ";
    v34[3] = v19;
    v35 = 1282;
    v31[0] = v16;
    v31[1] = v7;
    v33 = 3;
    v34[1] = 0;
    v34[2] = v18;
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v21 + 136LL))(
               v21,
               a6,
               v34,
               0,
               0);
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    v34[0] = "overriding previous version directive";
    v35 = 259;
    (*(void (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v12 + 136LL))(v12, a6, v34, 0, 0);
    v13 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(a1 + 24);
    v35 = 259;
    v34[0] = "previous definition is here";
    result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v13 + 128LL))(
               v13,
               v14,
               v34,
               0,
               0);
  }
  *(_QWORD *)(a1 + 24) = a6;
  return result;
}
