__int64 __fastcall sub_5AF6C0(__int64 a1)
{
  bool v1; // zf
  char v3; // r13
  unsigned __int64 v4; // rbx
  unsigned int *v5; // r12
  _DWORD *v6; // rdi
  unsigned int v7; // r13d
  __int64 v8; // rsi
  _DWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  _DWORD *v12; // r12
  _DWORD *v13; // r10
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]
  int v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+30h] [rbp-28h]
  int v21; // [rsp+38h] [rbp-20h]
  int v22; // [rsp+40h] [rbp-18h]
  int v23; // [rsp+48h] [rbp-10h]
  __int64 v24; // [rsp+50h] [rbp-8h]

  v17 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 24) == 0;
  *(_BYTE *)(a1 + 48) = 1;
  if ( v1 )
    return v17 - __readfsqword(0x28u);
  v3 = 0;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = (unsigned int *)(*(_QWORD *)(a1 + 16) + 8 * v4);
      if ( !get_func(*v5) )
        break;
      if ( ++v4 >= *(_QWORD *)(a1 + 24) )
        goto LABEL_8;
    }
    sub_82BC50(
      "missing function object at %a\n",
      (__int64)ptr,
      v16,
      SDWORD2(v16),
      v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    v6 = *(_DWORD **)(a1 + 16);
    v7 = *v5;
    v8 = (__int64)&v6[2 * *(_QWORD *)(a1 + 24)];
    v9 = sub_5AA180(v6, v8, *v5);
    v12 = v9;
    if ( v13 != v9 && v7 == *v9 )
    {
      if ( (unsigned __int8)must_journal(v6, v8, v10) )
      {
        ptr = nullptr;
        v16 = 0;
        ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
        *((_BYTE *)ptr + v16) = 1;
        *(_QWORD *)&v16 = v16 + 1;
        sub_3FA160((__int64 *)&ptr, v7);
        add_undo_record(*(unsigned int *)(a1 + 40), ptr, v16);
        if ( ptr )
        {
          *(_QWORD *)&v16 = 0;
          qfree(ptr);
        }
      }
      memmove(v12, v12 + 2, *(_QWORD *)(a1 + 16) + 8LL * *(_QWORD *)(a1 + 24) - (_QWORD)v12 - 8);
      v11 = *(_QWORD *)(a1 + 24) - 1LL;
      *(_QWORD *)(a1 + 24) = v11;
    }
    v3 = 1;
  }
  while ( v4 < v11 );
LABEL_8:
  if ( v3 )
    return sub_514950();
  else
    return v17 - __readfsqword(0x28u);
}

