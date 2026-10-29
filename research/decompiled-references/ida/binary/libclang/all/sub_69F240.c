__int64 __fastcall sub_69F240(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-80h]
  __int64 v11; // [rsp+8h] [rbp-80h]
  void *v12[2]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+20h] [rbp-68h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  _BYTE v16[72]; // [rsp+40h] [rbp-48h] BYREF

  result = 0;
  v2 = *a1;
  if ( (unsigned __int64)*a1 <= 3 )
    return result;
  v3 = *a1 & 3;
  if ( (v2 & 3) != 0 )
  {
    if ( v3 == 2 || v3 == 3 )
      return a1[1];
    v6 = v2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_WORD *)v6 & 0x1FF) == 0x31 )
    {
      v12[0] = v13;
      v12[1] = (void *)0x200000000LL;
      v15 = 0x200000000LL;
      v7 = *(_QWORD *)(v6 + 16);
      ptr = v16;
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v7 & 4) != 0 )
        v8 = *(_QWORD *)(v8 + 40);
      v9 = sub_804B90(v8, v12, &ptr);
      if ( (_DWORD)v15 )
      {
        result = *(_QWORD *)(v9 + 8);
        if ( ptr != v16 )
        {
          v10 = result;
          free(ptr);
          result = v10;
        }
        if ( v12[0] != v13 )
        {
          v11 = result;
          free(v12[0]);
          return v11;
        }
        return result;
      }
      if ( ptr != v16 )
        free(ptr);
      if ( v12[0] != v13 )
        free(v12[0]);
    }
    return *(_QWORD *)(v6 + 8);
  }
  v4 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCLL);
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v4 + 56LL))(v4);
  if ( !v5 )
    return v4[6];
  while ( 1 )
  {
    result = v5[6];
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 5 )
      break;
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v5 + 48LL))(v5);
    if ( !v5 )
      return v4[6];
  }
  return result;
}

