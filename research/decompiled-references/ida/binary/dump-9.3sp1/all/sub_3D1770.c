__int64 __fastcall sub_3D1770(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = a2[1];
  if ( 2 * v2 )
  {
    v3 = 2 * v2 + 1;
    v4 = qvector_reserve(a1, 0, v3, 1);
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v4;
    memset((void *)(v4 + v5), 0, v3 - v5);
    v6 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 8) = v3;
    *(_BYTE *)(v6 + 2 * v2) = 0;
    v7 = *(_QWORD *)a1;
    v2 = a2[1];
  }
  else
  {
    v7 = 0;
  }
  v8 = *a2;
  v9 = *a2 + v2;
  if ( *a2 != v9 )
  {
    do
    {
      qsnprintf();
      ++v8;
      v7 += 2;
    }
    while ( v9 != v8 );
  }
  return a1;
}
