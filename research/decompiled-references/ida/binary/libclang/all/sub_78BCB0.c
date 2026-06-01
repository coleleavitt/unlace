__int64 __fastcall sub_78BCB0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 *v5; // rax
  int v6; // eax
  __int64 *v7; // rdx
  _QWORD *v8; // [rsp+0h] [rbp-10h] BYREF

  result = 0;
  if ( *(char *)(a1 + 28) >= 0 )
  {
    v2 = *(_QWORD *)(a1 + 152);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 152) & 6LL;
      if ( v3 == 4 )
      {
        v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v4 )
          return result;
        if ( (*(_BYTE *)(v4 + 8) & 4) != 0 && (v5 = *(__int64 **)(v4 + 48)) != nullptr )
          v6 = ((*v5 >> 1) & 3) + 1;
        else
          v6 = ((*(__int64 *)(v4 + 16) >> 1) & 3) + 1;
      }
      else
      {
        if ( v3 != 2 )
          return result;
        v7 = (__int64 *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v7 )
          return result;
        v6 = ((*v7 >> 1) & 3) + 1;
      }
      if ( v6 == 1 )
      {
        return 1;
      }
      else if ( ((v6 - 2) & 0xFFFFFFFD) == 1 )
      {
        v8 = sub_789AD0(a1, 1);
        if ( v8 && (unsigned __int8)sub_78B990(v8, (unsigned __int64 *)&v8) && v8 )
          return *((_BYTE *)v8 + 82) & 1;
        else
          return 1;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}

