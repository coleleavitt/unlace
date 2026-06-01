/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66D00
// Address: 0x0000000000066D00

//----- (0000000000066D00) ----------------------------------------------------
__int64 __fastcall sub_66D00(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  const char *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rsi
  char v11; // r12
  __int64 v12; // rax
  const char *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rcx
  char *v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rax
  size_t v19; // rdx
  const char *v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rcx
  _BYTE *v23; // rax
  __int64 v24; // rax
  size_t v25; // rbp
  __int64 v26; // rbp
  __int64 v27; // rax
  char *v28; // rsi
  __int64 v30; // rax
  size_t v31; // rdx
  const char *v32; // rsi
  __int64 v33; // rcx
  _BYTE *v34; // rax
  __int64 v35; // rax
  size_t v36; // rbp
  char v37; // bp
  __int64 v38; // rcx
  _BYTE *v39; // rax
  __int64 v40; // rcx
  _BYTE *v41; // rax

  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v12 = *(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)(v12 + 8) )
        v13 = *(const char **)v12;
      else
        v13 = s1;
      return sub_664D0(a1, v13, a3, a4);
    case 2:
      *(_BYTE *)(a1 + 212) = -86;
      v14 = *(_QWORD *)(a1 + 200);
      v15 = *(_QWORD *)(v14 + 8);
      if ( *(_QWORD *)(v14 + 16) >= (unsigned __int64)(v15 + 1) )
      {
        v16 = *(char **)v14;
      }
      else
      {
        v16 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v14, v15 + 1, 1u);
        *(_QWORD *)v14 = v16;
        v15 = *(_QWORD *)(v14 + 8);
      }
      v16[v15] = -86;
      ++*(_QWORD *)(v14 + 8);
      ++*(_DWORD *)(a1 + 208);
      v24 = *(_QWORD *)(a2 + 8);
      v25 = *(_QWORD *)(v24 + 8);
      sub_6BDC0(*(_QWORD **)(a1 + 200), *(const void **)v24, v25);
      *(_DWORD *)(a1 + 208) += v25;
      v26 = *(_QWORD *)(a2 + 16);
      if ( *(_DWORD *)v26 == 5 )
      {
        v17 = sub_66D00(a1, *(_QWORD *)(v26 + 16), 0, 0);
        v30 = *(_QWORD *)(v26 + 8);
        v31 = *(_QWORD *)(v30 + 8);
        if ( v31 )
        {
          --v31;
          v32 = *(const char **)v30;
        }
        else
        {
          v32 = s1;
        }
        sub_61790(a1, v32, v31);
        *(_BYTE *)(a1 + 212) = -9;
        v21 = *(_QWORD *)(a1 + 200);
        v40 = *(_QWORD *)(v21 + 8);
        if ( *(_QWORD *)(v21 + 16) >= (unsigned __int64)(v40 + 1) )
        {
          *(_BYTE *)(*(_QWORD *)v21 + v40) = -9;
        }
        else
        {
          v41 = qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v21, v40 + 1, 1u);
          *(_QWORD *)v21 = v41;
          v41[*(_QWORD *)(v21 + 8)] = -9;
        }
        goto LABEL_45;
      }
      if ( *(_DWORD *)v26 != 1 )
      {
        v17 = sub_66D00(a1, *(_QWORD *)(a2 + 16), 0, 0);
        *(_BYTE *)(a1 + 212) = -92;
        v21 = *(_QWORD *)(a1 + 200);
        v33 = *(_QWORD *)(v21 + 8);
        if ( *(_QWORD *)(v21 + 16) >= (unsigned __int64)(v33 + 1) )
        {
          v34 = *(_BYTE **)v21;
        }
        else
        {
          v34 = qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v21, v33 + 1, 1u);
          *(_QWORD *)v21 = v34;
          v33 = *(_QWORD *)(v21 + 8);
        }
        v34[v33] = -92;
LABEL_45:
        ++*(_QWORD *)(v21 + 8);
        ++*(_DWORD *)(a1 + 208);
        return v17;
      }
      v27 = *(_QWORD *)(v26 + 16);
      if ( *(_QWORD *)(v27 + 8) )
        v28 = *(char **)v27;
      else
        v28 = (char *)s1;
      return sub_66890(a1, v28, *(_DWORD *)(a2 + 24));
    case 3:
    case 4:
      v6 = *(_QWORD *)(a2 + 16);
      if ( a3 && *(_DWORD *)v6 == 1 )
      {
        v7 = *(_QWORD *)(v6 + 16);
        if ( *(_QWORD *)(v7 + 8) )
          v8 = *(const char **)v7;
        else
          v8 = s1;
        v9 = sub_67080(a1, v8);
      }
      else
      {
        v9 = sub_66D00(a1, v6, 0, 0);
      }
      v17 = v9;
      v35 = *(_QWORD *)(a2 + 8);
      v36 = *(_QWORD *)(v35 + 8);
      sub_6BDC0(*(_QWORD **)(a1 + 200), *(const void **)v35, v36);
      *(_DWORD *)(a1 + 208) += v36;
      if ( *(_DWORD *)a2 == 3 )
        v37 = -4 - a3;
      else
        v37 = a3 | 0xFE;
      *(_BYTE *)(a1 + 212) = v37;
      v21 = *(_QWORD *)(a1 + 200);
      v38 = *(_QWORD *)(v21 + 8);
      if ( *(_QWORD *)(v21 + 16) >= (unsigned __int64)(v38 + 1) )
      {
        *(_BYTE *)(*(_QWORD *)v21 + v38) = v37;
      }
      else
      {
        v39 = qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v21, v38 + 1, 1u);
        *(_QWORD *)v21 = v39;
        v39[*(_QWORD *)(v21 + 8)] = v37;
      }
      goto LABEL_45;
    case 5:
      v10 = *(_QWORD *)(a2 + 16);
      if ( a4 )
        v11 = -10 - (a4 > 0);
      else
        v11 = a3 | 0xF2;
      v17 = sub_66D00(a1, v10, 0, 0);
      v18 = *(_QWORD *)(a2 + 8);
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
      {
        --v19;
        v20 = *(const char **)v18;
      }
      else
      {
        v20 = s1;
      }
      sub_61790(a1, v20, v19);
      *(_BYTE *)(a1 + 212) = v11;
      v21 = *(_QWORD *)(a1 + 200);
      v22 = *(_QWORD *)(v21 + 8);
      if ( *(_QWORD *)(v21 + 16) >= (unsigned __int64)(v22 + 1) )
      {
        *(_BYTE *)(*(_QWORD *)v21 + v22) = v11;
      }
      else
      {
        v23 = qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v21, v22 + 1, 1u);
        *(_QWORD *)v21 = v23;
        v23[*(_QWORD *)(v21 + 8)] = v11;
      }
      goto LABEL_45;
    default:
      if ( !(_BYTE)under_debugger )
        interr(273);
      BUG();
  }
}
// 158B40: using guessed type __int64 under_debugger;
