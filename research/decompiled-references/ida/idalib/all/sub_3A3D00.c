__int64 __fastcall sub_3A3D00(__int64 *a1, _DWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // r15
  int v10; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  v5 = *a1;
  v11 = __readfsqword(0x28u);
  v10 = 0;
  v7 = *(_QWORD *)(v5 + 1536);
  do
  {
    v8 = sub_3A38C0(v7, a3, a4, (unsigned int *)&v10, 3);
    if ( v8 != -1 )
    {
      if ( a2 )
        *a2 = dword_23AD7A0[v10];
      return v8;
    }
    ++v10;
  }
  while ( v10 <= 13 );
  if ( !a3 && a4 == -1 )
  {
    v10 = *(_DWORD *)(v7 + 148) | 0x3FFF;
    sub_3A2DF0((unsigned int *)(v7 + 148), (unsigned int *)&v10, 0x74u);
    *(_DWORD *)(v7 + 120) = 2;
  }
  return v8;
}
