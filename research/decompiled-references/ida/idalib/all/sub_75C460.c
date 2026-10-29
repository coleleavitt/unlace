__int64 __fastcall sub_75C460(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3, _DWORD *a4, int *a5)
{
  unsigned __int64 v6; // rbx
  int *v8; // rdx
  unsigned int *v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // r15
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  _DWORD *v18; // rax
  int v19; // edx
  unsigned int *v21; // rax
  unsigned int *v22; // rax
  int v23; // eax
  int v24; // eax
  char v25; // [rsp+0h] [rbp-68h]
  unsigned __int64 v26; // [rsp+0h] [rbp-68h]
  unsigned __int64 v27; // [rsp+8h] [rbp-60h]
  unsigned int v28; // [rsp+1Ch] [rbp-4Ch] BYREF
  int v29; // [rsp+20h] [rbp-48h] BYREF
  int v30; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v6 = a3;
  v31 = __readfsqword(0x28u);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( (unsigned __int64)a1 > 0x7F )
  {
    v28 = *a1;
    if ( a5 )
    {
      v25 = 0;
      v30 = *a5;
      goto LABEL_12;
    }
    if ( a3 == a2 )
      goto LABEL_18;
    v10 = *(_QWORD *)(a3 - 8);
    if ( (__int64)(v6 - a2) > 8 && v10 == 38 )
    {
      if ( *(_QWORD *)(v6 - 16) != 38 )
      {
        if ( !(_WORD)v28 )
        {
          if ( a2 < v6 )
          {
            v6 -= 8LL;
            goto LABEL_45;
          }
          goto LABEL_18;
        }
LABEL_28:
        sub_76FD20(&v28, 32);
        goto LABEL_29;
      }
      if ( (unsigned __int8)sub_7734C0() )
      {
        if ( a2 == v6 - 16 )
          goto LABEL_18;
        v10 = *(_QWORD *)(v6 - 24);
        v6 -= 16LL;
      }
      else
      {
        v10 = *(_QWORD *)(v6 - 8);
      }
    }
    if ( v10 <= 0x20 )
    {
      if ( a2 < v6 )
      {
        v6 -= 8LL;
        goto LABEL_27;
      }
      goto LABEL_18;
    }
    if ( !(_WORD)v28 )
    {
      if ( a2 < v6 )
      {
        v6 -= 8LL;
        goto LABEL_36;
      }
      goto LABEL_18;
    }
    goto LABEL_28;
  }
  v8 = *(int **)(*((_QWORD *)&xmmword_2CCCD90 + 1) + 8LL * (unsigned int)a1 + 1024);
  if ( !v8 )
  {
    v22 = *(unsigned int **)(*((_QWORD *)&xmmword_2CCCD90 + 1) + 8LL * (unsigned int)a1);
    if ( v22 )
    {
      v28 = *v22;
      if ( a2 >= v6 )
        goto LABEL_18;
LABEL_35:
      v10 = *(_QWORD *)(v6 - 8);
      v6 -= 8LL;
      goto LABEL_36;
    }
LABEL_29:
    if ( a2 >= v6 )
      goto LABEL_18;
    goto LABEL_35;
  }
  v9 = *(unsigned int **)(*((_QWORD *)&xmmword_2CCCD90 + 1) + 8LL * (unsigned int)a1);
  v29 = *v8;
  v25 = BYTE2(v29) & 1;
  if ( v9 )
    v28 = *v9;
  while ( a2 < v6 )
  {
    v10 = *(_QWORD *)(v6 - 8);
    v11 = v6 - 8;
    if ( v25 )
    {
      if ( v10 <= 0xFF )
      {
        v27 = *(_QWORD *)(v6 - 8);
        v6 -= 8LL;
        sub_76FD20(&v28, 40);
        v24 = sub_7713D0(41, &v29);
        v10 = v27;
        v29 = v24;
LABEL_44:
        if ( (__int64)v10 <= 32 )
        {
LABEL_27:
          sub_76FFF0(&v28);
          v25 = 0;
        }
        else
        {
LABEL_45:
          sub_76FD20(&v28, (unsigned int)(char)v10);
          v25 = 0;
        }
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(v10 + 2) & 1) != 0 )
        goto LABEL_9;
      v26 = *(_QWORD *)(v6 - 8);
      v6 -= 8LL;
      sub_76FD20(&v28, 40);
      v23 = sub_7713D0(41, &v29);
      v10 = v26;
      v29 = v23;
    }
    else
    {
      v6 -= 8LL;
LABEL_36:
      if ( v10 <= 0xFF )
        goto LABEL_44;
    }
    v25 = *(_BYTE *)(v10 + 2) & 1;
    if ( v25 )
    {
      v11 = v6;
LABEL_9:
      v6 = v11;
      v25 = 1;
      v29 = sub_771320(v10, &v29);
      goto LABEL_12;
    }
    if ( (*(_BYTE *)(v10 + 2) & 2) != 0 )
      v28 = sub_771320(v10, &v28);
    else
      sub_770B70(&v28, v10);
LABEL_12:
    v12 = *((_QWORD *)&xmmword_2CCCD90 + 1);
    v13 = (unsigned __int64)&v30;
    v16 = (unsigned int)sub_771320(&v30, &v29);
    v17 = *(unsigned int *)(v12 + 2048);
    if ( (unsigned int)v17 > 0x7F )
      goto LABEL_59;
    if ( (_WORD)v28 )
    {
      v21 = (unsigned int *)sub_76E9D0(&v30, v16);
      v16 = (unsigned int)v16;
      *v21 = v28;
      v13 = *(unsigned int *)(v12 + 2048);
      *(_QWORD *)(v12 + 8 * v13) = v21;
      v19 = v13;
      v18 = nullptr;
      if ( !(_WORD)v16 )
        goto LABEL_17;
    }
    else
    {
      if ( !(_WORD)v16 )
LABEL_59:
        sub_76E6C0(&v30, v16, v14, v15);
      *(_QWORD *)(v12 + 8 * v17) = 0;
    }
    v18 = (_DWORD *)sub_76E9D0(v13, v16);
    *v18 = v16;
    v13 = *(unsigned int *)(v12 + 2048);
    v19 = *(_DWORD *)(v12 + 2048);
LABEL_17:
    *(_QWORD *)(v12 + 8 * v13 + 1024) = v18;
    *(_DWORD *)(v12 + 2048) = v19 + 1;
  }
LABEL_18:
  sub_770B70(&v30, &v29);
  if ( a4 )
    *a4 = v30;
  else
    sub_770B70(&v28, &v30);
  return v28;
}
