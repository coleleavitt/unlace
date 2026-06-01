__int64 __fastcall sub_9CBBF0(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // r14
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  void *v9; // rbp
  int v11; // edx
  _DWORD *v12; // rax
  unsigned int v13; // eax
  int v14; // r14d
  __int64 v15; // [rsp+8h] [rbp-70h]
  char v16; // [rsp+1Dh] [rbp-5Bh] BYREF
  char v17; // [rsp+1Eh] [rbp-5Ah] BYREF
  char v18; // [rsp+1Fh] [rbp-59h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v20[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = a1 + 344;
  v19[0] = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  v5 = sub_1666AE0(a1 + 344, a2, v19, &v16);
  if ( (_BYTE)v5 )
    goto LABEL_9;
  if ( *((_WORD *)a2 + 2) )
    goto LABEL_10;
  v6 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !v6 )
    goto LABEL_6;
  if ( *v6 != 5 )
    goto LABEL_5;
  v11 = v6[1];
  if ( v11 == 6 )
  {
    if ( a2[6] )
    {
      v14 = 0;
      while ( (unsigned __int8)sub_9CBBF0(a1, *(_QWORD *)&a2[2 * v14 + 8], a3) )
      {
        if ( ++v14 >= a2[6] )
          goto LABEL_9;
      }
      goto LABEL_10;
    }
LABEL_9:
    v5 = 1;
    goto LABEL_10;
  }
  if ( v11 == 18 || v11 == 19 )
  {
    if ( a2[6] == 1 )
    {
      v5 = sub_9CBBF0(a1, *((_QWORD *)a2 + 4), a3);
      goto LABEL_10;
    }
    goto LABEL_16;
  }
  if ( v11 != 9 || a2[6] != 2 )
    goto LABEL_16;
  v15 = *((_QWORD *)a2 + 5);
  if ( (unsigned __int8)sub_1666AE0(v3, *((_QWORD *)a2 + 4), v19, &v17) )
    goto LABEL_29;
  if ( *((_WORD *)a2 + 2) )
    goto LABEL_10;
  v6 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( !v6 )
    goto LABEL_6;
LABEL_5:
  if ( *v6 != 5 )
    goto LABEL_6;
LABEL_16:
  if ( v6[1] == 9 && a2[6] == 2 )
  {
    v15 = *((_QWORD *)a2 + 4);
    if ( !(unsigned __int8)sub_1666AE0(v3, *((_QWORD *)a2 + 5), v19, &v18) )
    {
      if ( *((_WORD *)a2 + 2) )
        goto LABEL_10;
      v12 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v12 )
      {
        if ( *v12 == 5 )
          goto LABEL_10;
      }
LABEL_6:
      v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *a2);
      v8 = sub_B39350(v7, *(unsigned int *)(a1 + 8));
      if ( v8 != -1 && v7 == *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * v8) )
      {
        v13 = sub_B39350(v7, *(unsigned int *)(a1 + 8));
        sub_506520(a3, v13);
      }
      goto LABEL_9;
    }
LABEL_29:
    v5 = sub_9CBBF0(a1, v15, a3);
  }
LABEL_10:
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v19);
  sub_182CBA0(v9, v20);
  return v5;
}

