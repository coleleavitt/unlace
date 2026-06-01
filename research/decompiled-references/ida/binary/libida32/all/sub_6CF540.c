unsigned __int64 __fastcall sub_6CF540(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v13; // rax
  int *v14; // rax
  __int64 v15; // rdx
  int *v16; // rcx
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r12
  __int64 v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  int *v25; // rdi
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // esi
  __int64 v31; // rax
  char v32; // dl
  __int64 *v33; // rdi
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  char v37; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v38; // [rsp+8h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  if ( a3 )
    return v38 - __readfsqword(0x28u);
  v7 = a1[4];
  v37 = 0;
  v10 = *(_QWORD **)(*(_QWORD *)(v7 + 56) + 72LL);
  if ( (unsigned int)(a2 + 1) <= 1 )
    return v38 - __readfsqword(0x28u);
  if ( a2 < 0 )
  {
    v19 = (unsigned int)(-2 - a2);
    v20 = *(_QWORD *)(v10[40] + 8LL * ((unsigned int)(-2 - a2) >> 6));
    if ( _bittest64(&v20, v19) )
    {
      v21 = (_QWORD *)(v10[34] + 8 * ((unsigned __int64)(int)v19 >> 5));
      if ( *v21 )
      {
        v11 = *v21 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
        goto LABEL_6;
      }
      v33 = (__int64 *)(v10[36] & 0xFFFFFFFFFFFFFFF8LL);
      v34 = *v33;
      v33[10] += 768;
      v35 = (_QWORD *)((v34 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v33[1] >= (unsigned __int64)(v35 + 96) && v34 )
      {
        *v33 = (__int64)(v35 + 96);
        v32 = 0;
      }
      else
      {
        v35 = (_QWORD *)sub_6CF090((__int64)v33, 768, 3, v34, a5, a6);
        v32 = v37;
      }
      *v21 = v35;
      v36 = v35 + 96;
      do
      {
        *v35 = 0;
        v35 += 3;
        *((_OWORD *)v35 - 1) = 0;
      }
      while ( v36 != v35 );
      v11 = *v21 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
    }
    else
    {
      v11 = sub_FFBBF0(v10, (unsigned int)v19, &v37);
      v32 = v37;
    }
    if ( v32 || !v11 )
      return v38 - __readfsqword(0x28u);
    goto LABEL_6;
  }
  v11 = v10[23] + 24LL * a2;
LABEL_6:
  if ( *(char *)(v11 + 3) >= 0 )
  {
    for ( i = *(_QWORD *)((*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8); i; i = v13 & 0xFFFFFFFFFFFFFFF8LL )
    {
      v13 = *(_QWORD *)(i + 8);
      if ( !v13 )
        break;
      if ( (v13 & 4) == 0 )
      {
        if ( v13 > 7 )
        {
          v14 = (int *)a1[1];
          v15 = a1[2];
          v16 = &v14[v15];
          if ( v14 == v16 )
            goto LABEL_16;
          while ( *v14 != a2 )
          {
            if ( v16 == ++v14 )
              goto LABEL_16;
          }
          if ( v14 == v16 )
          {
LABEL_16:
            v17 = a1[3];
            v18 = v15 + 1;
            if ( v17 < v18 )
            {
              v22 = qvector_reserve(a1 + 1, 0, v18, 4);
              v23 = a1[2];
              v24 = a1[3];
              a1[3] = v17;
              v25 = (int *)a1[1];
              v26 = v22;
              v27 = v23 - 1;
              if ( v27 >= 0 )
              {
                v28 = v22;
                do
                {
                  v29 = *v25;
                  v28 += 4;
                  ++v25;
                  *(_DWORD *)(v28 - 4) = v29;
                }
                while ( v27-- != 0 );
                v25 = (int *)a1[1];
              }
              qfree(v25);
              v31 = a1[2];
              a1[1] = v26;
              a1[3] = v24;
              v16 = (int *)(v26 + 4 * v31);
            }
            *v16 = a2;
            ++a1[2];
          }
        }
        return v38 - __readfsqword(0x28u);
      }
    }
  }
  return v38 - __readfsqword(0x28u);
}

