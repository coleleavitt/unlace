__int64 __fastcall sub_5CA3A0(__int64 a1)
{
  bool v1; // zf
  char v3; // r13
  unsigned __int64 v4; // rbp
  unsigned __int64 *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  _QWORD *v12; // rbx
  _QWORD *v13; // r10
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
  v1 = *(_QWORD *)(a1 + 32) == 0;
  *(_BYTE *)(a1 + 56) = 1;
  if ( v1 )
    return v17 - __readfsqword(0x28u);
  v3 = 0;
  v4 = 0;
  do
  {
    while ( 1 )
    {
      v5 = (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 16 * v4);
      if ( !get_func(*v5) )
        break;
      if ( ++v4 >= *(_QWORD *)(a1 + 32) )
        goto LABEL_8;
    }
    sub_84F5B0(
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
    v6 = *(_QWORD **)(a1 + 24);
    v7 = *v5;
    v8 = (__int64)&v6[2 * *(_QWORD *)(a1 + 32)];
    v9 = sub_5C46C0(v6, v8, *v5);
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
        sub_40D2A0((__int64 *)&ptr, v7);
        add_undo_record(*(unsigned int *)(a1 + 48), ptr, v16);
        if ( ptr )
        {
          *(_QWORD *)&v16 = 0;
          qfree(ptr);
        }
      }
      memmove(v12, v12 + 2, *(_QWORD *)(a1 + 24) + 16LL * *(_QWORD *)(a1 + 32) - (_QWORD)v12 - 16);
      v11 = *(_QWORD *)(a1 + 32) - 1LL;
      *(_QWORD *)(a1 + 32) = v11;
    }
    v3 = 1;
  }
  while ( v4 < v11 );
LABEL_8:
  if ( v3 )
    return sub_52CBE0();
  else
    return v17 - __readfsqword(0x28u);
}
