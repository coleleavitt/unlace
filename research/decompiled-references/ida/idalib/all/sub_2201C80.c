__int64 __fastcall sub_2201C80(__int64 *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // dl
  char v6; // cl
  __int64 v7; // r15
  char v8; // r13
  char v9; // r13
  int v10; // ebp
  __int64 v11[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( (_UNKNOWN *)*a1 == &unk_26F7B20 )
    return sub_22018C0((__int64)a1, (__int64 *)a2, a3);
  *((_BYTE *)a1 + 20) = (*((_BYTE *)a1 + 20) ^ *(_BYTE *)(a2 + 20)) & 8 | *((_BYTE *)a1 + 20) & 0xF7;
  result = sub_21FD510((__int64)a1, a2);
  v5 = *((_BYTE *)a1 + 20);
  v6 = v5 & 7;
  if ( (v5 & 7) == 3 )
  {
    if ( *(_DWORD *)(*a1 + 20) != 2 )
      return result;
    v5 &= ~8u;
    *((_BYTE *)a1 + 20) = v5;
    v6 = v5 & 7;
  }
  if ( (v5 & 6) != 0 && v6 != 3 )
  {
    v7 = *a1;
    v8 = *(_BYTE *)(*a1 + 24);
    sub_21F9140(v11, *a1);
    v9 = v8 ^ 1;
    if ( *(_BYTE *)(v7 + 24) )
      sub_21FB9A0(v11, 0);
    else
      sub_21FAB90(v11, 0);
    v10 = sub_21FE060((__int64)a1, a2, (__int64)v11, v9);
    sub_21F9170(v11);
    result = sub_21FAF10((__int64)a1, a3, v10);
    if ( v10 )
      return (unsigned int)result | 0x10;
  }
  return result;
}
