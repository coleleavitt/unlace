_QWORD *__fastcall sub_22905D0(_QWORD *a1, __int64 a2, size_t *a3)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // ebp
  std::_V2 *v8; // rdi
  __int64 v10; // rbx
  int *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-70h]
  size_t v14[4]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v15; // [rsp+30h] [rbp-48h]

  *(_BYTE *)a2 = 1;
  v15 = 260;
  v14[0] = a2 + 8;
  v5 = sub_228C110(v14, a3);
  v13 = v6;
  if ( v5 && (v14[0] = a2 + 8, v15 = 260, v7 = sub_228D2A0(v14, a3), v13 = v12, v7) )
  {
    v14[0] = a2 + 8;
    v15 = 260;
    sub_2288820(v14);
    sub_2296EA0(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  }
  else
  {
    v7 = 0;
    sub_2296EA0(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    sub_99BDC0((_QWORD *)(a2 + 8), 0, *(_QWORD *)(a2 + 16), &byte_22F0C30, 0);
  }
  v8 = (std::_V2 *)*(unsigned int *)(a2 + 40);
  if ( close((int)v8) == -1 )
  {
    v10 = std::_V2::generic_category(v8);
    v11 = __errno_location();
    sub_2220500(a1, *v11, v10);
  }
  else
  {
    *(_DWORD *)(a2 + 40) = -1;
    sub_2220500(a1, v7, v13);
  }
  return a1;
}
