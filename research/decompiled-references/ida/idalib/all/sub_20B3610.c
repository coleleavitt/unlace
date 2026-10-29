void __fastcall sub_20B3610(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // eax
  _QWORD *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbp
  _QWORD *v8; // r14
  _QWORD **v9; // rbp
  _QWORD *v10; // r15
  _QWORD *v11; // rsi
  _QWORD **v12; // r11
  int v13; // r14d
  _QWORD v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(unsigned int *)(v2 + 8);
  if ( *(_DWORD *)(v2 + 12) <= (unsigned int)v3 )
  {
    v6 = sub_2237400(*(_QWORD *)(a1 + 56), v2 + 16, 0, 8, v14);
    v7 = 8LL * *(unsigned int *)(v2 + 8);
    *(_QWORD *)(v6 + v7) = a2;
    if ( a2 )
    {
      sub_20B2EE0(v6 + v7, a2, 1);
      v7 = 8LL * *(unsigned int *)(v2 + 8);
    }
    v8 = *(_QWORD **)v2;
    v9 = (_QWORD **)(*(_QWORD *)v2 + v7);
    if ( *(_QWORD ***)v2 != v9 )
    {
      v10 = (_QWORD *)v6;
      do
      {
        v11 = (_QWORD *)*v8;
        *v10 = *v8;
        if ( v11 )
        {
          sub_20B3430((__int64)v8, v11, (__int64)v10);
          *v8 = 0;
        }
        ++v8;
        ++v10;
      }
      while ( v9 != v8 );
      v12 = *(_QWORD ***)v2;
      v9 = (_QWORD **)(*(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8));
      if ( *(_QWORD ***)v2 != v9 )
      {
        do
        {
          while ( *--v9 )
          {
            sub_20A0850((__int64)v9, *v9);
            if ( v9 == v12 )
              goto LABEL_15;
          }
        }
        while ( v9 != v12 );
LABEL_15:
        v9 = *(_QWORD ***)v2;
      }
    }
    v13 = v14[0];
    if ( (_QWORD **)(v2 + 16) != v9 )
      free(v9);
    *(_QWORD *)v2 = v6;
    *(_DWORD *)(v2 + 12) = v13;
    ++*(_DWORD *)(v2 + 8);
  }
  else
  {
    v4 = *(_DWORD *)(v2 + 8);
    v5 = (_QWORD *)(*(_QWORD *)v2 + 8 * v3);
    *v5 = a2;
    if ( a2 )
    {
      sub_20B2EE0((__int64)v5, a2, 1);
      v4 = *(_DWORD *)(v2 + 8);
    }
    *(_DWORD *)(v2 + 8) = v4 + 1;
  }
}
