__int64 __fastcall sub_2BDF0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *v8; // r13
  void (__fastcall *v9)(_QWORD *); // rdx
  void (__fastcall *v10)(_QWORD *); // rax
  _QWORD *v11; // r12
  __int64 v12; // rbp
  void *v13; // rdi
  __int64 v14; // rbp
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi

  v2 = a1[19];
  *a1 = &off_C79C8;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 8))-- == 1 )
    {
      v8 = (_QWORD *)a1[19];
      v9 = *(void (__fastcall **)(_QWORD *))*v8;
      if ( v9 == sub_15E30 )
      {
        if ( v8 )
        {
          v10 = *(void (__fastcall **)(_QWORD *))(*v8 + 16LL);
          if ( v10 == sub_15D70 )
          {
            v11 = (_QWORD *)v8[16];
            *v8 = &off_C71D8;
            if ( v11 )
            {
              v12 = v11[2];
              while ( v12 )
              {
                sub_293E0(*(_QWORD **)(v12 + 24));
                v13 = (void *)v12;
                v12 = *(_QWORD *)(v12 + 16);
                operator delete(v13, 0x30u);
              }
              operator delete(v11, 0x30u);
            }
            v14 = v8[19];
            while ( v14 )
            {
              v15 = (_QWORD *)v14;
              sub_29E10(*(_QWORD **)(v14 + 24));
              v16 = *(_QWORD *)(v14 + 32);
              v14 = *(_QWORD *)(v14 + 16);
              if ( v16 )
              {
                v15[5] = 0;
                qfree(v16);
              }
              operator delete(v15, 0x48u);
            }
            v17 = v8[12];
            if ( v17 )
            {
              v8[13] = 0;
              qfree(v17);
            }
            operator delete(v8, 0xC0u);
          }
          else
          {
            v10((_QWORD *)a1[19]);
          }
        }
      }
      else
      {
        v9((_QWORD *)a1[19]);
      }
    }
  }
  *a1 = &off_C7980;
  clear_tinfo_t(a1 + 1);
  v4 = a1[2];
  if ( v4 )
  {
    a1[3] = 0;
    qfree(v4);
    a1[2] = 0;
    a1[4] = 0;
  }
  v5 = a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    qfree(v5);
  }
  v6 = a1[2];
  if ( v6 )
  {
    a1[3] = 0;
    qfree(v6);
  }
  return clear_tinfo_t(a1 + 1);
}
