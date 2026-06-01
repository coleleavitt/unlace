__int64 __fastcall sub_183A070(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rsi
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // rdx
  __int64 *v13; // r12
  __int64 *v14; // rbx
  __int64 v15; // rdi

  if ( !(unsigned int)sub_B984E0(a1) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    if ( !*(_BYTE *)(a2 + 20) )
      goto LABEL_9;
    v4 = *(__int64 **)a2;
    v5 = *(unsigned int *)(a2 + 12);
    v6 = (__int64 *)(*(_QWORD *)a2 + 8 * v5);
    if ( *(__int64 **)a2 != v6 )
    {
      v7 = *(__int64 **)a2;
      if ( v3 == *v4 )
        goto LABEL_18;
      while ( v6 != ++v7 )
      {
        if ( v3 == *v7 )
          goto LABEL_18;
      }
    }
    if ( (unsigned int)v5 < *(_DWORD *)(a2 + 8) )
    {
      *(_DWORD *)(a2 + 12) = v5 + 1;
      *v6 = v3;
      v4 = *(__int64 **)a2;
      v7 = (__int64 *)(*(_QWORD *)a2 + 8 * v5);
    }
    else
    {
LABEL_9:
      v8 = sub_2236760(a2, v3);
      v4 = *(__int64 **)a2;
      v7 = (__int64 *)v8;
      if ( !*(_BYTE *)(a2 + 20) )
      {
        result = *(unsigned int *)(a2 + 8);
        v10 = &v4[result];
LABEL_11:
        if ( v10 != v7 && (unsigned __int64)*v7 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v11 = v7 + 1;
          do
          {
            result = (__int64)v11;
            if ( v10 == v11 )
              break;
            ++v11;
          }
          while ( *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL );
        }
        return result;
      }
    }
LABEL_18:
    result = *(unsigned int *)(a2 + 12);
    v10 = &v4[result];
    goto LABEL_11;
  }
  result = sub_B98510(a1);
  v13 = v12;
  v14 = (__int64 *)result;
  if ( (__int64 *)result != v12 )
  {
    do
    {
      v15 = *v14++;
      result = sub_183A070(v15, a2);
    }
    while ( v13 != v14 );
  }
  return result;
}
