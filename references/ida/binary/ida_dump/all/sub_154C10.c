__int64 __fastcall sub_154C10(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rdi
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int8 *v14[7]; // [rsp+0h] [rbp-38h] BYREF

  v14[1] = (unsigned __int8 *)__readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 4 || (v5 = *(_DWORD **)(a3 + 8), *v5 != 14) )
  {
    if ( !under_debugger )
      sub_383060(50493);
    BUG();
  }
  v8 = sub_11C8A0((__int64)v5, v14);
  if ( v8 )
  {
    v9 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL), *(unsigned int *)(v8 + 4), 1);
    if ( sub_125B60(v14[0], a4, 0) )
    {
      v11 = 1 - v9;
      if ( a3 == a1 + 32 )
        v11 = v9 - 1;
      goto LABEL_12;
    }
    if ( a3 == a1 + 48 && *(_BYTE *)a4 == 4 )
    {
      v10 = *(_QWORD *)(a4 + 8);
      if ( *(_DWORD *)v10 == 5 )
      {
        if ( sub_125B60((unsigned __int8 *)(v10 + 32), (__int64)v14[0], 0) )
        {
          v11 = v9 + 1;
LABEL_12:
          v12 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)a1 = 14;
          sub_120A10(a3, a2, v11, *(_DWORD *)(a3 + 4), v12, 0);
          return 1;
        }
      }
    }
  }
  return 0;
}
