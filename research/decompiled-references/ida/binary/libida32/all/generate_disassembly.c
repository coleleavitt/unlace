__int64 __fastcall generate_disassembly(__int64 a1, int *a2, unsigned int a3, signed int a4, char a5)
{
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD v17[13]; // [rsp+0h] [rbp-258h] BYREF
  unsigned int v18; // [rsp+68h] [rbp-1F0h]
  void *ptr; // [rsp+1B0h] [rbp-A8h]
  __int64 v20; // [rsp+1B8h] [rbp-A0h]
  unsigned __int64 v21; // [rsp+218h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v8 = qword_2CA1698;
  v9 = sub_3B9AA0(*(_QWORD *)(qword_2CA1698 + 1480), a3, 0);
  sub_559680((unsigned int)v17, *(_QWORD *)(v8 + 544), v8 + 760, v8 + 904, a3, v9, 0, 0);
  v17[12] = a1;
  v10 = dword_2C57A94;
  if ( (int)dword_2C57A94 > a4 )
    v10 = a4;
  v18 = v10;
  v13 = sub_380280(v17, a2, a5);
  v17[0] = &off_2BCF860;
  if ( ptr )
  {
    v20 = 0;
    qfree(ptr);
  }
  sub_557A80(v17, a2, v11, v12, v14, v15);
  return v13;
}

