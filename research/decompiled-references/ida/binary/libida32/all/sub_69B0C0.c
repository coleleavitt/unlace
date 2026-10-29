__int64 __fastcall sub_69B0C0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax
  void *v6; // r13
  unsigned int v7; // ebx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  ptr = nullptr;
  v10 = 0;
  v5 = sub_6994A0(a1, (__int64)&ptr, a3, a4, a5);
  v6 = ptr;
  v7 = v5;
  if ( (_BYTE)v5 )
    v7 = sub_69AFD0((__int64)a1, a2, ptr);
  if ( v6 )
    qfree(v6);
  return v7;
}

