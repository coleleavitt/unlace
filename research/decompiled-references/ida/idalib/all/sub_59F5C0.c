unsigned __int64 __fastcall sub_59F5C0(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  int v7; // [rsp+10h] [rbp-48h]
  __int64 v8; // [rsp+18h] [rbp-40h] BYREF
  int v9; // [rsp+20h] [rbp-38h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v1 = a1[1];
  v10 = __readfsqword(0x28u);
  v2 = (_QWORD *)*a1;
  if ( 8 * v1 )
  {
    do
    {
      v3 = *v2;
      v4 = ea2node(*v2);
      if ( (unsigned __int64)netnode_supval(v4, 5, &v6, 12, 83) > 0xB )
      {
        v8 = v6;
        v9 = v7;
        set_array_parameters(v3, &v8);
      }
      ++v2;
    }
    while ( v2 != (_QWORD *)(*a1 + 8LL * a1[1]) );
  }
  return v10 - __readfsqword(0x28u);
}
