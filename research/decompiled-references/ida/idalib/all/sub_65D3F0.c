__int64 __fastcall sub_65D3F0(
        __int64 *a1,
        __int64 a2,
        char a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  __int64 *v11; // r12
  __int64 v12; // rbx
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v11 = a1;
  v12 = a2;
  v21 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v12 = a1[1];
    v14 = *(_QWORD *)(v12 + 64);
    if ( v14 )
      goto LABEL_3;
    return 0;
  }
  v14 = *(_QWORD *)(a2 + 64);
  if ( !v14 )
    return 0;
LABEL_3:
  if ( a3 != ((*(_BYTE *)(v14 + 8) & 2) != 0) )
  {
    if ( a3 )
    {
      a1 = (__int64 *)v14;
      sub_64BDB0(v14);
    }
    else
    {
      a2 = v12;
      sub_65CC00(a1, (__int64 *)v12, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    v16 = *v11;
    if ( (unsigned __int8)must_journal(a1, a2, v15) )
    {
      v17 = *(_QWORD *)(v16 + 1672);
      if ( !*(_QWORD *)v14 || *(_QWORD *)v14 == *(_QWORD *)(v17 + 8) )
      {
        ptr = nullptr;
        v20 = 0;
        sub_64A030(v17, (__int64 *)&ptr, (__int64 *)v14, 8 * a3);
        add_undo_record(146, ptr, v20);
        if ( ptr )
        {
          *(_QWORD *)&v20 = 0;
          qfree(ptr);
        }
      }
    }
    *(_DWORD *)(v12 + 32) |= 0x40u;
  }
  return 1;
}
