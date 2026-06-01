unsigned __int64 __fastcall sub_417360(__int64 a1, _QWORD *a2)
{
  __int64 vault_filesys; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbp
  const void *v9; // r13
  void *v10; // rax
  const void *v11; // r14
  void *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v13 = 0;
  v14 = 0;
  vault_filesys = get_vault_filesys(&v13, 0, 0);
  v4 = v13;
  a2[7] = vault_filesys;
  if ( v4 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v4, nullptr);
  }
  v5 = *(_QWORD **)(a1 + 32);
  if ( a2 + 1 != v5 + 12 )
  {
    v6 = v5[13];
    if ( v6 > 1 )
    {
      v11 = (const void *)v5[12];
      v12 = (void *)a2[1];
      if ( a2[3] < v6 )
      {
        v12 = (void *)qvector_reserve(a2 + 1, a2[1], v6, 1);
        a2[1] = v12;
      }
      a2[2] = v6;
      memmove(v12, v11, v6 - 1);
      *(_BYTE *)(a2[1] + v6 - 1) = 0;
      v5 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      a2[2] = 0;
      v5 = *(_QWORD **)(a1 + 32);
    }
  }
  if ( a2 + 4 != v5 + 21 )
  {
    v7 = v5[22];
    if ( v7 > 1 )
    {
      v9 = (const void *)v5[21];
      v10 = (void *)a2[4];
      if ( a2[6] < v7 )
      {
        v10 = (void *)qvector_reserve(a2 + 4, a2[4], v7, 1);
        a2[4] = v10;
      }
      a2[5] = v7;
      memmove(v10, v9, v7 - 1);
      *(_BYTE *)(a2[4] + v7 - 1) = 0;
    }
    else
    {
      a2[5] = 0;
    }
  }
  return v15 - __readfsqword(0x28u);
}
