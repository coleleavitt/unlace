__int64 __fastcall sub_4730(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  unsigned int v10; // ebp
  __int64 v12; // rsi
  __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8);
  v15 = __readfsqword(0x28u);
  v3 = v1 + *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 32) + v1;
  if ( v3 >= v4 || (v5 = sub_E440(v3, v4, a1 + 60)) == 0 )
    sub_3890((__int64)"memory section: couldn't read memory count");
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 24) = v5 + v6;
  create_data(v6, 0, v5, -1);
  set_cmt(*(_QWORD *)(a1 + 40), "memory count", 0);
  v7 = *(_DWORD *)(a1 + 60);
  v8 = *(_QWORD *)(a1 + 248);
  v9 = (unsigned int)(*(_DWORD *)(a1 + 84) + v7);
  if ( v8 < v9 )
  {
    v12 = *(_QWORD *)(a1 + 240);
    if ( *(_QWORD *)(a1 + 256) < v9 )
    {
      v13 = qvector_reserve(a1 + 240, v12, (unsigned int)(*(_DWORD *)(a1 + 84) + *(_DWORD *)(a1 + 60)), 4);
      v8 = *(_QWORD *)(a1 + 248);
      *(_QWORD *)(a1 + 240) = v13;
      v12 = v13;
    }
    memset((void *)(v12 + 4 * v8), 0, 4 * (v9 - v8));
    *(_QWORD *)(a1 + 248) = v9;
    v7 = *(_DWORD *)(a1 + 60);
  }
  else if ( v9 != v8 )
  {
    *(_QWORD *)(a1 + 248) = v9;
  }
  v10 = 0;
  if ( v7 )
  {
    do
    {
      ++v10;
      sub_44D0((_QWORD *)a1, &v14);
    }
    while ( v10 < *(_DWORD *)(a1 + 60) );
  }
  return 1;
}
