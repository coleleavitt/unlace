__int64 __fastcall sub_13D7240(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v11; // r13d
  unsigned __int8 *v12; // rdx
  unsigned __int8 *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  _BYTE *v16; // rsi
  int v17; // edx
  __int64 v18; // rdi
  unsigned __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // r9
  __int64 (__fastcall **v24)(); // rax
  int v25; // edx
  int v26; // ecx
  __int64 v27; // rdx
  char v28; // [rsp+Fh] [rbp-59h] BYREF
  _DWORD v29[6]; // [rsp+10h] [rbp-58h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+28h] [rbp-40h]
  int v31; // [rsp+30h] [rbp-38h]
  unsigned __int64 v32; // [rsp+34h] [rbp-34h] BYREF
  int v33; // [rsp+3Ch] [rbp-2Ch]

  v4 = a3;
  v8 = *a2;
  *(_QWORD *)v29 = *a2 + v4;
  v9 = sub_13D70D0((_QWORD *)a1, (unsigned __int8 **)v29, v8, 0);
  if ( !v9 )
    return 0;
  v11 = v9;
  v28 = 0;
  if ( sub_13D34C0(v9, *(_BYTE **)(a1 + 136), &v28) )
  {
    v12 = *(unsigned __int8 **)v29;
    v13 = (unsigned __int8 *)*a2;
    if ( !*(_BYTE *)(a1 + 26) )
    {
      if ( v28 )
      {
        v24 = (__int64 (__fastcall **)())sub_13D08D0(a1, (int)v13, v29[0]);
        v31 = v25;
        v26 = v25;
        v27 = *(_QWORD *)(a1 + 8);
        v30 = v24;
        sub_13D0970(*(_QWORD *)(v27 + 48), v11, v24, v26);
        LODWORD(v12) = v29[0];
        v13 = (unsigned __int8 *)*a2;
      }
      v19 = sub_13D08D0(a1, (int)v13, (int)v12);
      v33 = v20;
      v21 = v20;
      v22 = *(_QWORD *)(a1 + 8);
      v32 = v19;
      sub_13D3040(*(_QWORD *)(v22 + 48), v11, v19, v21, 0, v23);
      v12 = *(unsigned __int8 **)v29;
      v13 = (unsigned __int8 *)*a2;
    }
  }
  else
  {
    if ( v11 <= 0x7F )
      return 0;
    LODWORD(v32) = v11;
    if ( sub_13D2FE0(&byte_2611808[-72], byte_2611808, &v32) )
      return 0;
    v12 = *(unsigned __int8 **)v29;
    v13 = (unsigned __int8 *)*a2;
    if ( !*(_BYTE *)(a1 + 26) && !*(_BYTE *)(a1 + 24) && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 545LL) & 2) == 0 )
    {
      v14 = sub_13D08D0(a1, (int)v13, v29[0]);
      v15 = *(_QWORD *)(a1 + 8);
      v16 = *(_BYTE **)(a1 + 136);
      v29[5] = v17;
      v18 = *(_QWORD *)(v15 + 48);
      *(_QWORD *)&v29[3] = v14;
      sub_13D5670(v18, v16, v11, v14, v17, 0);
      v12 = *(unsigned __int8 **)v29;
      v13 = (unsigned __int8 *)*a2;
    }
  }
  *(_WORD *)(a4 + 18) |= 0x40u;
  if ( v12 - v13 != 6 )
  {
    if ( v12 - v13 == 10 && v13[1] == 85 )
      goto LABEL_24;
LABEL_12:
    if ( v12 != v13 )
    {
      do
      {
        while ( *v13 != 63 && *v13 != 92 )
        {
          *a2 = (__int64)++v13;
          if ( v13 == *(unsigned __int8 **)v29 )
            return 1;
        }
        v13 = (unsigned __int8 *)(*a2 + (sub_13D1690(a1, v13, a4) >> 32));
        *a2 = (__int64)v13;
      }
      while ( *(unsigned __int8 **)v29 != v13 );
    }
    return 1;
  }
  if ( v13[1] != 117 )
    goto LABEL_12;
LABEL_24:
  *a2 = (__int64)v12;
  return 1;
}
