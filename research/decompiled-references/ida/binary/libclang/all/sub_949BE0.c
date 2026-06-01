__int64 __fastcall sub_949BE0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // [rsp+Fh] [rbp-B9h] BYREF
  __int64 v16[3]; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-A0h]
  unsigned int v18; // [rsp+30h] [rbp-98h]
  int v19; // [rsp+40h] [rbp-88h]
  _BYTE v20[120]; // [rsp+50h] [rbp-78h] BYREF

  v2 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v4 = *(_QWORD *)(a1 + 568);
    v5 = *(_QWORD *)(a1 + 792);
    v6 = a1 + 384;
    *(_QWORD *)(a1 + 800) = *a2;
    v7 = sub_A1A5A0(v4, 56);
    sub_A1C070(v16, v7);
    sub_A1A5E0(v4, 56);
    v2 = sub_9D7A30(a1 + 384, v5, v16, 4);
    if ( !(_BYTE)v2 )
    {
LABEL_4:
      sub_A1C0C0(v16);
      return v2;
    }
    v8 = v17;
    if ( v19 )
    {
      v10 = v16[0];
    }
    else
    {
      if ( v17 && *(_BYTE *)(*(_QWORD *)(v17 + 32) + 52LL) )
        goto LABEL_12;
      v9 = sub_8E5480((__int64)v16);
      v10 = v16[0];
      if ( *(_BYTE *)(v9 + 51) )
      {
        v11 = v8 + v18 + 72;
        if ( v18 == v16[0] )
        {
LABEL_10:
          if ( (unsigned __int8)sub_9D4FE0(v6, v5, v11, 4) )
          {
            v12 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
            sub_A1BFE0(v12, v11);
            v15 = 1;
            v2 = sub_9497A0(v6, v5, &v15, v11, 1);
            if ( (_BYTE)v2 )
            {
              sub_8F41A0((__int64)v20, *(_QWORD *)(a1 + 568));
              v13 = sub_8F9CB0(v16);
              sub_A1C200(v13, v20, v14);
              sub_A1C0C0(v20);
              goto LABEL_4;
            }
          }
LABEL_12:
          v2 = 0;
          sub_A1C0C0(v16);
          return v2;
        }
      }
    }
    v11 = v8 + v10 + 40;
    goto LABEL_10;
  }
  return v2;
}

