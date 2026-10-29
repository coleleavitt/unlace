__int64 __fastcall sub_5B0AA0(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  int v3; // edx
  unsigned int v4; // ebx
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+8h] [rbp-20h]
  __int64 v8; // [rsp+Ch] [rbp-1Ch]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v6 = 0;
  v8 = 0;
  func_tail_iterator_set(&v6, a1, 0xFFFFFFFFLL);
  v7 = -1;
  if ( !v6 )
    return 0;
  v1 = *(_DWORD *)(v6 + 104);
  v2 = -8;
  v3 = -1;
  v4 = 0;
  while ( v3 != -1 && v3 < v1 )
  {
    ++v3;
    v4 = *(_DWORD *)(v2 + *(_QWORD *)(v6 + 112) + 4) + v4 - *(_DWORD *)(v2 + *(_QWORD *)(v6 + 112));
    if ( v3 >= v1 )
      goto LABEL_6;
LABEL_9:
    v7 = v3;
    v2 += 8;
  }
  ++v3;
  v4 = *(_DWORD *)(v6 + 4) + v4 - *(_DWORD *)v6;
  if ( v3 < v1 )
    goto LABEL_9;
LABEL_6:
  lock_func_range(v6, 0);
  return v4;
}

