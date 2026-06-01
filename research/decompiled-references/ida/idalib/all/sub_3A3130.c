unsigned __int64 __fastcall sub_3A3130(char *a1, char *a2, unsigned int a3)
{
  char v6; // r14
  char v7; // r14
  _BYTE *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( (unsigned __int8)must_journal() )
  {
    v6 = *a1;
    v12 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
    *((_BYTE *)ptr + v12) = v6;
    v7 = *a2;
    v8 = ptr;
    v9 = v12 + 1;
    v10 = v12 + 2;
    *(_QWORD *)&v12 = v12 + 1;
    if ( *((_QWORD *)&v12 + 1) < v10 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v8 = ptr;
      v9 = v12;
    }
    v8[v9] = v7;
    *(_QWORD *)&v12 = v12 + 1;
    add_undo_record(a3, ptr, v12);
    if ( ptr )
    {
      *(_QWORD *)&v12 = 0;
      qfree(ptr);
    }
  }
  *a1 = *a2;
  return v13 - __readfsqword(0x28u);
}
