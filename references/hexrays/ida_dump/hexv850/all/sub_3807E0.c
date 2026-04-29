__int64 __fastcall sub_3807E0(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // r13
  __int64 v6; // rax
  const char *v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  size_t v10; // r12
  void *v11; // rax
  void (__fastcall **v12)(_QWORD, __int64 *, __int64 *); // rax
  void (__fastcall *v13)(_QWORD, __int64 *, __int64 *); // r12
  __int64 v14; // rax
  __int64 v16; // [rsp+8h] [rbp-80h]
  const char *src; // [rsp+18h] [rbp-70h]
  __int64 v18; // [rsp+28h] [rbp-60h] BYREF
  __int64 v19; // [rsp+30h] [rbp-58h] BYREF
  __int128 v20; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 16);
  v3 = v2[1];
  if ( !v3 )
    return 0;
  v4 = *v2;
  v5 = -1;
  v16 = *v2 + 32 * v3;
  if ( v16 != *v2 )
  {
    do
    {
      ++v5;
      v6 = operator new(0x30u);
      v7 = s1;
      v8 = v6;
      if ( *(_QWORD *)(v4 + 8) )
        v7 = *(const char **)v4;
      v9 = *(_QWORD *)(v4 + 24);
      *(_QWORD *)v8 = &off_4BA528;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 8) = v9;
      *(_OWORD *)(v8 + 24) = 0;
      if ( v7 )
      {
        src = v7;
        v10 = strlen(v7);
        v11 = (void *)qvector_reserve(v8 + 16, 0, v10 + 1, 1);
        *(_QWORD *)(v8 + 16) = v11;
        *(_QWORD *)(v8 + 24) = v10 + 1;
        memmove(v11, src, v10);
        *(_BYTE *)(*(_QWORD *)(v8 + 16) + v10) = 0;
      }
      v12 = *a2;
      *(_QWORD *)(v8 + 40) = v5;
      v13 = *v12;
      v18 = v8;
      v20 = 0;
      v19 = 0;
      v14 = qvector_reserve(&v19, 0, 6, 1);
      v19 = v14;
      *(_QWORD *)&v20 = 6;
      *(_DWORD *)v14 = 1835890020;
      *(_BYTE *)(v14 + 4) = 121;
      *(_BYTE *)(v19 + 5) = 0;
      v13(a2, &v19, &v18);
      if ( v19 )
      {
        *(_QWORD *)&v20 = 0;
        qfree(v19);
      }
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v4 += 32;
    }
    while ( v16 != v4 );
  }
  return 2;
}
