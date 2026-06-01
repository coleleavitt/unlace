unsigned __int8 __fastcall sub_19BB510(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, __int64 *a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // r14
  char *v9; // r15
  char *v10; // rbp
  __int64 v11; // r13
  unsigned __int8 v12; // al
  bool v13; // r12
  __int64 v14; // rbx
  __int64 *v15; // rbp
  unsigned __int8 v16; // al
  int v17; // edx
  __int64 v18; // rbx
  char *v19; // r13
  __int64 v20; // rax
  unsigned __int8 result; // al
  __int64 *v22; // rbx
  __int64 *v23; // rbp
  __int64 v24; // r15
  __int64 v25; // r12
  unsigned __int8 v26; // al
  int v27; // ecx
  unsigned __int8 v28; // r14
  unsigned __int8 v29; // al
  int v30; // ecx
  unsigned __int8 v31; // al
  int v32; // edx
  __int64 v33; // r13
  unsigned __int8 v34; // al
  bool v35; // r12
  __int64 v36; // rbx
  __int64 *v37; // r14
  unsigned __int8 v38; // al
  int v39; // edx
  unsigned __int8 v40; // al
  int v41; // edx
  __int64 *v42; // rbx
  __int64 *v43; // rbp
  __int64 v44; // r15
  __int64 v45; // r14
  unsigned __int8 v46; // al
  int v47; // ecx
  unsigned __int8 v48; // r12
  unsigned __int8 v49; // cl
  int v50; // eax
  __int64 *v51; // rsi
  char *v52; // rdi
  size_t v53; // rdx
  __int64 v56; // [rsp+28h] [rbp-80h]
  char *v57; // [rsp+30h] [rbp-78h]
  char *src; // [rsp+38h] [rbp-70h]
  __int64 v59; // [rsp+40h] [rbp-68h]
  __int64 v60; // [rsp+40h] [rbp-68h]
  __int64 v61; // [rsp+50h] [rbp-58h]
  bool v62; // [rsp+50h] [rbp-58h]
  bool v63; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v64; // [rsp+5Ch] [rbp-4Ch]
  unsigned int v65; // [rsp+60h] [rbp-48h]
  __int64 v66; // [rsp+60h] [rbp-48h]
  __int64 v67; // [rsp+68h] [rbp-40h]

  src = a2;
  v57 = a1;
  v7 = a7;
  if ( a5 <= a7 )
    v7 = a5;
  v56 = a4;
  if ( a4 <= v7 )
  {
    v9 = a2;
    v19 = a1;
    goto LABEL_64;
  }
  v8 = a5;
  if ( a5 > a7 )
  {
    while ( 1 )
    {
      if ( v8 >= v56 )
      {
        v10 = v57;
        v18 = v8 / 2;
        v9 = &src[8 * (v8 / 2)];
        v33 = (src - v57) >> 3;
        if ( src - v57 > 0 )
        {
          v66 = v8 / 2;
          v67 = v8;
          v60 = *(_QWORD *)v9;
          v34 = *(_BYTE *)(*(_QWORD *)v9 + 28LL) & 0x7F;
          v62 = (unsigned int)v34 - 53 > 1 && ((v34 + 52) & 0x7Fu) > 1;
          v64 = v34 - 58;
          do
          {
            if ( v62 )
            {
              while ( 1 )
              {
                v36 = v33 >> 1;
                v37 = (__int64 *)&v10[8 * (v33 >> 1)];
                v40 = *(_BYTE *)(*v37 + 28) & 0x7F;
                v41 = v40;
                if ( ((v40 + 52) & 0x7Fu) <= 1 || (unsigned int)v40 - 53 <= 1 )
                  v41 = *(_BYTE *)(sub_B72ED0(*v37) + 28) & 0x7F;
                if ( (unsigned __int8)(v64 <= 9) <= (unsigned __int8)((unsigned int)(v41 - 58) <= 9) )
                  break;
                v33 >>= 1;
                if ( !v36 )
                  goto LABEL_53;
              }
            }
            else
            {
              v35 = (*(_BYTE *)(sub_B72ED0(v60) + 28) & 0x7Fu) - 58 <= 9;
              while ( 1 )
              {
                v36 = v33 >> 1;
                v37 = (__int64 *)&v10[8 * (v33 >> 1)];
                v38 = *(_BYTE *)(*v37 + 28) & 0x7F;
                v39 = v38;
                if ( (unsigned int)v38 - 53 <= 1 || ((v38 + 52) & 0x7Fu) <= 1 )
                  v39 = *(_BYTE *)(sub_B72ED0(*v37) + 28) & 0x7F;
                if ( (unsigned __int8)((unsigned int)(v39 - 58) <= 9) >= (unsigned __int8)v35 )
                  break;
                v33 >>= 1;
                if ( !v36 )
                  goto LABEL_53;
              }
            }
            v10 = (char *)(v37 + 1);
            v33 = v33 - v36 - 1;
          }
          while ( v33 > 0 );
LABEL_53:
          v18 = v66;
          v8 = v67;
        }
        v59 = (v10 - v57) >> 3;
      }
      else
      {
        v9 = src;
        v10 = &v57[8 * (v56 / 2)];
        v59 = v56 / 2;
        if ( a3 - src > 0 )
        {
          v11 = (a3 - src) >> 3;
          v61 = *(_QWORD *)v10;
          v12 = *(_BYTE *)(*(_QWORD *)v10 + 28LL) & 0x7F;
          v63 = ((v12 + 52) & 0x7Fu) > 1 && (unsigned int)v12 - 53 > 1;
          v65 = v12 - 58;
          do
          {
            if ( v63 )
            {
              while ( 1 )
              {
                v14 = v11 >> 1;
                v15 = (__int64 *)&v9[8 * (v11 >> 1)];
                v31 = *(_BYTE *)(*v15 + 28) & 0x7F;
                v32 = v31;
                if ( ((v31 + 52) & 0x7Fu) <= 1 || (unsigned int)v31 - 53 <= 1 )
                  v32 = *(_BYTE *)(sub_B72ED0(*v15) + 28) & 0x7F;
                if ( (unsigned __int8)((unsigned int)(v32 - 58) <= 9) > (unsigned __int8)(v65 <= 9) )
                  break;
                v11 >>= 1;
                if ( !v14 )
                  goto LABEL_15;
              }
            }
            else
            {
              v13 = (*(_BYTE *)(sub_B72ED0(v61) + 28) & 0x7Fu) - 58 <= 9;
              while ( 1 )
              {
                v14 = v11 >> 1;
                v15 = (__int64 *)&v9[8 * (v11 >> 1)];
                v16 = *(_BYTE *)(*v15 + 28) & 0x7F;
                v17 = v16;
                if ( (unsigned int)v16 - 53 <= 1 || ((v16 + 52) & 0x7Fu) <= 1 )
                  v17 = *(_BYTE *)(sub_B72ED0(*v15) + 28) & 0x7F;
                if ( (unsigned __int8)v13 < (unsigned __int8)((unsigned int)(v17 - 58) <= 9) )
                  break;
                v11 >>= 1;
                if ( !v14 )
                  goto LABEL_15;
              }
            }
            v9 = (char *)(v15 + 1);
            v11 = v11 - v14 - 1;
          }
          while ( v11 > 0 );
LABEL_15:
          v10 = &v57[8 * (v56 / 2)];
        }
        v18 = (v9 - src) >> 3;
      }
      v56 -= v59;
      v8 -= v18;
      v19 = sub_19BB400(v10, src, v9, v56, v18, a6, a7);
      sub_19BB510((_DWORD)v57, (_DWORD)v10, (_DWORD)v19, v59, v18, (_DWORD)a6, a7);
      v20 = a7;
      if ( a7 > v8 )
        v20 = v8;
      if ( v56 <= v20 )
        break;
      v57 = v19;
      src = v9;
      if ( a7 >= v8 )
        goto LABEL_21;
    }
LABEL_64:
    if ( v9 != v19 )
      memmove(a6, v19, v9 - v19);
    result = (unsigned __int8)a6;
    v42 = (__int64 *)((char *)a6 + v9 - v19);
    if ( a3 != v9 && a6 != v42 )
    {
      v43 = (__int64 *)v9;
      do
      {
        v44 = *v43;
        v45 = *a6;
        v46 = *(_BYTE *)(*v43 + 28) & 0x7F;
        v47 = v46;
        if ( ((v46 + 52) & 0x7Fu) <= 1 || (unsigned int)v46 - 53 <= 1 )
          v47 = *(_BYTE *)(sub_B72ED0(*v43) + 28) & 0x7F;
        v48 = (unsigned int)(v47 - 58) <= 9;
        v49 = *(_BYTE *)(v45 + 28) & 0x7F;
        v50 = v49;
        if ( (unsigned int)v49 - 53 <= 1 || ((v49 + 52) & 0x7Fu) <= 1 )
          v50 = *(_BYTE *)(sub_B72ED0(v45) + 28) & 0x7F;
        result = (unsigned int)(v50 - 58) <= 9;
        if ( v48 > result )
        {
          *(_QWORD *)v19 = v44;
          ++v43;
          v19 += 8;
          if ( v42 == a6 )
            break;
        }
        else
        {
          result = (unsigned __int8)++a6;
          v19 += 8;
          *((_QWORD *)v19 - 1) = v45;
          if ( v42 == a6 )
            break;
        }
      }
      while ( a3 != (char *)v43 );
    }
    v51 = a6;
    if ( v42 != a6 )
    {
      v52 = v19;
      v53 = (char *)v42 - (char *)a6;
      return (unsigned __int8)memmove(v52, v51, v53);
    }
    return result;
  }
  v19 = a1;
  v9 = a2;
LABEL_21:
  if ( a3 != v9 )
    memmove(a6, v9, a3 - v9);
  result = (unsigned __int8)a6;
  v22 = (__int64 *)((char *)a6 + a3 - v9);
  if ( v19 == v9 )
  {
    v51 = a6;
    if ( a6 != v22 )
    {
      v53 = a3 - v9;
      v52 = v9;
      return (unsigned __int8)memmove(v52, v51, v53);
    }
  }
  else if ( a6 != v22 )
  {
    v23 = (__int64 *)(v9 - 8);
LABEL_26:
    --v22;
    while ( 1 )
    {
      v24 = *v22;
      v25 = *v23;
      v26 = *(_BYTE *)(*v22 + 28) & 0x7F;
      v27 = v26;
      if ( ((v26 + 52) & 0x7Fu) <= 1 || (unsigned int)v26 - 53 <= 1 )
        v27 = *(_BYTE *)(sub_B72ED0(*v22) + 28) & 0x7F;
      v28 = (unsigned int)(v27 - 58) <= 9;
      v29 = *(_BYTE *)(v25 + 28) & 0x7F;
      v30 = v29;
      if ( ((v29 + 52) & 0x7Fu) <= 1 || (unsigned int)v29 - 53 <= 1 )
        v30 = *(_BYTE *)(sub_B72ED0(v25) + 28) & 0x7F;
      a3 -= 8;
      result = (unsigned int)(v30 - 58) <= 9;
      if ( v28 <= result )
      {
        *(_QWORD *)a3 = v24;
        if ( a6 != v22 )
          goto LABEL_26;
        return result;
      }
      *(_QWORD *)a3 = v25;
      if ( v23 == (__int64 *)v19 )
        break;
      --v23;
    }
    v51 = a6;
    if ( a6 == v22 + 1 )
      return result;
    v53 = (char *)(v22 + 1) - (char *)a6;
    v52 = &a3[-v53];
    return (unsigned __int8)memmove(v52, v51, v53);
  }
  return result;
}
