unsigned __int64 __fastcall sub_29A7C0(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  int *v5; // rax
  int v6; // ebp
  __int64 v7; // rdi
  _DWORD *v8; // r9
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v17; // [rsp+Ch] [rbp-2Ch] BYREF
  int *v18; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-20h]

  v17 = a4;
  v19 = __readfsqword(0x28u);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 160LL);
  if ( v4 == interactive_graph_t__::vfunc_20 )
    v5 = (int *)interactive_graph_t__::vfunc_20(a1, a3);
  else
    v5 = (int *)v4(a1, a3);
  v6 = -1;
  if ( v5 )
    v6 = *v5;
  v7 = a2[2];
  v8 = a2 + 1;
  if ( !v7 )
  {
    v13 = a2 + 1;
LABEL_18:
    v18 = &v17;
    v13 = sub_2900D0(a2, (__int64)v13, &v18);
LABEL_19:
    v13[9] = v6;
    return v19 - __readfsqword(0x28u);
  }
  v9 = a2 + 1;
  v10 = a2[2];
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_QWORD *)(v10 + 24);
      if ( v17 > *(_DWORD *)(v10 + 32) )
        break;
      v9 = (_QWORD *)v10;
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v11 )
        goto LABEL_10;
    }
    v10 = *(_QWORD *)(v10 + 24);
  }
  while ( v12 );
LABEL_10:
  if ( v8 == (_DWORD *)v9 || v17 < *((_DWORD *)v9 + 8) )
  {
    v13 = a2 + 1;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v7 + 16);
        v15 = *(_QWORD *)(v7 + 24);
        if ( v17 > *(_DWORD *)(v7 + 32) )
          break;
        v13 = (_DWORD *)v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v14 )
          goto LABEL_16;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v15 );
LABEL_16:
    if ( v8 != v13 && v17 >= v13[8] )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( *((_DWORD *)v9 + 9) != v6 )
    *((_DWORD *)v9 + 9) = -1;
  return v19 - __readfsqword(0x28u);
}
