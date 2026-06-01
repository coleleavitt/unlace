_QWORD *__fastcall sub_226BE20(
        _QWORD *a1,
        _QWORD **a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        volatile signed __int32 **a7)
{
  volatile signed __int32 *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-30h]
  _QWORD *v15; // [rsp+10h] [rbp-20h] BYREF
  volatile signed __int32 *v16; // [rsp+18h] [rbp-18h] BYREF
  __int64 *v17; // [rsp+20h] [rbp-10h] BYREF

  v8 = *a7;
  *a7 = nullptr;
  v9 = *a2;
  *a2 = nullptr;
  v16 = v8;
  v15 = v9;
  sub_226B960(&v17, &v15, a3, a4, a5, a6, &v16);
  v10 = v15;
  *a1 = v17;
  v11 = v14;
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *, _QWORD **))(*v10 + 8LL))(v10, &v15);
  v12 = v16;
  if ( !v16 || _InterlockedSub(v16 + 2, 1u) )
    return a1;
  (*(void (__fastcall **)(volatile signed __int32 *, _QWORD **, __int64))(*(_QWORD *)v12 + 8LL))(v12, &v15, v11);
  return a1;
}
