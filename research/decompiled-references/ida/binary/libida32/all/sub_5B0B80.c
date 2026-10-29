__int64 __fastcall sub_5B0B80(__int64 a1, int a2)
{
  unsigned int v2; // ebp
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int *v5; // rdx
  unsigned int v6; // edx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  int v9; // [rsp+8h] [rbp-30h]
  __int64 v10; // [rsp+Ch] [rbp-2Ch]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = a2 + 1;
  v8 = 0;
  v10 = 0;
  func_tail_iterator_set(&v8, a1, 0xFFFFFFFFLL);
  v9 = -1;
  if ( !v8 )
    return (unsigned int)-1;
  v3 = -1;
  v4 = -1;
  while ( 1 )
  {
    if ( v3 >= 0 && v3 < *(_DWORD *)(v8 + 104) )
    {
      v5 = (unsigned int *)(*(_QWORD *)(v8 + 112) + 8LL * v3);
      if ( v2 >= v5[1] )
        goto LABEL_9;
      v6 = *v5;
      if ( v2 >= v6 )
        break;
      goto LABEL_7;
    }
    if ( v2 >= *(_DWORD *)(v8 + 4) )
      goto LABEL_9;
    v6 = *(_DWORD *)v8;
    if ( v2 >= *(_DWORD *)v8 )
      break;
LABEL_7:
    if ( v4 > v6 )
      v4 = v6;
LABEL_9:
    if ( ++v3 >= *(_DWORD *)(v8 + 104) )
      goto LABEL_10;
    v9 = v3;
  }
  v4 = a2 + 1;
LABEL_10:
  lock_func_range(v8, 0);
  return v4;
}

