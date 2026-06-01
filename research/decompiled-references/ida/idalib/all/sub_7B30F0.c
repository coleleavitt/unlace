__int64 __fastcall sub_7B30F0(__int64 *a1, __int64 a2, __int64 *a3)
{
  unsigned __int16 *v4; // rax
  __int64 v5; // r13
  unsigned __int16 *v6; // rbp
  size_t v7; // r12
  __int64 v8; // r14
  void *v9; // r15
  void *v10; // rdi
  void *v11; // rdi
  __int64 v13; // r14
  void *v14; // rdi
  size_t v15; // [rsp+8h] [rbp-60h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v17; // [rsp+18h] [rbp-50h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v4 = sub_7B3000((__int64)a1, a2, (__int64 *)&v15, 1, 1);
  if ( !v4 )
    return -1;
  v5 = v15;
  v6 = v4;
  if ( v15 != 9 )
  {
    if ( a3 )
    {
      v7 = v15;
      v8 = 0;
      v9 = nullptr;
      ptr = nullptr;
      v17 = 0;
      if ( !v15 )
        goto LABEL_5;
      v13 = v15 + 1;
      if ( v15 == -1 )
      {
        v14 = nullptr;
        v7 = -1;
        goto LABEL_13;
      }
LABEL_12:
      ptr = (void *)qvector_reserve(&ptr, 0, v13, 1);
      v14 = ptr;
LABEL_13:
      *(_QWORD *)&v17 = v13;
      memmove(v14, v6, v7);
      *((_BYTE *)ptr + v7) = 0;
      v9 = ptr;
      v8 = *((_QWORD *)&v17 + 1);
      v7 = v17;
LABEL_5:
      ptr = nullptr;
      v10 = (void *)*a3;
      v17 = 0;
      if ( v10 )
      {
        a3[1] = 0;
        qfree(v10);
        v11 = ptr;
        *a3 = (__int64)v9;
        a3[1] = v7;
        a3[2] = v8;
        if ( v11 )
        {
          *(_QWORD *)&v17 = 0;
          qfree(v11);
        }
      }
      else
      {
        *a3 = (__int64)v9;
        a3[1] = v7;
        a3[2] = v8;
      }
      return v5;
    }
    return v5;
  }
  if ( *(_BYTE *)v4 )
  {
    if ( a3 )
    {
      v7 = 9;
      ptr = nullptr;
      v13 = 10;
      v17 = 0;
      goto LABEL_12;
    }
    return v5;
  }
  return sub_7B01D0(*a1, a3, (__int64)v4);
}
