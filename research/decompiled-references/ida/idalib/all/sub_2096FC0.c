void __fastcall sub_2096FC0(__int64 **a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = a2;
  v7[0] = a2;
  v3 = a1[1];
  if ( *a1 == v3 )
  {
    *(_DWORD *)(v2 + 376) = 1;
    if ( a1[2] != v3 )
    {
LABEL_5:
      *v3 = v2;
      a1[1] = v3 + 1;
      return;
    }
  }
  else
  {
    v4 = *(_QWORD *)(*(v3 - 1) + 8);
    v5 = *(unsigned int *)(v4 + 120);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 124) )
    {
      sub_2237220(v4 + 112, v4 + 128, v5 + 1, 8);
      v5 = *(unsigned int *)(v4 + 120);
    }
    *(_QWORD *)(*(_QWORD *)(v4 + 112) + 8 * v5) = v2;
    v3 = a1[1];
    v2 = v7[0];
    ++*(_DWORD *)(v4 + 120);
    v6 = *(v3 - 1);
    *(_QWORD *)(v2 + 8) = v4;
    *(_DWORD *)(v2 + 376) = *(_DWORD *)(v6 + 376) + 1;
    if ( a1[2] != v3 )
      goto LABEL_5;
  }
  sub_2096E70((__int64)a1, v3, v7);
}
