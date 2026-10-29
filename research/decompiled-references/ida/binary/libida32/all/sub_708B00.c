unsigned __int64 __fastcall sub_708B00(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rbp
  const void *v5; // r13
  void *v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  netnode_check(&v8, "$ type parser", 0, 0);
  if ( v8 == -1 || netnode_qsupstr(v8, a2, 0xFFFFFFFFLL, 83) == -1 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 1480LL);
    if ( a2 != (__int64 *)(v3 + 216) )
    {
      v4 = *(_QWORD *)(v3 + 224);
      if ( v4 > 1 )
      {
        v5 = *(const void **)(v3 + 216);
        v6 = (void *)*a2;
        if ( a2[2] < v4 )
        {
          v7 = qvector_reserve(a2, *a2, *(_QWORD *)(v3 + 224), 1);
          *a2 = v7;
          v6 = (void *)v7;
        }
        a2[1] = v4;
        memmove(v6, v5, v4 - 1);
        *(_BYTE *)(*a2 + v4 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
  }
  return v9 - __readfsqword(0x28u);
}

