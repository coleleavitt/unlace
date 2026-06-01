void __fastcall sub_4D0950(_QWORD *a1)
{
  void *v2; // rbx
  __int64 (__fastcall *v3)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  _QWORD *v14; // rdi

  v2 = (void *)a1[35];
  *a1 = &off_1C4F320;
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v2 + 16LL);
    if ( v3 == sub_4C9C10 )
    {
      (**(void (__fastcall ***)(void *))v2)(v2);
      sub_186B220(v2);
    }
    else
    {
      v3((void (__fastcall ***)(_QWORD))v2);
    }
    a1[35] = 0;
  }
  sub_4DB560(a1 + 51);
  sub_4DA290(a1 + 37);
  v4 = a1[36];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 24 * v5;
      do
      {
        v7 = *(__int64 **)(v4 + 16);
        if ( v7 )
        {
          v8 = &v7[*((unsigned int *)v7 - 1)];
          if ( v7 >= v8 )
            goto LABEL_16;
          do
          {
            while ( 1 )
            {
              v9 = *v7;
              if ( *v7 )
              {
                v10 = *(_QWORD *)(v4 + 8);
                v11 = (*(_DWORD *)(v9 + 8))-- == 1;
                if ( v11 )
                  break;
              }
              if ( ++v7 >= v8 )
                goto LABEL_15;
            }
            sub_15D7BC0(v10, v9);
            ++v7;
          }
          while ( v7 < v8 );
LABEL_15:
          v7 = *(__int64 **)(v4 + 16);
          if ( v7 )
LABEL_16:
            sub_186B220(v7 - 1);
        }
        v4 += 24;
      }
      while ( v4 != v6 );
      v4 = a1[36];
    }
    sub_186B220((void *)(v4 - 8));
  }
  v12 = a1[33];
  if ( v12 )
  {
    v13 = a1[34];
    v11 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v13, v12);
  }
  sub_4C2870(a1 + 8);
  v14 = (_QWORD *)a1[2];
  *a1 = qword_1C65108;
  if ( v14 != a1 + 4 )
    operator delete(v14, a1[4] + 1LL);
}

