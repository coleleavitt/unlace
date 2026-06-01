__int64 __fastcall sub_297D60(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rbp
  int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 61 )
    return 0;
  v3 = (unsigned int)a1;
  if ( !sub_255A30(*(__int64 **)(v2 + 24)) )
    return 0;
  sub_283C00(&v22, a1, a2);
  v6 = *(_QWORD *)v23;
  v23 = v6;
  if ( v6 == v22 )
    return 0;
  LOBYTE(v3) = *(_DWORD *)(v6 + 24) != 84 && (unsigned int)(*(_DWORD *)(v6 + 24) - 80) > 1;
  if ( (_BYTE)v3 )
  {
    return 0;
  }
  else
  {
    v7 = *(_QWORD *)(v2 + 64);
    v24 = 0;
    v25 = 0;
    if ( (unsigned __int8)sub_285490(v7, (__int64)&v24) )
    {
      if ( (unsigned __int64)v25 <= 1
        || *(_DWORD *)(v6 + 24) != 80
        || (v21 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 8LL), (unsigned int)(v21 - 64) <= 1)
        || v21 == 61 )
      {
        v8 = 81;
        v11 = sub_2853C0(a2, 81, 1);
        if ( (_BYTE)v11 )
        {
          if ( (_QWORD)v25 )
          {
            v12 = v6 + 16;
            v13 = 0;
            v14 = 0;
            do
            {
              v15 = j__qalloc_or_throw(32, v8, v9, v10);
              *(_QWORD *)v15 = -1;
              v16 = v15;
              *(_DWORD *)(v15 + 8) = 70;
              *(_QWORD *)(v15 + 12) = -1;
              sub_25AA70(v15, v12);
              if ( v13 > 0 )
                *(_DWORD *)(v16 + 12) = -1;
              v8 = v16;
              sub_255580(*(__int64 **)(v24 + 8 * v14), v16);
              v14 = ++v13;
            }
            while ( v13 < (unsigned __int64)v25 );
          }
          v17 = v23;
          v18 = v22;
          v19 = *(_QWORD *)v23;
          v20 = v23 + 16;
          **(_QWORD **)(v23 + 8) = *(_QWORD *)v23;
          *(_QWORD *)(v19 + 8) = *(_QWORD *)(v17 + 8);
          sub_255050(v20);
          qfree(v17);
          --*(_QWORD *)(v18 + 16);
          v3 = v11;
        }
      }
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24);
    }
  }
  return v3;
}
