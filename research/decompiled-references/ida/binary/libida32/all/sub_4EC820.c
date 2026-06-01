__int64 __fastcall sub_4EC820(unsigned int *a1, unsigned int *a2)
{
  __int64 (__fastcall *v2)(unsigned int *, _BYTE *, _BYTE *); // rax
  __int64 v3; // rax
  __int64 v5; // rax
  _BYTE v6[1024]; // [rsp+0h] [rbp-428h] BYREF
  _BYTE v7[8]; // [rsp+400h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( *((_QWORD *)a1 + 6) )
  {
    v2 = *((__int64 (__fastcall **)(unsigned int *, _BYTE *, _BYTE *))a1 + 7);
    if ( v2 )
    {
      v3 = v2(a2, v6, v7);
      if ( !(unsigned __int8)netnode_supset(*a1, *a2, v6, v3, 339) )
        return 0;
      v5 = netnode_supval(*a1, *a2, v6, 1024, 339);
      if ( v5 <= 0 )
        return 0;
      (*((void (__fastcall **)(unsigned int *, _BYTE *, _BYTE *))a1 + 6))(a2, v6, &v6[v5]);
    }
  }
  return 1;
}

