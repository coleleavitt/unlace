void __fastcall sub_62DF80(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  _QWORD *v8; // r13
  _QWORD *v9; // r14
  void (__fastcall *v10)(_QWORD *); // rax
  int v11; // r13d
  __int64 v12[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = sub_25D5F70(a1, a1 + 16, a2, 8, v12);
  v3 = *(_QWORD **)a1;
  v4 = v2;
  v5 = 8LL * *(unsigned int *)(a1 + 8);
  v6 = (_QWORD *)(*(_QWORD *)a1 + v5);
  if ( *(_QWORD **)a1 != v6 )
  {
    v7 = 0;
    do
    {
      *(_QWORD *)(v4 + v7) = v3[v7 / 8];
      v3[v7 / 8] = 0;
      v7 += 8LL;
    }
    while ( v5 != v7 );
    v8 = *(_QWORD **)a1;
    v6 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v6 )
    {
      while ( 1 )
      {
        v9 = (_QWORD *)*--v6;
        if ( !v9 )
          goto LABEL_7;
        v10 = *(void (__fastcall **)(_QWORD *))(*v9 + 8LL);
        if ( v10 == sub_629640 )
        {
          *v9 = &off_47D0298;
          sub_62FED0(v9);
          operator delete(v9, 0x48u);
LABEL_7:
          *v6 = 0;
          if ( v8 == v6 )
            goto LABEL_11;
        }
        else
        {
          v10(v9);
          *v6 = 0;
          if ( v8 == v6 )
          {
LABEL_11:
            v6 = *(_QWORD **)a1;
            break;
          }
        }
      }
    }
  }
  v11 = v12[0];
  if ( v6 != (_QWORD *)(a1 + 16) )
    free(v6);
  *(_QWORD *)a1 = v4;
  *(_DWORD *)(a1 + 12) = v11;
}

