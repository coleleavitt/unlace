void __fastcall sub_12DC440(_QWORD *a1)
{
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v4; // rdi
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rdi
  volatile signed __int32 *v8; // rdi
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  volatile signed __int32 *v12; // rbp
  volatile signed __int32 *v13; // rbp
  volatile signed __int32 *v14; // rdi
  int v15; // eax
  int v16; // eax
  signed __int32 v17; // eax
  int v18; // eax
  int v19; // eax
  signed __int32 v20; // eax

  v2 = (volatile signed __int32 *)a1[27];
  if ( v2 )
    sub_4343A0(v2);
  v3 = (volatile signed __int32 *)a1[25];
  if ( v3 )
    sub_4343A0(v3);
  v4 = (volatile signed __int32 *)a1[23];
  if ( v4 )
    sub_4343A0(v4);
  v5 = (volatile signed __int32 *)a1[21];
  if ( v5 )
    sub_4343A0(v5);
  v6 = (volatile signed __int32 *)a1[19];
  if ( v6 )
    sub_4343A0(v6);
  v7 = (volatile signed __int32 *)a1[17];
  if ( v7 )
    sub_4343A0(v7);
  v8 = (volatile signed __int32 *)a1[15];
  if ( v8 )
    sub_4343A0(v8);
  v9 = (volatile signed __int32 *)a1[13];
  if ( v9 )
    sub_4343A0(v9);
  v10 = (volatile signed __int32 *)a1[11];
  if ( v10 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) != 1 )
        goto LABEL_20;
    }
    else
    {
      v15 = *((_DWORD *)v10 + 2);
      *((_DWORD *)v10 + 2) = v15 - 1;
      if ( v15 != 1 )
        goto LABEL_20;
    }
    sub_12DB0B0(v10);
  }
LABEL_20:
  v11 = (volatile signed __int32 *)a1[9];
  if ( !v11 )
    goto LABEL_23;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_23;
  }
  else
  {
    v18 = *((_DWORD *)v11 + 2);
    *((_DWORD *)v11 + 2) = v18 - 1;
    if ( v18 != 1 )
      goto LABEL_23;
  }
  sub_12DB0B0(v11);
LABEL_23:
  v12 = (volatile signed __int32 *)a1[7];
  if ( !v12 )
    goto LABEL_26;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_26;
  }
  else
  {
    v16 = *((_DWORD *)v12 + 2);
    *((_DWORD *)v12 + 2) = v16 - 1;
    if ( v16 != 1 )
      goto LABEL_26;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( &_pthread_key_create )
  {
    v17 = _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF);
  }
  else
  {
    v17 = *((_DWORD *)v12 + 3);
    *((_DWORD *)v12 + 3) = v17 - 1;
  }
  if ( v17 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
LABEL_26:
  v13 = (volatile signed __int32 *)a1[5];
  if ( !v13 )
    goto LABEL_29;
  if ( &_pthread_key_create )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_29;
  }
  else
  {
    v19 = *((_DWORD *)v13 + 2);
    *((_DWORD *)v13 + 2) = v19 - 1;
    if ( v19 != 1 )
      goto LABEL_29;
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( &_pthread_key_create )
  {
    v20 = _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF);
  }
  else
  {
    v20 = *((_DWORD *)v13 + 3);
    *((_DWORD *)v13 + 3) = v20 - 1;
  }
  if ( v20 == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 24LL))(v13);
LABEL_29:
  v14 = (volatile signed __int32 *)a1[3];
  if ( v14 )
    sub_4343A0(v14);
}
