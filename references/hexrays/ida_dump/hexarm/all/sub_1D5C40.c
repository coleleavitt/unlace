unsigned __int64 __fastcall sub_1D5C40(__int64 *a1, __int64 a2)
{
  unsigned int *v2; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD v9[5]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v2 = *(unsigned int **)(a1[2] + 56);
  if ( v2 )
  {
    if ( (unsigned __int8)sub_32F060(*v2, 1) )
    {
      v5 = a1[2];
      v9[1] = 0;
      *(_QWORD *)(v5 + 40) = a2;
      v6 = a1[2];
      memset(&v9[2], 0, 24);
      v9[0] = off_4D8A98;
      v10 = 0;
      v12 = 0;
      v11 = 0;
      sub_31F180(v6, v9);
      v7 = sub_679D0(a1[1], a1[5], 2);
      v8 = v10;
      a1[2] = v7;
      v9[0] = off_4D8A98;
      if ( v8 )
      {
        *(_QWORD *)&v11 = 0;
        qfree(v8);
      }
    }
  }
  return v13 - __readfsqword(0x28u);
}
