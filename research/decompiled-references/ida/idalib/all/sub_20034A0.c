_QWORD *__fastcall sub_20034A0(_QWORD *a1, __int64 **a2)
{
  __int64 *v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax
  void **v5; // r12
  void **v6; // rbx
  void *v8; // [rsp+0h] [rbp-48h] BYREF
  void **v9; // [rsp+8h] [rbp-40h]

  v2 = *a2;
  *a2 = nullptr;
  v3 = operator new(0xF0u);
  *(_QWORD *)v3 = &off_2BE4DB0;
  v4 = *v2;
  *(_QWORD *)(v3 + 8) = v2;
  (*(void (__fastcall **)(void **, __int64 *))(v4 + 24))(&v8, v2);
  sub_20029E0((__m128i **)(v3 + 16), (__m128i **)&v8);
  v5 = v9;
  v6 = (void **)v8;
  if ( v9 != v8 )
  {
    do
    {
      while ( *v6 != v6 + 2 )
      {
        operator delete(*v6);
        v6 += 4;
        if ( v6 == v5 )
          goto LABEL_4;
      }
      v6 += 4;
    }
    while ( v5 != v6 );
LABEL_4:
    v6 = (void **)v8;
  }
  if ( v6 )
    operator delete(v6);
  *a1 = v3;
  return a1;
}
