__int64 __fastcall sub_39F3B0(__int64 *a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rax
  __int64 v7; // r12
  unsigned int v8; // r15d
  int v10; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-40h]

  v5 = *a1;
  v11 = __readfsqword(0x28u);
  v10 = 0;
  v7 = *(_QWORD *)(v5 + 1344);
  do
  {
    v8 = sub_39F0C0(v7, a3, a4, (unsigned int *)&v10, 3);
    if ( v8 != -1 )
    {
      if ( a2 )
        *a2 = dword_2389780[v10];
      return v8;
    }
    ++v10;
  }
  while ( v10 <= 13 );
  if ( !a3 && a4 == -1 )
  {
    v10 = *(_DWORD *)(v7 + 116) | 0x3FFF;
    sub_39DF60((_DWORD *)(v7 + 116), &v10, 0x74u);
    *(_DWORD *)(v7 + 92) = 2;
  }
  return v8;
}

