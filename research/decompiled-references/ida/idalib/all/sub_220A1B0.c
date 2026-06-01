unsigned __int64 __fastcall sub_220A1B0(__int64 a1, _BYTE *a2, unsigned __int64 a3, unsigned __int8 a4)
{
  _BYTE *v5; // r13
  unsigned __int64 result; // rax
  char *v9; // r12
  unsigned __int64 v10; // r10
  unsigned int v11; // r15d
  char *v12; // r13
  __int64 v13; // r8
  char *v14; // r14
  unsigned __int64 v15; // r13
  bool v16; // r10
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rax
  int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // cf
  __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // r15
  void *v33; // rax
  size_t v34; // rdx
  unsigned int v35; // [rsp+8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+10h] [rbp-48h]
  char v38; // [rsp+1Eh] [rbp-3Ah]
  bool v39; // [rsp+1Fh] [rbp-39h]
  bool v40; // [rsp+1Fh] [rbp-39h]

  v5 = a2;
  v38 = *a2;
  if ( ((*a2 - 43) & 0xFD) != 0 )
  {
    result = *(unsigned int *)(a1 + 8);
    v10 = a3;
    v9 = a2;
    if ( (unsigned int)result <= 0x40 )
      goto LABEL_3;
  }
  else
  {
    result = *(unsigned int *)(a1 + 8);
    v9 = a2 + 1;
    v10 = a3 - 1;
    if ( (unsigned int)result <= 0x40 )
    {
LABEL_3:
      *(_QWORD *)a1 = 0;
      goto LABEL_4;
    }
  }
  v36 = v10;
  v32 = ((unsigned __int64)(unsigned int)result + 63) >> 6;
  v33 = (void *)operator new[](8 * v32);
  v34 = 8 * v32;
  if ( (__int64)(v32 - 2) < -1 )
    v34 = 8;
  a2 = nullptr;
  result = (unsigned __int64)memset(v33, 0, v34);
  v10 = v36;
  *(_QWORD *)a1 = result;
LABEL_4:
  v11 = 4;
  if ( a4 != 16 )
  {
    v11 = 3;
    if ( a4 != 8 )
      v11 = a4 == 2;
  }
  v12 = &v5[a3];
  if ( v12 != v9 )
  {
    v13 = *(unsigned int *)(a1 + 8);
    v35 = a4 - 11;
    v14 = v12;
    v15 = v10;
    v16 = a4 == 36 || a4 == 16;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *v9;
        v22 = v21 - 48;
        if ( v16 )
        {
          v17 = v22;
          if ( v22 > 9 )
          {
            v17 = (unsigned int)(v21 - 55);
            if ( v21 - 65 > v35 )
            {
              v17 = (unsigned int)(v21 - 87);
              if ( v35 < v21 - 97 )
                v17 = 0xFFFFFFFFLL;
            }
          }
          if ( v15 <= 1 )
          {
LABEL_28:
            v19 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v13;
            goto LABEL_29;
          }
        }
        else
        {
          v17 = v22;
          if ( v22 >= a4 )
            v17 = 0xFFFFFFFFLL;
          if ( v15 <= 1 )
            goto LABEL_28;
        }
        if ( !v11 )
          break;
        if ( (unsigned int)v13 <= 0x40 )
        {
          v18 = 0;
          if ( v11 != (_DWORD)v13 )
            v18 = *(_QWORD *)a1 << v11;
          v19 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v13;
          v20 = v19 & v18;
          if ( !(_DWORD)v13 )
            v20 = 0;
          *(_QWORD *)a1 = v20;
          goto LABEL_21;
        }
        v39 = v16;
        a2 = (_BYTE *)(((unsigned __int64)(unsigned int)v13 + 63) >> 6);
        sub_220A060(*(_QWORD **)a1, (unsigned int)a2, v11);
        sub_CF8100((unsigned __int64 *)a1);
        v13 = *(unsigned int *)(a1 + 8);
        v16 = v39;
        v19 = 0xFFFFFFFFFFFFFFFFLL >> -*(_BYTE *)(a1 + 8);
LABEL_29:
        if ( (unsigned int)v13 > 0x40 )
        {
          v23 = (unsigned int)v13;
          goto LABEL_31;
        }
LABEL_21:
        *(_QWORD *)a1 += v17;
        result = 0;
        if ( !(_DWORD)v13 )
          v19 = 0;
        ++v9;
        *(_QWORD *)a1 &= v19;
        if ( v14 == v9 )
          goto LABEL_35;
      }
      v28 = *(_QWORD *)a1;
      if ( (unsigned int)v13 <= 0x40 )
        break;
      v40 = v16;
      a2 = *(_BYTE **)a1;
      sub_2209A70(v28, v28, a4, 0, (unsigned __int64)(v13 + 63) >> 6, (unsigned __int64)(v13 + 63) >> 6, 0);
      v13 = *(unsigned int *)(a1 + 8);
      v29 = *(_QWORD *)a1;
      v19 = 0xFFFFFFFFFFFFFFFFLL >> -*(_BYTE *)(a1 + 8);
      v16 = v40;
      if ( !(_DWORD)v13 )
      {
        v30 = 0xFFFFFFFFFFFFFFFFLL >> -*(_BYTE *)(a1 + 8);
LABEL_50:
        v19 = v30;
        v30 = 0;
        goto LABEL_40;
      }
      if ( (unsigned int)v13 <= 0x40 )
      {
        v30 = 0xFFFFFFFFFFFFFFFFLL >> -*(_BYTE *)(a1 + 8);
LABEL_39:
        v19 = v30;
LABEL_40:
        *(_QWORD *)a1 = v30 & v29;
        goto LABEL_29;
      }
      v23 = (unsigned int)v13;
      v31 = (unsigned int)(((unsigned __int64)(unsigned int)v13 + 63) >> 6) - 1;
      *(_QWORD *)(v29 + 8 * v31) &= v19;
LABEL_31:
      v24 = *(_QWORD *)a1;
      v25 = 0;
      a2 = (_BYTE *)((unsigned __int64)(v23 + 63) >> 6);
      do
      {
        v26 = __CFADD__(*(_QWORD *)(v24 + 8 * v25), v17);
        *(_QWORD *)(v24 + 8 * v25) += v17;
        if ( !v26 )
          break;
        ++v25;
        v17 = 1;
      }
      while ( (unsigned int)a2 > (unsigned int)v25 );
      result = *(_QWORD *)a1;
      ++v9;
      v27 = (unsigned int)((unsigned __int64)(v23 + 63) >> 6) - 1;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v27) &= v19;
      if ( v14 == v9 )
        goto LABEL_35;
    }
    v29 = v28 * a4;
    v30 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v13;
    *(_QWORD *)a1 = v29;
    if ( (_DWORD)v13 )
      goto LABEL_39;
    goto LABEL_50;
  }
LABEL_35:
  if ( v38 == 45 )
  {
    sub_C16720(a1, (__int64)a2);
    return (unsigned __int64)sub_2205900((unsigned __int64 *)a1);
  }
  return result;
}
