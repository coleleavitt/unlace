__int64 __fastcall sub_8F5780(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // r12d
  _BYTE *v8; // rbx
  bool v9; // al
  __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rsi
  _BYTE *v14; // rax
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
  __int64 v32; // rsi
  __int64 v33; // r13
  __int64 *v34; // rax
  __int64 v35; // rcx
  unsigned __int8 v36; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v37; // [rsp+Fh] [rbp-69h]
  char v38; // [rsp+1Fh] [rbp-59h] BYREF
  void *v39; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v40; // [rsp+28h] [rbp-50h]
  char v41; // [rsp+2Ch] [rbp-4Ch]
  void *v42; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v43; // [rsp+38h] [rbp-40h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v10 = *(_QWORD *)(a1 + 568);
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a3;
        sub_8F5730((__int64)&v42, v10);
        v12 = 1;
        goto LABEL_14;
      }
      return result;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v13 = *(_QWORD *)(a1 + 568);
      v11 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v42, v13);
      v12 = 0;
LABEL_14:
      sub_2572FC0(&v39, &v42, 8, v12, &v38);
      if ( v38 )
      {
        result = sub_8E5250(a1 + 384, v11, (__int64)&v39);
        if ( !(_BYTE)result )
          goto LABEL_57;
      }
      v14 = (_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
      LOBYTE(a1) = (_BYTE)v39;
      if ( v41 )
      {
        if ( v40 > 0x40 )
        {
          v15 = *(_QWORD *)v39;
          goto LABEL_21;
        }
      }
      else
      {
        if ( v40 > 0x40 )
        {
          LOBYTE(v15) = *(_BYTE *)v39;
          goto LABEL_21;
        }
        LOBYTE(v15) = 0;
        if ( !v40 )
        {
LABEL_21:
          *v14 = v15;
          result = 1;
          goto LABEL_57;
        }
        a1 = (__int64)((_QWORD)v39 << (64 - (unsigned __int8)v40)) >> (64 - (unsigned __int8)v40);
      }
      LOBYTE(v15) = a1;
      goto LABEL_21;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v16 = *(_QWORD *)(a1 + 568);
      v17 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v42, v16);
      v18 = 1;
      goto LABEL_26;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v19 = *(_QWORD *)(a1 + 568);
      v17 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v42, v19);
      v18 = 0;
