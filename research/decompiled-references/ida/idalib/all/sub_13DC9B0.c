unsigned __int64 __fastcall sub_13DC9B0(int a1, int a2, char a3, __int64 a4, __int64 a5, __m128i a6, double a7)
{
  int v9; // ebx
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // r15d
  unsigned int v15; // r14d
  _DWORD *v16; // rdx
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  bool v19; // al
  _DWORD *v20; // rax
  unsigned __int64 v21; // r8
  unsigned int v22; // r9d
  __int64 v23; // rax
  _QWORD *v24; // r10
  __int64 v25; // rax
  _DWORD *v26; // rax
  unsigned __int64 v27; // r8
  __int64 v28; // rax
  _QWORD *v29; // r9
  __int64 v30; // rax
  __int64 *v31; // rdi
  __int64 v32; // rcx
  _DWORD *v33; // rax
  _DWORD *v34; // rdx
  __int64 *v35; // rdi
  __int64 v36; // rcx
  _DWORD *v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // [rsp+8h] [rbp-90h]
  unsigned int v40; // [rsp+8h] [rbp-90h]
  char v41; // [rsp+8h] [rbp-90h]
  unsigned int v42; // [rsp+10h] [rbp-88h]
  _QWORD *v43; // [rsp+10h] [rbp-88h]
  _QWORD *v44; // [rsp+18h] [rbp-80h]
  int v45; // [rsp+3Ch] [rbp-5Ch] BYREF
  unsigned __int64 v46; // [rsp+40h] [rbp-58h] BYREF
  int v47; // [rsp+48h] [rbp-50h]

  v9 = a2;
  if ( a3 )
  {
    v45 = a2;
    if ( !a2 )
      goto LABEL_3;
    if ( a2 < 0 )
    {
      v39 = a5;
      v11 = sub_13DBFA0(a2, (__int64 *)a4, a5, &v45, a6, a7);
      a5 = v39;
      if ( !v11 )
        goto LABEL_3;
    }
    v9 = (unsigned __int8)sub_13DBE60(v45, (__int64)&v46, (__int64 *)a4, a5, a6, a7) ? v45 : v45 + HIDWORD(v46);
    if ( !v9 )
      goto LABEL_3;
  }
  v12 = sub_A80750(a4, a1);
  v13 = v12;
  if ( !(_DWORD)v12 )
    goto LABEL_3;
  v14 = v12 + 1;
  v15 = v9 & 0x7FFFFFFF;
  if ( (unsigned int)(v12 + 1) <= 1 )
  {
    v16 = *(_DWORD **)(a4 + 184);
    v17 = v16;
  }
  else
  {
    if ( (int)v12 < 0 )
    {
      v21 = (unsigned int)(-2 - v12);
      v22 = v21;
      v23 = *(_QWORD *)(*(_QWORD *)(a4 + 320) + 8LL * ((unsigned int)v21 >> 6));
      if ( _bittest64(&v23, v21) )
      {
        v24 = (_QWORD *)(*(_QWORD *)(a4 + 272) + 8 * ((unsigned __int64)(int)v21 >> 5));
        v25 = *v24;
        if ( !*v24 )
        {
          v31 = (__int64 *)(*(_QWORD *)(a4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
          v32 = *v31;
          v31[10] += 768;
          v33 = (_DWORD *)((v32 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v31[1] >= (unsigned __int64)(v33 + 192) && v32 )
          {
            *v31 = (__int64)(v33 + 192);
          }
          else
          {
            v44 = v24;
            v42 = v21;
            v41 = v21;
            v33 = (_DWORD *)sub_986170((__int64)v31, 768, 768, 3, v21, (unsigned int)v21);
            v24 = v44;
            v22 = v42;
            LOBYTE(v21) = v41;
          }
          *v24 = v33;
          v34 = v33 + 192;
          do
          {
            *v33 = 0;
            v33 += 6;
            *((_OWORD *)v33 - 1) = 0;
            *((_QWORD *)v33 - 1) = 0;
          }
          while ( v33 != v34 );
          v25 = *v24;
        }
        v26 = (_DWORD *)(v25 + 24 * (v21 & 0x1F));
      }
      else
      {
        v40 = v21;
        v26 = (_DWORD *)sub_101F930(a4, v21, nullptr);
        v22 = v40;
      }
      if ( v15 < (*v26 & 0x7FFFFFFFu) )
        goto LABEL_3;
      if ( (_DWORD)v13 == -2 )
        goto LABEL_33;
      if ( *(_DWORD *)(a4 + 192) != v14 )
        goto LABEL_36;
LABEL_35:
      v19 = v15 < *(_DWORD *)(a4 + 312);
      goto LABEL_19;
    }
    v16 = *(_DWORD **)(a4 + 184);
    v17 = &v16[6 * (unsigned int)v12];
  }
  if ( v15 < (*v17 & 0x7FFFFFFFu) )
    goto LABEL_3;
  if ( v14 == *(_DWORD *)(a4 + 192) )
    goto LABEL_35;
  if ( v14 < 0 )
  {
LABEL_36:
    v27 = (unsigned int)(-2 - v14);
    v28 = *(_QWORD *)(*(_QWORD *)(a4 + 320) + 8LL * ((unsigned int)(-2 - v14) >> 6));
    if ( _bittest64(&v28, v27) )
    {
      v29 = (_QWORD *)(*(_QWORD *)(a4 + 272) + ((v27 >> 2) & 0x3FFFFFF8));
      v30 = *v29;
      if ( !*v29 )
      {
        v35 = (__int64 *)(*(_QWORD *)(a4 + 288) & 0xFFFFFFFFFFFFFFF8LL);
        v36 = *v35;
        v35[10] += 768;
        v37 = (_DWORD *)((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v35[1] >= (unsigned __int64)(v37 + 192) && v36 )
        {
          *v35 = (__int64)(v37 + 192);
        }
        else
        {
          v43 = v29;
          v37 = (_DWORD *)sub_986170((__int64)v35, 768, 768, 3, v27, (__int64)v29);
          v29 = v43;
          LOBYTE(v27) = -2 - v14;
        }
        *v29 = v37;
        v38 = v37 + 192;
        do
        {
          *v37 = 0;
          v37 += 6;
          *((_OWORD *)v37 - 1) = 0;
          *((_QWORD *)v37 - 1) = 0;
        }
        while ( v37 != v38 );
        v30 = *v29;
      }
      v18 = (_DWORD *)(v30 + 24 * (v27 & 0x1F));
    }
    else
    {
      v18 = (_DWORD *)sub_101F930(a4, v27, nullptr);
    }
    goto LABEL_18;
  }
  v18 = &v16[6 * v14];
LABEL_18:
  v19 = v15 < (*v18 & 0x7FFFFFFFu);
LABEL_19:
  if ( !v19 )
    goto LABEL_3;
  if ( (unsigned int)v14 <= 1 )
  {
    v20 = *(_DWORD **)(a4 + 184);
    goto LABEL_23;
  }
  if ( (int)v13 >= 0 )
  {
    v20 = (_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL * (unsigned int)v13);
    goto LABEL_23;
  }
  v22 = -2 - v13;
LABEL_33:
  v20 = (_DWORD *)sub_101FA20(a4, v22, nullptr);
LABEL_23:
  if ( v15 - (*v20 & 0x7FFFFFFF) >= HIDWORD(v13) )
  {
    v46 = __PAIR64__(v9, a1);
    LOBYTE(v47) = 0;
    return v46;
  }
LABEL_3:
  v46 = 0;
  LOBYTE(v47) = 0;
  return v46;
}
