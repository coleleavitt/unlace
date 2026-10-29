__int64 __fastcall sub_837C90(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  void *v7; // rsi
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  bool v11; // zf
  void *v13; // [rsp+10h] [rbp-68h] BYREF
  __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v16 = 0;
  ptr = nullptr;
  if ( !a4 )
  {
    v7 = nullptr;
    v8 = 0;
    if ( !a2 )
      return v8;
    goto LABEL_3;
  }
  ptr = (void *)qvector_reserve(&ptr, 0, a4, 1);
  v7 = ptr;
  *(_QWORD *)&v16 = a4;
  if ( a2 )
  {
LABEL_3:
    v8 = 0;
    while ( 1 )
    {
      v9 = a2;
      if ( a4 <= a2 )
        v9 = a4;
      v10 = qlread(a1, v7, v9);
      if ( v10 > 0 )
      {
        v11 = *(_QWORD *)(a3 + 16) == 0;
        v14 = v10;
        v13 = ptr;
        if ( v11 )
          std::__throw_bad_function_call();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, __int64 *))(a3 + 24))(a3, &v13, &v14) )
        {
          v7 = ptr;
          v8 = -1;
          goto LABEL_12;
        }
      }
      v7 = ptr;
      v8 += v10;
      if ( v9 != v10 )
        break;
      a2 -= v9;
      if ( !a2 )
        goto LABEL_12;
    }
    if ( v10 < 0 )
      v8 = -1;
    goto LABEL_12;
  }
  v8 = 0;
LABEL_12:
  if ( v7 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v7);
  }
  return v8;
}
