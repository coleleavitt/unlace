__int64 __fastcall visit_patched_bytes(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(unsigned __int64, __int64, __int64, __int64, __int64),
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 *v5; // r13
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 fileregion_offset; // rax
  __int64 result; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-70h]
  __int64 v15; // [rsp+18h] [rbp-60h]
  __int64 v18[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  v18[1] = __readfsqword(0x28u);
  v5 = *(__int64 **)(qword_2CCB598 + 1672);
  if ( a1 )
    v4 = sub_3BDD60(*(_QWORD **)(qword_2CCB598 + 1672), a1);
  v6 = sub_3BDF40(v5, a2);
  v7 = *v5;
  v14 = v6;
  v8 = v6;
  v9 = sub_7BEB00(v5 + 300, *v5, v4, 80);
  if ( v9 >= v8 )
    return 0;
  while ( 1 )
  {
    v10 = sub_7BE710(v5 + 300, v7, v9, 65);
    v11 = sub_3BDE50(v5, v9);
    sub_3BEFF0(v5, v18, v11);
    if ( v10 != v18[0] )
    {
      if ( a3 )
      {
        v15 = v18[0];
        fileregion_offset = get_fileregion_offset(v11);
        result = a3(v11, fileregion_offset, v10, v15, a4);
        if ( (_DWORD)result )
          break;
      }
    }
    v9 = sub_7BEBF0(v5 + 300, v7, v9, 80);
    if ( v9 >= v14 )
      return 0;
  }
  return result;
}
