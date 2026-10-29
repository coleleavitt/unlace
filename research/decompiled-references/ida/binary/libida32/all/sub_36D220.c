__int64 __fastcall sub_36D220(__int64 *a1, __int64 *a2, int *a3)
{
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  bool v8; // zf
  __int64 result; // rax
  int v10; // [rsp+0h] [rbp-68h] BYREF
  int v11; // [rsp+4h] [rbp-64h] BYREF
  __int64 v12; // [rsp+8h] [rbp-60h] BYREF
  __int64 v13; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v15[9]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a3;
  v4 = *a2;
  v15[1] = __readfsqword(0x28u);
  v5 = *a1;
  if ( v3 == 1 )
  {
    v8 = *(_QWORD *)(v5 + 16) == 0;
    v12 = v4;
    v13 = v4;
    v10 = 1;
    if ( v8 )
      goto LABEL_11;
    return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, int *))(v5 + 24))(v5, &v12, &v13, &v10);
  }
  else
  {
    v6 = v4 + 1;
    v7 = v4 + v3;
    if ( v4 + 1 < v7 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v5 + 16) == 0;
        v14 = v6;
        v15[0] = v4;
        v11 = v3;
        if ( v8 )
          break;
        result = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, int *))(v5 + 24))(v5, &v14, v15, &v11);
        if ( (_DWORD)result )
          return result;
        if ( ++v6 >= v7 )
          return 0;
      }
LABEL_11:
      std::__throw_bad_function_call();
    }
    return 0;
  }
}

