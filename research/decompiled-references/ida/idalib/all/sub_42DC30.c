unsigned __int64 __fastcall sub_42DC30(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int8 *v5; // r14
  unsigned int v6; // ebx
  __int64 i; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v12; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v13[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v12 = a2;
  v14 = __readfsqword(0x28u);
  v5 = (unsigned __int8 *)&unk_23ADB08;
  do
  {
    v6 = *v5;
    for ( i = sub_7BEB80(&v12, a1, *v5); i != -1; i = sub_7BEBF0(&v12, a1, i, v6) )
    {
      v8 = sub_5082D0(v12, i, v6);
      if ( v8 != -1 && v8 >= *a3 && v8 < a3[1] )
      {
        v13[0] = 16909060;
        v13[1] = a4 + v8;
        netnode_supset(v12, i, v13, 16, v6, v9);
      }
    }
    ++v5;
  }
  while ( v5 != (unsigned __int8 *)&unk_23ADB0A );
  return v14 - __readfsqword(0x28u);
}