LABEL_26:
      sub_2572FC0(&v39, &v42, 16, v18, &v38);
      if ( v38 )
      {
        result = sub_8E5250(a1 + 384, v17, (__int64)&v39);
        if ( !(_BYTE)result )
          goto LABEL_57;
      }
      v20 = (_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
      LOWORD(a1) = (_WORD)v39;
      if ( v41 )
      {
        if ( v40 <= 0x40 )
        {
LABEL_32:
          LOWORD(v21) = a1;
          goto LABEL_33;
        }
        v21 = *(_QWORD *)v39;
      }
      else
      {
        if ( v40 <= 0x40 )
        {
          LOWORD(v21) = 0;
          if ( !v40 )
            goto LABEL_33;
          a1 = (__int64)((_QWORD)v39 << (64 - (unsigned __int8)v40)) >> (64 - (unsigned __int8)v40);
          goto LABEL_32;
        }
        LOWORD(v21) = *(_WORD *)v39;
      }
LABEL_33:
      *v20 = v21;
      result = 1;
      goto LABEL_57;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v22 = *(_QWORD *)(a1 + 568);
      v23 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v42, v22);
      sub_2572FC0(&v39, &v42, 32, 1, &v38);
      if ( v38 )
      {
        result = sub_8E5250(a1 + 384, v23, (__int64)&v39);
        if ( !(_BYTE)result )
          goto LABEL_57;
      }
      v24 = (_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
      if ( v41 )
      {
        LODWORD(v25) = (_DWORD)v39;
        if ( v40 > 0x40 )
          v25 = *(_QWORD *)v39;
      }
      else if ( v40 > 0x40 )
      {
        LODWORD(v25) = *(_DWORD *)v39;
      }
      else
      {
        LODWORD(v25) = 0;
        if ( v40 )
          LODWORD(v25) = (__int64)((_QWORD)v39 << (64 - (unsigned __int8)v40)) >> (64 - (unsigned __int8)v40);
      }
      goto LABEL_48;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v26 = *(_QWORD *)(a1 + 568);
      v27 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v42, v26);
      sub_2572FC0(&v39, &v42, 32, 0, &v38);
      if ( v38 )
      {
        result = sub_8E5250(a1 + 384, v27, (__int64)&v39);
        if ( !(_BYTE)result )
          goto LABEL_57;
      }
      v24 = (_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
      LODWORD(v25) = v40;
      if ( v41 )
      {
        if ( v40 <= 0x40 )
          LODWORD(v25) = (_DWORD)v39;
        else
          v25 = *(_QWORD *)v39;
      }
      else if ( v40 > 0x40 )
      {
        LODWORD(v25) = *(_DWORD *)v39;
      }
      else if ( v40 )
      {
        LODWORD(v25) = (__int64)((_QWORD)v39 << (64 - (unsigned __int8)v40)) >> (64 - (unsigned __int8)v40);
      }
LABEL_48:
      *v24 = v25;
      result = 1;
      goto LABEL_57;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v28 = *(_QWORD *)(a1 + 568);
      v29 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v42, v28);
      sub_2572FC0(&v39, &v42, 64, 1, &v38);
      if ( v38 )
      {
        result = sub_8E5250(a1 + 384, v29, (__int64)&v39);
        if ( !(_BYTE)result )
          goto LABEL_57;
      }
      v30 = (__int64 *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
      if ( v41 )
      {
        v31 = (__int64)v39;
        if ( v40 <= 0x40 )
          goto LABEL_56;
      }
      else if ( v40 <= 0x40 )
      {
        v31 = 0;
        if ( v40 )
          v31 = (__int64)((_QWORD)v39 << (64 - (unsigned __int8)v40)) >> (64 - (unsigned __int8)v40);
LABEL_56:
        *v30 = v31;
        result = 1;
        goto LABEL_57;
      }
      v31 = *(_QWORD *)v39;
      goto LABEL_56;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v32 = *(_QWORD *)(a1 + 568);
      v33 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v42, v32);
      sub_2572FC0(&v39, &v42, 64, 0, &v38);
      if ( v38 )
      {
        result = sub_8E5250(a1 + 384, v33, (__int64)&v39);
        if ( !(_BYTE)result )
          goto LABEL_57;
      }
      v34 = (__int64 *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
      if ( v41 )
      {
        v35 = (__int64)v39;
        if ( v40 <= 0x40 )
          goto LABEL_69;
        goto LABEL_75;
      }
      if ( v40 > 0x40 )
      {
LABEL_75:
        v35 = *(_QWORD *)v39;
        goto LABEL_69;
      }
      v35 = 0;
      if ( v40 )
        v35 = (__int64)((_QWORD)v39 << (64 - (unsigned __int8)v40)) >> (64 - (unsigned __int8)v40);
LABEL_69:
      *v34 = v35;
      result = 1;
LABEL_57:
      if ( v40 > 0x40 && v39 )
      {
        v36 = result;
        operator delete[](v39);
        result = v36;
      }
      if ( v43 > 0x40 )
      {
        if ( v42 )
        {
          v37 = result;
          operator delete[](v42);
          return v37;
        }
      }
      return result;
    case 8:
    case 9:
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return result;
      v4 = *(_QWORD *)(a1 + 568);
      v5 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a3;
      sub_8F5730((__int64)&v42, v4);
      sub_2572FC0(&v39, &v42, 1, 0, &v38);
      if ( !v38 || (result = sub_8E5250(a1 + 384, v5, (__int64)&v39), (_BYTE)result) )
      {
        v6 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 8);
        v7 = v40;
        v8 = (_BYTE *)v6;
        if ( v40 <= 0x40 )
          v9 = v39 == nullptr;
        else
          v9 = v7 == (unsigned int)sub_2587400(&v39);
        *v8 = !v9;
        result = 1;
      }
      goto LABEL_57;
  }
}

