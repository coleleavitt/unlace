__int64 __fastcall generate_disassembly(__int64 a1, int *a2, __int64 a3, signed int a4, char a5)
{
  int v5; // r14d
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[13]; // [rsp+0h] [rbp-318h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-2B0h]
  void *ptr; // [rsp+248h] [rbp-D0h]
  __int64 v20; // [rsp+250h] [rbp-C8h]
  unsigned __int64 v21; // [rsp+2D8h] [rbp-40h]

  v5 = a3;
  v21 = __readfsqword(0x28u);
  v8 = qword_2CCB598;
  v9 = sub_3BE900(*(_QWORD *)(qword_2CCB598 + 1672), a3, 0);
  sub_573180((unsigned int)v17, *(_QWORD *)(v8 + 632), v8 + 928, v8 + 1072, v5, v9, 0, 0);
  v17[12] = a1;
  v10 = dword_2C81AB4;
  if ( (int)dword_2C81AB4 > a4 )
    v10 = a4;
  v18 = v10;
  v13 = sub_383E00((__int64)v17, a2, a5);
  v17[0] = &off_2BF9800;
  if ( ptr )
  {
    v20 = 0;
    qfree(ptr);
  }
  sub_571590(v17, a2, v11, v12, v14, v15);
  return v13;
}
