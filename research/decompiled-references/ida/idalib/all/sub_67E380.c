unsigned __int64 __fastcall sub_67E380(__int64 a1)
{
  int v1; // r12d
  int v3; // eax
  _BYTE *v4; // r13
  int v5; // r14d
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rsi
  _BYTE *v9; // rdx
  unsigned __int16 *v10; // rbx
  int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 *i; // rbx
  int v15; // r8d
  int v16; // r9d
  void *v17; // rdi
  unsigned __int64 v18; // r12
  __int64 v20; // r15
  int v21; // r14d
  __int64 *v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rsi
  __int64 v26; // [rsp+8h] [rbp-64B0h]
  __int64 v27; // [rsp+8h] [rbp-64B0h]
  int v28; // [rsp+10h] [rbp-64A8h]
  __int64 v29; // [rsp+20h] [rbp-6498h] BYREF
  __int64 v30; // [rsp+28h] [rbp-6490h] BYREF
  void *ptr; // [rsp+30h] [rbp-6488h] BYREF
  __int128 v32; // [rsp+38h] [rbp-6480h]
  _WORD v33[512]; // [rsp+50h] [rbp-6468h] BYREF
  _BYTE v34[24576]; // [rsp+450h] [rbp-6068h] BYREF
  _BYTE v35[40]; // [rsp+6450h] [rbp-68h] BYREF
  unsigned __int64 v36; // [rsp+6478h] [rbp-40h]

  v1 = 4096;
  v36 = __readfsqword(0x28u);
  netnode_check(&v29, "$ selectors", 0, 0);
  v3 = netnode_altval(v29, 0, 65);
  v28 = v3;
  if ( v3 <= 4096 )
    v1 = v3;
  v26 = v29;
  if ( 6LL * v1 )
  {
    v4 = v34;
    v5 = 0;
    v6 = 6LL * v1;
    do
    {
      v7 = 254;
      v8 = v5;
      v9 = v4;
      if ( v6 <= 0xFE )
        v7 = v6;
      ++v5;
      v4 += v7;
      netnode_supval(v26, v8, v9, v7, 83);
      v6 -= v7;
    }
    while ( v6 );
  }
  v10 = (unsigned __int16 *)v34;
  v11 = 0;
  if ( v28 > 0 )
  {
    do
    {
      v12 = *(unsigned int *)(v10 + 1);
      v13 = *v10;
      ++v11;
      v10 += 3;
      set_selector(v13, v12);
    }
    while ( v1 > v11 );
  }
  netnode_kill((int)&v29);
  v30 = -1;
  netnode_check(&v30, 0, 0, 1);
  for ( i = sub_506150(*(_QWORD *)(a1 + 1672) + 1624LL); i; i = sub_505EB0(*(_QWORD *)(a1 + 1672) + 1624LL, v18) )
  {
    v17 = (void *)i[6];
    v18 = *i;
    if ( v17 != (void *)-1LL )
    {
      qsnprintf((unsigned int)v35, 32, (unsigned int)"s %a", i[6], v15, v16);
      netnode_check(&ptr, v35, 0, 0);
      v17 = ptr;
    }
    if ( netnode_supval(v17, 1, v33, 1024, 83) > 0 && !netnode_altval(v30, i[6], 65) )
    {
      v20 = 1;
      netnode_altval(v30, i[6], 1);
      v21 = v33[0];
      v32 = 0;
      ptr = nullptr;
      if ( v33[0] > 0x40u )
        v21 = 64;
      if ( v33[0] )
      {
        do
        {
          v22 = (__int64 *)sub_510420(*(_QWORD *)(a1 + 1672), (unsigned __int16)v33[v20]);
          if ( v22 )
          {
            v23 = *v22;
            v24 = v32;
            v25 = ptr;
            if ( *((_QWORD *)&v32 + 1) < (unsigned __int64)(v32 + 1) )
            {
              v27 = v23;
              ptr = (void *)qvector_reserve(&ptr, ptr, v32 + 1, 8);
              v25 = ptr;
              v23 = v27;
              v24 = v32;
            }
            v25[v24] = v23;
            *(_QWORD *)&v32 = v32 + 1;
          }
          ++v20;
        }
        while ( v21 >= (int)v20 );
      }
      set_segment_translations(*i, &ptr);
      if ( ptr )
      {
        *(_QWORD *)&v32 = 0;
        qfree(ptr);
      }
    }
  }
  netnode_kill((int)&v30);
  sub_4224E0(a1);
  return v36 - __readfsqword(0x28u);
}
