unsigned __int64 __fastcall sub_8E91E0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 v5; // rdx
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  if ( v1 == 1 )
  {
    v4 = *(__int64 **)(a1 + 24);
    goto LABEL_6;
  }
  if ( !v1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = *(unsigned int *)(a1 + 32);
    v4 = *(__int64 **)(v2 + 32);
    if ( (_DWORD)v3 != *((_DWORD *)v4 + 4) && (_DWORD)v3 )
      v4 = *(__int64 **)(v2 + v3 + 32);
LABEL_6:
    v5 = *v4;
    result = 0;
    if ( (v5 & 2) != 0 )
      return result;
    goto LABEL_7;
  }
  if ( (unsigned int)(v1 - 2) <= 1 )
    BUG();
  v5 = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 32LL);
  result = 0;
  if ( (v5 & 2) == 0 )
  {
LABEL_7:
    result = v5 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v5 & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_BYTE *)(result + 28) & 0x7Fu) - 47 >= 3 )
      return 0;
  }
  return result;
}

