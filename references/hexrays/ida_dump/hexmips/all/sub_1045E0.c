unsigned __int64 __fastcall sub_1045E0(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v4; // rdi
  unsigned __int64 *v5; // rdx
  unsigned __int64 *v6; // rbx
  int v7; // r8d
  _QWORD *v8; // r11
  unsigned __int8 v9; // r10
  int v10; // ecx
  __int64 v11; // r13
  unsigned __int8 v13; // al
  int v14; // eax
  unsigned __int64 *v15; // rdx
  unsigned __int64 *i; // rax
  signed __int64 v18; // rsi
  _QWORD *v19; // rdi
  char v20; // al
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // al
  __int64 v27; // [rsp+8h] [rbp-70h]
  unsigned __int8 v28; // [rsp+10h] [rbp-68h]
  int v29; // [rsp+10h] [rbp-68h]
  int v30; // [rsp+10h] [rbp-68h]
  _QWORD *v31; // [rsp+20h] [rbp-58h]
  int v32; // [rsp+20h] [rbp-58h]
  int v33; // [rsp+28h] [rbp-50h]
  _QWORD *v34; // [rsp+28h] [rbp-50h]
  unsigned __int8 v35; // [rsp+33h] [rbp-45h]
  __int64 v37; // [rsp+38h] [rbp-40h]

  v4 = a2;
  v5 = (unsigned __int64 *)*a2;
  v37 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL);
  if ( !*a2 )
    return sub_1003E0(v4, v37);
  if ( !a2[1] )
    return sub_1003E0(v4, v37);
  v6 = (unsigned __int64 *)v5[1];
  if ( v6 == v5 )
    return sub_1003E0(v4, v37);
  v27 = a1;
  v7 = 0;
  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = -1;
  do
  {
    if ( *((_BYTE *)v6 + 56) != 5 )
      goto LABEL_6;
    v18 = v6[6];
    v31 = v8;
    v29 = v7;
    v19 = *(_QWORD **)(v27 + 320);
    if ( v19[18] <= v18 )
      break;
    v35 = v9;
    v33 = v10;
    v20 = sub_FE4C0(v19, v18, 1u);
    v10 = v33;
    v9 = v35;
    v7 = v29;
    v8 = v31;
    if ( v20 )
    {
LABEL_6:
      if ( !v8 )
      {
        if ( v7 >= v10 + *((_DWORD *)v6 + 16) )
          goto LABEL_56;
LABEL_15:
        if ( v9 )
        {
LABEL_16:
          if ( v10 > 1 )
            goto LABEL_37;
        }
        goto LABEL_17;
      }
      if ( v10 + *((_DWORD *)v6 + 16) > v7 )
        goto LABEL_15;
      if ( !v9 )
        goto LABEL_17;
      if ( v9 == 1 )
      {
        v34 = v8;
        v32 = v7;
        v30 = v10;
        v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 88LL))(v37, (unsigned int)v11);
        v10 = v30;
        v7 = v32;
        v8 = v34;
        v9 = 1;
        if ( !v26 )
          goto LABEL_16;
        v13 = *((_BYTE *)v6 + 56);
        if ( v13 != 1 )
        {
LABEL_11:
          if ( v10 <= 1 )
          {
            v9 = v13;
            v11 = v6[6];
            v7 = 0x7FFFFFFF;
            if ( v13 != 1 )
              goto LABEL_19;
            goto LABEL_13;
          }
LABEL_37:
          sub_103F80((unsigned __int64 **)a2, v11, v9, v10, (__int64 *)(*(_QWORD *)(v27 + 80) + 24LL * a3));
LABEL_17:
          v9 = *((_BYTE *)v6 + 56);
          v11 = v6[6];
          goto LABEL_18;
        }
      }
      else
      {
        v13 = *((_BYTE *)v6 + 56);
        if ( v13 != v9 )
          goto LABEL_11;
      }
      if ( v11 + v10 != v6[6] )
        goto LABEL_11;
      v24 = v6[4];
      if ( v24 != v8[1] )
        goto LABEL_50;
      if ( v24 )
      {
        v25 = 0;
        while ( *(_DWORD *)(v6[3] + 4 * v25) == *(_DWORD *)(*v8 + 4 * v25) )
        {
          if ( v24 == ++v25 )
            goto LABEL_58;
        }
LABEL_50:
        if ( v10 <= 1 )
        {
          v11 = v6[6];
LABEL_18:
          v7 = 0x7FFFFFFF;
          if ( v9 != 1 )
          {
LABEL_19:
            v10 = *((_DWORD *)v6 + 16);
            v8 = v6 + 3;
            goto LABEL_20;
          }
LABEL_13:
          v28 = v9;
          v14 = sub_12F6F0(v37, 0, (unsigned int)v11, 0x7FFFFFFF, 0);
          v9 = v28;
          v7 = v14;
          goto LABEL_19;
        }
        goto LABEL_37;
      }
LABEL_58:
      v10 += *((_DWORD *)v6 + 16);
    }
    else
    {
      if ( !v31 && v29 >= v33 + *((_DWORD *)v6 + 16) )
      {
LABEL_56:
        if ( !under_debugger )
          sub_37E160(51696);
        BUG();
      }
      if ( v35 && v33 > 1 )
        sub_103F80((unsigned __int64 **)a2, v11, v35, v33, (__int64 *)(*(_QWORD *)(v27 + 80) + 24LL * a3));
      v9 = 0;
      v11 = -1;
      v8 = nullptr;
      v7 = 0;
      v10 = 0;
    }
LABEL_20:
    if ( (*v6 & 2) == 0 )
    {
      v15 = (unsigned __int64 *)v6[2];
      if ( (*(_BYTE *)v15 & 2) != 0 )
      {
        v21 = (unsigned __int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
        v22 = *v21;
        if ( (*v21 & 2) == 0 )
        {
          while ( (unsigned __int64 *)v21[2] == v6 )
          {
            v6 = v21;
            v23 = v22 & 0xFFFFFFFFFFFFFFFCLL;
            v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v22 & 2) != 0 )
            {
              v6 = (unsigned __int64 *)v23;
              goto LABEL_25;
            }
            v21 = (unsigned __int64 *)v23;
          }
        }
        v6 = v21;
      }
      else
      {
        for ( i = (unsigned __int64 *)v15[1]; (*(_BYTE *)i & 2) == 0; i = (unsigned __int64 *)i[1] )
          v15 = i;
        v6 = v15;
      }
    }
LABEL_25:
    ;
  }
  while ( (unsigned __int64 *)*a2 != v6 );
  v4 = a2;
  if ( v9 && v10 > 1 )
  {
    sub_103F80((unsigned __int64 **)a2, v11, v9, v10, (__int64 *)(*(_QWORD *)(v27 + 80) + 24LL * a3));
    v4 = a2;
  }
  return sub_1003E0(v4, v37);
}
