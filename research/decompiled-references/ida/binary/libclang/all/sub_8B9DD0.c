char __fastcall sub_8B9DD0(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r13
  unsigned __int64 v3; // r14
  _WORD *v4; // rax
  unsigned __int16 v5; // dx
  __int64 v6; // r12
  char *v7; // rdx
  __int64 v8; // rax
  char v9; // r13
  int v10; // r15d
  __int64 v11; // rdx
  char v12; // r14
  __int64 v13; // rax
  int v14; // edx
  char result; // al
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned int v21; // edx
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // dl
  char v25; // [rsp+Fh] [rbp-49h]
  char v26; // [rsp+Fh] [rbp-49h]
  _BYTE v27[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v2 = a2[3];
  v3 = v2;
  v4 = (_WORD *)sub_8116F0(v2);
  v5 = *v4 & 0x1FF;
  if ( v5 <= 0x59u || v5 > 0x5Eu )
  {
    v6 = *a1;
    v7 = *(char **)(*a1 + 24);
    v8 = *((_QWORD *)v7 + 1);
    if ( v8 )
    {
      if ( !*(_DWORD *)(v8 + 8) )
      {
LABEL_5:
        v9 = *v7;
        v10 = *(_DWORD *)(v6 + 964);
        v11 = v6;
        v25 = v9 ^ 1;
        v2 = v3;
        v12 = 0;
        goto LABEL_6;
      }
      goto LABEL_16;
    }
    v10 = *(_DWORD *)(v6 + 964);
    v11 = *a1;
    v12 = 0;
    v25 = 0;
    goto LABEL_6;
  }
  v16 = sub_80FBD0((__int64)v4);
  v6 = *a1;
  if ( v16 != 212 )
  {
    v7 = *(char **)(v6 + 24);
    v17 = *((_QWORD *)v7 + 1);
    if ( v17 )
    {
      v3 = a2[3];
      if ( !*(_DWORD *)(v17 + 8) )
        goto LABEL_5;
LABEL_16:
      v2 = v3;
      v25 = 0;
      v11 = v6;
      v12 = 0;
      v10 = *(_DWORD *)(v6 + 964);
      goto LABEL_6;
    }
    v25 = 0;
    v2 = a2[3];
    v11 = *a1;
    v12 = 0;
    v10 = *(_DWORD *)(v6 + 964);
LABEL_6:
    if ( (unsigned __int8)sub_8571E0(v2, v27, v11) )
    {
      if ( v27[0] )
        v18 = a2[4];
      else
        v18 = a2[5];
      result = sub_89CD60(a1, v18);
      if ( result )
      {
        if ( v12 )
        {
          if ( v25 )
          {
            v19 = *(_QWORD *)(v6 + 24);
            v20 = *(_QWORD *)(v19 + 8);
            v21 = *(_DWORD *)(v20 + 8);
            if ( v21 )
            {
              if ( !*(_BYTE *)v19 )
              {
                v26 = result;
                sub_8481D0(*(_QWORD *)v20, *(_QWORD *)v20 + 32LL * v21);
                *(_DWORD *)(v20 + 8) = 0;
                result = v26;
              }
            }
          }
        }
        goto LABEL_11;
      }
    }
    else
    {
      v13 = *a1;
      v14 = *(_DWORD *)(*a1 + 48);
      if ( *(_BYTE *)(*a1 + 962) )
      {
        if ( v14 )
        {
          **(_BYTE **)(v13 + 24) = 1;
          sub_8B9890(a1, (__int64)a2);
        }
      }
      else if ( v14 )
      {
        v24 = *(_BYTE *)(v13 + 963);
        **(_BYTE **)(v13 + 24) |= v24;
        if ( v24 )
        {
          sub_89CD60(a1, a2[4]);
          sub_89CD60(a1, a2[5]);
        }
      }
    }
    result = 0;
LABEL_11:
    *(_DWORD *)(v6 + 964) = v10;
    return result;
  }
  result = 0;
  v25 = *(_BYTE *)(v6 + 962);
  if ( !v25 )
  {
    v22 = *(_QWORD *)(v6 + 24);
    v10 = *(_DWORD *)(v6 + 964);
    v23 = *(_QWORD *)(v22 + 8);
    if ( v23 && !*(_DWORD *)(v23 + 8) )
      v25 = *(_BYTE *)v22 ^ 1;
    *(_DWORD *)(v6 + 964) = 2;
    v12 = 1;
    v11 = *a1;
    v2 = a2[3];
    goto LABEL_6;
  }
  return result;
}

