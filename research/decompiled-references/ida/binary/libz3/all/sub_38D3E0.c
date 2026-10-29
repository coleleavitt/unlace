void __fastcall sub_38D3E0(_QWORD *a1)
{
  __int64 v2; // rbp
  __int64 *v3; // rbx
  __int64 *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  bool v8; // zf
  __int64 *v9; // rax
  void (__fastcall ***v10)(_QWORD); // rbx
  void *v11; // rdi
  void *v12; // rdi

  v2 = *((unsigned int *)a1 + 6);
  v3 = (__int64 *)a1[2];
  *a1 = &off_1C4DD50;
  v4 = &v3[2 * v2];
  if ( v3 != v4 )
  {
    while ( (unsigned __int64)*v3 <= 1 )
    {
      v3 += 2;
      if ( v4 == v3 )
        goto LABEL_18;
    }
    if ( v4 != v3 )
    {
      v5 = *v3;
      v6 = a1[1];
      if ( *v3 )
        goto LABEL_16;
      while ( 1 )
      {
        v7 = v3[1];
        if ( v7 )
        {
          v8 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v6, v7);
        }
        v9 = v3 + 2;
        if ( v4 == v3 + 2 )
          break;
        while ( 1 )
        {
          v5 = *v9;
          v3 = v9;
          if ( (unsigned __int64)*v9 > 1 )
            break;
          v9 += 2;
          if ( v4 == v9 )
            goto LABEL_18;
        }
        if ( v4 == v9 )
          break;
        v6 = a1[1];
LABEL_16:
        v8 = (*(_DWORD *)(v5 + 8))-- == 1;
        if ( v8 )
        {
          sub_15D7BC0(v6, v5);
          v6 = a1[1];
        }
      }
    }
  }
LABEL_18:
  sub_1695230(a1 + 9);
  v10 = (void (__fastcall ***)(_QWORD))a1[8];
  if ( v10 )
  {
    (**v10)(a1[8]);
    sub_186B220(v10);
  }
  v11 = (void *)a1[5];
  if ( v11 )
    sub_186B220(v11);
  v12 = (void *)a1[2];
  if ( v12 )
    sub_186B220(v12);
  operator delete(a1, 0x88u);
}

