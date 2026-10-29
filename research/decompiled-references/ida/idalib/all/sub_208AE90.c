char __fastcall sub_208AE90(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // edx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _BYTE **v6; // rcx
  __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(unsigned __int8 *)v1;
  if ( (_BYTE)v2 != 4 )
  {
    if ( (unsigned int)(v2 - 5) > 0x20 )
    {
      if ( (unsigned int)(v2 - 1) <= 1 )
      {
LABEL_4:
        v3 = v1 & 0xFFFFFFFFFFFFFFFBLL;
        v4 = (v1 + 136) & 0xFFFFFFFFFFFFFFFBLL;
        goto LABEL_5;
      }
      goto LABEL_17;
    }
    return 1;
  }
  if ( !*(_DWORD *)(v1 + 136) )
  {
    v8 = sub_208ACA0(a1 + 80);
    if ( !(unsigned __int8)sub_206DE10(v8) )
      return 1;
    v1 = *(_QWORD *)(a1 + 40);
    if ( !v1 )
      goto LABEL_17;
    v9 = *(unsigned __int8 *)v1;
    if ( (unsigned int)(v9 - 1) <= 1 )
      goto LABEL_4;
    if ( (_BYTE)v9 != 4 )
    {
LABEL_17:
      v4 = 0;
      v5 = 0;
      return v5 != v4;
    }
  }
  v10 = *(_QWORD *)(v1 + 128);
  v3 = v10 | 4;
  v4 = (v10 + 8LL * *(unsigned int *)(v1 + 136)) | 4;
LABEL_5:
  while ( 1 )
  {
    v5 = v3;
    if ( v3 == v4 )
      break;
    v6 = (_BYTE **)(v3 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v3 & 4) != 0 )
    {
      if ( **((_BYTE **)*v6 + 16) <= 1u )
        return v5 != v4;
LABEL_13:
      v3 = (unsigned __int64)(v6 + 1) | 4;
    }
    else
    {
      if ( *v6[16] <= 1u )
        return v5 != v4;
      v3 = (unsigned __int64)(v6 + 17);
      if ( !v6 )
        goto LABEL_13;
    }
  }
  v5 = v4;
  return v5 != v4;
}
