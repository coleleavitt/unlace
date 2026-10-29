__int64 __fastcall sub_100A5A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  _BYTE *v5; // r10
  char v6; // dl
  _BYTE *v7; // r11
  char v11; // al
  _BYTE *v12; // rsi
  int v13; // eax
  int *v14; // rcx
  int v15; // esi
  int v16; // edx
  char v17; // al
  _BYTE *v18; // rdi
  char v19; // al
  char v20; // al
  _BYTE *v21; // rdi
  __int64 v22; // rdx
  size_t v23; // r10
  _BYTE *v24; // r11
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  _BYTE *v29; // rax
  int v30; // eax
  int v31; // eax
  int *v32; // rdx
  int v33; // eax
  _BYTE *v34; // [rsp+18h] [rbp-80h]
  unsigned int v35; // [rsp+18h] [rbp-80h]
  size_t v36; // [rsp+20h] [rbp-78h]
  unsigned int v37; // [rsp+2Ch] [rbp-6Ch]
  _BYTE *v38; // [rsp+38h] [rbp-60h] BYREF
  void *s1; // [rsp+40h] [rbp-58h] BYREF
  size_t n; // [rsp+48h] [rbp-50h]
  _BYTE v41[72]; // [rsp+50h] [rbp-48h] BYREF

  v5 = *(_BYTE **)(a4 + 104);
  v38 = v5;
  v6 = *v5;
  if ( *v5 )
  {
    v7 = v5;
    v11 = v6 - 33;
LABEL_3:
    switch ( v11 )
    {
      case 0:
      case 4:
      case 9:
      case 11:
      case 30:
      case 36:
      case 37:
      case 72:
      case 79:
        goto LABEL_12;
      case 2:
        v17 = v5[1];
        if ( v17 && v17 != 44 )
        {
          v18 = v5 + 1;
          do
          {
            v38 = v18;
            v19 = v18[1];
            v7 = v18++;
          }
          while ( v19 && v19 != 44 );
        }
        goto LABEL_12;
      case 27:
      case 29:
      case 53:
      case 76:
      case 78:
        *(_DWORD *)a4 |= 1u;
        goto LABEL_12;
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
        goto LABEL_15;
      case 55:
      case 70:
        *(_DWORD *)a4 |= 3u;
        goto LABEL_12;
      case 58:
        v38 = v5 + 1;
        v20 = v5[1];
        if ( v20 == 93 || !v20 )
        {
          v22 = (__int64)(v5 + 1);
        }
        else
        {
          v21 = v5 + 2;
          do
          {
            v38 = v21;
            v20 = *v21;
            v22 = (__int64)v21++;
          }
          while ( v20 && v20 != 93 );
        }
        if ( !v20 )
          return 0;
        s1 = v41;
        sub_10080E0(&s1, v5 + 1, v22);
        if ( !a3 )
        {
          v24 = s1;
LABEL_37:
          if ( v24 != v41 )
            operator delete(v24);
          return 0;
        }
        v23 = n;
        v24 = s1;
        v25 = 0;
        if ( n )
        {
          v26 = 0;
          while ( 1 )
          {
            v27 = a2 + 168 * v26;
            if ( v23 == *(_QWORD *)(v27 + 144) )
            {
              v37 = v25;
              v36 = v23;
              v34 = v24;
              v30 = memcmp(v24, *(const void **)(v27 + 136), v23);
              v24 = v34;
              v23 = v36;
              v25 = v37;
              if ( !v30 )
                break;
            }
            v26 = ++v25;
            if ( a3 == v25 )
              goto LABEL_37;
          }
        }
        else
        {
          while ( *(_QWORD *)(a2 + 168 * v23 + 144) )
          {
            v23 = ++v25;
            if ( a3 == v25 )
              goto LABEL_37;
          }
        }
        if ( v24 != v41 )
        {
          v35 = v25;
          operator delete(v24);
          v25 = v35;
        }
        v31 = *(_DWORD *)(a4 + 4);
        if ( v31 == -1 || v31 == v25 )
        {
          v32 = (int *)(a2 + 168LL * v25);
          if ( (*v32 & 4) == 0 )
          {
            v33 = *v32 | 8;
            *v32 = v33;
            *(_DWORD *)a4 = v33;
            *(_DWORD *)(a4 + 4) = v25;
            while ( 1 )
            {
              v7 = v38;
              while ( 1 )
              {
LABEL_12:
                v5 = v7 + 1;
                v38 = v7 + 1;
                v6 = v7[1];
                if ( !v6 )
                  return 1;
                v11 = v6 - 33;
                ++v7;
                if ( (unsigned __int8)(v6 - 33) <= 0x51u )
                  goto LABEL_3;
LABEL_14:
                if ( (unsigned __int8)(v6 - 48) > 9u )
                  break;
                if ( (unsigned __int8)(v5[1] - 48) > 9u )
                {
                  v12 = v5;
                }
                else
                {
                  v29 = v5 + 1;
                  do
                  {
                    v12 = v29;
                    v38 = v29++;
                  }
                  while ( (unsigned __int8)(v12[1] - 48) <= 9u );
                }
                if ( (unsigned __int8)sub_2223C30(v5, v12 - v5 + 1, 10, &s1) )
                  return 0;
                v13 = (int)s1;
                if ( (void *)(unsigned int)s1 != s1 )
                  return 0;
                if ( a3 <= (unsigned __int64)s1 )
                  return 0;
                v14 = (int *)(a2 + 168LL * (_QWORD)s1);
                if ( (*v14 & 4) != 0 )
                  return 0;
                v15 = *(_DWORD *)(a4 + 4);
                if ( v15 != -1 && v15 != (_DWORD)s1 )
                  return 0;
                v16 = *v14 | 8;
                v7 = v38;
                *v14 = v16;
                *(_DWORD *)a4 = v16;
                *(_DWORD *)(a4 + 4) = v13;
              }
LABEL_15:
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, _BYTE **, __int64))(*(_QWORD *)a1 + 360LL))(
                      a1,
                      &v38,
                      a4) )
                return 0;
            }
          }
        }
        break;
      case 77:
        *(_DWORD *)a4 |= 0x10u;
        goto LABEL_12;
      case 81:
        *(_DWORD *)a4 |= 2u;
        goto LABEL_12;
      default:
        goto LABEL_14;
    }
  }
  return 0;
}

