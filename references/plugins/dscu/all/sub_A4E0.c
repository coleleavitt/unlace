__int64 __fastcall sub_A4E0(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, _BYTE *))
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  unsigned int v7; // [rsp+Ch] [rbp-6Ch]
  _BYTE v8[32]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int128 v10; // [rsp+38h] [rbp-40h]
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 104);
  v11 = __readfsqword(0x28u);
  v4 = netnode_supfirst(v3, 114);
  if ( v4 == -1 )
    return 0;
  v5 = v4;
  while ( 1 )
  {
    v9 = 0;
    v10 = 0;
    if ( (unsigned __int8)sub_A390(a1, (__int64)v8, v5) )
    {
      result = (**a2)(a2, v8);
      if ( (_DWORD)result )
        break;
    }
    if ( v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree(v9);
    }
    v5 = netnode_supnext(*(_QWORD *)(a1 + 104), v5, 114);
    if ( v5 == -1 )
      return 0;
  }
  if ( v9 )
  {
    v7 = result;
    *(_QWORD *)&v10 = 0;
    qfree(v9);
    return v7;
  }
  return result;
}
