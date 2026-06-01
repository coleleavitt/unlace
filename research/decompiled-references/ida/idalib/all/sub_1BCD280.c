__int64 __fastcall sub_1BCD280(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 *v6; // rdi
  __int64 v7; // r9
  __int64 *v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 *v14; // rcx
  __int64 *v15; // rsi

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) | a3;
  result = *(unsigned __int8 *)(a1 + 2724);
  if ( !(_BYTE)result )
    goto LABEL_10;
  v6 = *(__int64 **)(a1 + 2704);
  v7 = *(unsigned int *)(a1 + 2716);
  v8 = &v6[v7];
  if ( v6 != v8 )
  {
    v9 = *(__int64 **)(a1 + 2704);
    if ( v4 == *v6 )
    {
LABEL_18:
      result = 0;
      v11 = &v6[*(unsigned int *)(a1 + 2716)];
      goto LABEL_12;
    }
    while ( v8 != ++v9 )
    {
      if ( v4 == *v9 )
        goto LABEL_18;
    }
  }
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 2712) )
  {
    *(_DWORD *)(a1 + 2716) = v7 + 1;
    *v8 = v4;
    v10 = *(_QWORD *)(a1 + 2704);
    v9 = (__int64 *)(v10 + 8 * v7);
  }
  else
  {
LABEL_10:
    v12 = sub_2236760(a1 + 2704, v4);
    v10 = *(_QWORD *)(a1 + 2704);
    v9 = (__int64 *)v12;
    result = v13;
    if ( !*(_BYTE *)(a1 + 2724) )
    {
      v11 = (__int64 *)(v10 + 8LL * *(unsigned int *)(a1 + 2712));
      goto LABEL_12;
    }
  }
  v11 = (__int64 *)(v10 + 8LL * *(unsigned int *)(a1 + 2716));
LABEL_12:
  if ( v9 != v11 && (unsigned __int64)*v9 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v14 = v9 + 1;
    do
    {
      v15 = v14;
      if ( v11 == v14 )
        break;
      ++v14;
    }
    while ( (unsigned __int64)*v15 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return result;
}
