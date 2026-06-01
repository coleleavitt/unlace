_QWORD *__fastcall sub_2290280(_QWORD *a1, __int64 a2)
{
  std::_V2 *v3; // rdi
  __int64 v4; // r14
  int v5; // ebp
  int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rbx
  int *v10; // rax
  size_t v11[4]; // [rsp+0h] [rbp-68h] BYREF
  __int16 v12; // [rsp+20h] [rbp-48h]

  v3 = (std::_V2 *)*(unsigned int *)(a2 + 40);
  *(_BYTE *)a2 = 1;
  if ( (_DWORD)v3 == -1 || close((int)v3) != -1 )
  {
    *(_DWORD *)(a2 + 40) = -1;
    v4 = std::_V2::system_category(v3);
    if ( *(_QWORD *)(a2 + 16) )
    {
      v11[0] = a2 + 8;
      v12 = 260;
      v7 = sub_2288820(v11);
      v4 = v8;
      v5 = v7;
      sub_2296EA0(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
      if ( !v7 )
        sub_99BDC0((_QWORD *)(a2 + 8), 0, *(_QWORD *)(a2 + 16), &byte_22F0C30, 0);
    }
    else
    {
      v5 = 0;
      sub_99BDC0((_QWORD *)(a2 + 8), 0, 0, &byte_22F0C30, 0);
    }
    sub_2220500(a1, v5, v4);
  }
  else
  {
    v9 = std::_V2::generic_category(v3);
    v10 = __errno_location();
    sub_2220500(a1, *v10, v9);
  }
  return a1;
}
