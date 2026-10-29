__int64 __fastcall sub_969220(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char v5; // al
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int *v13; // rbp
  int v14; // eax
  bool v15; // zf
  unsigned int v16; // [rsp+Ch] [rbp-2Ch]

  v5 = sub_15D2CB0(*(_QWORD *)(a1 + 104), a2);
  v6 = *(_QWORD *)(a1 + 104);
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 8832);
    if ( v7 )
    {
      v8 = (unsigned int)*a2;
      if ( (unsigned int)v8 < *(_DWORD *)(v7 - 4) )
      {
        v9 = *(_DWORD *)(v7 + 4 * v8);
        if ( v9 != 0x7FFFFFFF )
          return (unsigned int)(*(_QWORD *)(v6 + 856) == (_QWORD)a3) + 2 * v9;
      }
    }
  }
  if ( (unsigned __int8)sub_15D2CB0(v6, a2) )
  {
    sub_B6CE00(a1);
    return (unsigned int)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL) != (_QWORD)a3)
         + 2 * *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * (unsigned int)*a2);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 104);
    v12 = sub_8E7230(a1, a2, a3);
    v13 = (unsigned int *)v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    sub_B6CE00(a1);
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8832) + 4LL * *v13);
    v15 = v13[2]-- == 1;
    result = (unsigned int)(2 * v14 + 1);
    if ( v15 )
    {
      v16 = result;
      sub_15D7BC0(v11, v13);
      return v16;
    }
  }
  return result;
}

