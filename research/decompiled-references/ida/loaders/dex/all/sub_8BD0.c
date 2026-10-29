__int64 __fastcall sub_8BD0(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // rbx
  size_t v9; // r12
  void *v10; // rsi
  __int128 v11; // kr00_16
  void *v12; // rdi
  __int64 v13; // rax
  void *v14; // [rsp+0h] [rbp-458h] BYREF
  __int128 v15; // [rsp+8h] [rbp-450h]
  char src; // [rsp+20h] [rbp-438h] BYREF
  __int64 v17; // [rsp+21h] [rbp-437h]
  unsigned __int64 v18; // [rsp+428h] [rbp-30h]

  v5 = a4;
  v18 = __readfsqword(0x28u);
  v6 = netnode_supval(a2, a3, &src, 1024, a4);
  if ( v6 >= 0 )
  {
    v7 = v6;
    if ( v6 == 9 )
    {
      if ( !src )
      {
        netnode_qgetblob(v17, a1, 1, 0, v5 | 0x400u);
        return 1;
      }
      v14 = nullptr;
      v9 = 8;
      v15 = 0;
    }
    else
    {
      if ( !v6 )
        return 1;
      v14 = nullptr;
      v10 = nullptr;
      v15 = 0;
      v9 = v6 - 1;
      v11 = 0u;
      if ( v6 == 1 )
      {
LABEL_8:
        v12 = *(void **)a1;
        v13 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = v10;
        *(_OWORD *)(a1 + 8) = v11;
        v14 = v12;
        *((_QWORD *)&v15 + 1) = v13;
        if ( v12 )
        {
          *(_QWORD *)&v15 = 0;
          qfree(v12);
        }
        return 1;
      }
    }
    v14 = (void *)qvector_reserve(&v14, 0, v6, 1);
    *(_QWORD *)&v15 = v7;
    memmove(v14, &src, v9);
    *((_BYTE *)v14 + v9) = 0;
    v10 = v14;
    v11 = v15;
    goto LABEL_8;
  }
  return 0;
}

