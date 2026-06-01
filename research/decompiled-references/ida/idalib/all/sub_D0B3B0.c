__int64 __fastcall sub_D0B3B0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r13
  unsigned int v6; // edx
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rsi
  _BYTE *v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rsi
  _WORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // r13
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 *v30; // rax
  __int64 v31; // rdx
  unsigned __int8 v32; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v33; // [rsp+Fh] [rbp-69h]
  char v34; // [rsp+1Fh] [rbp-59h] BYREF
  void *v35; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+28h] [rbp-50h]
  char v37; // [rsp+2Ch] [rbp-4Ch]
  void *v38; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v9 = *(_QWORD *)(a1 + 560);
        v10 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v38, v9);
        v11 = 1;
        goto LABEL_18;
      }
      return result;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v12 = *(_QWORD *)(a1 + 560);
        v10 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v38, v12);
        v11 = 0;
LABEL_18:
        sub_21F3DA0(&v35, &v38, 8, v11, &v34);
        if ( !v34 || (result = sub_CF8AC0(a1 + 384, v10, (__int64)&v35), (_BYTE)result) )
        {
          v13 = (_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8);
          v14 = v36;
          if ( v37 )
          {
            LOBYTE(v15) = (_BYTE)v35;
            if ( v36 > 0x40 )
              v15 = *(_QWORD *)v35;
          }
          else if ( v36 > 0x40 )
          {
            LOBYTE(v15) = *(_BYTE *)v35;
          }
          else
          {
            LOBYTE(v15) = 0;
            if ( v36 )
              v15 = (__int64)((_QWORD)v35 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
          }
          *v13 = v15;
          result = 1;
          goto LABEL_25;
        }
        goto LABEL_66;
      }
      return result;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 560);
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v38, v16);
        v18 = 1;
        goto LABEL_31;
      }
      return result;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v19 = *(_QWORD *)(a1 + 560);
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v38, v19);
        v18 = 0;
LABEL_31:
        sub_21F3DA0(&v35, &v38, 16, v18, &v34);
        if ( !v34 || (result = sub_CF8AC0(a1 + 384, v17, (__int64)&v35), (_BYTE)result) )
        {
          v20 = (_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8);
          v14 = v36;
          if ( v37 )
          {
            LOWORD(v21) = (_WORD)v35;
            if ( v36 > 0x40 )
              v21 = *(_QWORD *)v35;
          }
          else if ( v36 > 0x40 )
          {
            LOWORD(v21) = *(_WORD *)v35;
          }
          else
          {
            LOWORD(v21) = 0;
            if ( v36 )
              v21 = (__int64)((_QWORD)v35 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
          }
          *v20 = v21;
          result = 1;
          goto LABEL_25;
        }
        goto LABEL_66;
      }
      return result;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v22 = *(_QWORD *)(a1 + 560);
        v23 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v38, v22);
        sub_21F3DA0(&v35, &v38, 32, 1, &v34);
        if ( v34 )
        {
          result = sub_CF8AC0(a1 + 384, v23, (__int64)&v35);
          if ( !(_BYTE)result )
            goto LABEL_53;
        }
        v24 = (_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8);
        if ( v37 )
          goto LABEL_69;
        if ( v36 > 0x40 )
        {
          LODWORD(v25) = *(_DWORD *)v35;
        }
        else
        {
          LODWORD(v25) = 0;
          if ( v36 )
            v25 = (__int64)((_QWORD)v35 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
        }
        goto LABEL_52;
      }
      return result;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v26 = *(_QWORD *)(a1 + 560);
        v27 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v38, v26);
        sub_21F3DA0(&v35, &v38, 32, 0, &v34);
        if ( !v34 || (result = sub_CF8AC0(a1 + 384, v27, (__int64)&v35), (_BYTE)result) )
        {
          v24 = (_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8);
          if ( v37 )
          {
LABEL_69:
            LODWORD(v25) = (_DWORD)v35;
            if ( v36 > 0x40 )
              v25 = *(_QWORD *)v35;
          }
          else
          {
            LODWORD(v25) = v36;
            if ( v36 > 0x40 )
            {
              LODWORD(v25) = *(_DWORD *)v35;
            }
            else if ( v36 )
            {
              v25 = (__int64)((_QWORD)v35 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
            }
          }
LABEL_52:
          *v24 = v25;
          result = 1;
        }
LABEL_53:
        if ( v36 <= 0x40 )
          goto LABEL_56;
        goto LABEL_54;
      }
      return result;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return result;
      v28 = *(_QWORD *)(a1 + 560);
      v29 = *(_QWORD *)(a1 + 1232);
      *(_QWORD *)(a1 + 1240) = *a3;
      sub_D0AF80((__int64)&v38, v28);
      sub_21F3DA0(&v35, &v38, 64, 1, &v34);
      if ( v34 )
      {
        result = sub_CF8AC0(a1 + 384, v29, (__int64)&v35);
        if ( !(_BYTE)result )
        {
LABEL_66:
          v14 = v36;
LABEL_25:
          if ( v14 > 0x40 )
            goto LABEL_54;
          goto LABEL_56;
        }
      }
      v30 = (__int64 *)sub_E216C0(*(_QWORD *)(a1 + 560), 8);
      v14 = v36;
      v31 = (__int64)v35;
      if ( v37 )
      {
        if ( v36 <= 0x40 )
        {
LABEL_65:
          *v30 = v31;
          result = 1;
          goto LABEL_25;
        }
      }
      else if ( v36 <= 0x40 )
      {
        if ( !v36 )
        {
          *v30 = 0;
          result = 1;
          goto LABEL_56;
        }
        v31 = (__int64)((_QWORD)v35 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
        goto LABEL_65;
      }
      v31 = *(_QWORD *)v35;
      goto LABEL_65;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = *(_QWORD *)(a1 + 560);
        v5 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a3;
        sub_D0AF80((__int64)&v38, v4);
        sub_21F3DA0(&v35, &v38, 64, 0, &v34);
        if ( !v34 || (result = sub_CF8AC0(a1 + 384, v5, (__int64)&v35), v6 = v36, (_BYTE)result) )
        {
          v7 = (__int64 *)sub_E216C0(*(_QWORD *)(a1 + 560), 8);
          v6 = v36;
          if ( v37 )
          {
            v8 = (__int64)v35;
            if ( v36 > 0x40 )
              v8 = *(_QWORD *)v35;
          }
          else if ( v36 > 0x40 )
          {
            v8 = *(_QWORD *)v35;
          }
          else
          {
            v8 = 0;
            if ( v36 )
              v8 = (__int64)((_QWORD)v35 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
          }
          *v7 = v8;
          result = 1;
        }
        if ( v6 > 0x40 )
        {
LABEL_54:
          if ( v35 )
          {
            v32 = result;
            operator delete[](v35);
            result = v32;
          }
        }
LABEL_56:
        if ( v39 > 0x40 )
        {
          if ( v38 )
          {
            v33 = result;
            operator delete[](v38);
            return v33;
          }
        }
      }
      return result;
  }
}
