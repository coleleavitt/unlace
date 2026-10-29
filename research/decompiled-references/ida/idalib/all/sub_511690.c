__int64 __fastcall sub_511690(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  void *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // r13
  unsigned __int64 *v12; // rax
  __int64 v13; // rbx
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( sub_510290(a1, a4, (__int64 (__fastcall *)(unsigned __int64 *, __int64))sub_50CE90, (__int64)&ptr) == -1 )
    return -1;
  v9 = ptr;
  if ( !ptr )
    return -1;
  ptr = nullptr;
  v16 = 0;
  get_segm_name(&ptr, v9, 1);
  sub_35A910(a2);
  v10 = a5 - a4;
  v11 = v10;
  v12 = sub_505D70(a1 + 1624, a3);
  if ( v10 )
  {
    if ( v12 )
    {
      if ( *((_BYTE *)v12 + 43) > 1u )
        goto LABEL_4;
    }
    else if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) == 8 )
    {
      goto LABEL_4;
    }
    v11 = (int)v10;
  }
LABEL_4:
  sub_50CE70(a1, a2, v11);
  v13 = (a2[1] == 0) + a2[1] - 1;
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  return v13;
}
