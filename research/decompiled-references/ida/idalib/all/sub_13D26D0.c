__int64 __fastcall sub_13D26D0(__int64 a1, _DWORD *a2)
{
  _BYTE *v2; // rbx
  char v3; // al
  __int64 v4; // r13
  size_t v5; // rax
  int v6; // r12d
  char v7; // al
  _BYTE v9[120]; // [rsp+0h] [rbp-78h] BYREF

  v2 = a2;
  if ( *(_DWORD **)(a1 + 112) != a2 )
  {
    v3 = *((_BYTE *)a2 - 1);
    if ( v3 != 13 && v3 != 10 )
      return 0;
  }
  v4 = *(_QWORD *)(a1 + 120);
  if ( (unsigned __int64)(v4 - (_QWORD)a2) <= 6
    || *a2 != 1010580540
    || *((_WORD *)a2 + 2) != 15420
    || *((_BYTE *)a2 + 6) != 60 )
  {
    v5 = j__strlen(">>>> ");
    if ( v4 - (__int64)a2 < v5 || v5 && memcmp(a2, ">>>> ", v5) )
      return 0;
  }
  if ( *(_DWORD *)(a1 + 176) )
    return 0;
  if ( *(_BYTE *)(a1 + 26) )
    return 0;
  v6 = (*(_BYTE *)a2 != 60) + 1;
  if ( !sub_13D07B0((__int64)a2, v4, v6) )
    return 0;
  sub_13D1530((__int64)v9, a1, (__int64)a2, 1028);
  sub_AEA040((__int64)v9);
  *(_DWORD *)(a1 + 176) = v6;
  v7 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 != 13 )
  {
    do
    {
      if ( v7 == 10 )
        break;
      v7 = *++v2;
    }
    while ( *v2 != 13 );
  }
  *(_QWORD *)(a1 + 152) = v2;
  return 1;
}
