__int64 __fastcall sub_5C7BB0(__int64 *a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  void *v5; // rax
  __int64 v6; // rsi
  _QWORD *v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v14; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v4 = *(int *)(a2 + 128);
  if ( *(_DWORD *)(a2 + 128) )
  {
    ptr = nullptr;
    v16 = 0;
    ptr = (void *)qvector_reserve(&ptr, 0, 20 * v4, 1);
    v8 = *(_QWORD **)(a2 + 136);
    v9 = 0;
    v10 = 0;
    do
    {
      sub_40D2A0((__int64 *)&ptr, *v8 - v10);
      sub_40D2A0((__int64 *)&ptr, v8[1] - *v8);
      ++v9;
      v10 = v8[1];
      v8 += 2;
    }
    while ( v4 != v9 );
    v11 = sub_3BDD60(a1, *(_QWORD *)a2);
    v12 = *a1;
    v14 = v11;
    sub_7BEF30(&v14, v12, ptr, v16, 28672, 83);
    if ( ptr )
    {
      *(_QWORD *)&v16 = 0;
      qfree(ptr);
      if ( !a3 )
        return 1;
      return sub_5C77B0((__int64)a1, (unsigned __int64 *)a2, 0);
    }
  }
  else
  {
    v5 = (void *)sub_3BDD60(a1, *(_QWORD *)a2);
    v6 = *a1;
    ptr = v5;
    sub_7BEF80(&ptr, v6, 28672, 83);
  }
  if ( !a3 )
    return 1;
  return sub_5C77B0((__int64)a1, (unsigned __int64 *)a2, 0);
}
