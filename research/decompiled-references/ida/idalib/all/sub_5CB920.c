__int64 __fastcall sub_5CB920(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  int v3; // eax
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  int v9; // [rsp+8h] [rbp-40h]
  __int128 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v2 = a2 + 1;
  v10 = 0;
  v8 = 0;
  func_tail_iterator_set(&v8, a1, -1);
  v9 = -1;
  if ( !v8 )
    return -1;
  v3 = -1;
  v4 = -1;
  while ( 1 )
  {
    if ( v3 >= 0 && v3 < *(_DWORD *)(v8 + 128) )
    {
      v5 = (unsigned __int64 *)(*(_QWORD *)(v8 + 136) + 16LL * v3);
      if ( v2 >= v5[1] )
        goto LABEL_9;
      v6 = *v5;
      if ( v2 >= v6 )
        break;
      goto LABEL_7;
    }
    if ( v2 >= *(_QWORD *)(v8 + 8) )
      goto LABEL_9;
    v6 = *(_QWORD *)v8;
    if ( v2 >= *(_QWORD *)v8 )
      break;
LABEL_7:
    if ( v4 > v6 )
      v4 = v6;
LABEL_9:
    if ( ++v3 >= *(_DWORD *)(v8 + 128) )
      goto LABEL_10;
    v9 = v3;
  }
  v4 = a2 + 1;
LABEL_10:
  lock_func_range(v8, 0);
  return v4;
}
