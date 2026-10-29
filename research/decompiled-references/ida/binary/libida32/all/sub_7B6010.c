unsigned __int64 __fastcall sub_7B6010(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rax
  int *v4; // r14
  int v5; // edx
  __int64 v6; // rdx
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  _DWORD *v9; // rdx
  size_t v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h]
  unsigned int v15; // [rsp+1Ch] [rbp-6Ch]
  __int64 v16; // [rsp+20h] [rbp-68h]
  _QWORD *v17; // [rsp+30h] [rbp-58h]
  const void **v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v17 = (_QWORD *)a2;
  v19 = __readfsqword(0x28u);
  v16 = *(_QWORD *)(a2 + 8);
  if ( v16 )
  {
    v13 = 0;
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(a1 + 56);
      v4 = (int *)(v2 + *v17);
      v5 = *v4;
      if ( !v3 )
      {
        if ( !under_debugger )
          interr(1777);
        BUG();
      }
      if ( !v5
        || (v6 = (unsigned int)(v5 - 1), (unsigned int)v6 < *(_DWORD *)(v3 + 104))
        && (v3 = *(_QWORD *)(v3 + 112) + 8 * v6) != 0 )
      {
        v7 = v4[1];
        if ( v7 < *(_DWORD *)(v3 + 4) - *(_DWORD *)v3 )
        {
          v8 = *(_DWORD *)v3 + v7;
          if ( v8 != -1 )
          {
            if ( v8 != (unsigned int)getinf(19) )
            {
              v15 = 1000;
              v9 = v4 + 2;
              goto LABEL_11;
            }
            do
            {
              v15 = 2000;
              v9 = v4 + 8;
LABEL_11:
              ptr = nullptr;
              v10 = *((_QWORD *)v9 + 1);
              if ( v10 )
              {
                v18 = (const void **)v9;
                ptr = (void *)qalloc_or_throw(*((_QWORD *)v9 + 1), (const char *)a2);
                memcpy(ptr, *v18, v10);
              }
              a2 = v15;
              v11 = qstrtok((char *)ptr, "\n");
              while ( v11 )
              {
                update_extra_cmt(v8, a2, v11);
                v11 = qstrtok(nullptr, "\n");
                a2 = (unsigned int)(a2 + 1);
              }
              if ( ptr )
                qfree(ptr);
            }
            while ( v15 != 2000 );
          }
        }
      }
      ++v13;
      v2 += 56;
    }
    while ( v16 != v13 );
  }
  return v19 - __readfsqword(0x28u);
}

