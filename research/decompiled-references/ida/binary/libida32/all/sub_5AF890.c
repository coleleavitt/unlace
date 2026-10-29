unsigned __int64 __fastcall sub_5AF890(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned int *v8; // rax
  bool v9; // zf
  int v10; // eax
  unsigned int *v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v3 = *a1;
  v13 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v3 + 1424);
  if ( !*(_BYTE *)(v4 + 48) )
  {
    sub_5AF6C0(v4);
    v4 = *(_QWORD *)(*a1 + 1424);
  }
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v4 + 24);
    v7 = 0;
    while ( 1 )
    {
      if ( v7 < v6
        && (v8 = sub_4EE820((__int64)(a1 + 203), *(unsigned int *)(*(_QWORD *)(v4 + 16) + 8 * v7))) != nullptr )
      {
        if ( *((char *)v8 + 9) < 0 )
          v8 = sub_4EE820((__int64)(a1 + 203), v8[4]);
      }
      else
      {
        v8 = nullptr;
      }
      v9 = *(_QWORD *)(a2 + 16) == 0;
      v12 = v8;
      if ( v9 )
        std::__throw_bad_function_call();
      ++v7;
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned int **))(a2 + 24))(a2, &v12);
      if ( v7 >= v5 || v10 )
        break;
      v4 = *(_QWORD *)(*a1 + 1424);
      v6 = *(_QWORD *)(v4 + 24);
    }
  }
  return v13 - __readfsqword(0x28u);
}

