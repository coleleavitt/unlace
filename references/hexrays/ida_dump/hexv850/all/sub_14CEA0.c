__int64 __fastcall sub_14CEA0(__int64 a1, int a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r12
  int v9; // eax
  __int64 v10; // r15
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdi
  char *v14; // r14
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int8 *v16; // [rsp+8h] [rbp-60h] BYREF
  char v17[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a1 - 12) > 1 )
    return 0;
  if ( *(_DWORD *)(get_ph() + 4) != 13 )
    return 0;
  v3 = sub_117CE0(a1, &v15);
  if ( !v3 )
    return 0;
  if ( *(_BYTE *)v15 != 4 )
    return 0;
  v4 = *(_QWORD *)(v15 + 8);
  if ( (unsigned int)(*(_DWORD *)v4 - 12) > 1 )
    return 0;
  v5 = sub_117CE0(v4, &v16);
  if ( !v5 )
    return 0;
  v6 = sub_325150(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL), *(unsigned int *)(v3 + 4), 1);
  v7 = sub_325150(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1);
  v8 = **(_QWORD **)(v3 + 8);
  v9 = *(_DWORD *)v4;
  if ( *(_DWORD *)a1 == 13 )
  {
    v14 = (char *)(a1 + 48);
    if ( v15 == a1 + 48 )
    {
      if ( v9 == 13 )
      {
        if ( v16 == (unsigned __int8 *)(v4 + 48) )
          goto LABEL_19;
        v10 = v7 + v6;
        sub_11EE80((__int64)v17, v16);
      }
      else
      {
        v10 = v6 - v7;
        sub_11EE80((__int64)v17, v16);
      }
    }
    else
    {
      if ( v9 != 13 )
      {
        v6 = -v6;
        goto LABEL_10;
      }
      if ( v16 != (unsigned __int8 *)(v4 + 48) )
      {
        v6 = -v6;
        goto LABEL_19;
      }
      v10 = v7 - v6;
      sub_11EE80((__int64)v17, v16);
    }
  }
  else
  {
    if ( v9 != 13 )
    {
LABEL_10:
      v10 = v7 + v6;
      sub_11EE80((__int64)v17, v16);
LABEL_11:
      v11 = 12;
      if ( v10 < 0 )
      {
        v10 = -v10;
        v11 = 13;
      }
      *(_DWORD *)a1 = v11;
      sub_117E50((char *)(a1 + 32), v17);
      v12 = *(_DWORD *)(a1 + 36);
      v13 = a1 + 48;
      goto LABEL_14;
    }
    if ( v16 != (unsigned __int8 *)(v4 + 48) )
    {
LABEL_19:
      v10 = v6 - v7;
      sub_11EE80((__int64)v17, v16);
      goto LABEL_11;
    }
    v10 = v7 + v6;
    v14 = (char *)(a1 + 48);
    sub_11EE80((__int64)v17, v16);
  }
  *(_DWORD *)a1 = 13;
  sub_117E50(v14, v17);
  v12 = *(_DWORD *)(a1 + 36);
  v13 = a1 + 32;
LABEL_14:
  sub_11BE50(v13, a2, v10, v12, v8, 0);
  sub_1181E0((__int64)v17);
  return 1;
}
