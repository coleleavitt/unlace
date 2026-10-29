__int64 __fastcall sub_3C37D0(_QWORD *a1, __int64 a2, _DWORD *a3, int a4, unsigned int a5)
{
  int v6; // ebx
  __int64 v8; // r8
  int v10; // [rsp+Ch] [rbp-DCh] BYREF
  unsigned __int8 v11[168]; // [rsp+10h] [rbp-D8h] BYREF
  unsigned __int64 v12; // [rsp+B8h] [rbp-30h]

  v6 = a4;
  v12 = __readfsqword(0x28u);
  if ( a4 != -1 )
    v6 = sub_614FB0(*a1, 29) + a4;
  v10 = v6;
  v8 = sub_79B5C0(&v10, *a1, a5, v11, 165, 83);
  if ( v8 > 0 )
    return sub_3C3450(a1, a2, a3, v11, v8);
  if ( a3 )
    *a3 = 0;
  return 0;
}

