unsigned __int64 __fastcall sub_5AC7E0(__int64 a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 fchunk_qty; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 1424);
  fchunk_qty = get_fchunk_qty();
  v3 = v1[3];
  if ( fchunk_qty == v3 )
  {
LABEL_14:
    if ( !v3 )
      return v14 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  v4 = fchunk_qty;
  v13 = 0xFFFFFFFFLL;
  if ( fchunk_qty < v3 )
  {
    v1[3] = fchunk_qty;
    v3 = fchunk_qty;
    goto LABEL_14;
  }
  v5 = v1[2];
  v6 = v1[4];
  v7 = v1 + 2;
  if ( (unsigned __int64)&v13 >= v5 && (unsigned __int64)&v13 < v5 + 8 * v6 )
  {
    if ( v6 >= v4 || (v12 = qvector_reserve(v7, v5, v4, 8), v3 = v1[3], v1[2] = v12, v5 = v12, v3 < v4) )
    {
      while ( 1 )
      {
        *(_QWORD *)(v5 + 8 * v3++) = 0xFFFFFFFFLL;
        if ( v4 == v3 )
          break;
        v5 = v1[2];
      }
    }
  }
  else if ( v6 >= v4 || (v11 = qvector_reserve(v7, v5, v4, 8), v3 = v1[3], v1[2] = v11, v5 = v11, v3 < v4) )
  {
    v8 = v13;
    while ( 1 )
    {
      *(_QWORD *)(v5 + 8 * v3++) = v8;
      if ( v4 == v3 )
        break;
      v5 = v1[2];
    }
  }
  v1[3] = v4;
LABEL_10:
  v9 = 0;
  do
  {
    *(_DWORD *)(v1[2] + 8 * v9) = *(_DWORD *)getn_fchunk((unsigned int)v9);
    ++v9;
  }
  while ( v9 < v1[3] );
  return v14 - __readfsqword(0x28u);
}

