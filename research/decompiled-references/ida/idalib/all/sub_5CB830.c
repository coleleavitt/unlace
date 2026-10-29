__int64 __fastcall sub_5CB830(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  int v3; // edx
  __int64 v4; // rbx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]
  __int128 v8; // [rsp+10h] [rbp-28h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v6 = 0;
  v8 = 0;
  func_tail_iterator_set(&v6, a1, -1);
  v7 = -1;
  if ( !v6 )
    return 0;
  v1 = *(_DWORD *)(v6 + 128);
  v2 = -16;
  v3 = -1;
  v4 = 0;
  while ( v3 != -1 && v3 < v1 )
  {
    ++v3;
    v4 = *(_QWORD *)(v2 + *(_QWORD *)(v6 + 136) + 8) + v4 - *(_QWORD *)(v2 + *(_QWORD *)(v6 + 136));
    if ( v3 >= v1 )
      goto LABEL_6;
LABEL_9:
    v7 = v3;
    v2 += 16;
  }
  ++v3;
  v4 = *(_QWORD *)(v6 + 8) + v4 - *(_QWORD *)v6;
  if ( v3 < v1 )
    goto LABEL_9;
LABEL_6:
  lock_func_range(v6, 0);
  return v4;
}
