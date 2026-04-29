__int64 __fastcall sub_2B1030(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v4; // r12
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v4 = *(_BYTE *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 8);
  v12 = __readfsqword(0x28u);
  v10 = 0;
  v11 = 0;
  v7 = sub_2B0DF0(a1, v5, 0);
  if ( netnode_qgetblob(v7, &v10, 1, a3, v4) <= 0 )
    v8 = 0;
  else
    v8 = sub_2B0F70((_QWORD *)a2, a1, &v10, 0.0);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  return v8;
}
