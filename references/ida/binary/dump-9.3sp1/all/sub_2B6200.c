__int64 __fastcall sub_2B6200(__int64 a1, __int64 a2)
{
  unsigned __int8 (__fastcall **v2)(__int64); // rax
  unsigned __int8 (__fastcall **v3)(__int64); // rax
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v2 = *(unsigned __int8 (__fastcall ***)(__int64))a2;
  v7 = __readfsqword(0x28u);
  if ( (*v2)(a2) )
  {
    sub_2B61B0(a1, *(_QWORD *)(a2 + 8), 0);
    return netnode_delblob();
  }
  else
  {
    v3 = *(unsigned __int8 (__fastcall ***)(__int64))a2;
    v5 = 0;
    v6 = 0;
    ((void (__fastcall *)(__int64, __int64 *))v3[1])(a2, &v5);
    sub_2B61B0(a1, *(_QWORD *)(a2 + 8), 1);
    netnode_setblob();
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v5);
    }
    return v7 - __readfsqword(0x28u);
  }
}
