__int64 __fastcall sub_1AAAFC0(__int64 *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  unsigned __int64 *v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  int v9; // r15d
  int v10; // ebp
  _QWORD *v11; // rax
  unsigned __int64 v12; // [rsp+0h] [rbp-40h] BYREF

  if ( (unsigned __int64)a1[2] <= 1 )
    return a1[2];
  v4 = *(_QWORD *)(sub_168B6C0(*a1) + 2320);
  result = 1;
  if ( (*(_BYTE *)(v4 + 20) & 4) != 0 )
  {
    v5 = a1[2] & 0xFFFFFFFFFFFFFFFELL;
    if ( ((*(_WORD *)v5 + 509) & 0x1FFu) <= 0x7E )
    {
      v8 = *(_QWORD *)(v5 + 8);
      v12 = a1[2] & 0xFFFFFFFFFFFFFFFELL;
      v6 = &v12;
      v7 = 1;
    }
    else
    {
      v6 = nullptr;
      v7 = 0;
      v8 = *(_QWORD *)(sub_168B6C0(*a1) + 19072);
      v5 = a1[2] & 0xFFFFFFFFFFFFFFFELL;
    }
    v9 = sub_EEC140(v5);
    v10 = sub_EEB7E0(v5, a2, a3);
    v11 = (_QWORD *)sub_168B6C0(*a1);
    return sub_C09540(v11, v8, v10, v9, v6, v7);
  }
  return result;
}
