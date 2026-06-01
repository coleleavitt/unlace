unsigned __int64 __fastcall sub_20CA020(_QWORD *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r9d
  unsigned int v8; // esi
  __int64 v9; // r10
  unsigned int v10; // r11d
  __int64 v11; // r10

  result = a1[3];
  if ( result )
  {
    if ( result == -8192 || result == -4096 )
      goto LABEL_6;
    v2 = (unsigned __int64 *)a1[2];
    result = a1[1] & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)result = v2;
    if ( v2 )
    {
      result |= *v2 & 7;
      *v2 = result;
LABEL_6:
      a1[3] = 0;
      return result;
    }
    v3 = a1[3];
    v4 = ***(_QWORD ***)(v3 + 8);
    v5 = *(_QWORD *)(v4 + 2664);
    if ( result < v5 )
      goto LABEL_6;
    v6 = *(unsigned int *)(v4 + 2680);
    if ( result >= v5 + 16 * v6 )
      goto LABEL_6;
    if ( (_DWORD)v6 )
    {
      v7 = v6 - 1;
      v8 = v7 & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
      result = v5 + 16LL * v8;
      v9 = *(_QWORD *)result;
      if ( v3 != *(_QWORD *)result )
      {
        result = 1;
        if ( v9 == -4096 )
          goto LABEL_13;
        while ( 1 )
        {
          v10 = result + 1;
          v8 = v7 & (result + v8);
          result = v5 + 16LL * v8;
          v11 = *(_QWORD *)result;
          if ( v3 == *(_QWORD *)result )
            break;
          result = v10;
          if ( v11 == -4096 )
            goto LABEL_13;
        }
      }
      *(_QWORD *)result = -8192;
      --*(_DWORD *)(v4 + 2672);
      ++*(_DWORD *)(v4 + 2676);
      v3 = a1[3];
    }
LABEL_13:
    *(_BYTE *)(v3 + 1) &= ~1u;
    goto LABEL_6;
  }
  return result;
}
