__int64 __fastcall visit_patched_bytes(
        int a1,
        int a2,
        __int64 (__fastcall *a3)(_QWORD, __int64, __int64, __int64, __int64),
        __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  __int64 v10; // rbp
  unsigned int v11; // r12d
  __int64 fileregion_offset; // rax
  __int64 result; // rax
  unsigned int v14; // [rsp+10h] [rbp-68h]
  __int64 v15; // [rsp+18h] [rbp-60h]
  __int64 v18[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = a1;
  v18[1] = __readfsqword(0x28u);
  v5 = *(_QWORD **)(qword_2CA1698 + 1480);
  if ( a1 )
    v4 = sub_3B90A0(*(_QWORD **)(qword_2CA1698 + 1480), a1);
  v6 = sub_3B9170(v5, a2);
  v7 = *v5;
  v14 = v6;
  v8 = v6;
  v9 = sub_79B770(v5 + 289, *v5, v4, 80);
  if ( v9 >= v8 )
    return 0;
  while ( 1 )
  {
    v10 = (unsigned int)sub_79B3A0(v5 + 289, v7, v9, 65);
    v11 = sub_3B9110(v5, v9);
    sub_3BA160(v5, v18, v11);
    if ( v18[0] != v10 )
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
    v9 = sub_79B840(v5 + 289, v7, v9, 80);
    if ( v9 >= v14 )
      return 0;
  }
  return result;
}

