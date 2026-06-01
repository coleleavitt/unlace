__int64 __fastcall sub_942930(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rcx
  int v9; // eax
  unsigned __int8 v10; // al
  char v11; // al
  unsigned __int8 v12; // [rsp+0h] [rbp-40h]
  __int64 v13; // [rsp+0h] [rbp-40h]
  unsigned __int64 v14[6]; // [rsp+10h] [rbp-30h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = a1 + 384;
    v4 = *(_QWORD *)(a1 + 568);
    v5 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a2;
    v6 = *(_QWORD *)sub_A1A5A0(v4, 8);
    sub_A1A5E0(v4, 8);
    v7 = *(_QWORD *)(a1 + 568);
    v14[0] = v6;
    v8 = sub_A1A5A0(v7, 56);
    v9 = *(_DWORD *)(v8 + 48);
    if ( v9 )
    {
      if ( v9 == 2 )
      {
        if ( !*(_QWORD *)(v8 + 24) )
          goto LABEL_4;
      }
      else if ( v9 != 3 && !*(_QWORD *)(v8 + 32) && !*(_QWORD *)v8 )
      {
        goto LABEL_4;
      }
    }
    else if ( !*(_QWORD *)(v8 + 24) )
    {
      goto LABEL_4;
    }
    if ( v6 )
    {
      v13 = v8;
      v11 = sub_9D4C70(v3, v5, v8);
      v8 = v13;
      if ( !v11 )
        return 0;
    }
LABEL_4:
    v10 = sub_942480(v3, v5, v14, v8, 0);
    if ( v10 )
    {
      v12 = v10;
      sub_8E94C0(v3);
      return v12;
    }
    return 0;
  }
  return result;
}

