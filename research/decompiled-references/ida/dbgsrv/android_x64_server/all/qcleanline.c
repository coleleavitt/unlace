/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qcleanline
// Address: 0x00000000000CC3B0

//----- (00000000000CC3B0) ----------------------------------------------------
unsigned __int64 __fastcall qcleanline(__int64 a1, char a2, char a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 i; // r14
  char *v7; // rbp
  char v8; // al
  char v9; // bp
  char *v10; // r13
  char *v11; // rax
  signed __int64 v12; // rbx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rax
  char *v15; // rdi
  char v16; // r12
  char v17; // al
  unsigned __int64 v18; // rbp
  char *v19; // rdi
  char *v20; // rax
  unsigned __int64 v21; // rbx
  bool v22; // cc
  size_t v23; // rbx
  _BYTE *v24; // rax
  unsigned __int64 result; // rax
  char v26; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v27; // [rsp+10h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 < 2 )
    goto LABEL_53;
  if ( a2 || (a3 & 2) != 0 )
  {
    v7 = *(char **)a1;
    v8 = **(_BYTE **)a1;
    for ( i = 0; v8 >= 0; v8 = v7[++i] )
    {
      if ( !isspace((unsigned __int8)v8) )
        break;
    }
  }
  else
  {
    i = 0;
  }
  v9 = a3;
  if ( a2 && i < v3 - 1 )
  {
    v10 = *(char **)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + i) == a2 )
    {
      if ( !v10 )
        goto LABEL_28;
      goto LABEL_13;
    }
    if ( (v9 & 4) != 0 )
    {
      v11 = strchr(&v10[i], a2);
      if ( v11 )
      {
        v12 = v11 - v10;
        if ( v11 - v10 != -1 )
        {
          if ( v12 )
          {
            v13 = v12 + 1;
            v14 = *(_QWORD *)(a1 + 8);
            if ( v14 >= v12 + 1 )
            {
              if ( v14 != v12 + 1 )
              {
                v26 = 0;
                sub_5F0D0(a1, v12 + 1, &v26);
              }
            }
            else
            {
              if ( *(_QWORD *)(a1 + 16) >= v13 )
              {
                v15 = *(char **)a1;
              }
              else
              {
                v15 = (char *)qvector_reserve(a1, *(char **)a1, v12 + 1, 1u);
                *(_QWORD *)a1 = v15;
                v14 = *(_QWORD *)(a1 + 8);
              }
              memset(&v15[v14], 0, v13 - v14);
              *(_QWORD *)(a1 + 8) = v13;
            }
            *(_BYTE *)(*(_QWORD *)a1 + v12) = 0;
          }
          else
          {
            v10 = *(char **)a1;
            if ( *(_QWORD *)a1 )
            {
LABEL_13:
              *(_QWORD *)(a1 + 8) = 0;
              qfree(v10);
              *(_QWORD *)a1 = 0;
              *(_QWORD *)(a1 + 16) = 0;
            }
          }
        }
      }
    }
  }
LABEL_28:
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 >= 2 )
  {
    v16 = v9;
    if ( (v9 & 1) != 0 )
    {
LABEL_32:
      if ( v3 < 2 )
      {
LABEL_33:
        v17 = 0;
        goto LABEL_35;
      }
      while ( 1 )
      {
        v17 = *(_BYTE *)(*(_QWORD *)a1 + v3 - 2);
        if ( v17 < 0 )
          break;
LABEL_35:
        if ( !isspace((unsigned __int8)v17) )
          break;
        v18 = v3 - 1;
        if ( (__int64)(v3 - 1) > 1 )
        {
          v20 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v18 )
          {
            v20 = (char *)qvector_reserve(a1, *(char **)a1, v3 - 1, 1u);
            *(_QWORD *)a1 = v20;
          }
          *(_QWORD *)(a1 + 8) = v18;
          v20[v3 - 2] = 0;
LABEL_31:
          v3 = *(_QWORD *)(a1 + 8);
          goto LABEL_32;
        }
        v19 = *(char **)a1;
        if ( !*(_QWORD *)a1 )
          goto LABEL_31;
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v19);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
        v3 = *(_QWORD *)(a1 + 8);
        if ( v3 < 2 )
          goto LABEL_33;
      }
    }
    if ( (v16 & 2) != 0 && i && v3 >= 2 )
    {
      v21 = v3 - 1;
      v22 = v21 <= i;
      v23 = v21 - i;
      if ( v22 )
        v23 = 0;
      else
        memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + i), v23);
      if ( *(_QWORD *)(a1 + 16) >= v23 + 1 )
      {
        v24 = *(_BYTE **)a1;
      }
      else
      {
        v24 = qvector_reserve(a1, *(char **)a1, v23 + 1, 1u);
        *(_QWORD *)a1 = v24;
      }
      *(_QWORD *)(a1 + 8) = v23 + 1;
      v24[v23] = 0;
      v3 = *(_QWORD *)(a1 + 8);
    }
  }
LABEL_53:
  result = v3 - 1;
  if ( !v3 )
    return 0;
  return result;
}
// CC43D: conditional instruction was optimized away because rbx.8>=2u
// CC495: conditional instruction was optimized away because rbx.8>=2u
