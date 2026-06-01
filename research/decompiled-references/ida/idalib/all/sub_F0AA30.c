void __fastcall sub_F0AA30(__int64 *a1, __int64 a2, double a3)
{
  char **v4; // r13
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  _BYTE *v13; // rax
  __int64 v14; // r12
  char **v15; // rbx
  char *v16; // rsi
  __int64 *v17; // rdi
  __int64 v18; // rdi
  _BYTE *v19; // rax
  __int64 v20; // [rsp+8h] [rbp-70h] BYREF
  _BYTE v21[32]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v22; // [rsp+30h] [rbp-48h]

  v4 = (char **)(a2 + 32);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *a1;
  v20 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v22 = 257;
  sub_F74830(&v20, v7, a1 + 3, v21, 0);
  if ( (*(_BYTE *)(a2 + 16) & 4) != 0 )
  {
    v14 = a2 + 8LL * *(unsigned int *)(a2 + 4) + 32;
    if ( (char **)v14 == v4 )
      return;
    goto LABEL_5;
  }
  v12 = *a1;
  v13 = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)v13 >= *(_QWORD *)(*a1 + 24) )
  {
    sub_227BA10(v12, 40);
  }
  else
  {
    v8 = (__int64)(v13 + 1);
    *(_QWORD *)(v12 + 32) = v13 + 1;
    *v13 = 40;
  }
  v14 = a2 + 8LL * *(unsigned int *)(a2 + 4) + 32;
  if ( (char **)v14 != v4 )
  {
LABEL_5:
    v15 = v4;
LABEL_6:
    v16 = *v15;
    v17 = a1;
    if ( *v15 )
    {
LABEL_7:
      sub_F05430(v17, v16, v8, v9, v10, v11, a3);
      if ( ++v15 != (char **)v14 )
        goto LABEL_8;
    }
    else
    {
      while ( 1 )
      {
        sub_F049C0(v17);
        if ( ++v15 == (char **)v14 )
          break;
LABEL_8:
        if ( v15 == v4 )
          goto LABEL_6;
        sub_995540(*a1, ", ");
        v16 = *v15;
        v17 = a1;
        if ( *v15 )
          goto LABEL_7;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 16) & 4) == 0 )
  {
    v18 = *a1;
    v19 = *(_BYTE **)(*a1 + 32);
    if ( (unsigned __int64)v19 >= *(_QWORD *)(*a1 + 24) )
    {
      sub_227BA10(v18, 41);
    }
    else
    {
      *(_QWORD *)(v18 + 32) = v19 + 1;
      *v19 = 41;
    }
  }
}
