_QWORD *__fastcall sub_21C510(_QWORD *a1, _QWORD *a2, int a3, int a4)
{
  __int64 v5; // rbp
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v16; // rdi
  __int64 v17; // r12
  __int64 v18; // rbp
  _QWORD *v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v5 = a4;
  v24 = __readfsqword(0x28u);
  if ( (get_tinfo_property(*a2, 2) & 0x2F) == 0xD )
  {
    v23 = 0;
    v22 = 0;
    sub_334B10((unsigned int)&v22, (_DWORD)a2, a3, 0, 3, v7);
    v8 = v22;
    v9 = v22 + ((_QWORD)v23 << 6);
    if ( v9 == v22 )
    {
      if ( v22 )
      {
LABEL_4:
        v10 = v23;
        if ( (_QWORD)v23 )
        {
          v11 = 0;
          do
          {
            v12 = (_QWORD *)((v11 << 6) + v8);
            clear_tinfo_t(v12 + 7);
            v13 = v12[4];
            if ( v13 )
            {
              v12[5] = 0;
              qfree(v13);
            }
            v14 = v12[1];
            if ( v14 )
            {
              v12[2] = 0;
              qfree(v14);
            }
            ++v11;
            v8 = v22;
          }
          while ( v10 != v11 );
        }
        *(_QWORD *)&v23 = 0;
        qfree(v8);
      }
    }
    else
    {
      do
      {
        if ( v5 == get_tinfo_size(0, *(_QWORD *)(v8 + 56), 0) )
        {
          if ( (get_tinfo_property(*(_QWORD *)(v8 + 56), 2) & 0x2F) == 0xD )
          {
            *a1 = 0;
            copy_tinfo_t(a1, a2);
            goto LABEL_19;
          }
          if ( (get_tinfo_property(*(_QWORD *)(v8 + 56), 2) & 0xF) == 9 )
          {
            *a1 = 0;
            copy_tinfo_t(a1, v8 + 56);
LABEL_19:
            v16 = v22;
            if ( v22 )
            {
              v17 = v23;
              if ( (_QWORD)v23 )
              {
                v18 = 0;
                do
                {
                  v19 = (_QWORD *)(v16 + (v18 << 6));
                  clear_tinfo_t(v19 + 7);
                  v20 = v19[4];
                  if ( v20 )
                  {
                    v19[5] = 0;
                    qfree(v20);
                  }
                  v21 = v19[1];
                  if ( v21 )
                  {
                    v19[2] = 0;
                    qfree(v21);
                  }
                  ++v18;
                  v16 = v22;
                }
                while ( v17 != v18 );
              }
              *(_QWORD *)&v23 = 0;
              qfree(v16);
            }
            return a1;
          }
        }
        v8 += 64;
      }
      while ( v8 != v9 );
      v8 = v22;
      if ( v22 )
        goto LABEL_4;
    }
  }
  *a1 = 0;
  return a1;
}
