__int64 (__fastcall **__fastcall sub_D98BA0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void (__fastcall ***v2)(void *); // rbp
  bool v3; // zf
  __int64 (__fastcall ***v4)(__int64); // r12
  __int64 (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbp
  __int64 (__fastcall **v7)(__int64); // rbx
  __int64 (__fastcall **v8)(__int64); // rbp
  __int64 (__fastcall *v9)(__int64); // rsi
  __int64 (__fastcall **v10)(__int64); // rdi
  __int64 (__fastcall *v11)(__int64); // rsi
  __int64 (__fastcall **v12)(__int64); // rax
  __int64 (__fastcall **v13)(__int64); // rbx
  __int64 (__fastcall **v14)(__int64); // rdi
  __int64 (__fastcall **v15)(__int64); // rdi

  result = &off_1C750F0;
  v2 = (void (__fastcall ***)(void *))a1[6];
  *a1 = &off_1C750F0;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 4))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      result = (__int64 (__fastcall **)())sub_186B220(v2);
    }
  }
  v4 = (__int64 (__fastcall ***)(__int64))a1[5];
  if ( v4 )
  {
    v3 = (*((_DWORD *)v4 + 32))-- == 1;
    if ( v3 )
    {
      v5 = **v4;
      if ( v5 == sub_38D2C0 )
      {
        v6 = *((unsigned int *)v4 + 6);
        v7 = v4[2];
        *v4 = (__int64 (__fastcall **)(__int64))&off_1C4DD50;
        v8 = &v7[2 * v6];
        if ( v7 != v8 )
        {
          while ( (unsigned __int64)*v7 <= 1 )
          {
            v7 += 2;
            if ( v8 == v7 )
              goto LABEL_25;
          }
          if ( v7 != v8 )
          {
            v9 = *v7;
            v10 = v4[1];
            if ( *v7 )
              goto LABEL_23;
            while ( 1 )
            {
              v11 = v7[1];
              if ( v11 )
              {
                v3 = (*((_DWORD *)v11 + 2))-- == 1;
                if ( v3 )
                  sub_15D7BC0(v10, v11);
              }
              v12 = v7 + 2;
              if ( v8 == v7 + 2 )
                break;
              while ( 1 )
              {
                v9 = *v12;
                v7 = v12;
                if ( (unsigned __int64)*v12 > 1 )
                  break;
                v12 += 2;
                if ( v8 == v12 )
                  goto LABEL_25;
              }
              if ( v12 == v8 )
                break;
              v10 = v4[1];
LABEL_23:
              v3 = (*((_DWORD *)v9 + 2))-- == 1;
              if ( v3 )
              {
                sub_15D7BC0(v10, v9);
                v10 = v4[1];
              }
            }
          }
        }
LABEL_25:
        sub_1695230(v4 + 9);
        v13 = v4[8];
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64 (__fastcall **)(__int64)))*v13)(v4[8]);
          sub_186B220(v13);
        }
        v14 = v4[5];
        if ( v14 )
          sub_186B220(v14);
        v15 = v4[2];
        if ( v15 )
          sub_186B220(v15);
      }
      else
      {
        v5((__int64)v4);
      }
      return (__int64 (__fastcall **)())sub_186B220(v4);
    }
  }
  return result;
}

