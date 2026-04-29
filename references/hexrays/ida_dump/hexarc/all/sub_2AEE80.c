__int64 __fastcall sub_2AEE80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 (__fastcall **v3)(__int64); // rax
  unsigned __int8 (__fastcall **v5)(__int64); // rax
  unsigned __int8 v6; // r13
  __int64 v7; // rax
  __int64 v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned __int8 (__fastcall ***)(__int64))a2;
  v12 = __readfsqword(0x28u);
  if ( (*v3)(a2) )
  {
    v9 = sub_2AEE30(a1, *(_QWORD *)(a2 + 8), 0);
    return netnode_delblob(v9, a3, *(unsigned __int8 *)(a2 + 16));
  }
  else
  {
    v5 = *(unsigned __int8 (__fastcall ***)(__int64))a2;
    v10 = 0;
    v11 = 0;
    ((void (__fastcall *)(__int64, __int64 *))v5[1])(a2, &v10);
    v6 = *(_BYTE *)(a2 + 16);
    v7 = sub_2AEE30(a1, *(_QWORD *)(a2 + 8), 1);
    netnode_setblob(v7, v10, ((_QWORD)v11 == 0) + (_QWORD)v11 - 1LL, (int)a3, v6);
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10);
    }
    return v12 - __readfsqword(0x28u);
  }
}
