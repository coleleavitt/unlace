__int64 __fastcall sub_13140(__int64 a1, const char *a2)
{
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rdx
  const char *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  _BYTE *v11; // rdi
  unsigned __int8 v12; // al
  __int64 v13; // rdi
  int v15; // eax
  int v16; // ebx
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int16 v20; // cx
  int v21; // eax
  unsigned __int16 v22; // dx
  int v23; // eax
  int v24; // eax
  unsigned __int16 v25; // ax
  __int64 v26; // rdi
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-440h] BYREF
  _BYTE dest[3]; // [rsp+10h] [rbp-438h] BYREF
  _QWORD v35[134]; // [rsp+13h] [rbp-435h] BYREF

  *(_QWORD *)((char *)&v35[128] + 5) = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 33336);
    if ( !v3 )
      sub_E6C0(0);
    v4 = strlen(a2);
    v5 = v4;
    if ( (unsigned __int64)v4 <= 0x3FF )
    {
      v11 = memcpy(dest, a2, v4);
    }
    else
    {
      v6 = (_DWORD)a2 + v4 - 1021;
      v7 = (__int64)&a2[v4 - 2041];
      v8 = &a2[v4 - 1021];
      while ( 1 )
      {
        v9 = (int)v8--;
        if ( *v8 == 47 )
          break;
        if ( v8 == (const char *)v7 )
          sub_E450((__int64)"notify: illegal file name parameter");
      }
      v10 = v9 - v6 + 1020;
      memset(dest, 46, sizeof(dest));
      if ( v10 < 8 )
      {
        if ( (((_BYTE)v9 - (_BYTE)v6 - 4) & 4) != 0 )
        {
          LODWORD(v35[0]) = *(_DWORD *)v8;
          *(_DWORD *)&dest[v10 - 1] = *(_DWORD *)&v8[v10 - 4];
        }
        else if ( v9 - v6 != -1020 )
        {
          LOBYTE(v35[0]) = 47;
          if ( (((_BYTE)v9 - (_BYTE)v6 - 4) & 2) != 0 )
            *(_WORD *)&dest[v10 + 1] = *(_WORD *)&v8[v10 - 2];
        }
      }
      else
      {
        v35[0] = *(_QWORD *)v8;
        *(_QWORD *)&dest[v10 - 5] = *(_QWORD *)&v8[v10 - 8];
        qmemcpy((char *)v35 + 5, &v8[-((char *)v35 - ((char *)v35 + 5))], 8LL * ((unsigned int)(v9 - v6 + 1015) >> 3));
      }
      v11 = dest;
      v5 = v9 - v6 + 1023;
    }
    netnode_supset(v3, -2, v11, v5, 83);
    v12 = getinf(46);
    v13 = *(_QWORD *)(a1 + 33336);
    *(_BYTE *)(a1 + 168) = v12;
    v33 = v12;
    netnode_supset(v13, -4, &v33, 8, 65);
    return setinf(46, 0);
  }
  if ( (unsigned __int8)netnode_check(a1 + 33336, "$ Constant Pool ~", 0, 1) )
    goto LABEL_51;
  v15 = netnode_altval(*(_QWORD *)(a1 + 33336), -1, 65);
  v16 = v15;
  switch ( v15 )
  {
    case 151:
      sub_E450((__int64)"Intermediate (developer) database format. Cannot convert it.");
    case 161:
      v17 = 124;
      break;
    case 19:
      v17 = 68;
      break;
    default:
      goto LABEL_55;
  }
  if ( v17 != (unsigned int)netnode_supval(*(_QWORD *)(a1 + 33336), 0, 0, -1, 83) )
    goto LABEL_51;
  if ( netnode_supval(*(_QWORD *)(a1 + 33336), 0, a1 + 33017, 124, 83) <= 67 )
    goto LABEL_51;
  v18 = *(_QWORD *)(a1 + 33033);
  if ( !v18 )
    goto LABEL_51;
  v19 = *(_QWORD *)(a1 + 33073);
  v20 = *(_WORD *)(a1 + 33081);
  if ( v19 )
  {
    if ( !v20 )
      goto LABEL_51;
    *(_QWORD *)(a1 + 33328) = v19;
  }
  else if ( v20 )
  {
    goto LABEL_51;
  }
  *(_QWORD *)(a1 + 33320) = v18;
  if ( v16 != 19 )
  {
    v21 = *(unsigned __int16 *)(a1 + 33085);
    if ( (unsigned __int16)(v21 - 45) > 0xAu )
      goto LABEL_51;
    v22 = *(_WORD *)(a1 + 33019);
    if ( (_WORD)v21 == 45 )
    {
      if ( *(_BYTE *)(a1 + 33088) != v22 > 2u )
        goto LABEL_51;
    }
    else if ( v22 || v21 - 44 != *(unsigned __int8 *)(a1 + 33088) )
    {
      goto LABEL_51;
    }
    sub_19E90(0);
    if ( *(_WORD *)(a1 + 33111) )
      *(_QWORD *)(a1 + 33352) = sub_19780(2 * (unsigned int)*(unsigned __int16 *)(a1 + 33111) + 2);
    v23 = *(_DWORD *)(a1 + 33061);
    if ( v23 )
      *(_QWORD *)(a1 + 33360) = sub_19780((unsigned int)(v23 + 1));
    v24 = *(_DWORD *)(a1 + 33129);
    if ( v24 )
      *(_QWORD *)(a1 + 33368) = sub_19780((unsigned int)(v24 + 1));
    v25 = netnode_altval(*(_QWORD *)(a1 + 33336), -3, 65);
    v26 = *(_QWORD *)(a1 + 33336);
    *(_DWORD *)(a1 + 148) = v25;
    *(_BYTE *)(a1 + 168) = netnode_altval(v26, -4, 65);
    if ( (unsigned __int8)sub_1E7E0(a1) )
      goto LABEL_40;
LABEL_51:
    sub_E6A0();
  }
  sub_19E90(0);
  sub_1E4A0(a1, 0, v27, v28, v29, v30);
  v31 = sub_1ED80(a1, 19, *(_QWORD *)(a1 + 33336));
  if ( !v31 )
    goto LABEL_51;
  if ( v31 != 161 )
  {
    if ( under_debugger )
      BUG();
    interr(10134, 19);
LABEL_55:
    sub_E450((__int64)"Very old database format. Cannot convert it");
  }
  netnode_supset(*(_QWORD *)(a1 + 33336), 0, a1 + 33017, 124, 83);
  v32 = *(_QWORD *)(a1 + 33336);
  v33 = 161;
  netnode_supset(v32, -1, &v33, 8, 65);
LABEL_40:
  if ( *(char *)(a1 + 33087) < 0 )
    *(_DWORD *)(a1 + 33380) = 0;
  if ( *(_WORD *)(a1 + 33085) > 0x31u )
    *(_BYTE *)(a1 + 33345) = 1;
  return setinf(46, 0);
}
