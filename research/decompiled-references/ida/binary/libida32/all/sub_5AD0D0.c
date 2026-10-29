__int64 __fastcall sub_5AD0D0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rsi
  __int64 v8; // r15
  __int64 v9; // rbx
  int v10; // edx
  int v11; // eax
  __int64 v12; // rsi
  int v14; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v4 = *(int *)(a2 + 104);
  if ( *(_DWORD *)(a2 + 104) )
  {
    v16 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 10 * v4, 1);
    v8 = *(_QWORD *)(a2 + 112);
    v9 = 0;
    v10 = 0;
    do
    {
      sub_3FA160((__int64 *)&ptr, *(_DWORD *)(v8 + 8 * v9) - v10);
      sub_3FA160((__int64 *)&ptr, *(_DWORD *)(v8 + 8 * v9 + 4) - *(_DWORD *)(v8 + 8 * v9));
      v10 = *(_DWORD *)(v8 + 8 * v9++ + 4);
    }
    while ( v4 != v9 );
    v11 = sub_3B90A0(a1, *(_DWORD *)a2);
    v12 = *a1;
    v14 = v11;
    sub_79BB40(&v14, v12, ptr, v16, 28672, 83);
    if ( ptr )
    {
      *(_QWORD *)&v16 = 0;
      qfree(ptr);
      if ( !a3 )
        return 1;
      return sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
    }
  }
  else
  {
    v5 = sub_3B90A0(a1, *(_DWORD *)a2);
    v6 = *a1;
    LODWORD(ptr) = v5;
    sub_79BB90(&ptr, v6, 28672, 83);
  }
  if ( !a3 )
    return 1;
  return sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
}

