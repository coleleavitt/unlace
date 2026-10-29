unsigned __int64 __fastcall sub_4DABC0(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v4; // r13
  void *v5; // rdi
  unsigned int i; // ebx
  unsigned int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r15d
  _DWORD *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v16; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v17; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned int *v18; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v1 = *a1;
  v2 = a1[3];
  v19 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(v1 + 1480);
  if ( v2 )
  {
    do
    {
      sub_4DA0D0(*(_QWORD **)(v2 + 24));
      v5 = (void *)v2;
      v2 = *(_QWORD *)(v2 + 16);
      operator delete(v5, 0x28u);
    }
    while ( v2 );
    v1 = *a1;
  }
  a1[3] = 0;
  a1[4] = a1 + 2;
  a1[5] = a1 + 2;
  a1[6] = 0;
  v16 = *(_DWORD *)(v4 + 2544);
  for ( i = sub_79B7E0(&v16, v1, 65); i != -1; i = sub_79B840(&v16, *a1, i, 65) )
  {
    v7 = node2ea(i);
    v8 = *a1;
    v17 = v7;
    v9 = sub_79B3A0(&v16, v8, i, 65);
    v10 = a1[3];
    v11 = v9;
    if ( v10 )
    {
      v12 = a1 + 2;
      do
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v10 + 16);
          v14 = *(_QWORD *)(v10 + 24);
          if ( *(_DWORD *)(v10 + 32) < v17 )
            break;
          v12 = (_DWORD *)v10;
          v10 = *(_QWORD *)(v10 + 16);
          if ( !v13 )
            goto LABEL_10;
        }
        v10 = *(_QWORD *)(v10 + 24);
      }
      while ( v14 );
LABEL_10:
      if ( v12 != (_DWORD *)(a1 + 2) && v17 >= v12[8] )
        goto LABEL_13;
    }
    else
    {
      v12 = a1 + 2;
    }
    v18 = &v17;
    v12 = sub_4DA010(a1 + 1, (__int64)v12, &v18);
LABEL_13:
    v12[9] = v11;
  }
  register_undo_handlers(&unk_2B034C0, 2, 1, 0);
  return v19 - __readfsqword(0x28u);
}

