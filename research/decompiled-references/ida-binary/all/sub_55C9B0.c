__int64 __fastcall sub_55C9B0(_DWORD *a1, __int16 **a2)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  __int64 *v4; // r14
  __int16 *v5; // r8
  __int64 v8; // rsi
  __int16 v9; // bp
  __int64 v10; // rdi
  unsigned int v11; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int16 v15; // dx
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // r15d
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax

  result = 1;
  v3 = *((_DWORD *)a2 + 6);
  if ( a1[2] < v3 )
    return result;
  v4 = *(__int64 **)a1;
  v5 = *a2;
  v8 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
  v9 = *v5;
  v10 = **(_QWORD **)a1;
  v11 = v8 - 1;
  if ( (_DWORD)v8 )
  {
    do
    {
      v13 = v10 + 20LL * v11;
      v14 = *(_DWORD *)(v13 + 12);
      v15 = *(_WORD *)(v13 + 16);
      if ( v14 < v3 )
        break;
      if ( v9 == v15 && v14 == v3 )
        return 0;
    }
    while ( v11-- != 0 );
    v16 = *((_DWORD *)v4 + 3);
    v17 = v8 + 1;
    if ( v16 >= (int)v8 + 1 )
      goto LABEL_14;
    v18 = 2 * v16;
    if ( 2 * v16 < v17 )
      v18 = v8 + 1;
    if ( v18 < 8 )
      v18 = 8;
    if ( v16 >= v18 )
      goto LABEL_14;
  }
  else
  {
    if ( *((_DWORD *)v4 + 3) )
    {
      v17 = 1;
      v8 = 0;
      goto LABEL_14;
    }
    v18 = 8;
  }
  if ( v10 )
    v21 = off_8C52A8();
  else
    v21 = off_8C52B8();
  *v4 = v21;
  v5 = *a2;
  *((_DWORD *)v4 + 3) = v18;
  v4 = *(__int64 **)a1;
  v8 = *(unsigned int *)(*(_QWORD *)a1 + 8LL);
  v10 = **(_QWORD **)a1;
  v17 = v8 + 1;
LABEL_14:
  *((_DWORD *)v4 + 2) = v17;
  v19 = v10 + 20 * v8;
  *(_QWORD *)v19 = *(_QWORD *)(v5 + 2);
  v20 = *((_DWORD *)v5 + 3);
  *(_DWORD *)(v19 + 12) = v3;
  *(_DWORD *)(v19 + 8) = v20;
  *(_WORD *)(v19 + 16) = v9;
  return 0;
}
