unsigned __int64 __fastcall sub_48B5F0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  int v5; // ebp
  unsigned __int64 *v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 *v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v5 = a3;
  if ( (unsigned __int8)sub_485E30((unsigned __int64 *)a1, a3) )
  {
    v6 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16LL * v5);
    v7 = *v6;
    while ( v7 < v6[1] )
    {
      while ( 1 )
      {
        v11 = *(__int64 **)(switch_dbctx(*(int *)(a1 + 8)) + 1672);
        if ( (sub_3BE900(v11, v7, 1) & 0x100) == 0 )
          break;
        sub_3BEFF0(v11, &v18, v7);
        v12 = a2[1];
        v13 = *a2;
        if ( a2[2] < (unsigned __int64)(v12 + 1) )
        {
          v17 = qvector_reserve(a2, v13, v12 + 1, 24);
          v12 = a2[1];
          *a2 = v17;
          v13 = v17;
        }
        v14 = v13 + 24 * v12;
        ++v7;
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = 0;
        ++a2[1];
        sub_35A790((char **)v14);
        if ( v7 >= v6[1] )
          return v19 - __readfsqword(0x28u);
      }
      v8 = a2[1];
      v9 = *a2;
      if ( a2[2] < (unsigned __int64)(v8 + 1) )
      {
        v16 = qvector_reserve(a2, v9, v8 + 1, 24);
        v8 = a2[1];
        *a2 = v16;
        v9 = v16;
      }
      ++v7;
      v10 = v9 + 24 * v8;
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = 0;
      ++a2[1];
      sub_35A790((char **)v10);
    }
  }
  return v19 - __readfsqword(0x28u);
}
