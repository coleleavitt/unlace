__int64 __fastcall sub_CDA8F0(unsigned int *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebp
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  int v8; // esi

  if ( a1[6] )
    return sub_CDA6B0((__int64)a1);
  v2 = *((_QWORD *)a1 + 4);
  result = 0;
  if ( v2 )
  {
    v3 = a1[10];
    if ( v3 <= 0x10 )
      goto LABEL_9;
    if ( v3 == *(_QWORD *)a1 )
      return result;
    if ( v3 == -1 )
    {
      v4 = *(_QWORD *)(v2 + 32);
      v5 = *(unsigned int *)(v4 + 20);
      if ( *(_DWORD *)(v4 + 20) )
      {
        v6 = *a1;
        return v6 / v5;
      }
    }
    else
    {
LABEL_9:
      v7 = sub_CDA220((__int64)a1);
      v5 = *(unsigned int *)(v7 + 16);
      if ( *(_DWORD *)(v7 + 16) )
      {
        v8 = 0;
        if ( *(_QWORD *)a1 != v3 )
          v8 = *(_QWORD *)(v7 + 40) == 0 ? 32 : 16;
        v6 = (unsigned int)*(_QWORD *)a1 - v3 - v8;
        return v6 / v5;
      }
      return 0;
    }
  }
  return result;
}

