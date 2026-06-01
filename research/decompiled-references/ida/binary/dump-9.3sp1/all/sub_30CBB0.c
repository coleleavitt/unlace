__int64 __fastcall sub_30CBB0(__int128 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v6; // eax
  unsigned int v7; // r15d
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int *v11; // r14
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // r8d
  int v23; // r9d
  unsigned int v24; // eax
  __int64 v25; // rax
  __int32 v26; // r9d
  int v27; // r8d
  int v28; // r9d
  char *v29; // [rsp+0h] [rbp-78h]
  int v30; // [rsp+Ch] [rbp-6Ch]
  __int64 v31; // [rsp+10h] [rbp-68h] BYREF
  __int64 v32; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v33[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a1;
  v33[3] = __readfsqword(0x28u);
  v6 = sub_11FD80(*((char **)&a1 + 1), &v31, 1u);
  if ( (_BYTE)v6 )
  {
    v25 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL);
    v26 = *(_DWORD *)(v25 + 8);
    v31 = (v31 >> 63) | 1;
    sub_120A10(*((__int64 *)&a1 + 1), a1, v31, 1, *(_QWORD *)v25, v26);
    return 1;
  }
  v7 = v6;
  v8 = **((_BYTE **)&a1 + 1);
  if ( **((_BYTE **)&a1 + 1) == 14 )
  {
    v33[1] = 0;
    v33[0] = 0xFFFFFFFF00000000LL;
    sub_11CA10((char *)v33, (char *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 8LL) + 16LL));
    sub_11CA10(*((char **)&a1 + 1), (char *)v33);
    sub_30CBB0(a1, DWORD2(a1), (_DWORD)a2, a3, v27, v28, (unsigned int)v33);
    sub_11CDA0((__int64)v33);
    return 1;
  }
  v32 = *a2;
  if ( a3 )
  {
    *(_QWORD *)&a1 = a3;
    v9 = sub_129440(a1, (__int64)&v32, 0);
    v11 = (unsigned int *)v9;
    if ( !v9 )
      return v7;
    v12 = *(_BYTE *)(v9 + 64);
    if ( v12 == 8 )
      return v7;
    if ( v12 && !sub_152650((__int64)(v11 + 16), v3, *((__int64 *)&a1 + 1), v10) )
    {
      if ( (signed int)v11[17] <= *(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL) || *v11 != 8 )
        return v7;
      v29 = (char *)v33;
      sub_123A40((__int64)v33, (unsigned __int8 *)v11 + 64, v13, v14);
      if ( !(unsigned __int8)sub_1272B0((unsigned __int64)v33, v3, v11[9], 0)
        || !sub_152650((__int64)v33, v3, *((__int64 *)&a1 + 1), v15) )
      {
        goto LABEL_11;
      }
      sub_11CDA0((__int64)v33);
    }
  }
  else
  {
    if ( v8 != 4 )
      return v7;
    v11 = *(unsigned int **)(*((_QWORD *)&a1 + 1) + 8LL);
  }
  v17 = *v11;
  if ( (unsigned int)v17 > 0x29 )
    return v7;
  if ( (unsigned int)v17 <= 7 )
  {
    if ( (_DWORD)v17 == 7 )
    {
      v30 = 1;
      v21 = v32;
      goto LABEL_26;
    }
    if ( (_DWORD)v17 == 4 )
      goto LABEL_36;
    if ( (_DWORD)v17 != 6 )
      return v7;
LABEL_39:
    v21 = v32;
LABEL_40:
    *a2 = v21;
    sub_120A10(*((__int64 *)&a1 + 1), v3, 1, 1, *((_QWORD *)v11 + 3), 0);
    return 1;
  }
  v18 = 1LL << v17;
  if ( ((1LL << v17) & 0x3FFE0800200LL) != 0 )
    goto LABEL_39;
  if ( (v18 & 0x1000900) != 0 )
  {
LABEL_36:
    v30 = 0;
    v21 = v32;
    goto LABEL_26;
  }
  if ( (v18 & 0x380000) != 0 )
  {
    v19 = sub_11C8A0((__int64)v11, v33);
    if ( v19 )
    {
      v20 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL), *(unsigned int *)(v19 + 4), 1);
      v21 = v32;
      v31 = v20;
      v17 = *v11;
      if ( (_DWORD)v17 != 19 )
      {
        if ( (_DWORD)v17 != 20 )
        {
          if ( v20 >= 0 )
            goto LABEL_25;
          v30 = 1;
          if ( (_DWORD)v17 != 21 )
            goto LABEL_25;
LABEL_26:
          *a2 = v21;
          sub_123A40((__int64)v33, (unsigned __int8 *)v11 + 32, v21, v17);
          sub_11CA10(*((char **)&a1 + 1), (char *)v33);
          v24 = sub_30CBB0(v3, DWORD2(a1), (_DWORD)a2, a3, v22, v23, (unsigned int)v33);
          v7 = v24;
          if ( v30 == 1 )
          {
            if ( !(_BYTE)v24 && *v11 == 7 )
            {
              sub_11CA10(*((char **)&a1 + 1), v29);
              goto LABEL_11;
            }
            sub_1207E0(*((char **)&a1 + 1), v3, 7, *((_QWORD *)v11 + 3), *(_DWORD *)(*((_QWORD *)&a1 + 1) + 4LL));
          }
          v7 = 1;
LABEL_11:
          sub_11CDA0((__int64)v29);
          return v7;
        }
        if ( v20 <= 0 )
        {
LABEL_25:
          v30 = 0;
          goto LABEL_26;
        }
        goto LABEL_40;
      }
      if ( v20 >= 0 )
        goto LABEL_25;
      *a2 = v32;
      sub_120A10(*((__int64 *)&a1 + 1), v3, -1, 1, *((_QWORD *)v11 + 3), 0);
      return 1;
    }
  }
  return v7;
}
