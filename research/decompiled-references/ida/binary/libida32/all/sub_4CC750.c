__int64 __fastcall sub_4CC750(_DWORD *a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // r14
  unsigned int v8; // r13d
  unsigned int v9; // edx
  __int64 *v10; // rdi
  unsigned int v11; // ebx
  char *v13; // rax
  _QWORD v14[135]; // [rsp+0h] [rbp-438h] BYREF

  v3 = a1[12];
  v4 = (unsigned int)a1[11];
  v14[129] = __readfsqword(0x28u);
  v5 = getseg(v4);
  v6 = v3 - get_segm_base(v5);
  if ( !v6 )
    return 1;
  if ( *(char *)(*((_QWORD *)a1 + 2) + 12LL) < 0 )
  {
    btoa32(v14, 1024, v6, 0);
    sub_3573A0((char **)a2);
    return 1;
  }
  if ( *(_QWORD *)(*(_QWORD *)a1 + 1088LL) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 1480LL);
    v8 = a1[6];
    if ( (sub_3B9AA0(v7, v8, 4) & 0x600) == 0x200 )
      v8 = sub_3BD5D0(v7, v8);
    if ( (~((unsigned __int16)sub_3B9AA0(v7, v8, 4) >> 8) & 6) != 0 )
      v8 = a1[6];
    v9 = a1[12];
    if ( v9 != v8 )
      goto LABEL_9;
    sub_3573A0((char **)a2);
    return 1;
  }
  v9 = a1[12];
LABEL_9:
  v10 = (__int64 *)a1;
  v11 = 0;
  if ( sub_4CC2D0(v10, a2, v9, v6, 2, 0) > 0 )
  {
    v11 = 1;
    if ( *(_QWORD *)(a2 + 8) )
    {
      v13 = strchr(*(const char **)a2, 9);
      if ( v13 )
        return (unsigned int)(((v13[1] - 43) & 0xFD) == 0) + 1;
    }
  }
  return v11;
}

