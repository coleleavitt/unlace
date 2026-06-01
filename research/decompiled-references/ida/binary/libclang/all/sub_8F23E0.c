__int64 __fastcall sub_8F23E0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // r12
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // rdi
  bool v10; // bl
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r12
  char v14; // r13
  __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  char v19; // dl
  unsigned __int8 v20; // [rsp+Fh] [rbp-79h]
  _QWORD v21[3]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+30h] [rbp-58h]
  int v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  int v26; // [rsp+50h] [rbp-38h]

  result = 1;
  v5 = *(_DWORD *)(a1 + 816);
  if ( a2 == 14 )
  {
    if ( *(_DWORD *)(a1 + 812) == v5 )
    {
      v11 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      v12 = sub_A1A5A0(v11, 24);
      v13 = *(_QWORD *)v12;
      v14 = *(_BYTE *)(v12 + 16);
      sub_A1A5E0(v11, 24);
      if ( v14
        && v13
        && (v15 = *(_QWORD *)(v13 + 8), (v15 & 4) == 0)
        && (v16 = v15 & 0xFFFFFFFFFFFFFFF8LL) != 0
        && (unsigned __int8)sub_783680(v16) )
      {
        return 0;
      }
      else
      {
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v13 != 0;
        return 1;
      }
    }
  }
  else
  {
    if ( a2 == 15 )
    {
      if ( *(_DWORD *)(a1 + 812) != v5 )
        return result;
      v17 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      v18 = sub_A1A5A0(v17, 72);
      sub_A1C070(v21, v18);
      v25 = *(_QWORD *)(v18 + 56);
      v26 = *(_DWORD *)(v18 + 64);
      sub_A1A5E0(v17, 72);
      if ( !v25 || (*(_BYTE *)(v25 + 28) & 0x7Fu) - 33 > 3 || (v19 = sub_783680(v25), v8 = 0, !v19) )
      {
        v9 = *(_QWORD *)(a1 + 568);
        if ( v24 )
        {
          if ( v24 != 2 )
          {
            v10 = 1;
            if ( v24 == 3 || v21[0] | v23 )
              goto LABEL_9;
            goto LABEL_26;
          }
          if ( v22 )
          {
LABEL_28:
            v10 = 1;
            goto LABEL_9;
          }
        }
        else if ( v22 )
        {
          goto LABEL_28;
        }
LABEL_26:
        v10 = v25 != 0;
        goto LABEL_9;
      }
LABEL_10:
      v20 = v8;
      sub_A1C0C0(v21);
      return v20;
    }
    if ( *(_DWORD *)(a1 + 812) == v5 )
    {
      v6 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      v7 = sub_A1A5A0(v6, 56);
      sub_A1C070(v21, v7);
      sub_A1A5E0(v6, 56);
      if ( v24 )
      {
        v9 = *(_QWORD *)(a1 + 568);
        if ( v24 == 2 )
        {
          v10 = v22 != 0;
        }
        else
        {
          v10 = 1;
          if ( v24 != 3 )
            v10 = (v21[0] | v23) != 0;
        }
        goto LABEL_9;
      }
      v8 = 0;
      if ( !*(_BYTE *)(v22 + 29) )
      {
        v9 = *(_QWORD *)(a1 + 568);
        v10 = 1;
LABEL_9:
        *(_BYTE *)sub_A1A4E0(v9, 8) = v10;
        v8 = 1;
        goto LABEL_10;
      }
      goto LABEL_10;
    }
  }
  return result;
}

