void __fastcall sub_54AA00(_QWORD *a1)
{
  unsigned int v1; // r14d
  _QWORD *v3; // rbp
  unsigned int v4; // r12d
  __int64 v5; // rax
  void (__fastcall ***v6)(_QWORD); // rbx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  void *v12; // rdi

  v1 = 0;
  v3 = (_QWORD *)a1[7];
  *a1 = &off_1C50940;
  if ( v3 )
  {
    while ( v1 < *((_DWORD *)v3 - 1) )
    {
      while ( 1 )
      {
        v4 = 0;
        v5 = v3[v1];
        if ( v5 )
          break;
        if ( ++v1 >= *((_DWORD *)v3 - 1) )
          goto LABEL_14;
      }
      while ( v4 < *(_DWORD *)(v5 - 4) )
      {
        v6 = *(void (__fastcall ****)(_QWORD))(v5 + 8LL * v4);
        if ( v6 )
        {
          ++v4;
          (**v6)(v6);
          sub_186B220(v6);
          v3 = (_QWORD *)a1[7];
          v5 = v3[v1];
          if ( !v5 )
            break;
        }
        else
        {
          ++v4;
        }
      }
      ++v1;
      if ( !v3 )
        goto LABEL_8;
    }
LABEL_14:
    v10 = *((unsigned int *)v3 - 1);
    v11 = &v3[v10];
    if ( (_DWORD)v10 )
    {
      do
      {
        while ( *v3 )
        {
          v12 = (void *)(*v3++ - 8LL);
          sub_186B220(v12);
          if ( v11 == v3 )
          {
            v3 = (_QWORD *)a1[7];
            goto LABEL_18;
          }
        }
        ++v3;
      }
      while ( v11 != v3 );
      v3 = (_QWORD *)a1[7];
    }
LABEL_18:
    sub_186B220(v3 - 1);
  }
LABEL_8:
  v7 = a1[5];
  if ( v7 )
  {
    v8 = a1[6];
    if ( (*(_DWORD *)(v7 + 8))-- == 1 )
      sub_15D7BC0(v8, v7);
  }
  operator delete(a1, 0x40u);
}

