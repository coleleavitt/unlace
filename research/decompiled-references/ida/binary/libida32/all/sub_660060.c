unsigned __int64 __fastcall sub_660060(__int64 a1)
{
  int v1; // r12d
  int v3; // eax
  unsigned int v4; // r13d
  _BYTE *v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  _BYTE *v8; // rdx
  __int64 v9; // rsi
  unsigned __int16 *v10; // rbx
  int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rdi
  unsigned int *i; // rbx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  unsigned int v18; // r12d
  __int64 v20; // r15
  int v21; // r14d
  int *v22; // rax
  int v23; // r9d
  __int64 v24; // rax
  _DWORD *v25; // rsi
  char v26; // [rsp+0h] [rbp-64B8h]
  unsigned int v27; // [rsp+Ch] [rbp-64ACh]
  int v28; // [rsp+Ch] [rbp-64ACh]
  int v29; // [rsp+10h] [rbp-64A8h]
  unsigned int v30; // [rsp+28h] [rbp-6490h] BYREF
  unsigned int v31; // [rsp+2Ch] [rbp-648Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-6488h] BYREF
  __int128 v33; // [rsp+38h] [rbp-6480h]
  _WORD v34[512]; // [rsp+50h] [rbp-6468h] BYREF
  _BYTE v35[24576]; // [rsp+450h] [rbp-6068h] BYREF
  _BYTE v36[40]; // [rsp+6450h] [rbp-68h] BYREF
  unsigned __int64 v37; // [rsp+6478h] [rbp-40h]

  v1 = 4096;
  v37 = __readfsqword(0x28u);
  netnode_check(&v30, "$ selectors", 0, 0);
  v3 = netnode_altval(v30, 0, 65);
  v29 = v3;
  if ( v3 <= 4096 )
    v1 = v3;
  v27 = v30;
  if ( 6LL * v1 )
  {
    v4 = 0;
    v5 = v35;
    v6 = 6LL * v1;
    do
    {
      v7 = 254;
      v8 = v5;
      v9 = v4;
      if ( v6 <= 0xFE )
        v7 = v6;
      ++v4;
      v5 += v7;
      netnode_supval(v27, v9, v8, v7, 83);
      v6 -= v7;
    }
    while ( v6 );
  }
  v10 = (unsigned __int16 *)v35;
  v11 = 0;
  if ( v29 > 0 )
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
  netnode_kill((int)&v30);
  v31 = -1;
  netnode_check(&v31, 0, 0, 1);
  for ( i = sub_4EEBF0(*(_QWORD *)(a1 + 1480) + 1552LL); i; i = sub_4EE960(*(_QWORD *)(a1 + 1480) + 1552LL, v18) )
  {
    v17 = i[7];
    v18 = *i;
    if ( (_DWORD)v17 != -1 )
    {
      qsnprintf((int)v36, 32, (int)"s %a", v17, v15, v16, v26);
      netnode_check(&ptr, v36, 0, 0);
      v17 = (unsigned int)ptr;
    }
    if ( netnode_supval(v17, 1, v34, 1024, 83) > 0 && !(unsigned int)netnode_altval(v31, i[7], 65) )
    {
      v20 = 1;
      netnode_altval(v31, i[7], 1);
      v21 = v34[0];
      v33 = 0;
      ptr = nullptr;
      if ( v34[0] > 0x40u )
        v21 = 64;
      if ( v34[0] )
      {
        do
        {
          v22 = (int *)sub_4F8AE0(*(_QWORD *)(a1 + 1480), (unsigned __int16)v34[v20]);
          if ( v22 )
          {
            v23 = *v22;
            v24 = v33;
            v25 = ptr;
            if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
            {
              v28 = v23;
              ptr = (void *)qvector_reserve(&ptr, ptr, v33 + 1, 4);
              v25 = ptr;
              v23 = v28;
              v24 = v33;
            }
            v25[v24] = v23;
            *(_QWORD *)&v33 = v33 + 1;
          }
          ++v20;
        }
        while ( v21 >= (int)v20 );
      }
      set_segment_translations(*i, &ptr);
      if ( ptr )
      {
        *(_QWORD *)&v33 = 0;
        qfree(ptr);
      }
    }
  }
  netnode_kill((int)&v31);
  sub_40ECC0(a1);
  return v37 - __readfsqword(0x28u);
}

