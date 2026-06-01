void __fastcall sub_DFF0A0(_QWORD *a1, void (__fastcall ***a2)(_QWORD))
{
  void (__fastcall ***v2)(_QWORD); // rbp
  void (__fastcall ***v3)(void *); // rbp
  bool v4; // zf
  __int64 v5; // r13
  unsigned int i; // r15d
  __int64 v7; // r14
  unsigned int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rbx
  unsigned __int64 v14; // rbp

  v2 = (void (__fastcall ***)(_QWORD))a1[107];
  if ( a2 != v2 )
  {
    if ( v2 )
    {
      (**v2)(a1[107]);
      sub_186B220(v2);
    }
    a1[107] = a2;
  }
  v3 = (void (__fastcall ***)(void *))a1[109];
  if ( v3 )
  {
    v4 = (*((_DWORD *)v3 + 12))-- == 1;
    if ( v4 )
    {
      (**v3)(v3);
      sub_186B220(v3);
    }
  }
  v4 = a1[37] == 0;
  a1[109] = 0;
  if ( !v4 && a2 )
  {
    sub_DFED30(a1);
    v5 = a1[106];
    if ( v5 )
    {
      i = 0;
      v7 = v5 + 24LL * *(unsigned int *)(v5 - 4);
      while ( v5 != v7 )
      {
        v8 = i;
        v9 = 8LL * i;
        for ( i = *(_DWORD *)(v5 + 20); v8 < i; i = *(_DWORD *)(v5 + 20) )
        {
          ++v8;
          v10 = *(_QWORD *)(a1[95] + v9);
          v9 += 8;
          sub_E5EBF0(a1[108], v10);
        }
        v5 += 24;
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)a1[108] + 192LL))(a1[108]);
      }
    }
    else
    {
      i = 0;
    }
    v11 = a1[95];
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 - 4);
      if ( i < v12 )
      {
        v13 = 8LL * i;
        v14 = 8 * (v12 - 1 - i + (unsigned __int64)i);
        while ( 1 )
        {
          sub_E5EBF0(a1[108], *(_QWORD *)(v11 + v13));
          if ( v14 == v13 )
            break;
          v11 = a1[95];
          v13 += 8;
        }
      }
    }
  }
}

