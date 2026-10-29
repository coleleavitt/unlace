void __fastcall sub_175D88(_DWORD *ptr)
{
  bool v2; // zf
  void (*v3)(void); // rax
  __int64 v4; // rbp
  __int64 *v5; // rax
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 *v12; // rax
  void (__fastcall ***v13)(_QWORD); // rbp
  void *v14; // rdi
  void *v15; // rdi

  if ( ptr )
  {
    v2 = ptr[32]-- == 1;
    if ( v2 )
    {
      v3 = **(void (***)(void))ptr;
      if ( (char *)v3 == (char *)sub_38D2C0 )
      {
        v4 = (unsigned int)ptr[6];
        *(_QWORD *)ptr = &off_1C4DD50;
        v5 = *((__int64 **)ptr + 2);
        v6 = &v5[2 * v4];
        while ( 1 )
        {
          v7 = v5;
          if ( v6 == v5 )
            break;
          v5 += 2;
          if ( (unsigned __int64)*(v5 - 2) > 1 )
          {
LABEL_7:
            if ( v6 != v7 )
            {
              v8 = *v7;
              if ( *v7 )
              {
                v9 = *((_QWORD *)ptr + 1);
                v2 = (*(_DWORD *)(v8 + 8))-- == 1;
                if ( v2 )
                  sub_15D7BC0(v9, v8);
              }
              v10 = v7[1];
              if ( v10 )
              {
                v11 = *((_QWORD *)ptr + 1);
                v2 = (*(_DWORD *)(v10 + 8))-- == 1;
                if ( v2 )
                  sub_15D7BC0(v11, v10);
              }
              v12 = v7 + 2;
              while ( 1 )
              {
                v7 = v12;
                if ( v6 == v12 )
                  break;
                v12 += 2;
                if ( (unsigned __int64)*(v12 - 2) > 1 )
                  goto LABEL_7;
              }
            }
            break;
          }
        }
        sub_1695230(ptr + 18);
        v13 = *((void (__fastcall ****)(_QWORD))ptr + 8);
        if ( v13 )
        {
          (**v13)(*((_QWORD *)ptr + 8));
          sub_186B220(v13);
        }
        v14 = *((void **)ptr + 5);
        if ( v14 )
          sub_186B220(v14);
        v15 = *((void **)ptr + 2);
        if ( v15 )
          sub_186B220(v15);
      }
      else
      {
        v3();
      }
      sub_186B220(ptr);
    }
  }
}

