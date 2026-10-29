unsigned __int64 __fastcall sub_419FE0(__int64 a1, unsigned int a2, unsigned int *a3, int a4)
{
  unsigned __int8 *v5; // r14
  unsigned int v6; // ebx
  unsigned int i; // r15d
  unsigned int v8; // eax
  unsigned int v11; // [rsp+Ch] [rbp-4Ch] BYREF
  _DWORD v12[2]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-40h]

  v11 = a2;
  v13 = __readfsqword(0x28u);
  v5 = (unsigned __int8 *)&unk_2389A20;
  do
  {
    v6 = *v5;
    for ( i = sub_79B7E0(&v11, a1, *v5); i != -1; i = sub_79B840(&v11, a1, i, v6) )
    {
      v8 = sub_4F0CC0(v11, i, v6);
      if ( v8 != -1 && v8 >= *a3 && v8 < a3[1] )
      {
        v12[0] = 16909060;
        v12[1] = a4 + v8;
        netnode_supset(v11, i, v12, 8, v6);
      }
    }
    ++v5;
  }
  while ( v5 != (unsigned __int8 *)&unk_2389A22 );
  return v13 - __readfsqword(0x28u);
}

