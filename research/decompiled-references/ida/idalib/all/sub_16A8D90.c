char __fastcall sub_16A8D90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rbp
  char result; // al
  unsigned __int64 v19; // rax
  __int64 v20; // rbp

  v6 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL];
  v7 = 0;
  if ( (v6 & 8) != 0 )
    v7 = *(__int64 *)((char *)&qword_18 + (v6 & 0xFFFFFFFFFFFFFFF0LL));
  v8 = *a1;
  v9 = v7 | ((unsigned __int8)a2 | (unsigned __int8)v6) & 7;
  v10 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *v10;
  v12 = *(_QWORD *)(*v10 + 8) & 7LL;
  if ( v12 | (*(__int64 *)(*v10 + 8) >> 3) & 1 )
  {
    v19 = sub_F64F00(*a1, v12 | (*(__int64 *)(*v10 + 8) >> 3) & 1, v11, v12, a5);
    v8 = *a1;
    v13 = v19 & 0xFFFFFFFFFFFFFFF0LL;
    v10 = (__int64 *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
    v13 = v11 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 13 && ((*(_WORD *)(v14 + 18) >> 3) & 0x1FF) == 0x1B3 )
    v9 &= ~8uLL;
  v15 = v10[1];
  v16 = 0;
  if ( (v15 & 8) != 0 )
    v16 = *(__int64 *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL));
  v17 = v16 | ((unsigned __int8)v15 | (unsigned __int8)v8) & 7;
  if ( (unsigned int)v9 >> 9 == (unsigned int)v17 >> 9
    || (result = sub_F56A30((unsigned int)v17 >> 9, (unsigned int)v9 >> 9, a3)) != 0 )
  {
    if ( ((v17 >> 4) & 3) == ((v9 >> 4) & 3) || (v17 & 0x30) == 0 || (result = 0, (v9 & 0x30) == 0) )
    {
      result = 0;
      if ( HIDWORD(v9) == HIDWORD(v17)
        && ((v17 >> 6) & 7) == ((v9 >> 6) & 7)
        && ((unsigned __int8)v9 & (unsigned __int8)~(_BYTE)v17 & 7) == 0 )
      {
        result = 1;
        v20 = (v17 >> 3) & 1;
        if ( (v9 & 8) != 0 )
          return v20;
      }
    }
  }
  return result;
}
