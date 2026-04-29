__int64 __fastcall sub_119F10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // r13
  char v7; // cl
  __int64 v9; // r14
  __int64 v10; // r8
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r15
  __int64 v14; // r9
  int *v15; // rdi
  int v16; // ecx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  int *v20; // r14
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // [rsp+0h] [rbp-70h]
  __int64 v38; // [rsp+0h] [rbp-70h]
  __int64 v40; // [rsp+18h] [rbp-58h] BYREF
  __int64 v41; // [rsp+20h] [rbp-50h] BYREF
  __int64 v42; // [rsp+28h] [rbp-48h]
  unsigned __int64 v43; // [rsp+38h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  if ( !a1 )
    return 0;
  v4 = *(_QWORD *)(a1 + 480);
  v5 = *(_BYTE *)(a3 + 32);
  v6 = *(_QWORD *)(v4 + 112);
  if ( v5 == 4 )
  {
    v9 = *(_QWORD *)(a3 + 40);
    v10 = v9;
    if ( *(_DWORD *)v9 == 21 )
    {
      v37 = (_DWORD *)(a3 + 48);
    }
    else
    {
      if ( *(_DWORD *)v9 != 9 )
        goto LABEL_30;
      if ( *(_BYTE *)(a3 + 48) != 4 )
        goto LABEL_12;
      v15 = *(int **)(a3 + 56);
      v16 = *v15;
      if ( *v15 != 9 )
        goto LABEL_22;
      if ( *(_BYTE *)(v9 + 32) != 4 )
        goto LABEL_24;
      v9 = *(_QWORD *)(v9 + 40);
      if ( *(_DWORD *)v9 != 21 )
        goto LABEL_24;
      v37 = v15 + 8;
    }
    goto LABEL_26;
  }
  v7 = *(_BYTE *)(a3 + 48);
  if ( v5 == 14 && v7 == 14 )
  {
    if ( !(unsigned __int8)sub_125B60(*(_QWORD *)(a3 + 56), *(_QWORD *)(a3 + 56) + 16LL, 0) )
      goto LABEL_29;
    v18 = *(_QWORD *)(a3 + 40);
    if ( *(_BYTE *)v18 != 4
      || **(_DWORD **)(v18 + 8) != 21
      || !(unsigned __int8)sub_125B60(v18 + 16, *(_QWORD *)(a3 + 56), 0) )
    {
      goto LABEL_29;
    }
    v37 = *(_DWORD **)(a3 + 56);
    v9 = *(_QWORD *)(*(_QWORD *)(a3 + 40) + 8LL);
LABEL_26:
    v17 = v9 + 48;
    if ( (unsigned __int8)sub_125B60(v9 + 48, v37, 0) )
    {
      v17 = v9 + 32;
    }
    else if ( !(unsigned __int8)sub_125B60(v9 + 32, v37, 0) )
    {
      goto LABEL_29;
    }
    if ( *(_BYTE *)v17 == 4 )
    {
      v20 = *(int **)(v17 + 8);
      v40 = a2;
      v21 = sub_30D610(v6, a1, &v40);
      if ( v21 )
      {
        v22 = *v20;
        if ( *v20 == 10 )
        {
          if ( *((_BYTE *)v20 + 32) == 4 )
          {
            v32 = *((_QWORD *)v20 + 5);
            if ( *(_BYTE *)(v32 + 64) == 8 )
            {
              v33 = *(_QWORD *)(v32 + 72);
              if ( *(_DWORD *)(v33 + 284) == 31 )
              {
                v25 = *(_QWORD *)(v33 + 24);
                v24 = 0;
                v41 = v25;
                goto LABEL_59;
              }
            }
          }
        }
        else if ( v22 == 20 || v22 == 9 && *((_BYTE *)v20 + 32) == 4 && (v20 = *((int **)v20 + 5), *v20 == 20) )
        {
          v23 = sub_11C8A0(v20, &v41);
          if ( v23 )
          {
            v24 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL), *(unsigned int *)(v23 + 4), 0);
            if ( (v24 & (v24 + 1)) == 0 )
            {
              v25 = v41;
              if ( *(_BYTE *)v41 == 4 )
              {
                v26 = *(_QWORD *)(v41 + 8);
                if ( *(_BYTE *)(v26 + 64) == 8 )
                {
                  v34 = *(_QWORD *)(v26 + 72);
                  if ( *(_DWORD *)(v34 + 284) == 31 )
                  {
                    v25 = *(_QWORD *)(v34 + 24);
                    v41 = v25;
                    goto LABEL_59;
                  }
                }
                if ( *(_DWORD *)v26 == 10 && *(_BYTE *)(v26 + 32) == 4 )
                {
                  v35 = *(_QWORD *)(v26 + 40);
                  if ( *(_BYTE *)(v35 + 64) == 8 )
                  {
                    v36 = *(_QWORD *)(v35 + 72);
                    if ( *(_DWORD *)(v36 + 284) == 31 )
                    {
                      v25 = *(_QWORD *)(v36 + 24);
                      v41 = v25;
                      goto LABEL_59;
                    }
                  }
                }
              }
              if ( v24 == 1 )
              {
LABEL_59:
                if ( *(_DWORD *)(v21 + 4) <= *(_DWORD *)(v25 + 4) )
                {
                  v38 = v24;
                  if ( (unsigned __int8)sub_152650(v25, v6, v21) )
                  {
                    v27 = v41;
                    if ( *v20 == 20 )
                    {
                      sub_118F20(v6, a3, v41, v38 + 1);
                    }
                    else
                    {
                      *(_DWORD *)a3 = 10;
                      sub_11CA10(a3 + 32, v27);
                      sub_11CDA0(a3 + 48);
                    }
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_29:
    v4 = *(_QWORD *)(a1 + 480);
    v6 = *(_QWORD *)(v4 + 112);
LABEL_30:
    if ( *(_BYTE *)(a3 + 48) != 4 )
      goto LABEL_6;
    goto LABEL_21;
  }
  if ( v7 == 4 )
  {
LABEL_21:
    v15 = *(int **)(a3 + 56);
    v16 = *v15;
LABEL_22:
    if ( v16 == 20 )
    {
      if ( v15 )
      {
        v28 = sub_11C8A0(v15, &v40);
        if ( v28 )
        {
          if ( *(_BYTE *)v40 == 4 )
          {
            v30 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v28 + 8) + 16LL), *(unsigned int *)(v28 + 4), 1);
            v13 = -v30;
            if ( (-v30 & ~v30) == 0 )
            {
              v42 = 0;
              v41 = 0xFFFFFFFF00000000LL;
              v31 = sub_119990(v6, (__int64)&v41, a1, a2, *(int **)(v40 + 8), ~v30);
              if ( v31 && (unsigned __int8)sub_12EA80(v6, a1, a2, (int)a3 + 32, a2, v31, 0) )
                goto LABEL_19;
              sub_11CDA0(&v41);
            }
          }
        }
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 112);
      }
      goto LABEL_6;
    }
    v5 = *(_BYTE *)(a3 + 32);
LABEL_24:
    v6 = *(_QWORD *)(v4 + 112);
    goto LABEL_7;
  }
LABEL_6:
  v5 = *(_BYTE *)(a3 + 32);
LABEL_7:
  if ( v5 != 4 )
    return 0;
  v10 = *(_QWORD *)(a3 + 40);
LABEL_12:
  v11 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 == 9 )
  {
    if ( *(_BYTE *)(v10 + 32) != 4 )
      return 0;
    if ( **(_DWORD **)(v10 + 40) != 20 )
    {
LABEL_46:
      v10 = *(_QWORD *)(v10 + 40);
      v11 = *(_DWORD *)v10;
      goto LABEL_14;
    }
    v10 = *(_QWORD *)(v10 + 40);
  }
  else if ( v11 != 20 )
  {
LABEL_14:
    if ( v11 != 12 )
      return 0;
    v12 = 8 * *(_DWORD *)(v10 + 68);
    if ( (unsigned __int64)v12 > 0x3F )
    {
      v14 = -1;
      v13 = 0;
    }
    else
    {
      v13 = 1LL << v12;
      v14 = (1LL << v12) - 1;
    }
    v42 = 0;
    v41 = 0xFFFFFFFF00000000LL;
    if ( !sub_119990(v6, (__int64)&v41, a1, a2, (int *)v10, v14)
      || !(unsigned __int8)sub_119140(0, a1, a2, a3 + 48, (__int64)&v41, v13) )
    {
      sub_11CDA0(&v41);
      return 0;
    }
    goto LABEL_19;
  }
  v19 = sub_11C8A0(v10, &v40);
  if ( !v19
    || *(_BYTE *)v40 != 4
    || (v29 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL), *(unsigned int *)(v19 + 4), 0),
        v13 = v29 + 1,
        (v29 & (v29 + 1)) != 0) )
  {
LABEL_43:
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    if ( *(_BYTE *)(a3 + 32) != 4 )
      return 0;
    v10 = *(_QWORD *)(a3 + 40);
    v11 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 != 9 )
      goto LABEL_14;
    if ( *(_BYTE *)(v10 + 32) != 4 )
      return 0;
    goto LABEL_46;
  }
  v42 = 0;
  v41 = 0xFFFFFFFF00000000LL;
  if ( !sub_119990(v6, (__int64)&v41, a1, a2, *(int **)(v40 + 8), v29)
    || !(unsigned __int8)sub_119140(0, a1, a2, a3 + 48, (__int64)&v41, v13) )
  {
    sub_11CDA0(&v41);
    goto LABEL_43;
  }
LABEL_19:
  sub_118F20(v6, a3, (__int64)&v41, v13);
  sub_11CDA0(&v41);
  return 1;
}
