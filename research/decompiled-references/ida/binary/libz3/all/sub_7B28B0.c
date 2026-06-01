__int64 __fastcall sub_7B28B0(_QWORD *a1, double a2)
{
  __int64 v3; // rdi
  char v4; // r12
  _QWORD *v5; // rdi
  __int64 (*v6)(void); // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  _DWORD *v9; // r14
  unsigned int v10; // r15d
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // [rsp+Ch] [rbp-4Ch]
  __int64 v21; // [rsp+10h] [rbp-48h]
  _BYTE v22[64]; // [rsp+18h] [rbp-40h] BYREF

  v21 = a1[3] + 3904LL;
  sub_17F9A60(v22, "sat");
  v3 = a1[3];
  if ( *(_BYTE *)(v3 + 289) )
  {
    v12 = sub_1859630(v21, "override_incremental", v22, 0);
    v3 = a1[3];
    if ( !v12 )
    {
      sub_11B5060(v3);
      sub_18572D0(v22);
      goto LABEL_5;
    }
  }
  v4 = sub_11B5060(v3);
  sub_18572D0(v22);
  if ( v4 )
  {
LABEL_5:
    v20 = 0;
    goto LABEL_6;
  }
  v5 = (_QWORD *)a1[3];
  v6 = *(__int64 (**)(void))(*v5 + 88LL);
  if ( (char *)v6 == (char *)sub_782AB0 )
  {
    if ( a1 != (_QWORD *)v5[66] )
      goto LABEL_5;
  }
  else if ( a1 != (_QWORD *)v6() )
  {
    goto LABEL_5;
  }
  v13 = a1[3];
  v14 = *(_QWORD *)(v13 + 3296);
  if ( !v14 )
    goto LABEL_5;
  v20 = 0;
  v15 = 0;
  do
  {
    if ( v15 >= *(_DWORD *)(v14 - 4) )
      break;
    if ( *(_BYTE *)(*(_QWORD *)(v13 + 3336) + v15) )
    {
      v16 = a1[117];
      v17 = 2 * v15;
      v18 = *(_QWORD *)(v16 + 8 * v17);
      if ( !v18 || !*(_DWORD *)(v18 - 4) )
      {
        v19 = *(_QWORD *)(v16 + 8LL * ((unsigned int)v17 | 1));
        if ( !v19 || !*(_DWORD *)(v19 - 4) )
        {
          sub_11B3D30(v13, v15);
          ++v20;
          v13 = a1[3];
        }
      }
    }
    v14 = *(_QWORD *)(v13 + 3296);
    ++v15;
  }
  while ( v14 );
LABEL_6:
  v7 = a1[94];
  if ( v7 )
  {
    v8 = v7 + 8LL * *(unsigned int *)(v7 - 4);
    while ( v8 != v7 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD **)v7;
        if ( !*(_BYTE *)(*(_QWORD *)v7 + 12LL) )
        {
          if ( v9[8] )
            break;
        }
LABEL_9:
        v7 += 8;
        if ( v8 == v7 )
          return v20;
      }
      v10 = 0;
      while ( !*(_BYTE *)(*(_QWORD *)(a1[3] + 3328LL)
                        + ((*(unsigned int (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v9 + 88LL))(v9, v10) >> 1)) )
      {
        if ( ++v10 >= v9[8] )
          goto LABEL_9;
      }
      v7 += 8;
      sub_7AFFA0((__int64)a1, v9, "contains eliminated var", a2);
    }
  }
  return v20;
}

