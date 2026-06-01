unsigned __int64 __fastcall sub_1E5EBE0(__int64 *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // ebp
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  int v12; // ebp
  __int64 v13; // rdx

  v6 = a3;
  result = sub_F6AE00(*(_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, a3, a4, a5);
  if ( (_BYTE)result )
  {
    v9 = *a2;
    v10 = (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFF0LL);
    result = *a2 & 7;
    v11 = *(_QWORD *)&byte_8[*a2 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v11 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
    {
      v12 = v6 << 6;
      if ( v12 )
      {
        v13 = result | v12;
        if ( (v9 & 8) != 0 )
        {
          v13 |= *(__int64 *)((char *)&qword_18 + (*a2 & 0xFFFFFFFFFFFFFFF0LL));
          v10 = (_QWORD *)*v10;
        }
        result = sub_A70C40(*a1, (__int64)v10, v13);
      }
      else
      {
        result |= v9 & 0xFFFFFFFFFFFFFFF8LL;
      }
      *a2 = result;
    }
  }
  return result;
}
