unsigned __int64 __fastcall sub_AD0D80(__int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rbx
  char v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 *v9; // rbx
  __int64 v10; // r8
  const char *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int128 v20; // [rsp-20h] [rbp-68h]
  __int64 v21; // [rsp+8h] [rbp-40h]
  __int64 v22; // [rsp+10h] [rbp-38h]

  result = sub_F4B4A0(*a1 + 8, a1[1]);
  v3 = a1[1];
  if ( v3 )
  {
    v4 = *a1;
    v5 = *(_BYTE *)(*a1 + 1);
    *(_BYTE *)(v4 + 1) = *((_BYTE *)a1 + 16);
    sub_AD0400(v4, v3);
    *(_BYTE *)(v4 + 1) = v5;
    v6 = a1[1];
    if ( (*(_BYTE *)(v6 + 29) & 1) != 0 )
    {
      v7 = sub_B8C3D0(a1[1]);
      v8 = *(_QWORD *)v7 + 8LL * *(unsigned int *)(v7 + 8);
      if ( (*(_BYTE *)(v6 + 29) & 1) != 0 )
        v9 = *(__int64 **)sub_B8C3D0(v6);
      else
        v9 = nullptr;
      while ( (__int64 *)v8 != v9 )
      {
        v10 = *v9++;
        sub_AD2CF0(*a1 + 8, &byte_22F0C30, 0, *a1, v10);
      }
      v6 = a1[1];
    }
    v11 = (const char *)v6;
    v12 = sub_B8C330(v6);
    v13 = sub_A818D0(v12, v6);
    if ( v13 )
    {
      v21 = v13;
      v22 = v13;
      v14 = sub_ACAA10(v12);
      v11 = &byte_22F0C30;
      *((_QWORD *)&v20 + 1) = v21;
      *(_QWORD *)&v20 = v15;
      sub_ACD3E0(v15 + 8, &byte_22F0C30, v14, v15, v16, v17, v20, v22);
    }
    v18 = a1[1];
    result = *(_BYTE *)(v18 + 28) & 0x7F;
    if ( (unsigned __int8)result <= 0x27u )
    {
      v19 = 0xFC00040100LL;
      if ( _bittest64(&v19, result) )
        return result;
    }
    else if ( *(_DWORD *)(*a1 + 4) )
    {
      if ( (unsigned int)(unsigned __int8)result - 60 <= 1 )
      {
        result = (*(_BYTE *)(v18 + 180) & 7u) - 3;
        if ( (unsigned int)result <= 1 )
          return result;
      }
    }
    result = sub_B8E0B0(a1[1]);
    if ( (_BYTE)result )
    {
      result = sub_B8D340(v18, v11);
      if ( result )
        return sub_AD1460(*a1, result);
    }
  }
  return result;
}
