__int64 __fastcall sub_6B40D0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned int v12; // ebp
  _QWORD **v13; // rsi
  __int64 v14; // rdi
  __int128 v16; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v6 = *a1;
  v17 = __readfsqword(0x28u);
  v16 = 0;
  *(_QWORD *)&v16 = sub_634EF0(*v6, a2, a3, a4, a5, a6);
  v11 = sub_634F70(**a1, a2, v7, v8, v9, v10);
  v12 = *((unsigned __int8 *)a1 + 40);
  v13 = a1 + 1;
  *((_QWORD *)&v16 + 1) = v11;
  v14 = **a1;
  if ( (_BYTE)v12 )
    sub_7BD850(v14, v13, &v16, 1);
  else
    LOBYTE(v12) = (unsigned int)sub_7BD850(v14, v13, &v16, 0) == 0;
  return v12;
}
