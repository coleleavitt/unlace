__int64 __fastcall sub_39C480(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  _BYTE *v6; // rcx
  _BYTE *v7; // rbp
  __int64 v8; // rax
  char *v9; // rdi
  __int64 v10; // r14
  __int64 i; // r15
  char *v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-70h]
  _QWORD v19[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v20[11]; // [rsp+20h] [rbp-58h] BYREF

  v20[3] = __readfsqword(0x28u);
  v1 = *(_QWORD *)(*a1 + 1528);
  if ( !*(_QWORD *)(v1 + 16) )
  {
    sub_39BB90(*(_QWORD **)(*a1 + 1528));
    *(_BYTE *)(v1 + 68) = 0;
    v3 = *a1;
    v20[2] = 0;
    v20[0] = &off_2B25C78;
    v20[1] = v3;
    sub_641020(0, 0, "*.so", v20, 0, v4);
    v5 = *a1;
    v19[0] = &off_2B25CA0;
    v19[1] = v5;
    for_all_extlangs(v19, 1);
    v6 = *(_BYTE **)(v1 + 8);
    v7 = v6;
    if ( 88LL * *(_QWORD *)(v1 + 16) )
    {
      do
      {
        if ( v7[81] )
        {
          v8 = *(_QWORD *)(v1 + 16);
          v7 += 88;
        }
        else
        {
          v9 = *((char **)v7 + 7);
          if ( v9 )
          {
            v18 = *((_QWORD *)v7 + 8);
            if ( v18 )
            {
              v10 = 0;
              for ( i = 0; i != v18; ++i )
              {
                v12 = &v9[v10];
                v13 = *(void **)&v9[v10 + 24];
                if ( v13 )
                {
                  *((_QWORD *)v12 + 4) = 0;
                  qfree(v13);
                }
                v14 = *(void **)v12;
                if ( *(_QWORD *)v12 )
                {
                  *((_QWORD *)v12 + 1) = 0;
                  qfree(v14);
                }
                v9 = *((char **)v7 + 7);
                v10 += 56;
              }
            }
            *((_QWORD *)v7 + 8) = 0;
            qfree(v9);
          }
          v15 = *((void **)v7 + 4);
          if ( v15 )
          {
            *((_QWORD *)v7 + 5) = 0;
            qfree(v15);
          }
          v16 = *(void **)v7;
          if ( *(_QWORD *)v7 )
          {
            *((_QWORD *)v7 + 1) = 0;
            qfree(v16);
          }
          memmove(v7, v7 + 88, *(_QWORD *)(v1 + 8) + 88LL * *(_QWORD *)(v1 + 16) - (_QWORD)v7 - 88);
          v17 = *(_QWORD *)(v1 + 16);
          *(_BYTE *)(v1 + 68) = 1;
          v6 = *(_BYTE **)(v1 + 8);
          v8 = v17 - 1;
          *(_QWORD *)(v1 + 16) = v8;
        }
      }
      while ( v7 != &v6[88 * v8] );
    }
    if ( *(_BYTE *)(v1 + 68) )
      sub_39B920(v1);
  }
  return v1 + 8;
}
