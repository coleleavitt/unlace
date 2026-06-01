/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475E80
// Address: 0x0000000000475E80

//----- (0000000000475E80) ----------------------------------------------------
unsigned __int64 __fastcall sub_475E80(__int64 a1, const char *a2, signed __int64 a3, __int64 a4)
{
  signed __int64 v4; // r8
  void **v6; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r15
  unsigned int v11; // eax
  unsigned __int8 *v12; // rax
  char v13; // dl
  char v14; // al
  size_t v15; // r12
  char *v16; // rbx
  char *v17; // rax
  size_t v18; // r10
  unsigned __int64 v19; // rdx
  void *v20; // rsi
  void *v22; // rax
  void *v23; // rax
  unsigned __int8 *v24; // rbp
  int v25; // ecx
  signed __int64 v26; // [rsp+0h] [rbp-88h]
  __int64 v27; // [rsp+8h] [rbp-80h]
  unsigned __int64 v28; // [rsp+10h] [rbp-78h]
  void **v29; // [rsp+10h] [rbp-78h]
  size_t v30; // [rsp+18h] [rbp-70h]
  unsigned __int8 *v31; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v32[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v4 = a3;
  v6 = (void **)a1;
  v33 = __readfsqword(0x28u);
  if ( a3 == -1 )
    v4 = strlen(a2);
  v8 = a4;
  if ( v4 >= a4 )
    v8 = v4;
  v9 = v8 + 16;
  if ( *(_QWORD *)(a1 + 16) < v9 )
  {
    v26 = v4;
    v23 = sub_481540(a1, *(void **)a1, v9, 1u);
    v4 = v26;
    *(_QWORD *)a1 = v23;
  }
  v31 = (unsigned __int8 *)a2;
  if ( v4 > 0 )
  {
    v27 = v4;
    v10 = (unsigned __int64)a2;
    do
    {
      v11 = sub_4796E0(&v31);
      if ( v11 - 1 > 0xFFFFFFFD )
      {
        v12 = v31++;
        v11 = *v12;
      }
      if ( v11 > 0x22 )
      {
        v13 = 92;
        if ( v11 == 92 )
        {
LABEL_25:
          v32[1] = v13;
          v15 = 2;
          v10 = (unsigned __int64)v32;
          v32[0] = 92;
          if ( a4 > 0 )
          {
LABEL_17:
            v16 = (char *)v6[1];
            v17 = v16;
            if ( v16 )
              goto LABEL_18;
            if ( v15 >= a4 )
              return v33 - __readfsqword(0x28u);
            goto LABEL_34;
          }
          goto LABEL_26;
        }
      }
      else if ( v11 > 6 )
      {
        switch ( v11 )
        {
          case 7u:
            v13 = 97;
            goto LABEL_25;
          case 8u:
            v13 = 98;
            goto LABEL_25;
          case 9u:
            v13 = 116;
            goto LABEL_25;
          case 0xAu:
            v13 = 110;
            goto LABEL_25;
          case 0xBu:
            v13 = 118;
            goto LABEL_25;
          case 0xCu:
            v13 = 102;
            goto LABEL_25;
          case 0xDu:
            v13 = 114;
            goto LABEL_25;
          case 0x22u:
            v13 = 34;
            goto LABEL_25;
          default:
            break;
        }
      }
      v14 = sub_476400(v11);
      v15 = (size_t)&v31[-v10];
      if ( !v14 )
      {
        v15 = 0;
        if ( v10 >= (unsigned __int64)v31 )
        {
          if ( a4 > 0 )
          {
            v16 = (char *)v6[1];
            v17 = v16;
            if ( v16 )
            {
              v15 = 0;
              v10 = (unsigned __int64)v32;
LABEL_18:
              if ( (unsigned __int64)&v17[v15 - 1] >= a4 )
                return v33 - __readfsqword(0x28u);
              v16 = v17;
LABEL_20:
              --v16;
              v18 = (size_t)&v16[v15];
              v19 = (unsigned __int64)&v16[v15 + 1];
            }
            else
            {
              v18 = 0;
              v15 = 0;
              v19 = 1;
              v10 = (unsigned __int64)v32;
            }
            v20 = *v6;
            if ( (unsigned __int64)v6[2] < v19 )
              goto LABEL_35;
            goto LABEL_22;
          }
          v15 = 0;
          v10 = (unsigned __int64)v32;
          goto LABEL_26;
        }
        v29 = v6;
        v24 = (unsigned __int8 *)v10;
        v10 = (unsigned __int64)v32;
        do
        {
          v25 = *v24++;
          v15 += (int)sub_485490(&v32[v15], 16 - v15, "\\x%02X", v25);
        }
        while ( v24 < v31 );
        v6 = v29;
      }
      if ( a4 > 0 )
        goto LABEL_17;
LABEL_26:
      v16 = (char *)v6[1];
      if ( v16 )
        goto LABEL_20;
LABEL_34:
      v20 = *v6;
      v19 = v15 + 1;
      v18 = v15;
      if ( (unsigned __int64)v6[2] < v15 + 1 )
      {
LABEL_35:
        v30 = v18;
        v28 = v19;
        v22 = sub_481540((__int64)v6, v20, v19, 1u);
        v18 = v30;
        v19 = v28;
        *v6 = v22;
        v20 = v22;
      }
LABEL_22:
      v6[1] = (void *)v19;
      *((_BYTE *)v20 + v18) = 0;
      memmove(&v16[(_QWORD)*v6], (const void *)v10, v15);
      v10 = (unsigned __int64)v31;
    }
    while ( v27 > v31 - (unsigned __int8 *)a2 );
  }
  return v33 - __readfsqword(0x28u);
}
