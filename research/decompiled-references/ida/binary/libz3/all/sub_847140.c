void __fastcall sub_847140(__int64 a1)
{
  _QWORD *v1; // r13
  __int64 (__fastcall *v2)(_QWORD *); // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  bool v5; // zf
  _QWORD **v6; // rbx
  _QWORD **v7; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(_QWORD *))*v1;
    if ( v2 == sub_847020 )
    {
      v3 = v1[9];
      *v1 = &off_1C612D0;
      if ( v3 )
      {
        v4 = v1[10];
        v5 = (*(_DWORD *)(v3 + 8))-- == 1;
        if ( v5 )
          sub_15D7BC0(v4, v3);
      }
      v6 = (_QWORD **)v1[8];
      if ( v6 )
      {
        v7 = &v6[*((unsigned int *)v6 - 1)];
        if ( v6 == v7 )
          goto LABEL_18;
        do
        {
          v8 = *v6;
          if ( *v6 )
          {
            v9 = v8[3];
            if ( v9 )
            {
              v10 = v8[4];
              v5 = (*(_DWORD *)(v9 + 8))-- == 1;
              if ( v5 )
                sub_15D7BC0(v10, v9);
            }
            v11 = v8[1];
            if ( v11 )
            {
              v12 = v8[2];
              v5 = (*(_DWORD *)(v11 + 8))-- == 1;
              if ( v5 )
                sub_15D7BC0(v12, v11);
            }
            sub_186B220(v8);
          }
          ++v6;
        }
        while ( v7 != v6 );
        v7 = (_QWORD **)v1[8];
        if ( v7 )
        {
LABEL_18:
          *((_DWORD *)v7 - 1) = 0;
          sub_186B220(v7 - 1);
        }
      }
      v13 = (void *)v1[5];
      if ( v13 )
        sub_186B220(v13);
      v14 = v1[2];
      if ( v14 )
      {
        v15 = v1[3];
        v5 = (*(_DWORD *)(v14 + 8))-- == 1;
        if ( v5 )
          sub_15D7BC0(v15, v14);
      }
    }
    else
    {
      v2(*(_QWORD **)(a1 + 8));
    }
    sub_186B220(v1);
  }
}

