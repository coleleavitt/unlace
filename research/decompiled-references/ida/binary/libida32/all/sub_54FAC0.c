char __fastcall sub_54FAC0(_QWORD *a1, char **a2, char **a3, int a4)
{
  char *v6; // rsi
  char v7; // r15
  char *v8; // rdx
  char v9; // al
  int v10; // eax
  char *v12; // rax
  char *v13; // r11
  char v14; // al
  char *v15; // r11
  char *v16; // rsi
  signed __int64 v17; // r15
  char v18; // r15
  unsigned __int8 v19; // r15
  size_t v20; // rax
  char *v21; // rsi
  void *v22; // rsp
  char *v23; // rcx
  char v24; // r15
  char **v25; // rsi
  char *v26; // rdx
  char v27; // al
  char *v28; // rcx
  __int64 v29; // [rsp+0h] [rbp-70h] BYREF
  char *v30; // [rsp+8h] [rbp-68h]
  char *v31; // [rsp+10h] [rbp-60h]
  int v32; // [rsp+1Ch] [rbp-54h]
  int v33; // [rsp+28h] [rbp-48h] BYREF
  int v34; // [rsp+2Ch] [rbp-44h] BYREF
  char *v35[8]; // [rsp+30h] [rbp-40h] BYREF

  v6 = *a2;
  v32 = a4;
  v7 = *v6;
  v35[1] = (char *)__readfsqword(0x28u);
  if ( !v7 )
    return **a3 == 0;
  v8 = *a3;
  v9 = *v8;
  if ( !*v8 )
    return 0;
  while ( 1 )
  {
    if ( (v7 & 0x3F) == 0x3D )
    {
      v10 = sub_54E0A0(a1, (__int64)a2, a3);
      if ( !v10 )
        goto LABEL_13;
      if ( v10 != 1 )
        return 0;
      LOBYTE(v31) = 0;
      v8 = *a2;
    }
    else
    {
      if ( (v9 & 0x3F) != 0x3D )
      {
        if ( v9 != v7 && !sub_54DC40(a1, v6, v8) )
          return 0;
        switch ( v7 & 0xF )
        {
          case 0xA:
            if ( (~v7 & 0x30) != 0 )
              goto LABEL_12;
            v26 = *a2 + 1;
            *a2 = v26;
            v27 = *v26;
            if ( !*v26 )
              return 0;
            v28 = *a3 + 1;
            *a3 = v28;
            if ( *v28 != v27 )
              return 0;
            goto LABEL_13;
          case 0xB:
            v13 = *a2;
            v35[0] = v13;
            v14 = *v13;
            if ( (*v13 & 0xF) != 0xB )
              return 0;
            v35[0] = v13 + 1;
            if ( (v14 & 0x10) != 0 )
            {
              v34 = 0;
              v33 = sub_692FE0(v35);
              if ( v33 == -1 )
                return 0;
              v15 = *a2;
            }
            else if ( !(unsigned __int8)sub_54ED70(v35, &v33, &v34) )
            {
              return 0;
            }
            v16 = *a3;
            v31 = v35[0];
            v17 = v35[0] - v15;
            if ( !memcmp(v15, v16, v35[0] - v15) )
              return 0;
            *a2 = v31;
            *a3 += v17;
            break;
          case 0xC:
            if ( !(unsigned __int8)sub_54F650((__int64)a1, a2, a3) )
              return 0;
            goto LABEL_13;
          case 0xD:
            ++*a2;
            v12 = (*a3)++;
            if ( **a2 != 1 || v12[1] != 1 || (unsigned int)sub_54E0A0(a1, (__int64)a2, a3) )
              return 0;
            goto LABEL_13;
          case 0xE:
          case 0xF:
            return 0;
          default:
LABEL_12:
            ++*a2;
            ++*a3;
            goto LABEL_13;
        }
        goto LABEL_13;
      }
      LOBYTE(v31) = 1;
    }
    v35[0] = v8;
    v18 = *v8;
    v35[0] = sub_54E2A0(a1, v8);
    v19 = v18 & 0xC0;
    if ( !v35[0] )
      return 0;
    if ( v19 )
    {
      if ( (*v35[0] & v19) != 0 )
        return 0;
      v30 = v35[0];
      v20 = strlen(v35[0]);
      v21 = v30;
      v22 = alloca(v20 + 9);
      v30 = (char *)&v29;
      qstrncpy(&v29, v21, v20 + 1);
      v23 = v30;
      *v30 |= v19;
      v35[0] = v23;
    }
    v24 = (char)v31;
    v25 = a2;
    if ( !(_BYTE)v31 )
      v25 = a3;
    if ( !(unsigned __int8)sub_54FAC0(a1, v25, v35, 1) || *v35[0] )
      return 0;
    if ( v24 )
    {
      ++*a3;
      sub_54DE00(0, a3);
    }
    else
    {
      ++*a2;
      sub_54DE00(0, a2);
    }
LABEL_13:
    v6 = *a2;
    v7 = **a2;
    if ( !v7 )
      return **a3 == 0;
    if ( v32 < 0 )
      return 1;
    v8 = *a3;
    v9 = **a3;
    if ( !v9 )
      return v32 != 0;
  }
}

