__int64 __fastcall sub_77BCC0(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx

  v1 = sub_77BC00(a1);
  if ( !v1 )
    return sub_779400(a1);
  v2 = sub_AC7460(v1);
  if ( !(_DWORD)v2 || *(_DWORD *)(a1 + 24) == (_DWORD)v2 )
    return sub_779400(a1);
  v3 = *(_QWORD *)(a1 + 56);
  if ( (v3 & 4) != 0 && (v4 = v3 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v4 + 16)) )
    v5 = *(unsigned int *)(**(_QWORD **)(v4 + 24) + 8LL);
  else
    v5 = *(unsigned int *)(a1 + 64);
  return v5 | (v2 << 32);
}

