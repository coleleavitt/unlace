unsigned __int64 __fastcall sub_422110(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  _BYTE _0[1024]; // [rsp+0h] [rbp+0h] BYREF
  char vars400; // [rsp+400h] [rbp+400h] BYREF
  unsigned __int64 vars408; // [rsp+408h] [rbp+408h]

  v1 = *(unsigned int *)(a1 + 136);
  vars408 = __readfsqword(0x28u);
  v3 = pack_dd(_0, &vars400, v1);
  if ( 2 * *(_DWORD *)(a1 + 136) )
  {
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(a1 + 8 * v4++ + 8);
      v3 = pack_dq(v3, &vars400, v5);
    }
    while ( (unsigned int)v4 < 2 * *(_DWORD *)(a1 + 136) );
  }
  sub_632C30(*(_QWORD *)a1, 70, _0, v3 - (_QWORD)_0);
  return vars408 - __readfsqword(0x28u);
}
