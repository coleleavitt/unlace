__int64 __fastcall sub_501830(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r9
  unsigned int *v11; // r12
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  unsigned int v15; // r14d
  unsigned int v16; // esi
  unsigned int *v17; // rax
  unsigned int *v18; // rax
  unsigned int *v19; // r9
  unsigned int *v20; // r15
  unsigned int v21; // eax
  __int64 v22; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 1576LL);
  if ( !*(_BYTE *)(v4 + 144) )
  {
    if ( !under_debugger )
      interr(1336);
    BUG();
  }
  v6 = *(_QWORD *)(v4 + 8);
  v7 = (int)(a3 - *(_DWORD *)(v6 + 68));
  if ( v7 >= *(_QWORD *)(v4 + 40) )
    sub_4FC970(a1, a2, v6, a4);
  v8 = v7 << 6;
  *(_DWORD *)(*(_QWORD *)(v4 + 32) + v8 + 56) = a3;
  v9 = *(_QWORD *)(v4 + 32) + v8;
  v11 = sub_4FED00((unsigned int **)v9, a2);
  if ( v11 != (unsigned int *)(*(_QWORD *)v9 + 17LL * *(_QWORD *)(v9 + 8))
    && (v12 = *v11, (unsigned int)a2 >= *v11)
    && (unsigned int)a2 < v11[1]
    && v11
    && (_DWORD)a2 == v12
    && *sub_4EE820(v10 + 1552, v12) != v12
    && (v15 = v11[1], v13 = sub_4FED90(v9, v12), (_BYTE)v13) )
  {
    v16 = v12 - 1;
    v17 = sub_4FED00((unsigned int **)v9, v12 - 1);
    if ( v17 != (unsigned int *)(*(_QWORD *)v9 + 17LL * *(_QWORD *)(v9 + 8)) && v16 >= *v17 && v16 < v17[1] )
    {
      if ( v17 )
      {
        v18 = sub_4FED00((unsigned int **)v9, v16);
        v20 = v18;
        if ( v19 != v18 )
        {
          v21 = *v18;
          if ( v16 >= v21 )
          {
            v22 = v20[1];
            if ( v16 < (unsigned int)v22
              && v21 < v15
              && ((unsigned int)v22 >= v15
               || v19 == (unsigned int *)((char *)v20 + 17)
               || *(unsigned int *)((char *)v20 + 17) >= v15) )
            {
              sub_4FD960(*(unsigned int *)(v9 + 56), v21, v22, v15);
              v20[1] = v15;
              *((_BYTE *)v20 + 16) = 1;
            }
          }
        }
      }
    }
    sub_396090(0x3Eu, v12, v15, a3);
  }
  else
  {
    return 0;
  }
  return v13;
}

