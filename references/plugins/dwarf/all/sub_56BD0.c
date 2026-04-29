__int64 __fastcall sub_56BD0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned int v6; // ebx
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  int v9; // [rsp+10h] [rbp-48h]
  unsigned int v10; // [rsp+14h] [rbp-44h]
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+38h] [rbp-20h]
  unsigned __int64 v14; // [rsp+48h] [rbp-10h]

  v2 = a1[1];
  v14 = __readfsqword(0x28u);
  v3 = (_QWORD *)*a1;
  v4 = *a1 + 8 * v2;
  v5 = (_QWORD *)*a1;
  if ( *a1 != v4 )
  {
    do
    {
      if ( a2 == *v5 )
        break;
      ++v5;
    }
    while ( (_QWORD *)v4 != v5 );
  }
  v8[1] = a1;
  v8[0] = off_C84C8;
  v9 = v5 - v3;
  v10 = 0;
  v11[0] = a2;
  v11[1] = v8;
  v12 = 0;
  v13 = 0;
  sub_55EA0(v11, a2);
  v6 = v10;
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  return v6;
}
