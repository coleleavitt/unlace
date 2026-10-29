__int64 __fastcall sub_5CDAA0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // eax
  unsigned __int64 v5; // rbp
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  int v11; // [rsp+8h] [rbp-40h]
  __int128 v12; // [rsp+10h] [rbp-38h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( !a2 )
    return -1;
  if ( !a3 )
    return -1;
  v10 = 0;
  v12 = 0;
  func_tail_iterator_set(&v10, a2, -1);
  v11 = -1;
  if ( !v10 )
    return -1;
  v4 = -1;
  v5 = -1;
  while ( 1 )
  {
    if ( v4 >= 0 && v4 < *(_DWORD *)(v10 + 128) )
    {
      v6 = (unsigned __int64 *)(*(_QWORD *)(v10 + 136) + 16LL * v4);
      if ( *v6 >= a3 )
        goto LABEL_12;
      v7 = v6[1];
      if ( a3 < v7 )
        break;
      goto LABEL_9;
    }
    if ( *(_QWORD *)v10 >= a3 )
      goto LABEL_12;
    v7 = *(_QWORD *)(v10 + 8);
    if ( a3 < v7 )
      break;
LABEL_9:
    if ( v5 == -1 )
    {
      v8 = v7 - 1;
    }
    else
    {
      v8 = v7 - 1;
      if ( v5 >= v8 )
        goto LABEL_12;
    }
    v5 = v8;
LABEL_12:
    if ( ++v4 >= *(_DWORD *)(v10 + 128) )
      goto LABEL_13;
    v11 = v4;
  }
  v5 = a3 - 1;
LABEL_13:
  lock_func_range(v10, 0);
  return v5;
}
