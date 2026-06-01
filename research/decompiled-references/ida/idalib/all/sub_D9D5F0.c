__int64 __fastcall sub_D9D5F0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v6; // r14
  _QWORD *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ecx
  bool v12; // r15
  __int64 v13; // rdx
  unsigned __int8 v14; // si
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-80h] BYREF
  _QWORD *v22; // [rsp+10h] [rbp-78h] BYREF
  __int64 *v23; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v24[3]; // [rsp+20h] [rbp-68h] BYREF
  int v25; // [rsp+38h] [rbp-50h]
  _QWORD *v26; // [rsp+40h] [rbp-48h]
  __int64 v27; // [rsp+48h] [rbp-40h]

  v21 = a2;
  v4 = sub_E21C70(a1);
  if ( (_BYTE)v4 )
  {
    v6 = a1[22];
    sub_E21760(v6, 48);
    sub_E23260(v24);
    sub_E21790(v6, 48);
    v22 = a1;
    v23 = &v21;
    if ( !v25 )
    {
      v7 = v26;
      if ( v26 )
      {
        v8 = sub_CFDF60((__int64)v24);
        v10 = v7[4];
        v11 = *(_DWORD *)(v8 + 20);
        if ( v11 == -1 )
        {
          v13 = (unsigned int)v27;
        }
        else
        {
          if ( v24[0] > (unsigned __int64)*(unsigned int *)(v10 + 28) )
          {
LABEL_7:
            v4 = sub_D9D4B0((__int64 *)&v22, &v23, 1);
            goto LABEL_16;
          }
          v13 = (unsigned int)v27;
          if ( (_DWORD)v27 == -1 )
          {
            if ( v11 == LODWORD(v24[0]) && v11 )
              goto LABEL_7;
            goto LABEL_25;
          }
          v9 = 0;
          if ( v24[0] != (unsigned int)v27 )
            v9 = *(_QWORD *)(v8 + 40) == 0 ? 32 : 16;
          if ( LODWORD(v24[0]) - (_DWORD)v27 - (_DWORD)v9 == v11 && v11 )
            goto LABEL_7;
        }
        v12 = v4;
        if ( (unsigned int)v13 <= 0xF )
        {
LABEL_26:
          v14 = *(_DWORD *)(v10 + 24) == (_DWORD)v13 || (_DWORD)v13 == 0;
          if ( !v14 && (*((_BYTE *)v7 + v13 + 28) & 0x10) == 0 )
          {
LABEL_28:
            v15 = (_QWORD *)a1[50];
            if ( v15 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  v16 = v15[4];
                  if ( v16 )
                  {
                    if ( *(_DWORD *)(v16 + 8) == 1 )
                      break;
                  }
                  v15 = (_QWORD *)v15[1];
                  if ( !v15 )
                    goto LABEL_35;
                }
                if ( v26 == (_QWORD *)v15[9] )
                  break;
                v15 = (_QWORD *)v15[1];
                if ( !v15 )
                  goto LABEL_35;
              }
            }
            else
            {
LABEL_35:
              v17 = a1[52];
              if ( !v17 )
                goto LABEL_44;
              if ( v25 == 1 )
              {
                v18 = v26;
              }
              else
              {
                if ( (unsigned int)(v25 - 2) <= 1 )
                  BUG();
                v18 = (__int64 *)v26[4];
              }
              v19 = *v18;
              if ( (v19 & 2) != 0
                || (v20 = v19 & 0xFFFFFFFFFFFFFFFCLL) == 0
                || (*(_BYTE *)(v20 + 28) & 0x7Fu) - 40 > 6
                || v17 != v20 )
              {
LABEL_44:
                sub_D904E0(a1, v14, *(_QWORD *)(a3 + 8), v17, v9);
                goto LABEL_16;
              }
            }
            v4 = sub_D9D4B0((__int64 *)&v22, &v23, 2);
LABEL_16:
            sub_E232A0(v24);
            return v4;
          }
LABEL_12:
          if ( !(unsigned __int8)sub_DC83C0(a1, v21, v24, 0)
            || !(unsigned __int8)sub_DC9A20(a1, v21, v24)
            || !(unsigned __int8)sub_DCBE90(a1, v21, v24, 0) )
          {
            v4 = 0;
            goto LABEL_16;
          }
          v14 = v12;
          goto LABEL_28;
        }
LABEL_25:
        v12 = *((_BYTE *)v7 + (unsigned int)v13 + 30) != 1;
        goto LABEL_26;
      }
LABEL_15:
      v4 = sub_D9D4B0((__int64 *)&v22, &v23, 0);
      goto LABEL_16;
    }
    if ( v25 == 2 )
    {
      if ( !v26 )
        goto LABEL_15;
    }
    else if ( v25 != 3 && !(v27 | v24[0]) )
    {
      goto LABEL_15;
    }
    v12 = v4;
    goto LABEL_12;
  }
  return v4;
}
