unsigned __int64 __fastcall set_array_parameters(unsigned int a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // eax
  _BYTE v7[15]; // [rsp+9h] [rbp-3Fh] BYREF
  _QWORD v8[6]; // [rsp+18h] [rbp-30h] BYREF

  v8[0] = __readfsqword(0x28u);
  if ( a2 )
  {
    v2 = pack_dd(v7, v8, *a2);
    v3 = pack_dd(v2, v8, a2[1]);
    v4 = pack_dd(v3, v8, a2[2]);
    v5 = ea2node(a1);
    netnode_supset(v5, 5, v7, v4 - (_QWORD)v7, 83);
  }
  return v8[0] - __readfsqword(0x28u);
}

