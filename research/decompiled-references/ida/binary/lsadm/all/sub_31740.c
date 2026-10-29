__int64 __fastcall sub_31740(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  bool v4; // cf
  unsigned __int64 v5; // rdx
  unsigned __int64 v9; // rbp
  unsigned int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 i; // rax
  unsigned __int64 v17; // rdx
  bool v18; // zf
  unsigned __int64 v19; // rcx
  char *v20; // rsi
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // edi
  __int16 v24; // cx
  __int64 v25; // rax
  __int64 v26; // rax
  char *v27; // rax
  char *v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-48h] BYREF
  int v30; // [rsp+Ch] [rbp-3Ch] BYREF
  __int16 v31; // [rsp+10h] [rbp-38h]
  int v32; // [rsp+12h] [rbp-36h]
  __int16 v33; // [rsp+16h] [rbp-32h]
  unsigned __int64 v34; // [rsp+18h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  v3 = *a2;
  v4 = __CFADD__(*a2, a3);
  v5 = *a2 + a3;
  if ( v4 )
    return 0;
  v29 = *a2;
  v9 = v5;
  v10 = sub_28F80(&v29, v5);
  v11 = v29;
  if ( v3 >= v29 )
    return 0;
  v12 = a1[3];
  v13 = v10;
  if ( v10 != v12 )
  {
    v30 = 0;
    v31 = 0;
    if ( v10 >= v12 )
    {
      v20 = (char *)a1[2];
      v21 = a1[4];
      v22 = (__int64)(a1 + 2);
      if ( &v30 < (int *)v20 || &v30 >= (int *)&v20[6 * v21] )
      {
        if ( v21 >= v13 || (v27 = (char *)sub_29E60(v22, v20, v13, 6u), v12 = a1[3], a1[2] = v27, v20 = v27, v12 < v13) )
        {
          v26 = 6 * v12;
          while ( 1 )
          {
            ++v12;
            *(_DWORD *)&v20[v26] = v30;
            *(_WORD *)&v20[v26 + 4] = v31;
            v26 += 6;
            if ( v13 == v12 )
              break;
            v20 = (char *)a1[2];
          }
        }
      }
      else
      {
        v32 = 0;
        v33 = 0;
        if ( v21 >= v13 || (v28 = (char *)sub_29E60(v22, v20, v13, 6u), v12 = a1[3], a1[2] = v28, v20 = v28, v12 < v13) )
        {
          v23 = v32;
          v24 = v33;
          v25 = 6 * v12;
          while ( 1 )
          {
            ++v12;
            *(_DWORD *)&v20[v25] = v23;
            *(_WORD *)&v20[v25 + 4] = v24;
            v25 += 6;
            if ( v13 == v12 )
              break;
            v20 = (char *)a1[2];
          }
        }
      }
      a1[3] = v13;
LABEL_8:
      v14 = v11 + 6 * v13;
      v15 = -6LL - v11;
      for ( i = v11; v9 >= i; i += 6LL )
      {
        v17 = i + 6;
        if ( v9 < i + 6 )
          break;
        v18 = a1[2] + v17 + v15 == 0;
        v19 = a1[2] + v17 + v15;
        *(_DWORD *)v19 = *(_DWORD *)i;
        *(_WORD *)(v19 + 4) = *(_WORD *)(i + 4);
        if ( v18 )
          break;
        if ( v14 == v17 )
          goto LABEL_23;
      }
      return 0;
    }
    a1[3] = v10;
  }
  if ( v10 )
    goto LABEL_8;
  v14 = v11;
LABEL_23:
  *a2 = v14;
  return 1;
}

