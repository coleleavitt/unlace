unsigned __int64 __fastcall set_xrefpos(unsigned int a1, unsigned int *a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  _BYTE *v5; // rbx
  unsigned int v6; // eax
  _BYTE v8[6]; // [rsp+2h] [rbp-36h] BYREF
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a2;
  v9[0] = __readfsqword(0x28u);
  v4 = ea2node(v3);
  v5 = (_BYTE *)pack_dd(v8, v9, v4);
  if ( v5 < (_BYTE *)v9 )
    *v5++ = *((_BYTE *)a2 + 4);
  v6 = ea2node(a1);
  netnode_supset(v6, 27, v8, v5 - v8, 83);
  return v9[0] - __readfsqword(0x28u);
}

