__int64 __fastcall sub_CA0AF0(int **a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *((unsigned __int8 *)*a1 + 4);
  if ( !(_BYTE)v3 )
  {
    if ( (unsigned __int8)sub_C93320((__int64)a1[4]) )
    {
      v8 = (__int64)a1[1];
      v14[0] = *(_QWORD *)a1[2] | 4LL;
      if ( (unsigned __int8)sub_C80E30(v8, a2, v14) )
      {
        if ( (unsigned __int8)sub_C9FC20((__int64)a1[1], *(_QWORD *)a1[2], v9, v10, v11) )
        {
          v12 = (__int64)a1[1];
          v14[0] = *(_QWORD *)a1[2] | 4LL;
          return (unsigned int)sub_C87820(v12, v14);
        }
      }
    }
    return v3;
  }
  v4 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1[1] + 40LL))(a1[1], *(_QWORD *)a1[2]);
  v5 = (__int64)a1[4];
  v6 = v4;
  if ( (_BYTE)v4 )
  {
    v3 = sub_C93320(v5);
    if ( !(_BYTE)v3 )
      return v3;
    v13 = (__int64)a1[1];
    v14[0] = *(_QWORD *)a1[3] & 0xFFFFFFFFFFFFFFFBLL;
    return (unsigned int)sub_C813A0(v13, **a1, a2, v14);
  }
  else
  {
    sub_C93320(v5);
    return v6;
  }
}

