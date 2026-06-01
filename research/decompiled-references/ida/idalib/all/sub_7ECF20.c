__int64 __fastcall sub_7ECF20(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r15
  unsigned int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-58h]
  _QWORD v13[9]; // [rsp+10h] [rbp-48h] BYREF

  v13[1] = __readfsqword(0x28u);
  v3 = *a2;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v13[0] = *a2;
  v5 = unpack_dd(v13);
  v6 = v13[0];
  v7 = v5;
  if ( v3 >= v13[0] )
    return 0;
  v8 = v5;
  sub_787E10((__int64 *)(a1 + 16), v5);
  if ( v7 )
  {
    v9 = 0;
    v12 = 4 * v8;
    do
    {
      v10 = *(_QWORD *)(a1 + 16);
      v13[0] = v6;
      *(_DWORD *)(v9 + v10) = unpack_dd(v13);
      v11 = v6;
      v6 = v13[0];
      if ( v11 >= v13[0] )
        return 0;
      v9 += 4;
    }
    while ( v9 != v12 );
  }
  *a2 = v6;
  return 1;
}
