_QWORD *__fastcall sub_1369FA0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v8; // rax
  _QWORD *v9; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v10; // [rsp+8h] [rbp-30h] BYREF

  v2 = (_QWORD *)a2[12];
  (*(void (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2);
  if ( (unsigned __int8)sub_12E9B60((__int64)v2) )
  {
    if ( v2[8] )
    {
      v3 = v2[12];
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 104);
        v5 = *(_QWORD *)(v4 + 312);
        v6 = *(_QWORD *)(v4 + 304);
        if ( v5 )
        {
          v8 = sub_12EF2D0(v2);
          sub_1FD6990(&v9, v2[8], v8, v6, v5);
          if ( v9 )
          {
            v10 = v9;
            v9 = nullptr;
            sub_A0E8E0(&v10);
            if ( v10 )
              (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
            if ( v9 )
              (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
          }
        }
      }
    }
  }
  *a1 = 0;
  return a1;
}
