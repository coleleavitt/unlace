unsigned __int64 __fastcall sub_3A69C0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int *v4; // r14
  unsigned int *v5; // r13
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v14; // rax
  int v15; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned int *v16; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v3 = sub_3A5530(a2, &v15);
  if ( v15 > 0 )
  {
    v4 = (unsigned int *)v3;
    v5 = (unsigned int *)(v3 + 4LL * v15);
    do
    {
      v6 = a1[2];
      if ( v6 )
      {
        v7 = *v4;
        v8 = (__int64)(a1 + 1);
        do
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v6 + 16);
            v10 = *(_QWORD *)(v6 + 24);
            if ( *(_DWORD *)(v6 + 32) < v7 )
              break;
            v8 = v6;
            v6 = *(_QWORD *)(v6 + 16);
            if ( !v9 )
              goto LABEL_8;
          }
          v6 = *(_QWORD *)(v6 + 24);
        }
        while ( v10 );
LABEL_8:
        if ( a1 + 1 != (_QWORD *)v8 && v7 >= *(_DWORD *)(v8 + 32) )
          goto LABEL_11;
      }
      else
      {
        v8 = (__int64)(a1 + 1);
      }
      v16 = v4;
      v8 = sub_3A56C0(a1, v8, &v16);
LABEL_11:
      v11 = *(_QWORD *)(v8 + 48);
      v12 = *(_QWORD *)(v8 + 40);
      if ( *(_QWORD *)(v8 + 56) < (unsigned __int64)(v11 + 1) )
      {
        v14 = qvector_reserve(v8 + 40, v12, v11 + 1, 8);
        *(_QWORD *)(v8 + 40) = v14;
        v12 = v14;
        v11 = *(_QWORD *)(v8 + 48);
      }
      ++v4;
      *(_QWORD *)(v12 + 8 * v11) = a2;
      ++*(_QWORD *)(v8 + 48);
    }
    while ( v5 != v4 );
  }
  return v17 - __readfsqword(0x28u);
}

