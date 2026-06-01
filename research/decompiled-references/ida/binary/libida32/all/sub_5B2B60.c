__int64 __fastcall sub_5B2B60(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // eax
  unsigned int v5; // ebp
  unsigned int *v6; // rdx
  unsigned int v7; // edx
  unsigned int v8; // edx
  __int64 v10; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+8h] [rbp-30h]
  __int64 v12; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !a2 )
    return (unsigned int)-1;
  if ( !a3 )
    return (unsigned int)-1;
  v10 = 0;
  v12 = 0;
  func_tail_iterator_set(&v10, a2, 0xFFFFFFFFLL);
  v11 = -1;
  if ( !v10 )
    return (unsigned int)-1;
  v4 = -1;
  v5 = -1;
  while ( *(_DWORD *)v10 >= a3 )
  {
LABEL_10:
    if ( ++v4 >= *(_DWORD *)(v10 + 104) )
      goto LABEL_11;
    while ( 1 )
    {
      v11 = v4;
      if ( v4 < 0 || v4 >= *(_DWORD *)(v10 + 104) )
        break;
      v6 = (unsigned int *)(*(_QWORD *)(v10 + 112) + 8LL * v4);
      if ( *v6 >= a3 )
        goto LABEL_10;
      v7 = v6[1];
      if ( a3 < v7 )
        goto LABEL_18;
LABEL_8:
      if ( v5 == -1 )
      {
        v8 = v7 - 1;
      }
      else
      {
        v8 = v7 - 1;
        if ( v5 >= v8 )
          goto LABEL_10;
      }
      v5 = v8;
      if ( ++v4 >= *(_DWORD *)(v10 + 104) )
        goto LABEL_11;
    }
  }
  v7 = *(_DWORD *)(v10 + 4);
  if ( a3 >= v7 )
    goto LABEL_8;
LABEL_18:
  v5 = a3 - 1;
LABEL_11:
  lock_func_range(v10, 0);
  return v5;
}

