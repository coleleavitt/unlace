__int64 __fastcall sub_63D1D0(__int64 *a1, void *a2, int a3, const char *a4)
{
  int v4; // ebx
  unsigned int v5; // ebp
  int v6; // eax
  size_t v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  const char *v13; // rdx
  const char *v14; // rcx
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v4 = a3;
  LOBYTE(a3) = a4 == nullptr || a3 == 1999;
  if ( (_BYTE)a3 )
  {
    return 0;
  }
  else
  {
    v5 = a3;
    v6 = v4 - 1000;
    if ( v4 >= 2000 )
      v6 = v4 - 2000;
    if ( v6 <= 999 )
    {
      v16 = 0;
      ptr = nullptr;
      v10 = strlen(a4);
      ptr = (void *)qvector_reserve(&ptr, 0, v10 + 1, 1);
      *(_QWORD *)&v16 = v10 + 1;
      memmove(ptr, a4, v10);
      *((_BYTE *)ptr + v10) = 0;
      sub_4CBEF0((__int64)&ptr);
      v11 = sub_3BDD60(a1, (__int64)a2);
      v13 = haystack;
      if ( (_QWORD)v16 )
        v13 = (const char *)ptr;
      v5 = netnode_supset(v11, v4, v13, 0, 83, v12);
      if ( (_BYTE)v5 )
      {
        if ( v4 == 1000 || v4 == 2000 )
          sub_3CFE80(*a1, a2, 0x2000);
        v14 = haystack;
        if ( (_QWORD)v16 )
          v14 = (const char *)ptr;
        sub_39ADA0(0x3Au, a2, (unsigned int)v4, v14);
      }
      if ( ptr )
      {
        *(_QWORD *)&v16 = 0;
        qfree(ptr);
      }
    }
  }
  return v5;
}
