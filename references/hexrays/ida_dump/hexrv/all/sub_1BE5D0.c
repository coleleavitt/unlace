__int64 __fastcall sub_1BE5D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v5; // r14d
  _QWORD *v6; // r14
  __int64 *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 i; // rbx
  __int64 v11; // rax
  __int64 (__fastcall **v13)(); // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v14; // [rsp+8h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-58h]
  int v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v13 = off_4B1298;
  v4 = qalloc_or_throw(24);
  *(_QWORD *)v4 = 0;
  *(_OWORD *)(v4 + 8) = 0;
  v14 = (_QWORD *)v4;
  v15 = a2;
  v16 = 0;
  for_all_arglocs(&v13, a1, a3, 0);
  v5 = v16;
  if ( v16 > 0 )
  {
    v6 = v14;
    cleanup_argloc(a1);
    if ( v6 )
    {
      *(_DWORD *)a1 = 2;
      *(_QWORD *)(a1 + 8) = v6;
    }
    v14 = nullptr;
    optimize_argloc(a1, a3, a2);
    v5 = v16;
  }
  v7 = v14;
  v13 = off_4B1298;
  if ( v14 )
  {
    v8 = *v14;
    if ( *v14 )
    {
      v9 = v14[1];
      if ( v9 )
      {
        for ( i = 0; i != v9; ++i )
        {
          v11 = 3 * i;
          cleanup_argloc(v8 + 8 * v11);
          v8 = *v7;
        }
      }
      v7[1] = 0;
      qfree(v8);
    }
    qfree(v7);
  }
  return v5;
}
