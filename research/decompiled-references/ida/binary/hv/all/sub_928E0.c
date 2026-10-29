__int64 __fastcall sub_928E0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  void *v8; // rsi
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rbx
  bool v12; // zf
  void *v14; // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+28h] [rbp-50h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v17 = 0;
  ptr = nullptr;
  if ( !a4 )
  {
    v8 = nullptr;
    v9 = 0;
    if ( !a2 )
      return v9;
    goto LABEL_3;
  }
  ptr = (void *)sub_96080(&ptr, 0, a4, 1);
  v8 = ptr;
  *(_QWORD *)&v17 = a4;
  if ( a2 )
  {
LABEL_3:
    v9 = 0;
    while ( 1 )
    {
      v10 = a2;
      if ( a4 <= a2 )
        v10 = a4;
      v11 = sub_923E0(a1, v8, v10, a4, a5);
      if ( v11 > 0 )
      {
        v12 = *(_QWORD *)(a3 + 16) == 0;
        v15 = v11;
        v14 = ptr;
        if ( v12 )
          std::__throw_bad_function_call();
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, __int64 *))(a3 + 24))(a3, &v14, &v15) )
        {
          v8 = ptr;
          v9 = -1;
          goto LABEL_12;
        }
      }
      v8 = ptr;
      v9 += v11;
      if ( v10 != v11 )
        break;
      a2 -= v10;
      if ( !a2 )
        goto LABEL_12;
    }
    if ( v11 < 0 )
      v9 = -1;
    goto LABEL_12;
  }
  v9 = 0;
LABEL_12:
  if ( v8 )
  {
    *(_QWORD *)&v17 = 0;
    j__free(v8);
  }
  return v9;
}

