__int64 __fastcall sub_7F4EF0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int v4; // r13d
  int v5; // r12d
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rsi

  v1 = *a1;
  v2 = a1[5];
  result = *((unsigned int *)a1 + 7);
  v4 = (int)((double)*(int *)(*(_QWORD *)(*a1 + 24) + 456LL) * *(double *)(*a1 + 912));
  if ( v4 > (unsigned int)result )
    v4 = *((_DWORD *)a1 + 7);
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *(_QWORD *)v2;
      result = *(unsigned int *)(v2 + 40);
      if ( (unsigned int)result >= *(_DWORD *)(v1 + 920) )
      {
        if ( (unsigned int)result >= *((_DWORD *)a1 + 15) )
          v4 += v4 < *((_DWORD *)a1 + 7);
        v7 = *(_QWORD *)(v2 + 24);
        v8 = *(_QWORD *)(v2 + 16);
        if ( *(_BYTE *)(v2 + 44) )
          sub_7F4C20(a1, v8, v7);
        else
          sub_7F49A0(a1, v8, v7, *(_QWORD *)(v2 + 32));
        ++*(_DWORD *)(*a1 + 2184);
        result = sub_7F4130((__int64)a1, (_QWORD *)v2);
      }
      if ( ++v5 >= v4 )
        break;
      v1 = *a1;
      v2 = v6;
    }
  }
  return result;
}

