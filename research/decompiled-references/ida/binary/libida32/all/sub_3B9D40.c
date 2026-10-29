__int64 __fastcall sub_3B9D40(__int64 a1, unsigned int a2, unsigned int a3, unsigned __int64 *a4)
{
  unsigned __int64 v4; // r14
  unsigned int v5; // ebp
  unsigned __int64 v6; // rbx
  int v7; // r12d
  unsigned __int64 v8; // r13
  _DWORD *range; // rax
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // [rsp+18h] [rbp-60h]
  unsigned __int64 v14; // [rsp+20h] [rbp-58h]
  _QWORD v16[9]; // [rsp+30h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  v4 = *a4;
  if ( !*a4 )
    return 0xFFFFFFFFLL;
  v5 = a3;
  if ( !a3 )
    goto LABEL_3;
  sub_3B9CB0(a1, v16, a3);
  if ( LOBYTE(v16[0]) )
    goto LABEL_3;
  range = (_DWORD *)rangeset_t_find_range(a1 + 1152, v5 - 1);
  if ( range )
  {
    v11 = (unsigned int)(range[1] - *range);
    goto LABEL_19;
  }
  v16[0] = off_2AFCF18;
  *(_DWORD *)(a1 + 1016) = -1;
  v12 = sub_895D00(*(_QWORD *)(a1 + 1008), a2, v5 - a2, v16);
  v11 = v5 - 1 - v12;
  if ( v12 == -1 )
  {
LABEL_3:
    v14 = 1024;
LABEL_4:
    if ( v4 >= v14 )
      goto LABEL_5;
LABEL_14:
    *a4 = 0;
    return 0xFFFFFFFFLL;
  }
LABEL_19:
  if ( v11 <= 0x3FF )
  {
    v14 = 1024 - v11;
    goto LABEL_4;
  }
  v14 = 1;
LABEL_5:
  v6 = 0;
  v13 = v4 - v14;
  while ( 1 )
  {
    while ( 1 )
    {
      sub_3B9CB0(a1, v16, v5);
      if ( !LOBYTE(v16[0]) )
        break;
      ++v6;
      ++v5;
      if ( v13 < v6 )
        goto LABEL_14;
    }
    v7 = v6 + 1;
    v8 = (int)v6 + 1;
    if ( v8 < v4 )
    {
      do
      {
        sub_3B9CB0(a1, v16, v7 + v5 - v6);
        if ( LOBYTE(v16[0]) )
          break;
        v8 = ++v7;
      }
      while ( v7 < v4 );
    }
    if ( v8 - v6 >= v14 )
      break;
    ++v5;
    v6 = v8 + 1;
    if ( v13 < v8 + 1 )
      goto LABEL_14;
  }
  *a4 = v8 - v6;
  return v5;
}

