__int64 __fastcall sub_99B1A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rax
  _DWORD *v13; // rbp
  bool v14; // zf
  __int64 result; // rax
  _DWORD *v16; // rax
  __int64 v17; // [rsp+8h] [rbp-60h]
  int v18[2]; // [rsp+10h] [rbp-58h]
  __int64 v19; // [rsp+18h] [rbp-50h]
  __int64 v20; // [rsp+20h] [rbp-48h]

  v2 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)v18 = *(_QWORD *)(a1 + 24);
  if ( !*(_WORD *)(v2 + 4) && (v3 = *(_DWORD **)(*(_QWORD *)(v2 + 16) + 24LL)) != nullptr && *v3 == 5 && v3[1] == 18 )
  {
    v16 = (_DWORD *)sub_15E1B70(v18[0]);
    return sub_99A7B0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 864LL), v16, 1);
  }
  else
  {
    v4 = sub_15E1A70(*(_QWORD *)(a1 + 344));
    v5 = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    v19 = *(_QWORD *)(a1 + 24);
    sub_9934D0(a1 + 344, 0xFFFFFFFF);
    sub_15E1B70(*(_QWORD *)(a1 + 344));
    v6 = sub_15E1B70(*(_QWORD *)(a1 + 344));
    v7 = v6;
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
    v20 = *(_QWORD *)(a1 + 24);
    sub_9934D0(a1 + 344, 0);
    v8 = sub_15E1B70(*(_QWORD *)(a1 + 344));
    v9 = (_DWORD *)v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    v17 = *(_QWORD *)(a1 + 24);
    sub_9934D0(a1 + 344, 1u);
    v10 = sub_15E1B70(*(_QWORD *)(a1 + 344));
    v11 = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v12 = sub_15E1A70(*(_QWORD *)(a1 + 24));
    v13 = (_DWORD *)v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    if ( v11 )
    {
      v14 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v14 )
        sub_15D7BC0(v17, v11);
    }
    sub_99A7B0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 864LL), v9, 0);
    result = sub_99A7B0(a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + 864LL), v13, 0);
    if ( v13 )
    {
      v14 = v13[2]-- == 1;
      if ( v14 )
        result = sub_15D7BC0(v17, v13);
    }
    if ( v9 )
    {
      v14 = v9[2]-- == 1;
      if ( v14 )
        result = sub_15D7BC0(v20, v9);
    }
    if ( v7 )
    {
      v14 = (*(_DWORD *)(v7 + 8))-- == 1;
      if ( v14 )
        result = sub_15D7BC0(v19, v7);
    }
    if ( v5 )
    {
      v14 = (*(_DWORD *)(v5 + 8))-- == 1;
      if ( v14 )
        return sub_15D7BC0(*(_QWORD *)v18, v5);
    }
  }
  return result;
}

