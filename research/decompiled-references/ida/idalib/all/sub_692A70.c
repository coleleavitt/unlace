unsigned __int64 __fastcall sub_692A70(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r12
  __int64 v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r15
  int v13; // ebp
  __int64 v14; // r14
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v22; // [rsp+18h] [rbp-B0h]
  _BYTE v23[88]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 1800);
  v24 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_7BE6E0(a2, v3 + 112) )
  {
    sub_42D210((__int64)v23, *(_QWORD **)(a2 + 1672));
    v22 = 0;
    ptr = nullptr;
    sub_7BF130(v3 + 112, a2, &ptr);
    v6 = a3[1];
    v7 = *(_QWORD *)(v3 + 56);
    v8 = *a3;
    if ( a3[2] < (unsigned __int64)(v6 + 1) )
    {
      v19 = qvector_reserve(a3, v8, v6 + 1, 24);
      *a3 = v19;
      v6 = a3[1];
      v8 = v19;
    }
    v9 = v8 + 24 * v6;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    ++a3[1];
    sub_35A790((char **)v9);
    v12 = 0;
    v13 = 0;
    if ( v7 )
    {
      do
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v12);
        if ( *(_QWORD *)(v15 + 40) != -1 )
        {
          if ( ++v13 > 5 )
            break;
          v16 = a3[1];
          v17 = *a3;
          if ( a3[2] < (unsigned __int64)(v16 + 1) )
          {
            v20 = *(_QWORD *)(*(_QWORD *)(v3 + 48) + 8 * v12);
            v18 = qvector_reserve(a3, v17, v16 + 1, 24);
            v16 = a3[1];
            v15 = v20;
            *a3 = v18;
            v17 = v18;
          }
          v14 = v17 + 24 * v16;
          *(_QWORD *)v14 = 0;
          *(_OWORD *)(v14 + 8) = 0;
          ++a3[1];
          sub_42D250((__int64)v23, *(_QWORD *)(v15 + 40), nullptr, 1, v10, v11);
          sub_35A790((char **)v14);
        }
        ++v12;
      }
      while ( v7 != v12 );
    }
    if ( ptr )
    {
      *(_QWORD *)&v22 = 0;
      qfree(ptr);
    }
  }
  return v24 - __readfsqword(0x28u);
}
