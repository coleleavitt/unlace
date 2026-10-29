__int64 __fastcall sub_693900(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ebp
  _QWORD **v13; // rsi
  __int64 v14; // rdi
  _QWORD v16[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = *a1;
  v16[1] = __readfsqword(0x28u);
  v16[0] = 0;
  LODWORD(v16[0]) = sub_6180E0(*v6, a2, a3, a4, a5, a6);
  v11 = sub_618160(**a1, a2, v7, v8, v9, v10);
  v12 = *((unsigned __int8 *)a1 + 40);
  v13 = a1 + 1;
  HIDWORD(v16[0]) = v11;
  v14 = **a1;
  if ( (_BYTE)v12 )
    sub_79A4E0(v14, v13, v16, 1);
  else
    LOBYTE(v12) = (unsigned int)sub_79A4E0(v14, v13, v16, 0) == 0;
  return v12;
}

