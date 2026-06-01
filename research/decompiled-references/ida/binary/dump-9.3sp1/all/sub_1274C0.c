__int64 __fastcall sub_1274C0(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rbp
  __int16 v14; // cx
  __int16 v15; // dx
  __int16 v16; // cx
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int16 v22; // [rsp+0h] [rbp-48h] BYREF
  __int16 v23; // [rsp+2h] [rbp-46h]
  int v24; // [rsp+4h] [rbp-44h]
  __int64 v25; // [rsp+8h] [rbp-40h]
  unsigned __int64 v26; // [rsp+18h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( *((_DWORD *)a1 + 1) <= (int)a3 )
    return 0;
  v4 = a3;
  if ( !(_DWORD)a3 )
    return 0;
  v7 = a4;
  if ( (a1[1] & 4) != 0 )
    goto LABEL_49;
  v8 = *a1;
  if ( (_BYTE)v8 != 4 )
    goto LABEL_6;
  v9 = *((_QWORD *)a1 + 1);
  if ( sub_122600((unsigned int *)v9) )
  {
LABEL_49:
    if ( sub_11CAD0(v4) )
    {
      v8 = *a1;
LABEL_6:
      switch ( v8 )
      {
        case 0LL:
          return 1;
        case 1LL:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 216LL))(
                  a2,
                  *((unsigned int *)a1 + 2)) )
            return 0;
          goto LABEL_11;
        case 2LL:
          v10 = *((_QWORD *)a1 + 1);
          *(_QWORD *)(v10 + 16) = sub_32ABC0(*(_QWORD *)(v10 + 16), (unsigned int)v4, 0);
          goto LABEL_11;
        case 4LL:
          v9 = *((_QWORD *)a1 + 1);
          goto LABEL_14;
        case 5LL:
        case 6LL:
        case 9LL:
          goto LABEL_11;
        case 14LL:
          if ( *((_DWORD *)a1 + 1) / 2 < v4 )
            return 0;
          sub_123A40((__int64)&v22, *((unsigned __int8 **)a1 + 1), *((unsigned int *)a1 + 1), a4);
          v12 = v24;
          if ( v24 <= v4 )
            goto LABEL_39;
          if ( (unsigned __int8)sub_1272B0((unsigned __int64)&v22, a2, v4, v7) )
            goto LABEL_38;
          if ( (_BYTE)v22 != 4 )
            goto LABEL_25;
          v12 = v24;
          if ( v4 < v24 && v4 > 0 )
          {
            v13 = *(_QWORD *)(v25 + 24);
            if ( !(unsigned __int8)sub_1272B0((unsigned __int64)&v22, a2, v4, 0) )
              sub_1207E0((char *)&v22, a2, 10, v13, v4);
LABEL_38:
            v12 = v24;
          }
LABEL_39:
          v14 = v22;
          v22 = *(_WORD *)a1;
          v15 = *((_WORD *)a1 + 1);
          *(_WORD *)a1 = v14;
          v16 = v23;
          v23 = v15;
          v17 = *((_DWORD *)a1 + 1);
          *((_WORD *)a1 + 1) = v16;
          v24 = v17;
          v18 = v25;
          *((_DWORD *)a1 + 1) = v12;
          v19 = *((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v18;
          v25 = v19;
          sub_11CDA0((__int64)&v22);
          break;
        case 15LL:
          return sub_126980((__int64)a1, 0, v4, 1);
        default:
          return 0;
      }
      goto LABEL_11;
    }
    return 0;
  }
LABEL_14:
  v11 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 > 9u )
  {
    if ( v11 > 0xE )
    {
      if ( v11 - 19 > 2 )
        return 0;
    }
    else if ( v11 <= 0xB )
    {
      return 0;
    }
    if ( (v7 & 1) == 0 )
      return 0;
    sub_123A40((__int64)&v22, (unsigned __int8 *)(v9 + 32), a3, a4);
    if ( !(unsigned __int8)sub_1274C0(&v22, a2, (unsigned int)v4)
      || !(unsigned __int8)sub_1274C0(*((_QWORD *)a1 + 1) + 48LL, a2, (unsigned int)v4) )
    {
LABEL_25:
      sub_11CDA0((__int64)&v22);
      return 0;
    }
    sub_11CA10((char *)(*((_QWORD *)a1 + 1) + 32LL), (char *)&v22);
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 68LL) = v4;
    sub_11CDA0((__int64)&v22);
  }
  else if ( v11 > 7 )
  {
    if ( *(_DWORD *)(v9 + 36) > v4 )
      return 0;
    if ( *(_DWORD *)(v9 + 36) == v4 )
    {
      sub_123A40((__int64)&v22, (unsigned __int8 *)(v9 + 32), a3, a4);
      sub_11CDA0((__int64)a1);
      sub_123A40((__int64)a1, (unsigned __int8 *)&v22, v20, v21);
      sub_11CDA0((__int64)&v22);
    }
    else
    {
      *(_DWORD *)(v9 + 68) = v4;
    }
  }
  else
  {
    if ( v11 != 7 || (v7 & 1) == 0 || !(unsigned __int8)sub_1274C0(v9 + 32, a2, (unsigned int)v4) )
      return 0;
    *(_DWORD *)(*((_QWORD *)a1 + 1) + 68LL) = v4;
  }
LABEL_11:
  *((_DWORD *)a1 + 1) = v4;
  return 1;
}
