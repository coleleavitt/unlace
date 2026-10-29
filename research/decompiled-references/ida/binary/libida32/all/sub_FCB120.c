__int64 __fastcall sub_FCB120(__int64 a1, __int64 *a2, char a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  _QWORD *v10; // rax
  char *v11; // rbp
  char *v12; // rbx
  unsigned __int64 v13; // rax
  char *v14; // rdi
  char *v15; // r15
  _BYTE *v16; // rax
  unsigned __int8 *v17; // r9
  unsigned __int64 v18; // r14
  __int64 v19; // rdx
  unsigned __int8 *v21; // rsi
  unsigned __int8 *v22; // rdx
  unsigned __int8 *v23; // [rsp+10h] [rbp-B8h]
  __int64 v24; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+28h] [rbp-A0h]
  _BYTE v27[32]; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall **v28)(); // [rsp+50h] [rbp-78h] BYREF
  int v29; // [rsp+58h] [rbp-70h]
  __int128 v30; // [rsp+60h] [rbp-68h]
  void *dest; // [rsp+70h] [rbp-58h]
  char v32; // [rsp+78h] [rbp-50h]
  int v33; // [rsp+7Ch] [rbp-4Ch]
  __int64 v34; // [rsp+80h] [rbp-48h]

  v3 = 2;
  v4 = a1;
  v26 = 0x200000000LL;
  v7 = 0;
  ptr = v27;
  while ( 1 )
  {
    v8 = a2[1];
    v9 = *a2;
    if ( v7 + 1 > v3 )
    {
      sub_22134E0(&ptr, v27, v7 + 1, 16);
      v7 = (unsigned int)v26;
    }
    v10 = (char *)ptr + 16 * v7;
    *v10 = v9;
    v10[1] = v8;
    a2 = (__int64 *)a2[5];
    v7 = (unsigned int)(v26 + 1);
    LODWORD(v26) = v26 + 1;
    if ( !a2 )
      break;
    v3 = HIDWORD(v26);
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  v29 = 0;
  v32 = 0;
  v33 = 1;
  dest = nullptr;
  v30 = 0;
  v28 = &off_2BC1EC8;
  v34 = a1;
  sub_2257B70(&v28, 0, 0, 0);
  v11 = (char *)ptr;
  v12 = (char *)ptr + 16 * (unsigned int)v26;
  if ( v12 != ptr )
  {
    v13 = *((_QWORD *)&v30 + 1);
    v14 = (char *)dest;
    v15 = v12 - 16;
    v24 = v4;
    while ( 1 )
    {
      v17 = *(unsigned __int8 **)v15;
      v18 = *((_QWORD *)v15 + 1);
      if ( a3 )
      {
        if ( !v18 )
          goto LABEL_20;
        v19 = *v17;
        if ( (byte_23ED5E0[2 * v19] & 0xE0) == 0 )
          goto LABEL_20;
        v21 = &v17[v18];
        if ( v17 != &v17[v18] )
        {
          if ( !byte_23D3460[v19] )
            goto LABEL_20;
          v22 = v17 + 1;
          if ( v21 != v17 + 1 )
          {
            while ( byte_23D3460[*v22] )
            {
              if ( v21 == ++v22 )
                goto LABEL_34;
            }
LABEL_20:
            if ( (unsigned __int64)v14 < v13 )
            {
              dest = v14 + 1;
              *v14 = 34;
            }
            else
            {
              v23 = *(unsigned __int8 **)v15;
              sub_2257CD0(&v28, 34);
              v17 = v23;
            }
            sub_2257D50(&v28, v17, v18, 0);
            v16 = dest;
            if ( (unsigned __int64)dest >= *((_QWORD *)&v30 + 1) )
            {
              sub_2257CD0(&v28, 34);
            }
            else
            {
              dest = (char *)dest + 1;
              *v16 = 34;
            }
LABEL_11:
            if ( v11 == v15 )
              goto LABEL_25;
            goto LABEL_12;
          }
        }
LABEL_34:
        if ( v18 > v13 - (unsigned __int64)v14 )
        {
LABEL_35:
          sub_22581D0(&v28, *(_QWORD *)v15, *((_QWORD *)v15 + 1));
          goto LABEL_11;
        }
      }
      else
      {
        if ( v18 > v13 - (unsigned __int64)v14 )
          goto LABEL_35;
        if ( !v18 )
          goto LABEL_11;
      }
      memcpy(v14, *(const void **)v15, *((_QWORD *)v15 + 1));
      dest = (char *)dest + v18;
      if ( v11 == v15 )
      {
LABEL_25:
        v4 = v24;
        break;
      }
LABEL_12:
      v13 = *((_QWORD *)&v30 + 1);
      v14 = (char *)dest;
      if ( v12 != v15 )
      {
        if ( dest == *((void **)&v30 + 1) )
        {
          sub_22581D0(&v28, ".", 1);
          v14 = (char *)dest;
        }
        else
        {
          *(_BYTE *)dest = 46;
          v14 = (char *)dest + 1;
          dest = (char *)dest + 1;
        }
        v13 = *((_QWORD *)&v30 + 1);
      }
      v15 -= 16;
    }
  }
  v28 = &off_2BC1EC8;
  sub_2257A60(&v28);
  if ( ptr != v27 )
    free(ptr);
  return v4;
}

