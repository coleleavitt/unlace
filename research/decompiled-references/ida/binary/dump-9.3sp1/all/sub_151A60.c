__int64 __fastcall sub_151A60(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // r15
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdi
  char *v15; // r14
  __int64 v16; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int8 *v17; // [rsp+8h] [rbp-60h] BYREF
  char v18[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a1 - 12) > 1 )
    return 0;
  if ( *(_DWORD *)(get_ph() + 4) != 13 )
    return 0;
  v3 = sub_11C8A0(a1, &v16);
  if ( !v3 )
    return 0;
  if ( *(_BYTE *)v16 != 4 )
    return 0;
  v4 = *(_QWORD *)(v16 + 8);
  if ( (unsigned int)(*(_DWORD *)v4 - 12) > 1 )
    return 0;
  v5 = sub_11C8A0(v4, &v17);
  if ( !v5 )
    return 0;
  v6 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL), *(unsigned int *)(v3 + 4), 1);
  v7 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1);
  v9 = **(_QWORD **)(v3 + 8);
  v10 = *(_DWORD *)v4;
  if ( *(_DWORD *)a1 == 13 )
  {
    v15 = (char *)(a1 + 48);
    if ( v16 == a1 + 48 )
    {
      if ( v10 == 13 )
      {
        if ( v17 == (unsigned __int8 *)(v4 + 48) )
          goto LABEL_19;
        v11 = v7 + v6;
        sub_123A40((__int64)v18, v17, v7, v8);
      }
      else
      {
        v11 = v6 - v7;
        sub_123A40((__int64)v18, v17, v7, v8);
      }
    }
    else
    {
      if ( v10 != 13 )
      {
        v6 = -v6;
        goto LABEL_10;
      }
      if ( v17 != (unsigned __int8 *)(v4 + 48) )
      {
        v6 = -v6;
        goto LABEL_19;
      }
      v11 = v7 - v6;
      sub_123A40((__int64)v18, v17, v11, v8);
    }
  }
  else
  {
    if ( v10 != 13 )
    {
LABEL_10:
      v11 = v7 + v6;
      sub_123A40((__int64)v18, v17, v7, v8);
LABEL_11:
      v12 = 12;
      if ( v11 < 0 )
      {
        v11 = -v11;
        v12 = 13;
      }
      *(_DWORD *)a1 = v12;
      sub_11CA10((char *)(a1 + 32), v18);
      v13 = *(_DWORD *)(a1 + 36);
      v14 = a1 + 48;
      goto LABEL_14;
    }
    if ( v17 != (unsigned __int8 *)(v4 + 48) )
    {
LABEL_19:
      v11 = v6 - v7;
      sub_123A40((__int64)v18, v17, v7, v8);
      goto LABEL_11;
    }
    v11 = v7 + v6;
    v15 = (char *)(a1 + 48);
    sub_123A40((__int64)v18, v17, v7, v8);
  }
  *(_DWORD *)a1 = 13;
  sub_11CA10(v15, v18);
  v13 = *(_DWORD *)(a1 + 36);
  v14 = a1 + 32;
LABEL_14:
  sub_120A10(v14, a2, v11, v13, v9, 0);
  sub_11CDA0((__int64)v18);
  return 1;
}
