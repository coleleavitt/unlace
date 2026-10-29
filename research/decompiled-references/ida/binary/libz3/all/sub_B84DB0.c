__int64 __fastcall sub_B84DB0(__int64 a1, int **a2, __int64 a3, unsigned int a4)
{
  int *v6; // rax
  __int64 v7; // rcx
  int v8; // esi
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  int v11; // eax
  int v13; // r12d
  bool v14; // dl
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // [rsp+0h] [rbp-98h]
  unsigned int v18; // [rsp+8h] [rbp-90h]
  unsigned int v19; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v20; // [rsp+18h] [rbp-80h] BYREF
  int v21[8]; // [rsp+20h] [rbp-78h] BYREF
  int v22[22]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 1000);
  if ( !*a2 || (v8 = *(v6 - 1)) == 0 )
  {
    if ( v7 )
    {
      v9 = -2;
      v10 = -2;
      v18 = *(_DWORD *)(v7 - 4);
      v11 = -1;
    }
    else
    {
      v18 = 0;
      v11 = -1;
      v9 = -2;
      v10 = -2;
    }
    goto LABEL_5;
  }
  v13 = *v6;
  v14 = (v6[3] & 1) == 0;
  if ( (v6[3] & 1) != 0 )
    goto LABEL_17;
  if ( v6[2] == 1 )
  {
    v14 = (v6[7] & 1) == 0;
    if ( (v6[7] & 1) == 0 )
    {
      v14 = v6[6] == 1;
      v9 = 2 * v13;
      if ( v8 == 1 )
      {
        if ( v7 )
          v18 = *(_DWORD *)(v7 - 4);
        else
          v18 = 0;
        if ( v6[6] == 1 )
        {
          v20 = a4 | 0x200000000LL;
          sub_3EBD70((__int64)v21, a3);
          sub_3EBB80((__int64)v22, (__int64)v21, a3);
          sub_B84960(a1 + 960, v9 | 1, v9, v22, &v20);
          sub_25A130((char *)v22);
          sub_25A130((char *)v21);
          v20 = a4 | 0x200000000LL;
          sub_3EBD70((__int64)v21, a3);
          sub_3EBB80((__int64)v22, (__int64)v21, a3);
          sub_B84960(a1 + 960, v9 | 1, v9, v22, &v20);
LABEL_38:
          sub_25A130((char *)v22);
          sub_25A130((char *)v21);
          return v18;
        }
LABEL_37:
        v20 = a4 | 0x200000000LL;
        sub_3EBD70((__int64)v21, a3);
        sub_3EBB80((__int64)v22, (__int64)v21, a3);
        sub_B84960(a1 + 960, v9, v9 | 1, v22, &v20);
        sub_25A130((char *)v22);
        sub_25A130((char *)v21);
        v20 = a4 | 0x200000000LL;
        sub_3EBD70((__int64)v21, a3);
        sub_3EBB80((__int64)v22, (__int64)v21, a3);
        sub_B84960(a1 + 960, v9, v9 | 1, v22, &v20);
        goto LABEL_38;
      }
      goto LABEL_18;
    }
LABEL_17:
    v9 = 2 * v13;
    if ( v8 == 1 )
    {
LABEL_35:
      if ( v7 )
        v18 = *(_DWORD *)(v7 - 4);
      else
        v18 = 0;
      goto LABEL_37;
    }
LABEL_18:
    v10 = 2 * v6[10];
    if ( (v6[13] & 1) != 0 )
      goto LABEL_12;
    goto LABEL_19;
  }
  v9 = 2 * v13;
  if ( v8 == 1 )
    goto LABEL_35;
  v14 = 0;
  v10 = 2 * v6[10];
  if ( (v6[13] & 1) != 0 )
    goto LABEL_12;
LABEL_19:
  if ( v6[12] != 1 || (v6[17] & 1) != 0 || v6[16] != 1 )
  {
LABEL_12:
    if ( v7 )
      v15 = *(_DWORD *)(v7 - 4);
    else
      v15 = 0;
    v18 = v15;
    v17 = a1 + 960;
    v21[0] = a4;
    v21[1] = 1;
    if ( v14 )
    {
      sub_3EBD70((__int64)v22, a3);
      sub_B84960(v17, v10, v9, v22, (unsigned __int64 *)v21);
      sub_25A130((char *)v22);
      v21[0] = a4;
      v21[1] = 1;
      sub_3EBD70((__int64)v22, a3);
      sub_B84960(v17, v9 | 1, v10 | 1, v22, (unsigned __int64 *)v21);
    }
    else
    {
      sub_3EBD70((__int64)v22, a3);
      sub_B84960(v17, v9, v10 | 1, v22, (unsigned __int64 *)v21);
      sub_25A130((char *)v22);
      v21[0] = a4;
      v21[1] = 1;
      sub_3EBD70((__int64)v22, a3);
      sub_B84960(v17, v10, v9 | 1, v22, (unsigned __int64 *)v21);
    }
    goto LABEL_6;
  }
  if ( v7 )
    v16 = *(_DWORD *)(v7 - 4);
  else
    v16 = 0;
  v18 = v16;
  v11 = v10 | 1;
  if ( !v14 )
  {
    v21[0] = a4;
    v21[1] = 1;
    sub_3EBD70((__int64)v22, a3);
    sub_B84960(a1 + 960, v10 | 1, v9 | 1, v22, (unsigned __int64 *)v21);
    sub_25A130((char *)v22);
    v21[0] = a4;
    v21[1] = 1;
    sub_3EBD70((__int64)v22, a3);
    sub_B84960(a1 + 960, v9, v10, v22, (unsigned __int64 *)v21);
    goto LABEL_6;
  }
LABEL_5:
  v19 = v11;
  v21[0] = a4;
  v21[1] = 1;
  sub_3EBD70((__int64)v22, a3);
  sub_B84960(a1 + 960, v19, v9, v22, (unsigned __int64 *)v21);
  sub_25A130((char *)v22);
  v21[0] = a4;
  v21[1] = 1;
  sub_3EBD70((__int64)v22, a3);
  sub_B84960(a1 + 960, v9 | 1, v10, v22, (unsigned __int64 *)v21);
LABEL_6:
  sub_25A130((char *)v22);
  return v18;
}

