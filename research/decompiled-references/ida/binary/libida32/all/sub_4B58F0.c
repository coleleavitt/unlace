__int64 __fastcall sub_4B58F0(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  const char *v4; // rbx
  _DWORD *v5; // r12
  int v6; // r8d
  int v7; // r9d
  char *v8; // rax
  int v9; // eax
  __int64 result; // rax
  char *v11; // rax
  int v12; // r8d
  int v13; // r9d
  char *v14; // rbx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // eax
  char v22; // [rsp+0h] [rbp-38h]
  int v23; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v24; // [rsp+10h] [rbp-28h] BYREF
  int v25; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  if ( !a2 )
    return 0xFFFFFFFFLL;
  v3 = *(_QWORD *)a1;
  v4 = (const char *)a2;
  v5 = *(_DWORD **)(v3 + 1528);
  if ( (unsigned __int8)sub_614FB0(v3, 35) != 9 )
  {
    v4 = (const char *)sub_4B54B0(a2);
    if ( !v4 )
      return 0xFFFFFFFFLL;
  }
  switch ( (unsigned __int8)sub_614FB0(*(_QWORD *)a1, 35) )
  {
    case 0u:
      v18 = qsscanf((int)v4, v5[106] + 3, (int)&v23, (int)&v24, (int)&v25, v7, v22);
      if ( v18 <= 0 || v4[v25] || v18 != 2 )
        return 0xFFFFFFFFLL;
      v19 = v24;
      v20 = sub_614FB0(*(_QWORD *)a1, 12);
      return v19 + 16 * (v23 + v20);
    case 1u:
      v21 = qsscanf((int)v4, v5[108] + 3, (int)&v23, (int)&v24, (int)&v25, v7, v22);
      if ( v21 <= 0 || v4[v25] || v21 != 2 )
        return 0xFFFFFFFFLL;
      return v24 + 16 * v23;
    case 2u:
    case 9u:
      v11 = sub_4B1040(*(_QWORD *)(*(_QWORD *)a1 + 1480LL), v4, &v23);
      v14 = v11;
      if ( !v11 )
        return 0xFFFFFFFFLL;
      v15 = qsscanf((int)v11, v5[124] + 3, (int)&v24, (int)&v25, v12, v13, v22);
      if ( v15 <= 0 || v14[v25] || v15 != 1 )
        return 0xFFFFFFFFLL;
      return v24 + 16 * v23;
    case 3u:
    case 4u:
    case 5u:
      v8 = strrchr(v4, 95);
      if ( !v8 )
        return 0xFFFFFFFFLL;
      v4 = v8 + 1;
      goto LABEL_7;
    case 0xAu:
      v16 = qsscanf((int)v4, (int)"%u%n", (int)&v24, (int)&v25, v6, v7, v22);
      if ( v16 <= 0 || v4[v25] || v16 != 1 )
        return 0xFFFFFFFFLL;
      v17 = netnode_altval(a1[582], v24, 65);
      return sub_3B9110(a1, v17 - 1);
    default:
LABEL_7:
      v9 = qsscanf((int)v4, v5[124] + 3, (int)&v24, (int)&v25, v6, v7, v22);
      if ( v9 <= 0 || v4[v25] || v9 != 1 )
        return 0xFFFFFFFFLL;
      result = v24;
      break;
  }
  return result;
}

