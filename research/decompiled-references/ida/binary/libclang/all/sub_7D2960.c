__int64 __fastcall sub_7D2960(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r12
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rbx

  result = *(unsigned __int8 *)(a1 + 23);
  if ( (result & 0x80u) == 0LL
    || (v3 = (__int64 *)(a1 + 24), v4 = a1 + (unsigned int)(8 * *(_DWORD *)(a1 + 20)) + 24, !(8 * *(_DWORD *)(a1 + 20))) )
  {
    if ( (result & 0x40) != 0 )
      goto LABEL_19;
    return result;
  }
  do
  {
    v8 = *v3;
    v9 = *(_BYTE *)(*v3 + 28) & 0x7F;
    if ( v9 == 65 )
    {
      if ( (*(_BYTE *)(v8 + 60) & 4) == 0 )
        goto LABEL_9;
      v5 = *(unsigned int *)(a2 + 8);
      v6 = *(_QWORD *)(v8 + 80);
      v7 = v5 + 1;
      if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v5 + 1) )
      {
LABEL_17:
        sub_25D6060(a2, a2 + 16, v7, 8);
        v5 = *(unsigned int *)(a2 + 8);
      }
LABEL_8:
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v5) = v6;
      ++*(_DWORD *)(a2 + 8);
      goto LABEL_9;
    }
    if ( v9 == 45 )
    {
      v10 = sub_B07C80(*(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL));
      if ( v10 )
      {
        if ( *(_BYTE *)(v10 + 16) == 16 )
        {
          if ( *(_QWORD *)(v10 + 32) )
          {
            v6 = *(_QWORD *)(v8 + 16LL * *(unsigned int *)(v8 + 84) + 88);
            if ( v6 )
            {
              v5 = *(unsigned int *)(a2 + 8);
              v7 = v5 + 1;
              if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v5 + 1) )
                goto LABEL_17;
              goto LABEL_8;
            }
          }
        }
      }
    }
LABEL_9:
    ++v3;
  }
  while ( (__int64 *)v4 != v3 );
  result = *(unsigned __int8 *)(a1 + 23);
  if ( (result & 0x40) != 0 )
  {
LABEL_19:
    v11 = *(_QWORD *)(a1 + 8LL * (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) + 24);
    result = *(unsigned int *)(a2 + 8);
    if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(result + 1) )
    {
      sub_25D6060(a2, a2 + 16, result + 1, 8);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = v11;
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}

