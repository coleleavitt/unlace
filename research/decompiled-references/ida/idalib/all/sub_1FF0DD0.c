__int64 __fastcall sub_1FF0DD0(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rbp
  bool v7; // zf
  __int64 v8; // r8
  __int64 v9; // r9
  void **v10; // rbp
  void **v11; // rbx
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  _QWORD v15[2]; // [rsp+10h] [rbp-58h] BYREF
  void *v16; // [rsp+20h] [rbp-48h] BYREF
  void **v17; // [rsp+28h] [rbp-40h]

  v4 = *a2;
  v5 = *a4;
  v6 = a4[1];
  v7 = *(_QWORD *)(*a2 + 16) == 0;
  v13 = *a4;
  v14 = v6;
  if ( v7
    || ((*(void (__fastcall **)(void **, __int64, __int64, __int64 *))(v4 + 24))(&v16, v4, a3, &v13),
        v7 = *(_QWORD *)(v4 + 48) == 0,
        v15[0] = v5,
        v15[1] = v6,
        v7) )
  {
    std::__throw_bad_function_call();
  }
  (*(void (__fastcall **)(__int64, __int64, void **, _QWORD *, __int64, __int64, __int64, __int64))(v4 + 56))(
    a1,
    v4 + 32,
    &v16,
    v15,
    v8,
    v9,
    v13,
    v14);
  v10 = v17;
  v11 = (void **)v16;
  if ( v17 != v16 )
  {
    do
    {
      while ( *v11 != v11 + 2 )
      {
        operator delete(*v11);
        v11 += 4;
        if ( v10 == v11 )
          goto LABEL_6;
      }
      v11 += 4;
    }
    while ( v10 != v11 );
LABEL_6:
    v11 = (void **)v16;
  }
  if ( v11 )
    operator delete(v11);
  return a1;
}
