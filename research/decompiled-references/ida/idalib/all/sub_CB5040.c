__int64 __fastcall sub_CB5040(_BYTE *a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v16; // eax
  unsigned int v17; // r13d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-60h]
  unsigned int v20; // [rsp+1Ch] [rbp-4Ch]
  _QWORD v21[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(v2 - 5) > 1 )
    return 0;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 24);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 42 )
  {
    return 0;
  }
  v5 = sub_CB4C40((__int64)a1, v3);
  v20 = v5;
  v19 = sub_CB4C40((__int64)a1, v4);
  if ( !BYTE4(v5) )
    return 0;
  v8 = HIDWORD(v19);
  if ( !BYTE4(v19) )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v9 + 16) == 42 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) == 42 )
    {
      if ( v2 == 6 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v4) )
        {
          if ( (_DWORD)v19 == 13 || (v21[0] = v4 | 4, (unsigned __int8)sub_D0A690(a1, (unsigned int)v19, 13, v21)) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v3) )
            {
              if ( (_DWORD)v5 == 13 || (v21[0] = v3 | 4, (unsigned __int8)sub_D0A690(a1, (unsigned int)v5, 13, v21)) )
              {
                v16 = sub_CB4CA0((__int64)a1, *(_QWORD *)(a2 + 8));
                v21[0] = a2 | 4;
                v17 = v16;
                v8 = sub_D52500(a1, v16, v21);
                if ( (_BYTE)v8 )
                {
                  if ( a1[1360] )
                  {
                    v21[0] = a2 | 4;
                    return (unsigned int)sub_D25200(a1, v17, v21);
                  }
                  return v8;
                }
              }
            }
          }
        }
      }
      return 0;
    }
  }
  if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL), v4, v9, v6, v7) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v4) )
      return 0;
    if ( (_DWORD)v19 != 13 )
    {
      v21[0] = v4 | 4;
      if ( !(unsigned __int8)sub_D0A690(a1, (unsigned int)v19, 13, v21) )
        return 0;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v3) )
      return 0;
  }
  else
  {
    if ( !sub_9EC890(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL), v4, v10, v11, v12) )
      return 0;
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v3) )
      return 0;
    if ( (_DWORD)v5 != 13 )
    {
      v21[0] = v3 | 4;
      if ( !(unsigned __int8)sub_D0A690(a1, (unsigned int)v5, 13, v21) )
        return 0;
    }
    v20 = v19;
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 48LL))(a1, v4) )
      return 0;
  }
  v21[0] = a2 | 4;
  if ( v2 == 5 )
  {
    if ( (unsigned __int8)sub_D57EF0(a1, v20, v21) )
    {
      v18 = sub_CB4C40((__int64)a1, a2);
      if ( BYTE4(v18) )
      {
        if ( (_DWORD)v18 == 13 )
          return v8;
        v21[0] = a2 | 4;
        v14 = sub_CB4C40((__int64)a1, a2);
        if ( BYTE4(v14) )
          return (unsigned int)sub_D0A690(a1, 13, (unsigned int)v14, v21);
      }
      return sub_CB5420();
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_D58EC0(a1, v20, v21) )
    return 0;
  v13 = sub_CB4C40((__int64)a1, a2);
  if ( BYTE4(v13) )
  {
    if ( (_DWORD)v13 == 13 )
      return v8;
    v21[0] = a2 | 4;
    v14 = sub_CB4C40((__int64)a1, a2);
    if ( BYTE4(v14) )
      return (unsigned int)sub_D0A690(a1, 13, (unsigned int)v14, v21);
  }
  return sub_CB5420();
}
