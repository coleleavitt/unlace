__int64 __fastcall sub_308330(__int128 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v6; // eax
  unsigned int v7; // r15d
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // r14
  char v11; // al
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  unsigned int v21; // eax
  __int64 v22; // rax
  __int32 v23; // r9d
  int v24; // r8d
  int v25; // r9d
  char *v26; // [rsp+0h] [rbp-78h]
  int v27; // [rsp+Ch] [rbp-6Ch]
  __int64 v28; // [rsp+10h] [rbp-68h] BYREF
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v30[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a1;
  v30[3] = __readfsqword(0x28u);
  v6 = sub_11BB80(*((char **)&a1 + 1), &v28, 1u);
  if ( (_BYTE)v6 )
  {
    v22 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    v23 = *(_DWORD *)(v22 + 8);
    v28 = (v28 >> 63) | 1;
    sub_11C810(*((__int64 *)&a1 + 1), a1, v28, 1, *(_QWORD *)v22, v23);
    return 1;
  }
  v7 = v6;
  v8 = **((_BYTE **)&a1 + 1);
  if ( **((_BYTE **)&a1 + 1) == 14 )
  {
    v30[1] = 0;
    v30[0] = 0xFFFFFFFF00000000LL;
    sub_118810((char *)v30, (char *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL) + 16LL));
    sub_118810(*((char **)&a1 + 1), (char *)v30);
    sub_308330(a1, DWORD2(a1), (_DWORD)a2, a3, v24, v25, (unsigned int)v30);
    sub_118BA0((__int64)v30);
    return 1;
  }
  v29 = *a2;
  if ( a3 )
  {
    *(_QWORD *)&a1 = a3;
    v9 = sub_125240(a1, (__int64)&v29, 0);
    v10 = v9;
    if ( !v9 )
      return v7;
    v11 = *(_BYTE *)(v9 + 64);
    if ( v11 == 8 )
      return v7;
    if ( v11 && !sub_14E450(v10 + 64, v3, *((__int64 *)&a1 + 1)) )
    {
      if ( *(_DWORD *)(v10 + 68) <= *(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) || *(_DWORD *)v10 != 8 )
        return v7;
      v26 = (char *)v30;
      sub_11F840((__int64)v30, (unsigned __int8 *)(v10 + 64));
      if ( !(unsigned __int8)sub_1230B0((unsigned __int64)v30, v3, *(_DWORD *)(v10 + 36))
        || !sub_14E450((__int64)v30, v3, *((__int64 *)&a1 + 1)) )
      {
        goto LABEL_11;
      }
      sub_118BA0((__int64)v30);
    }
  }
  else
  {
    if ( v8 != 4 )
      return v7;
    v10 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
  }
  v13 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 > 0x29u )
    return v7;
  if ( v13 <= 7 )
  {
    if ( v13 == 7 )
    {
      v27 = 1;
      v17 = v29;
      goto LABEL_26;
    }
    if ( v13 == 4 )
      goto LABEL_36;
    if ( v13 != 6 )
      return v7;
LABEL_39:
    v17 = v29;
LABEL_40:
    *a2 = v17;
    sub_11C810(*((__int64 *)&a1 + 1), v3, 1, 1, *(_QWORD *)(v10 + 24), 0);
    return 1;
  }
  v14 = 1LL << v13;
  if ( ((1LL << v13) & 0x3FFE0800200LL) != 0 )
    goto LABEL_39;
  if ( (v14 & 0x1000900) != 0 )
  {
LABEL_36:
    v27 = 0;
    v17 = v29;
    goto LABEL_26;
  }
  if ( (v14 & 0x380000) != 0 )
  {
    v15 = sub_1186A0(v10, v30);
    if ( v15 )
    {
      v16 = sub_325C90(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 16LL), *(unsigned int *)(v15 + 4), 1);
      v17 = v29;
      v28 = v16;
      v18 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 != 19 )
      {
        if ( v18 != 20 )
        {
          if ( v16 >= 0 )
            goto LABEL_25;
          v27 = 1;
          if ( v18 != 21 )
            goto LABEL_25;
LABEL_26:
          *a2 = v17;
          sub_11F840((__int64)v30, (unsigned __int8 *)(v10 + 32));
          sub_118810(*((char **)&a1 + 1), (char *)v30);
          v21 = sub_308330(v3, DWORD2(a1), (_DWORD)a2, a3, v19, v20, (unsigned int)v30);
          v7 = v21;
          if ( v27 == 1 )
          {
            if ( !(_BYTE)v21 && *(_DWORD *)v10 == 7 )
            {
              sub_118810(*((char **)&a1 + 1), v26);
              goto LABEL_11;
            }
            sub_11C5E0(*((char **)&a1 + 1), v3, 7, *(_QWORD *)(v10 + 24), *(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL));
          }
          v7 = 1;
LABEL_11:
          sub_118BA0((__int64)v26);
          return v7;
        }
        if ( v16 <= 0 )
        {
LABEL_25:
          v27 = 0;
          goto LABEL_26;
        }
        goto LABEL_40;
      }
      if ( v16 >= 0 )
        goto LABEL_25;
      *a2 = v29;
      sub_11C810(*((__int64 *)&a1 + 1), v3, -1, 1, *(_QWORD *)(v10 + 24), 0);
      return 1;
    }
  }
  return v7;
}
