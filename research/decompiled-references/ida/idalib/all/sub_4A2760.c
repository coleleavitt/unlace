__int64 __fastcall sub_4A2760(__int64 a1, unsigned int *a2, __int64 a3, __int32 a4, char a5)
{
  unsigned int v5; // r14d
  _QWORD *v6; // r10
  __int64 v8; // rcx
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned int v18; // ebp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-40h]

  v6 = *(_QWORD **)(a1 + 8);
  v25 = __readfsqword(0x28u);
  v8 = *a2;
  LOBYTE(v5) = (_DWORD)a3 == a4 || (_DWORD)a3 == 2;
  if ( (_BYTE)v5 )
    sub_492A80(a1, a2, a3, v8);
  v11 = a3;
  if ( (_DWORD)v8 )
  {
    v12 = 6LL * (int)a3;
    v13 = (__int64)&v6[v12 + 4];
    v14 = v6[v12 + 5];
    if ( v14 )
    {
      v15 = v13;
      do
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v14 + 16);
          v17 = *(_QWORD *)(v14 + 24);
          if ( *(_DWORD *)(v14 + 32) < (unsigned int)v8 )
            break;
          v15 = v14;
          v14 = *(_QWORD *)(v14 + 16);
          if ( !v16 )
            goto LABEL_8;
        }
        v14 = *(_QWORD *)(v14 + 24);
      }
      while ( v17 );
LABEL_8:
      if ( v15 != v13 && (unsigned int)v8 >= *(_DWORD *)(v15 + 32) )
      {
        v18 = *(_DWORD *)(*v6 + 12LL * *(_QWORD *)(v15 + 40) + 4LL * a4);
        if ( v18 )
          goto LABEL_11;
      }
    }
  }
  if ( !a5 )
  {
    v18 = sub_4A2270(a1, a4, v11, v8, 1);
    if ( !v18 )
      return v5;
    goto LABEL_11;
  }
  v24 = v8;
  if ( (unsigned __int8)sub_49B3A0(v6 + 15, &v24, v11, a4, 0) )
  {
    v18 = v24;
    if ( !v24 )
    {
      do
      {
LABEL_17:
        v21 = switch_dbctx(*(int *)(a1 + 4 * (a4 + 4LL)));
        v18 = sub_64CF10(*(_QWORD *)(v21 + 1672), 0, 1, v22);
        if ( a4 == 2 )
          break;
        v23 = *(_QWORD *)(a1 + 8);
        v24 = v18;
      }
      while ( (unsigned __int8)sub_49B3A0((_QWORD *)(v23 + 120), &v24, a4, v11, 0) );
      sub_4A0820(*(_QWORD *)(a1 + 8) + 120LL, v11, a4, *a2, v18, 1);
    }
  }
  else
  {
    v18 = sub_4A2270(a1, a4, v11, *a2, 1);
    if ( !v18 )
    {
      v20 = switch_dbctx(*(int *)(a1 + 4LL * v11 + 16));
      if ( *a2 < (unsigned int)sub_64E0C0(*(_QWORD *)(v20 + 1672), *(_QWORD *)(*(_QWORD *)(v20 + 1672) + 8LL)) )
        return v5;
      goto LABEL_17;
    }
  }
LABEL_11:
  *a2 = v18;
  return 1;
}
