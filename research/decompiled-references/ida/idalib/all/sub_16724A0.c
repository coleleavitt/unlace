void __fastcall sub_16724A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( *(_BYTE *)(a1 + 289) )
  {
    v9 = sub_B31190(*(_QWORD *)(a1 + 248), dword_263DA50[(unsigned __int8)a3], 0);
    v10 = sub_B35EA0(*(_QWORD *)(a1 + 248), a7, a8, v9, (a9 & 2) != 0, 0);
    sub_B8CC60(a2, v10, v11, v12, v13, v14);
  }
  else if ( (a9 & 1) != 0 )
  {
    sub_1672250(a1, a2, a3, a4);
  }
}
