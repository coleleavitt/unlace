__int64 __fastcall sub_658360(__int64 a1, __int64 *a2, double a3, double a4, __int64 a5, char **a6)
{
  char v6; // r12
  unsigned int v7; // ebx
  unsigned int v9; // eax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  ptr = nullptr;
  v11 = 0;
  v6 = **a6;
  if ( (unsigned __int8)sub_567720((__int64)&ptr, a6)
    && (unsigned __int64)v11 > 1
    && (v9 = sub_6577B0(
               *(_QWORD *)(a1 + 8),
               *(_QWORD *)(a1 + 16),
               (char *)ptr,
               *(_QWORD **)(a1 + 24),
               *(_DWORD *)(a1 + 32),
               0.0,
               a4)) != 0 )
  {
    v7 = sub_647FB0(a2, v6, v9);
  }
  else
  {
    v7 = 0;
  }
  if ( ptr )
  {
    *(_QWORD *)&v11 = 0;
    qfree(ptr);
  }
  return v7;
}
