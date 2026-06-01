__int64 __fastcall sub_503D10(_QWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(_QWORD *, _BYTE *, _BYTE *); // rax
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v6; // rax
  _BYTE v7[1024]; // [rsp+0h] [rbp-428h] BYREF
  _BYTE v8[8]; // [rsp+400h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a1[7] )
  {
    v2 = (__int64 (__fastcall *)(_QWORD *, _BYTE *, _BYTE *))a1[8];
    if ( v2 )
    {
      v3 = v2(a2, v7, v8);
      if ( !(unsigned __int8)netnode_supset(*a1, *a2, v7, v3, 339, v4) )
        return 0;
      v6 = netnode_supval(*a1, *a2, v7, 1024, 339);
      if ( v6 <= 0 )
        return 0;
      ((void (__fastcall *)(_QWORD *, _BYTE *, _BYTE *))a1[7])(a2, v7, &v7[v6]);
    }
  }
  return 1;
}
