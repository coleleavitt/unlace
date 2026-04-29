char __fastcall sub_1EBCF0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // cl
  char result; // al
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  v11[3] = __readfsqword(0x28u);
  result = 1;
  if ( v3 == 1 )
  {
    if ( *(_DWORD *)a2 > 7u )
      return *(_QWORD *)(a1 + 40) == a3;
  }
  else if ( *(_QWORD *)(a1 + 40) != a3 )
  {
    result = 0;
    if ( v3 == 5 )
    {
      v5 = *(int *)(a1 + 116);
      v6 = *(_QWORD *)a2;
      v7 = *(_QWORD *)(a1 + 136);
      result = *(_QWORD *)a2 >= v7 && v5 != 0;
      if ( !result || v5 + v7 - 1 < v6 )
      {
        v8 = *(int *)(a2 + 12);
        if ( (int)v8 <= 0 )
          v8 = 1;
        v9 = *(_QWORD *)(a1 + 1440) + v6;
        v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL);
        v11[1] = v8;
        v11[0] = *(_QWORD *)(v10 + 16) & v9;
        return sub_312D70(a1 + 232, v11, 0);
      }
    }
  }
  return result;
}
