__int64 __fastcall sub_76C570(_QWORD *a1, unsigned __int64 a2, unsigned int *a3)
{
  __int64 v3; // rdx
  __int16 *v4; // rbx
  int v6; // r13d
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned int v9; // eax
  int v10; // [rsp+0h] [rbp-58h]
  unsigned int v11; // [rsp+4h] [rbp-54h]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a1[1];
  v13[1] = __readfsqword(0x28u);
  v4 = (__int16 *)(*a1 + v3 - 2);
  if ( *v4 > 0 )
  {
    v13[0] = a1[3] + *a1;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v10 = unpack_dd(v13);
    if ( v10 > 0 )
    {
      while ( v13[0] < (unsigned __int64)v4 )
      {
        v8 += unpack_dd(v13);
        v7 += unpack_dd(v13);
        v11 = unpack_dd(v13);
        v9 = unpack_dd(v13);
        if ( a2 >= v8 && a2 < v7 )
        {
          a3[3] = v9;
          *a3 = v8;
          a3[1] = v7;
          a3[2] = v11;
          return 1;
        }
        if ( v10 == ++v6 )
          return 0;
      }
    }
  }
  return 0;
}

