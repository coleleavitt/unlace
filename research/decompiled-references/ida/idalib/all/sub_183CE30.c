void __fastcall sub_183CE30(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v5; // al
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 *v10; // rdx
  __int64 v11; // rdi
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // rcx

  if ( !a3 )
    return;
  v5 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)v5 - 40 <= 6 && v5 != 43 )
  {
    v6 = sub_1703870(a2 + 432, a3);
    v7 = *(_BYTE *)(a2 + 452)
       ? *(_QWORD *)(a2 + 432) + 8LL * *(unsigned int *)(a2 + 444)
       : *(_QWORD *)(a2 + 432) + 8LL * *(unsigned int *)(a2 + 440);
    if ( v6 != (_QWORD *)v7 && *v6 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v8 = v6 + 1;
      do
      {
        v9 = v8;
        if ( (_QWORD *)v7 == v8 )
          break;
        ++v8;
      }
      while ( *v9 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  if ( !*(_BYTE *)(a2 + 100) )
    goto LABEL_18;
  v10 = *(__int64 **)(a2 + 80);
  v11 = *(unsigned int *)(a2 + 92);
  v12 = &v10[v11];
  if ( v10 != v12 )
  {
    v13 = *(__int64 **)(a2 + 80);
    if ( a3 == *v10 )
      goto LABEL_28;
    do
    {
      if ( v12 == ++v13 )
        break;
    }
    while ( a3 != *v13 );
  }
  if ( (unsigned int)v11 < *(_DWORD *)(a2 + 88) )
  {
    *(_DWORD *)(a2 + 92) = v11 + 1;
    *v12 = a3;
    v10 = *(__int64 **)(a2 + 80);
    v13 = &v10[v11];
  }
  else
  {
LABEL_18:
    v13 = (__int64 *)sub_2236760(a2 + 80, a3);
    v10 = *(__int64 **)(a2 + 80);
    if ( !*(_BYTE *)(a2 + 100) )
    {
      v14 = &v10[*(unsigned int *)(a2 + 88)];
      goto LABEL_20;
    }
  }
LABEL_28:
  v14 = &v10[*(unsigned int *)(a2 + 92)];
LABEL_20:
  if ( v13 != v14 && (unsigned __int64)*v13 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v15 = v13 + 1;
    do
    {
      v16 = v15;
      if ( v14 == v15 )
        break;
      ++v15;
    }
    while ( (unsigned __int64)*v16 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( *(_QWORD *)(a3 + 40) )
    sub_15C17C0(a1 + 2608, a3);
}
