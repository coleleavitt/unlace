__int64 __fastcall sub_2061810(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // r15
  __int64 *v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  _BYTE *v10; // rsi
  __int64 v11; // rbx
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  _BYTE vars10[184]; // [rsp+10h] [rbp+10h] BYREF

  v3 = &a2[a3];
  vars8 = 0x1000000000LL;
  ptr = vars10;
  if ( v3 == a2 )
  {
    v6 = 0;
    v10 = vars10;
  }
  else
  {
    v4 = a2;
    v5 = 16;
    LODWORD(v6) = 0;
    while ( 1 )
    {
      v7 = (unsigned int)v6;
      v8 = *v4;
      v9 = (unsigned int)v6 + 1LL;
      if ( v9 > v5 )
      {
        sub_2237220(&ptr, vars10, v9, 8);
        v7 = (unsigned int)vars8;
      }
      ++v4;
      *((_QWORD *)ptr + v7) = v8;
      v6 = (unsigned int)(vars8 + 1);
      LODWORD(vars8) = vars8 + 1;
      if ( v3 == v4 )
        break;
      v5 = HIDWORD(vars8);
    }
    v10 = ptr;
  }
  v11 = sub_20B52A0(*(_QWORD *)(a1 + 8), v10, v6, 0, 1);
  if ( ptr != &ptr )
    free(ptr);
  return v11;
}
