__int64 __fastcall sub_5C74D0(_QWORD *a1, __int64 a2, char *a3)
{
  int v3; // eax
  char *v4; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // r13
  int v8; // ebp
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  char v14; // [rsp+8h] [rbp-60h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  char v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v3 = *(_DWORD *)(a2 + 128);
  v17 = __readfsqword(0x28u);
  v4 = a3;
  if ( v3 > 0 )
  {
    if ( a3 )
      *(_QWORD *)a3 = -1;
    return -1;
  }
  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = sub_3C1F00(a1, *(_QWORD *)a2);
  v13 = -1;
  if ( !v4 )
    v4 = &v14;
  *(_QWORD *)v4 = -1;
  v8 = sub_3792E0(0x37u, a2, &v13, v4);
  if ( v6 < *(_QWORD *)(a2 + 8) )
  {
    v10 = sub_503F40((__int64)(a1 + 213), v5);
    v11 = sub_505DE0((__int64)(a1 + 213), v10);
    if ( v11 )
    {
      v12 = *v11;
      if ( v12 < *(_QWORD *)(a2 + 8) )
        *(_QWORD *)(a2 + 8) = v12;
    }
  }
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      if ( v8 >= 0 )
      {
        if ( !under_debugger )
          interr(1397);
        BUG();
      }
      return -1;
    }
  }
  else
  {
    if ( *(_QWORD *)(a2 + 8) != v7 )
      return -1;
    if ( (unsigned __int8)sub_4CCA80(a1, v5, 1u) )
      return -1;
    v16 = 0;
    v15 = -1;
    sub_3E3030(a1, (__int64)&v15, v5);
    if ( v15 == v7 )
      return -1;
    v13 = v15;
    if ( (unsigned __int8)sub_3E3220(a1, (__int64)&v15, v5) )
      return -1;
  }
  result = v13;
  if ( v13 >= *(_QWORD *)a2 && v13 < *(_QWORD *)(a2 + 8) )
    return -1;
  return result;
}
