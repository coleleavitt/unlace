/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140053EF0
// Address: 0x0000000140053EF0

//----- (0000000140053EF0) ----------------------------------------------------
__int64 __fastcall sub_140053EF0(__int64 a1, __int64 *a2)
{
  char v3; // al
  __int64 v4; // rcx
  const char *v5; // rbx
  const char *v6; // r8
  __int64 result; // rax
  _QWORD **v8; // rdx
  _QWORD *v9; // rbx
  __int64 **v10; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  void **v13; // rcx
  void *v14; // rax
  char v16; // [rsp+60h] [rbp+18h]

  v16 = 1;
  v3 = sub_1400543C0(a2[17]);
  v4 = a2[19];
  v5 = Str1;
  v6 = Str1;
  if ( v3 )
  {
    if ( v4 )
      v6 = (const char *)a2[18];
    sub_1400497B0((__int64)a2, "Accepting connection from %s...\n", v6);
    v16 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  }
  else
  {
    if ( v4 )
      v6 = (const char *)a2[18];
    sub_1400497B0((__int64)a2, "Handshake with %s failed (timeout period %d ms)\n", v6, 10000);
  }
  if ( a2[19] )
    v5 = (const char *)a2[18];
  result = sub_1400497B0((__int64)a2, "Closing connection from %s...\n", v5);
  if ( v16 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 8LL))(*(_QWORD *)(a1 + 88));
    v8 = *(_QWORD ***)(*(_QWORD *)(a1 + 88) + 8LL);
    v9 = *v8;
    if ( *v8 != v8 )
    {
      while ( (__int64 *)v9[4] != a2 )
      {
        v10 = (__int64 **)v9[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = v9[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
          {
            if ( v9 != *(_QWORD **)(i + 16) )
              break;
            v9 = (_QWORD *)i;
          }
          v9 = (_QWORD *)i;
        }
        else
        {
          v9 = (_QWORD *)v9[2];
          for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v9 = j;
        }
        if ( v9 == v8 )
          goto LABEL_25;
      }
      v13 = (void **)v9[5];
      if ( v13 )
        sub_14005D8F0(v13);
      v14 = (void *)sub_14000C8A0((_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL), (__int64)v9);
      j_j_free(v14);
    }
LABEL_25:
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
    return (*(__int64 (__fastcall **)(__int64 *, __int64))*a2)(a2, 1);
  }
  return result;
}
