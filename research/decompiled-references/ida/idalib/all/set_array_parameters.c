unsigned __int64 __fastcall set_array_parameters(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r9
  _BYTE v8[15]; // [rsp+9h] [rbp-3Fh] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v9[0] = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = pack_dd(v8, v9, *a2);
    v3 = pack_dd(v2, v9, a2[1]);
    v4 = pack_dd(v3, v9, a2[2]);
    v5 = ea2node(a1);
    netnode_supset(v5, 5, v8, v4 - (_QWORD)v8, 83, v6);
  }
  return v9[0] - __readfsqword(0x28u);
}
