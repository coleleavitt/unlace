unsigned __int64 __fastcall sub_7D9410(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  __int64 v3; // rdx
  int *v4; // r14
  int v5; // eax
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  _DWORD *v9; // rdx
  size_t v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v14; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h]
  unsigned int v16; // [rsp+1Ch] [rbp-6Ch]
  __int64 v17; // [rsp+20h] [rbp-68h]
  const void **v19; // [rsp+38h] [rbp-50h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v17 = a2[1];
  if ( v17 )
  {
    v14 = 0;
    v2 = 0;
    do
    {
      v3 = *(_QWORD *)(a1 + 56);
      v4 = (int *)(v2 + *a2);
      v5 = *v4;
      if ( !v3 )
      {
        if ( !under_debugger )
          interr(1777);
        BUG();
      }
      if ( !v5
        || (v6 = (unsigned int)(v5 - 1), (unsigned int)v6 < *(_DWORD *)(v3 + 128))
        && (v3 = *(_QWORD *)(v3 + 136) + 16 * v6) != 0 )
      {
        v7 = (unsigned int)v4[1];
        if ( v7 < *(_QWORD *)(v3 + 8) - *(_QWORD *)v3 )
        {
          v8 = *(_QWORD *)v3 + v7;
          if ( v8 != -1 )
          {
            if ( getinf(19) != v8 )
            {
              v16 = 1000;
              v9 = v4 + 2;
              goto LABEL_11;
            }
            do
            {
              v16 = 2000;
              v9 = v4 + 8;
LABEL_11:
              ptr = nullptr;
              v10 = *((_QWORD *)v9 + 1);
              if ( v10 )
              {
                v19 = (const void **)v9;
                ptr = (void *)qalloc_or_throw(*((_QWORD *)v9 + 1));
                memcpy(ptr, *v19, v10);
              }
              v11 = v16;
              v12 = qstrtok((char *)ptr, "\n");
              while ( v12 )
              {
                update_extra_cmt(v8, v11, v12);
                v12 = qstrtok(nullptr, "\n");
                v11 = (unsigned int)(v11 + 1);
              }
              if ( ptr )
                qfree(ptr);
            }
            while ( v16 != 2000 );
          }
        }
      }
      ++v14;
      v2 += 56;
    }
    while ( v17 != v14 );
  }
  return v20 - __readfsqword(0x28u);
}
