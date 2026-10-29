__int64 __fastcall sub_6BA660(__int64 *a1, unsigned int *a2, void *a3, __int64 a4, __int64 a5)
{
  char v5; // al
  void *v6; // r12
  unsigned int v7; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r13d
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  ptr = nullptr;
  v12 = 0;
  v5 = sub_6B9E00(a1, (__int64)&ptr, a3, a4, a5);
  v6 = ptr;
  if ( v5
    && (v9 = sub_6500C0((__int64)a1, a1[1], (const char *)ptr), (v10 = v9) != 0)
    && (v7 = sub_6BA5D0((__int64)a1, v9), (_BYTE)v7) )
  {
    if ( a2 )
      *a2 = v10;
  }
  else
  {
    v7 = 0;
  }
  if ( v6 )
    qfree(v6);
  return v7;
}
