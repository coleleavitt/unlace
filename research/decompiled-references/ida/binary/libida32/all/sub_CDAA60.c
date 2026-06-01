__int64 __fastcall sub_CDAA60(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v6; // rcx

  if ( *((_DWORD *)a2 + 6) )
    goto LABEL_10;
  v2 = a2[4];
  if ( !v2 )
    goto LABEL_10;
  v3 = sub_CDA220((__int64)a2);
  if ( *(_DWORD *)(v3 + 20) == -1 )
    goto LABEL_10;
  v4 = *((unsigned int *)a2 + 10);
  if ( (_DWORD)v4 != -1 )
  {
    if ( (unsigned __int8)sub_CDA990((__int64)a2) )
    {
      sub_DFF4E0(a1, v2, (unsigned int)v4, 0xFFFFFFFFLL);
      return a1;
    }
    if ( *a2 != v4 && (*(_QWORD *)(v3 + 40) || !*(_BYTE *)(v3 + 60)) )
    {
      sub_DFF4E0(a1, v2, *a2, *a2);
      return a1;
    }
LABEL_10:
    sub_DFF4A0(a1, a2);
    return a1;
  }
  v6 = *a2;
  if ( *a2 )
    v6 = 0xFFFFFFFFLL;
  sub_DFF4E0(a1, v2, 16, v6);
  return a1;
}

