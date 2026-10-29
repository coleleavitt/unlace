unsigned __int64 __fastcall sub_672DE0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r13
  __int64 v13; // r15
  int v14; // ebp
  __int64 v15; // r14
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+18h] [rbp-B0h]
  _BYTE v24[88]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 1608);
  v25 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_79B370(a2, v3 + 104) )
  {
    sub_419620((__int64)v24, *(_QWORD **)(a2 + 1480));
    v23 = 0;
    ptr = nullptr;
    sub_79BD30(v3 + 104, a2, &ptr);
    v6 = *(_QWORD *)(v3 + 48);
    v7 = a3[1];
    v8 = *a3;
    if ( a3[2] < (unsigned __int64)(v7 + 1) )
    {
      v20 = qvector_reserve(a3, v8, v7 + 1, 24);
      *a3 = v20;
      v7 = a3[1];
      v8 = v20;
    }
    v9 = v8 + 24 * v7;
    *(_QWORD *)v9 = 0;
    *(_OWORD *)(v9 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v9);
    v12 = (unsigned int)v6;
    v13 = 0;
    v14 = 0;
    if ( (_DWORD)v6 )
    {
      do
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8 * v13);
        if ( *(_DWORD *)(v16 + 32) != -1 )
        {
          if ( ++v14 > 5 )
            break;
          v17 = a3[1];
          v18 = *a3;
          if ( a3[2] < (unsigned __int64)(v17 + 1) )
          {
            v21 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8 * v13);
            v19 = qvector_reserve(a3, v18, v17 + 1, 24);
            v17 = a3[1];
            v16 = v21;
            *a3 = v19;
            v18 = v19;
          }
          v15 = v18 + 24 * v17;
          *(_QWORD *)v15 = 0;
          *(_OWORD *)(v15 + 8) = 0;
          ++a3[1];
          sub_419660((__int64)v24, *(_DWORD *)(v16 + 32), nullptr, 1, v10, v11);
          sub_3573A0((char **)v15);
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
  }
  return v25 - __readfsqword(0x28u);
}

