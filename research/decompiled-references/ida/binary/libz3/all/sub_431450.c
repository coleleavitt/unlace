__int64 __fastcall sub_431450(__int64 a1, int a2)
{
  __int64 result; // rax
  unsigned int v4; // edx
  unsigned int i; // r12d
  __int64 v6; // rdx
  int v7; // edx
  _QWORD *v8; // r13
  void *v9; // rdi
  void *v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdi

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 96) + 200LL))(*(_QWORD *)(a1 + 96));
  result = *(_QWORD *)(a1 + 128);
  if ( result )
  {
    v4 = *(_DWORD *)(result - 4);
    for ( i = v4 - a2; i < v4; *(_DWORD *)(result - 4) = v4 )
    {
      v6 = *(_QWORD *)(result + 72LL * (v4 - 1) + 16);
      if ( v6 )
        v7 = *(_DWORD *)(v6 - 4);
      else
        v7 = 0;
      *(_DWORD *)(a1 + 120) -= v7;
      v8 = (_QWORD *)(result + 72LL * (unsigned int)(*(_DWORD *)(result - 4) - 1));
      v9 = (void *)v8[6];
      if ( v9 )
        sub_186B220(v9);
      v10 = (void *)v8[3];
      if ( v10 )
        sub_186B220(v10);
      v11 = (__int64 *)v8[2];
      if ( v11 )
      {
        v12 = &v11[*((unsigned int *)v11 - 1)];
        if ( v11 >= v12 )
          goto LABEL_17;
        do
        {
          while ( 1 )
          {
            v13 = *v11;
            if ( *v11 )
            {
              v14 = v8[1];
              if ( (*(_DWORD *)(v13 + 8))-- == 1 )
                break;
            }
            if ( ++v11 >= v12 )
              goto LABEL_16;
          }
          sub_15D7BC0(v14, v13);
          ++v11;
        }
        while ( v11 < v12 );
LABEL_16:
        v11 = (__int64 *)v8[2];
        if ( v11 )
LABEL_17:
          sub_186B220(v11 - 1);
      }
      result = *(_QWORD *)(a1 + 128);
      v4 = *(_DWORD *)(result - 4) - 1;
    }
  }
  return result;
}

