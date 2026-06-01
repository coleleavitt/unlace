__int64 __fastcall sub_448CA0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _QWORD *v4; // rax
  char v5; // al
  __int64 v6; // rax
  __int16 v7; // cx
  __int16 v8; // dx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rsi
  void *v16; // rbx
  void *v18; // rbx
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+8h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 144);
  if ( !v2 || (*(_BYTE *)(v2 + 78) & 8) == 0 || !*(_DWORD *)(a2 + 136) )
    return 0;
  v4 = sub_4055A0(*(_QWORD *)(a2 + 16) + 136LL, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 24));
  if ( v4 )
  {
    v5 = *((_BYTE *)v4 + 78);
    if ( (v5 & 4) != 0 || (v5 & 1) == 0 )
    {
      v18 = *(void **)(a2 + 144);
      if ( v18 )
      {
        sub_41CB00(*(_QWORD **)(a2 + 144));
        sub_186B220(v18);
        *(_QWORD *)(a2 + 144) = 0;
      }
      return 0;
    }
  }
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_WORD *)(v2 + 74);
  v8 = *(_WORD *)(v2 + 72);
  v9 = *(_QWORD *)(v2 + 8);
  v20 = nullptr;
  v19 = v6;
  v10 = sub_405720(*(_QWORD *)(a2 + 16) + 136LL, v9, v8, v7, *(_QWORD *)(v2 + 24), (__int64)&v19);
  v11 = v20;
  v12 = v10;
  if ( v20 )
  {
    v13 = (unsigned __int64)&v20[*((unsigned int *)v20 - 1)];
    if ( (unsigned __int64)v20 >= v13 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v14 = *v11;
        if ( *v11 )
        {
          if ( (*(_DWORD *)(v14 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v11 >= v13 )
          goto LABEL_14;
      }
      sub_15D7BC0(v19, v14);
      ++v11;
    }
    while ( (unsigned __int64)v11 < v13 );
LABEL_14:
    v11 = v20;
    if ( v20 )
LABEL_15:
      sub_186B220(v11 - 1);
  }
  sub_403E50(v12, v2);
  v16 = *(void **)(a2 + 144);
  if ( v16 )
  {
    sub_41CB00(*(_QWORD **)(a2 + 144));
    sub_186B220(v16);
    *(_QWORD *)(a2 + 144) = 0;
    return v12;
  }
  return v12;
}

