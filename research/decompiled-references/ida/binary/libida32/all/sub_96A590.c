__int64 __fastcall sub_96A590(__int64 *a1, __int64 *a2)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  char v6; // cl
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]
  void *v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-30h]
  char v15; // [rsp+1Ch] [rbp-2Ch]
  void *v16; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-20h]

  v4 = *((_DWORD *)a1 + 2);
  v5 = *((unsigned int *)a2 + 2);
  if ( v4 == (_DWORD)v5 )
  {
    v6 = *((_BYTE *)a1 + 12);
    if ( v6 == *((_BYTE *)a2 + 12) )
    {
      if ( !v6 )
        return sub_21E20E0();
      return sub_21E2070(a1, a2);
    }
  }
  else
  {
    if ( v4 > (unsigned int)v5 )
    {
      if ( *((_BYTE *)a2 + 12) )
      {
        sub_21E2F90(&v16, a2, v4);
        v15 = 1;
      }
      else
      {
        sub_21E2E30(&v16, a2, v4);
        v15 = 0;
      }
      v14 = v17;
      v13 = v16;
      result = sub_96A590(a1, &v13);
      if ( v14 > 0x40 )
        goto LABEL_11;
      return result;
    }
    v6 = *((_BYTE *)a1 + 12);
    if ( v4 < (unsigned int)v5 )
    {
      if ( v6 )
      {
        sub_21E2F90(&v16, a1, v5);
        v15 = 1;
      }
      else
      {
        sub_21E2E30(&v16, a1, v5);
        v15 = 0;
      }
      v14 = v17;
      v13 = v16;
      result = sub_96A590(&v13, a2);
      if ( v14 <= 0x40 )
        return result;
LABEL_11:
      if ( v13 )
      {
        v12 = result;
        operator delete[](v13);
        return v12;
      }
      return result;
    }
  }
  if ( !v6 )
  {
    v8 = v4 - 1;
    v9 = *a1;
    v10 = 1LL << ((unsigned __int8)v4 - 1);
    if ( v4 > 0x40 )
    {
      result = 0xFFFFFFFFLL;
      if ( (*(_QWORD *)(v9 + 8LL * (v8 >> 6)) & v10) != 0 )
        return result;
    }
    else
    {
      result = 0xFFFFFFFFLL;
      if ( (v9 & v10) != 0 )
        return result;
    }
    return sub_21E2070(a1, a2);
  }
  if ( *((_BYTE *)a2 + 12) )
    return sub_21E2070(a1, a2);
  v11 = *a2;
  if ( (unsigned int)v5 > 0x40 )
    v11 = *(_QWORD *)(v11 + 8LL * ((unsigned int)(v5 - 1) >> 6));
  result = 1;
  if ( (v11 & (1LL << ((unsigned __int8)v5 - 1))) == 0 )
    return sub_21E2070(a1, a2);
  return result;
}

