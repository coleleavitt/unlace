__int64 __fastcall sub_5A41E4(__int64 a1, _QWORD *a2)
{
  unsigned int v5; // [rsp+1Ch] [rbp-24h] BYREF
  _BYTE *v6; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-18h]
  char *i; // [rsp+30h] [rbp-10h]
  _BYTE *v9; // [rsp+38h] [rbp-8h]

  while ( 1 )
  {
    if ( *(int *)(a1 + 524) >= 0 )
    {
      sub_59BCBA(a1, *(_DWORD *)(a1 + 524));
      *(_DWORD *)(a1 + 524) = -1;
    }
    if ( (unsigned __int8)sub_59BB14(a1, &v6, &v5) != 1 )
      return 0;
    *(_DWORD *)(a1 + 524) = v5;
    v7 = (unsigned __int64)&v6[v5];
    v9 = (_BYTE *)sub_5ADD8D(v6, 58, v5);
    if ( v9 )
    {
      for ( i = v9 + 1; (unsigned __int64)i < v7 && (unsigned int)sub_5AE04F((unsigned int)*i); ++i )
        ;
      *(_QWORD *)(a1 + 528) = i;
      *(_QWORD *)(a1 + 536) = v7 - (_QWORD)i;
      while ( v9 > v6 && (unsigned int)sub_5AE04F((unsigned int)(char)*(v9 - 1)) )
        --v9;
      if ( v9 != v6 )
        break;
    }
  }
  *v9 = 0;
  *a2 = v6;
  return 1;
}
