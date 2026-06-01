__int64 __fastcall sub_A2B5D0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  int v3; // eax
  _QWORD *v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-80h]
  __int64 v9; // [rsp+8h] [rbp-80h]
  void *v10[2]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v11[16]; // [rsp+20h] [rbp-68h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h]
  __int64 v13; // [rsp+38h] [rbp-50h]
  _BYTE v14[72]; // [rsp+40h] [rbp-48h] BYREF

  v1 = (_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( !v1 )
    return 0;
  v3 = *a1 & 3;
  if ( v3 )
  {
    if ( (*a1 & 3LL) == 2 || v3 == 3 )
      return a1[1];
    if ( (*(_WORD *)v1 & 0x1FF) == 0x30 )
    {
      v5 = v1[2];
      v10[0] = v11;
      v10[1] = (void *)0x200000000LL;
      ptr = v14;
      v13 = 0x200000000LL;
      if ( (v5 & 4) != 0 )
        v6 = *(_QWORD *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 40);
      else
        v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      v7 = sub_BD34A0(v6, v10);
      if ( (_DWORD)v13 )
      {
        result = *(_QWORD *)(v7 + 8);
        if ( ptr != v14 )
        {
          v8 = result;
          free(ptr);
          result = v8;
        }
        if ( v10[0] != v11 )
        {
          v9 = result;
          free(v10[0]);
          return v9;
        }
        return result;
      }
      if ( ptr != v14 )
        free(ptr);
      if ( v10[0] != v11 )
        free(v10[0]);
    }
    return v1[1];
  }
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64))(*v1 + 56LL))(*a1 & 0xFFFFFFFFFFFFFFFCLL);
  if ( !v4 )
    return v1[6];
  while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4[6] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL) == 5 )
  {
    v4 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 48LL))(v4);
    if ( !v4 )
      return v1[6];
  }
  return v4[6];
}

