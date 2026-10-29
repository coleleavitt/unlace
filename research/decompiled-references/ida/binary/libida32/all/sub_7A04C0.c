__int64 __fastcall sub_7A04C0(unsigned __int64 a1, __int64 a2)
{
  signed int v3; // r14d
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // r15d
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  struct pollfd v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v19[1] = (struct pollfd)__readfsqword(0x28u);
  v3 = a2;
  while ( 1 )
  {
    v4 = a1;
    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)a1 + 152LL))(a1) )
    {
      v9 = -1;
      *(_QWORD *)(a1 + 88) = "select";
      return v9;
    }
    v5 = *(_QWORD *)(a1 + 40);
    if ( v5 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * v5 - 16);
      if ( v3 >= 0
        && (v16 = qtime64(a1, a2), a2 = (unsigned int)v3, v4 = v16, v17 = sub_79D9C0(v16, v3), (v6 = v17) != 0) )
      {
        if ( v11 >= v17 || !v11 )
LABEL_20:
          v11 = v6;
      }
      else
      {
        if ( !v11 )
          goto LABEL_5;
        v6 = 0;
      }
      v12 = qtime64(v4, a2);
      v13 = (unsigned int)v12 + 1000000 * HIDWORD(v12);
      v14 = (unsigned int)v11 + 1000000 * HIDWORD(v11);
      v7 = 0;
      if ( v13 < v14 )
        v7 = (v14 - v13) / 0x3E8;
      goto LABEL_6;
    }
    if ( v3 >= 0 )
    {
      v15 = qtime64(a1, a2);
      a2 = (unsigned int)v3;
      v4 = v15;
      v6 = sub_79D9C0(v15, v3);
      if ( v6 )
        goto LABEL_20;
    }
LABEL_5:
    v6 = 0;
    v7 = -1;
LABEL_6:
    v19[0].fd = *(_QWORD *)(a1 + 56);
    v19[0].events = 1;
    while ( 1 )
    {
      a2 = 1;
      v8 = poll(v19, 1u, v7);
      v9 = v8;
      if ( v8 != -1 )
        break;
      if ( *__errno_location() != 4 )
        goto LABEL_28;
    }
    if ( v8 )
      break;
    if ( v6 && qtime64(v19, 1) >= v6 )
    {
      v9 = -1;
      *(_QWORD *)(a1 + 88) = "poll";
      v10 = 62;
LABEL_13:
      *(_DWORD *)(a1 + 96) = v10;
      return v9;
    }
  }
  if ( v8 < 0 )
  {
LABEL_28:
    *(_QWORD *)(a1 + 88) = "poll";
    v10 = *__errno_location();
    goto LABEL_13;
  }
  return v9;
}

