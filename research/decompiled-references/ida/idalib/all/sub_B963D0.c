__int64 __fastcall sub_B963D0(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // rcx

  v2 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v2 == sub_A01140 )
    v3 = sub_B70A60(a2);
  else
    v3 = v2(a2);
  result = 0;
  if ( v3 == **(_QWORD **)a1 )
    return result;
  v5 = *(_QWORD *)(a1 + 8);
  if ( !*(_BYTE *)(v5 + 20) )
    goto LABEL_11;
  v6 = *(__int64 **)v5;
  v7 = *(unsigned int *)(v5 + 12);
  v8 = (__int64 *)(*(_QWORD *)v5 + 8 * v7);
  if ( *(__int64 **)v5 != v8 )
  {
    v9 = *(__int64 **)v5;
    if ( v3 == *v6 )
      goto LABEL_21;
    do
    {
      if ( v8 == ++v9 )
        break;
    }
    while ( v3 != *v9 );
  }
  if ( (unsigned int)v7 < *(_DWORD *)(v5 + 8) )
  {
    *(_DWORD *)(v5 + 12) = v7 + 1;
    *v8 = v3;
    v6 = *(__int64 **)v5;
    v9 = (__int64 *)(*(_QWORD *)v5 + 8 * v7);
  }
  else
  {
LABEL_11:
    v9 = (__int64 *)sub_2236760(v5, v3);
    v6 = *(__int64 **)v5;
    if ( !*(_BYTE *)(v5 + 20) )
    {
      v10 = &v6[*(unsigned int *)(v5 + 8)];
      goto LABEL_13;
    }
  }
LABEL_21:
  v10 = &v6[*(unsigned int *)(v5 + 12)];
LABEL_13:
  if ( v9 != v10 && (unsigned __int64)*v9 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v11 = v9 + 1;
    do
    {
      v12 = v11;
      if ( v10 == v11 )
        break;
      ++v11;
    }
    while ( (unsigned __int64)*v12 >= 0xFFFFFFFFFFFFFFFELL );
  }
  return 1;
}
