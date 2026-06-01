unsigned __int64 __fastcall sub_9FB50(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  size_t v4; // rax
  size_t v6; // rax
  __int64 *v7; // rax
  __int64 v8; // r15
  void *v9; // rbp
  size_t v10; // rbp
  void *v11; // rbx
  size_t n; // [rsp+18h] [rbp-90h]
  _BYTE v14[3]; // [rsp+65h] [rbp-43h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 && *(_QWORD *)(v3 + 8) )
  {
    v6 = pack_dw() - (_QWORD)v14;
    if ( v6 )
      sub_9CF80(a3, v14, v6);
    v7 = *(__int64 **)(a2 + 24);
    v8 = *v7;
    if ( v7[1] << 6 )
    {
      do
      {
        v10 = *(_QWORD *)(v8 + 16);
        v11 = nullptr;
        if ( v10 )
        {
          v11 = (void *)qalloc_or_throw();
          memcpy(v11, *(const void **)(v8 + 8), v10);
        }
        v9 = nullptr;
        if ( *(_QWORD *)(v8 + 40) )
        {
          n = *(_QWORD *)(v8 + 40);
          v9 = (void *)qalloc_or_throw();
          memcpy(v9, *(const void **)(v8 + 32), n);
        }
        sub_9D6E0(a3);
        sub_9D6E0(a3);
        if ( v9 )
          qfree();
        if ( v11 )
          qfree();
        v8 += 64;
      }
      while ( v8 != **(_QWORD **)(a2 + 24) + (*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) << 6) );
    }
  }
  else
  {
    v4 = pack_dw() - (_QWORD)v14;
    if ( v4 )
      sub_9CF80(a3, v14, v4);
  }
  return v15 - __readfsqword(0x28u);
}

