unsigned __int64 __fastcall sub_4CC610(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  const char *v4; // rbx
  _DWORD *v5; // r12
  int v6; // r8d
  int v7; // r9d
  char *v8; // rax
  int v9; // edx
  unsigned __int64 result; // rax
  int v11; // eax
  char *v12; // rax
  int v13; // r8d
  int v14; // r9d
  char *v15; // rbx
  int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // rbx
  __int64 v21; // rax
  int v22; // [rsp+4h] [rbp-34h] BYREF
  __int64 v23; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v24[5]; // [rsp+10h] [rbp-28h] BYREF

  v24[1] = __readfsqword(0x28u);
  if ( !a2 )
    return -1;
  v3 = *a1;
  v4 = (const char *)a2;
  v5 = *(_DWORD **)(v3 + 1720);
  if ( (unsigned __int8)sub_631AD0(v3, 35) != 9 )
  {
    v4 = (const char *)sub_4CC1E0(a2);
    if ( !v4 )
      return -1;
  }
  switch ( (unsigned __int8)sub_631AD0(*a1, 35) )
  {
    case 0u:
      v11 = qsscanf((_DWORD)v4, v5[108] + 3, (unsigned int)&v23, (unsigned int)v24, (unsigned int)&v22, v7);
      if ( v11 <= 0 || v4[v22] || v11 != 2 )
        goto LABEL_12;
      v20 = v24[0];
      v21 = sub_631AD0(*a1, 12);
      return *(_QWORD *)(a1[3] + 16LL) & (v20 + 16 * (v23 + v21));
    case 1u:
      v19 = qsscanf((_DWORD)v4, v5[110] + 3, (unsigned int)&v23, (unsigned int)v24, (unsigned int)&v22, v7);
      result = *(_QWORD *)(a1[3] + 16LL);
      if ( v19 > 0 && !v4[v22] && v19 == 2 )
        goto LABEL_19;
      return result;
    case 2u:
    case 9u:
      v12 = sub_4C7CC0(*(_QWORD *)(*a1 + 1672LL), v4, &v23);
      v15 = v12;
      if ( !v12 )
        goto LABEL_12;
      v16 = qsscanf((_DWORD)v12, v5[126] + 3, (unsigned int)v24, (unsigned int)&v22, v13, v14);
      result = *(_QWORD *)(a1[3] + 16LL);
      if ( v16 > 0 && !v15[v22] && v16 == 1 )
LABEL_19:
        result &= v24[0] + 16 * v23;
      return result;
    case 3u:
    case 4u:
    case 5u:
      v8 = strrchr(v4, 95);
      v4 = v8 + 1;
      if ( !v8 )
        goto LABEL_12;
      goto LABEL_6;
    case 0xAu:
      v17 = qsscanf((_DWORD)v4, (unsigned int)"%u%n", (unsigned int)&v23, (unsigned int)v24, v6, v7);
      if ( v17 <= 0 || v4[SLODWORD(v24[0])] || v17 != 1 )
        goto LABEL_12;
      v18 = netnode_altval(a1[302], (unsigned int)v23, 65);
      result = *(_QWORD *)(a1[3] + 16LL) & sub_3BDE50(a1, v18 - 1);
      break;
    default:
LABEL_6:
      v9 = qsscanf((_DWORD)v4, v5[126] + 3, (unsigned int)v24, (unsigned int)&v23, v6, v7);
      if ( v9 <= 0 || v4[(int)v23] )
      {
LABEL_12:
        result = *(_QWORD *)(a1[3] + 16LL);
      }
      else
      {
        result = *(_QWORD *)(a1[3] + 16LL);
        if ( v9 == 1 )
          result &= v24[0];
      }
      break;
  }
  return result;
}
