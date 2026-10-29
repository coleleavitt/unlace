__int64 __fastcall sub_BB26A0(const char **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // ebp
  __int64 **v9; // rax
  unsigned int v10; // r8d
  __int64 *v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned __int16 v14; // ax
  unsigned int v15; // esi
  int v16; // eax
  bool v17; // dl
  bool v18; // r9
  const char *v19; // rdi
  _BYTE *v20; // rax
  __int64 v22; // rax
  char v23; // al
  const char *v24; // rdi
  _BYTE *v25; // rax
  __int64 v26; // [rsp+8h] [rbp-50h]
  bool v27; // [rsp+14h] [rbp-44h]
  bool v28; // [rsp+14h] [rbp-44h]
  bool v29; // [rsp+14h] [rbp-44h]
  unsigned int v30; // [rsp+18h] [rbp-40h]
  unsigned __int8 v31; // [rsp+1Fh] [rbp-39h]

  v8 = a3;
  v9 = (__int64 **)sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v10 = 0;
  v11 = *v9;
  v12 = (__int64)&(*v9)[*((unsigned int *)v9 + 2)];
  if ( *v9 != (__int64 *)v12 )
  {
    v26 = (__int64)(a1 + 1);
    while ( 1 )
    {
      v13 = *v11;
      if ( (*(_BYTE *)(*v11 + 38) & 5) != 0
        || (*((_BYTE *)a1 + 12) & 1) != 0 && (((*(_BYTE *)(v13 + 34) & 0xF) - 6) & 0xFD) != 0 )
      {
        goto LABEL_3;
      }
      v14 = *(_WORD *)(v13 + 36);
      if ( v14 == 319 )
        goto LABEL_3;
      if ( v14 <= 0x13Fu )
      {
        if ( (unsigned __int16)(v14 - 295) > 1u )
          goto LABEL_12;
LABEL_3:
        if ( (__int64 *)v12 == ++v11 )
          return v10;
      }
      else
      {
        if ( v14 == 418 || v14 == 423 || v14 == 416 )
          goto LABEL_3;
LABEL_12:
        v15 = *(_DWORD *)(v13 + 24);
        if ( v15
          && *(_DWORD *)(a2 + 24)
          && (v31 = v10,
              v30 = *(_DWORD *)(a2 + 24),
              v22 = sub_B8C330(a2),
              v23 = sub_10246C0(*(_QWORD *)(v22 + 2312), v15, v30),
              v10 = v31,
              !v23) )
        {
          v16 = 2;
        }
        else
        {
          v16 = 1;
        }
        v17 = v8 == v16 || v8 == 0;
        v18 = v17;
        if ( !v17 )
          goto LABEL_3;
        v19 = *a1;
        if ( v8 == 1 )
        {
          v28 = v16 == 1;
          sub_B1F2A0(v13, v19, v26);
          v24 = *a1;
          v25 = *((_BYTE **)*a1 + 4);
          if ( (unsigned __int64)v25 >= *((_QWORD *)*a1 + 3) )
          {
            sub_227BA10(v24, 32);
            v10 = v28;
          }
          else
          {
            v10 = v28;
            *((_QWORD *)v24 + 4) = v25 + 1;
            *v25 = 32;
          }
          goto LABEL_3;
        }
        v20 = *((_BYTE **)v19 + 4);
        if ( (unsigned __int64)v20 >= *((_QWORD *)v19 + 3) )
        {
          v29 = v17;
          sub_227BA10(v19, 32);
          v18 = v29;
        }
        else
        {
          *((_QWORD *)v19 + 4) = v20 + 1;
          *v20 = 32;
        }
        ++v11;
        v27 = v18;
        sub_B1F2A0(v13, *a1, v26);
        v10 = v27;
        if ( (__int64 *)v12 == v11 )
          return v10;
      }
    }
  }
  return v10;
}
