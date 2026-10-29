__int64 __fastcall sub_482340(__int64 a1, __int64 a2)
{
  void *v2; // rdx
  __int64 *v3; // rbp
  int v5; // r13d
  int v6; // r14d
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  void *v10; // rsi
  void *v11; // rcx
  void *v12; // rdi
  void *v13; // rdx
  void *v15[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v16; // [rsp+10h] [rbp-38h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]
  int v18; // [rsp+20h] [rbp-28h]
  int v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h]

  v2 = *(void **)a2;
  v17 = __readfsqword(0x28u);
  v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 1672LL);
  if ( (unsigned __int64)v2 < *(_QWORD *)(a2 + 8) )
  {
    v5 = a1 + 64;
    v6 = a1 + 24;
    while ( 1 )
    {
      *(_OWORD *)v15 = 0;
      v7 = sub_3BD970(v3, (__m128i *)v15, (__int64)v2);
      v10 = v15[0];
      v11 = *(void **)a2;
      if ( v15[0] < (void *)*(_QWORD *)a2 )
      {
        v15[0] = *(void **)a2;
        v10 = v11;
      }
      v12 = v15[1];
      v13 = *(void **)(a2 + 8);
      if ( v13 < v15[1] )
      {
        v15[1] = *(void **)(a2 + 8);
        v12 = v13;
      }
      if ( v12 < v10 )
        v15[1] = v10;
      if ( v11 >= v13 )
        break;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          if ( !under_debugger )
            interr(2052);
          goto LABEL_20;
        }
        rangeset_t_add(v5, (int)v15, (int)v13, (int)v11, v8, v9, (int)v15[0], v15[1], v16, v17, v18, v19, v20);
      }
      else
      {
        rangeset_t_add(v6, (int)v15, (int)v13, (int)v11, v8, v9, (int)v15[0], v15[1], v16, v17, v18, v19, v20);
      }
      v2 = (void *)sub_3BD580((__int64)v3, (__int64)v15[0]);
      if ( (unsigned __int64)v2 >= *(_QWORD *)(a2 + 8) )
        return 0;
    }
    if ( !under_debugger )
      interr(2051);
LABEL_20:
    BUG();
  }
  return 0;
}
