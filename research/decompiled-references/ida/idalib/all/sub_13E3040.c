__int64 __fastcall sub_13E3040(__int64 a1, void **a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int8 *v3; // r8
  unsigned __int8 *v4; // rax
  __int64 v5; // rdx
  signed __int64 v6; // rcx
  __int64 v7; // r13
  void **v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int8 *v14; // r12
  void *v15; // rsi
  unsigned __int64 v16; // rdx
  void *v17; // rdx
  int v18; // ebp
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  int v24; // eax
  _QWORD *v25; // rdx
  void *v26; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v27; // [rsp+18h] [rbp-70h]
  void *v28; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-60h]
  void *v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-50h]
  void *v32; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-40h]

  v3 = *(unsigned __int8 **)(a1 + 48);
  v4 = *(unsigned __int8 **)(a1 + 40);
  v5 = *(unsigned int *)(a1 + 64);
  v6 = v3 - v4;
  if ( (_DWORD)v5 == 8 )
  {
    LOBYTE(v2) = (unsigned int)v6 <= 0x15;
LABEL_6:
    v7 = a1;
    v8 = a2;
    v9 = *((_DWORD *)a2 + 2);
    if ( (_BYTE)v2 )
      goto LABEL_7;
    goto LABEL_19;
  }
  if ( (unsigned int)v5 <= 8 )
  {
    if ( (_DWORD)v5 == 2 )
    {
      v7 = a1;
      v8 = a2;
      v9 = *((_DWORD *)a2 + 2);
      LOBYTE(v2) = (unsigned int)v6 <= 0x40;
      if ( (unsigned int)v6 <= 0x40 )
      {
LABEL_7:
        v2 = 0;
        if ( v3 != v4 )
        {
          v10 = (unsigned int)v5;
          do
          {
            v11 = *v4;
            if ( (_BYTE)v11 != 39 )
              v2 = (unsigned int)word_23E43C0[v11] + v10 * v2;
            ++v4;
          }
          while ( v3 != v4 );
        }
        if ( v9 <= 0x40 )
        {
          v23 = v2 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v9);
          if ( !v9 )
            v23 = 0;
          *v8 = (void *)v23;
        }
        else
        {
          *(_QWORD *)*v8 = v2;
          memset((char *)*v8 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v9 + 63) >> 6) + 0x1FFFFFFF));
          if ( *((_DWORD *)v8 + 2) > 0x40u )
          {
            v12 = *(_QWORD **)*v8;
LABEL_15:
            LOBYTE(v2) = v12 != (_QWORD *)v2;
            return (unsigned int)v2;
          }
        }
        v12 = *v8;
        goto LABEL_15;
      }
LABEL_19:
      if ( v9 <= 0x40 )
      {
        v27 = v9;
        *a2 = nullptr;
        v14 = *(unsigned __int8 **)(v7 + 40);
        v15 = (void *)*(unsigned int *)(v7 + 64);
      }
      else
      {
        *(_QWORD *)*a2 = 0;
        memset((char *)*a2 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v9 + 63) >> 6) + 0x1FFFFFFF));
        v9 = *((_DWORD *)v8 + 2);
        v14 = *(unsigned __int8 **)(v7 + 40);
        v15 = (void *)*(unsigned int *)(v7 + 64);
        v27 = v9;
        if ( v9 > 0x40 )
        {
          sub_2205470(&v26, v15, 0);
          v9 = *((_DWORD *)v8 + 2);
          v29 = v9;
          if ( v9 > 0x40 )
          {
            sub_2205470(&v28, 0, 0);
            v31 = *((_DWORD *)v8 + 2);
            if ( v31 > 0x40 )
            {
              sub_2205510(&v30);
              v16 = *(_QWORD *)(v7 + 48);
              if ( (unsigned __int64)v14 >= v16 )
              {
LABEL_57:
                if ( v31 > 0x40 && v30 )
                  operator delete[](v30);
                goto LABEL_49;
              }
              do
              {
LABEL_36:
                v20 = *v14++;
                if ( (_BYTE)v20 != 39 )
                {
                  v21 = (unsigned int)word_23E43C0[v20];
                  v22 = v29;
                  if ( v29 <= 0x40 )
                  {
                    v17 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v29) & v21);
                    if ( !v29 )
                      v17 = nullptr;
                    v28 = v17;
                  }
                  else
                  {
                    *(_QWORD *)v28 = v21;
                    memset((char *)v28 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v22 + 63) >> 6) + 0x1FFFFFFF));
                  }
                  if ( v31 <= 0x40 && *((_DWORD *)v8 + 2) <= 0x40u )
                  {
                    v25 = *v8;
                    v31 = *((_DWORD *)v8 + 2);
                    v30 = v25;
                  }
                  else
                  {
                    sub_22056A0(&v30, v8);
                  }
                  sub_2209DE0(v8, &v26);
                  sub_22078F0(&v32);
                  if ( v33 <= 0x40 )
                  {
                    v24 = (int)v30;
                    LOBYTE(v24) = v32 != v30;
                    v18 = v24 | v2;
                  }
                  else
                  {
                    v18 = sub_2205D70(&v32, &v30) ^ 1 | v2;
                    if ( v32 )
                      operator delete[](v32);
                  }
                  sub_22059A0(v8, &v28);
                  v19 = sub_2205DB0(v8, &v28);
                  v16 = *(_QWORD *)(v7 + 48);
                  LODWORD(v2) = (v19 >> 31) | v18;
                }
              }
              while ( (unsigned __int64)v14 < v16 );
              goto LABEL_57;
            }
LABEL_48:
            v16 = *(_QWORD *)(v7 + 48);
            v30 = *v8;
            if ( (unsigned __int64)v14 >= v16 )
            {
LABEL_49:
              if ( v29 > 0x40 && v28 )
                operator delete[](v28);
              if ( v27 > 0x40 && v26 )
                operator delete[](v26);
              return (unsigned int)v2;
            }
            goto LABEL_36;
          }
LABEL_47:
          v28 = nullptr;
          v31 = v9;
          goto LABEL_48;
        }
      }
      v26 = v15;
      v29 = v9;
      goto LABEL_47;
    }
    return sub_13E3430(a1, a2, v5, v6);
  }
  if ( (_DWORD)v5 == 10 )
  {
    LOBYTE(v2) = (unsigned int)v6 <= 0x13;
    goto LABEL_6;
  }
  if ( (_DWORD)v5 == 16 )
  {
    LOBYTE(v2) = (unsigned int)v6 <= 0x10;
    goto LABEL_6;
  }
  return sub_13E3430(a1, a2, v5, v6);
}
