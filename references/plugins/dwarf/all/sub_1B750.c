void __fastcall sub_1B750(__int64 a1)
{
  __int64 v2; // rdx
  bool v3; // zf
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  void (***v13)(void); // rdx
  void (**v14)(void); // rax
  _QWORD *v15; // r13
  void (__fastcall *v16)(_QWORD *); // rdx
  void (__fastcall *v17)(_QWORD *); // rax
  _QWORD *v18; // r12
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rdi

  v2 = *(_QWORD *)(a1 + 216);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 8))-- == 1;
    if ( v3 )
    {
      v15 = *(_QWORD **)(a1 + 216);
      v16 = *(void (__fastcall **)(_QWORD *))*v15;
      if ( v16 == sub_15E30 )
      {
        if ( v15 )
        {
          v17 = *(void (__fastcall **)(_QWORD *))(*v15 + 16LL);
          if ( v17 == sub_15D70 )
          {
            v18 = (_QWORD *)v15[16];
            *v15 = &off_C71D8;
            if ( v18 )
            {
              v19 = v18[2];
              while ( v19 )
              {
                sub_15270(*(_QWORD **)(v19 + 24));
                v20 = (void *)v19;
                v19 = *(_QWORD *)(v19 + 16);
                operator delete(v20, 0x30u);
              }
              operator delete(v18, 0x30u);
            }
            v21 = v15[19];
            while ( v21 )
            {
              v22 = (_QWORD *)v21;
              sub_159F0(*(_QWORD **)(v21 + 24));
              v23 = *(_QWORD *)(v21 + 32);
              v21 = *(_QWORD *)(v21 + 16);
              if ( v23 )
              {
                v22[5] = 0;
                qfree(v23);
              }
              operator delete(v22, 0x48u);
            }
            v24 = v15[12];
            if ( v24 )
            {
              v15[13] = 0;
              qfree(v24);
            }
            operator delete(v15, 0xC0u);
          }
          else
          {
            v17(*(_QWORD **)(a1 + 216));
          }
        }
      }
      else
      {
        v16(*(_QWORD **)(a1 + 216));
      }
    }
  }
  v4 = *(_QWORD *)(a1 + 176);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v4);
  }
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 160);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9);
          v5 = *(_QWORD *)(a1 + 152);
        }
      }
    }
    *(_QWORD *)(a1 + 160) = 0;
    qfree(v5);
  }
  v10 = *(_QWORD *)(a1 + 88);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v10);
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v11);
  }
  v12 = *(_QWORD *)(a1 + 40);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v12);
  }
  v13 = *(void (****)(void))a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = (*((_DWORD *)v13 + 2))-- == 1;
    if ( v3 )
    {
      v14 = **(void (****)(void))a1;
      if ( (char *)*v14 == (char *)sub_12F10 )
      {
        if ( *(_QWORD *)a1 )
          v14[2]();
      }
      else
      {
        (*v14)();
      }
    }
  }
}
