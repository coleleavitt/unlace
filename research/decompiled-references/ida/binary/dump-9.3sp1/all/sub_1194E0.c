__int64 __fastcall sub_1194E0(int *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  _DWORD *v7; // rdi
  int v9; // r14d
  __int64 v10; // rbp
  _DWORD *v11; // rax
  _DWORD *v12; // r12
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rbx
  __int64 v20; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v21[4]; // [rsp+20h] [rbp-68h] BYREF
  int v22; // [rsp+24h] [rbp-64h]
  __int64 v23; // [rsp+28h] [rbp-60h]
  _QWORD v24[11]; // [rsp+30h] [rbp-58h] BYREF

  v24[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)a4 != 4 )
    return 0;
  v7 = *(_DWORD **)(a4 + 8);
  if ( *v7 != 14 )
    return 0;
  if ( !a2 )
    return 0;
  v9 = *a1;
  v10 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
  v11 = (_DWORD *)sub_11C8E0(v7, &v20, 0);
  v12 = v11;
  if ( !v11 )
    return 0;
  v13 = *v11;
  switch ( v13 )
  {
    case 10:
      if ( *((_BYTE *)v12 + 32) != 4 )
        return 0;
      v12 = *((_DWORD **)v12 + 5);
      if ( (unsigned int)(*v12 - 15) > 1 )
        return 0;
      goto LABEL_10;
    case 9:
      if ( *((_BYTE *)v12 + 32) != 4 )
        return 0;
      v12 = *((_DWORD **)v12 + 5);
      if ( *v12 != 34 || v12[9] < *(_DWORD *)(a5 + 4) )
        return 0;
LABEL_22:
      if ( !(unsigned __int8)sub_12EA80(v10, a2, a3, (int)v12 + 32, a3, a5, 1) )
        return 0;
LABEL_23:
      if ( *((_BYTE *)v12 + 48) == 2 )
      {
        v18 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)v12 + 7) + 16LL), *(unsigned int *)(v20 + 4), 0);
        if ( (unsigned __int8)sub_11FD80(v20, v24, 0) )
        {
          if ( *a1 == 12 )
            v24[0] = sub_32ABC0(-v24[0], *(unsigned int *)(v20 + 4), 0);
          if ( v24[0] == v18 )
            goto LABEL_13;
        }
      }
      return 0;
    case 34:
      goto LABEL_22;
  }
  if ( (unsigned int)(v13 - 15) > 1 )
    return 0;
LABEL_10:
  if ( !(unsigned __int8)sub_12EA80(v10, a2, a3, (int)v12 + 32, a3, a5, 1) )
    return 0;
  if ( v9 == 12 )
    goto LABEL_23;
  if ( !(unsigned __int8)sub_12EA80(v10, a2, a3, (int)v12 + 48, a3, v20, 1) )
    return 0;
LABEL_13:
  *a1 = (*v12 == 16) + 17;
  sub_123A40(v21);
  sub_123A40(v24);
  sub_11CA10(a1 + 8, v21);
  sub_11CA10(a1 + 12, v24);
  if ( a1[9] > a1[17] )
  {
    v16 = j__qalloc_or_throw(80, (__int64)v24, v14, v15);
    *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 40) = 0;
    *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 56) = 0;
    *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v16 + 72) = 0;
    *(_OWORD *)(v16 + 8) = 0;
    sub_1253A0(v16, a1);
    sub_11CDA0(v21);
    v17 = a1[9];
    v21[0] = 4;
    v23 = v16;
    v22 = v17;
    sub_11CDA0(v16 + 64);
    *(_DWORD *)(v23 + 68) = a1[9];
    sub_11CA10(a1 + 8, v21);
    sub_11CDA0(a1 + 12);
    *(_QWORD *)a1 = 10;
  }
  sub_11CDA0(v24);
  sub_11CDA0(v21);
  return 1;
}
