/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_66890
// Address: 0x0000000000066890

//----- (0000000000066890) ----------------------------------------------------
__int64 __fastcall sub_66890(__int64 a1, char *a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rbp
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  int v12; // r15d
  __int64 v13; // rbx
  __int64 v14; // rcx
  char *v15; // rax
  char **v16; // rax
  unsigned int v17; // edi
  __int64 i; // rsi
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ebx
  int v24; // r15d
  _QWORD *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // ebx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r12d
  __int64 (__fastcall ***v32)(_QWORD, char *); // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  __int64 *v35; // rbx
  __int64 v36; // rbp
  __int64 v37; // rcx
  char *v38; // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  _BYTE *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  char *v45; // rax
  int v46; // [rsp+8h] [rbp-40h] BYREF
  char v47; // [rsp+Eh] [rbp-3Ah] BYREF
  char v48; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v49; // [rsp+10h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  sub_64D00((_QWORD *)a1, a2, &v46);
  if ( (unsigned int)(v46 - 1) >= 3 )
  {
    if ( v46 == 5 )
    {
      v10 = sub_6D660(*(_QWORD *)(a1 + 104), a2);
      if ( !v10 )
      {
        if ( !(_BYTE)under_debugger )
          interr(272);
        BUG();
      }
      v11 = v10;
      v12 = *(_DWORD *)(v10 + 28);
      *(_BYTE *)(a1 + 212) = -16;
      v13 = *(_QWORD *)(a1 + 200);
      v14 = *(_QWORD *)(v13 + 8);
      if ( *(_QWORD *)(v13 + 16) >= (unsigned __int64)(v14 + 1) )
      {
        v15 = *(char **)v13;
      }
      else
      {
        v15 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v13, v14 + 1, 1u);
        *(_QWORD *)v13 = v15;
        v14 = *(_QWORD *)(v13 + 8);
      }
      v15[v14] = -16;
      ++*(_QWORD *)(v13 + 8);
      ++*(_DWORD *)(a1 + 208);
      sub_616A0(a1, v12);
      for ( i = v11 + 32; ; i = v11 + 32 )
      {
        v19 = sub_75750(v11, i);
        if ( v19 != -1 )
          break;
        if ( !*(_DWORD *)(v11 + 24) )
        {
          if ( a3 )
            goto LABEL_50;
          return 0;
        }
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * *(int *)(v11 + 24));
      }
      v20 = *(_QWORD **)(a1 + 104);
      v47 = 0;
      if ( v19 < 0 )
      {
        v29 = -v19;
        if ( (unsigned __int64)off_154A20 <= v29 )
          goto LABEL_50;
        v30 = 5 * v29;
        v23 = (int)off_154A28[v30 + 4];
        v22 = sub_6E3B0(off_154A28[v30 + 2], &v47);
      }
      else
      {
        if ( v19 == 0x7FFFFFFF || v20[1] <= (unsigned __int64)v19 )
          goto LABEL_50;
        v21 = *(_QWORD *)(*v20 + 8LL * v19);
        v22 = *(_DWORD *)(v21 + 24);
        v23 = *(_DWORD *)(v21 + 72);
      }
      v31 = a3 + 1;
      if ( v31 + v23 < v22 )
        goto LABEL_50;
      v6 = 0;
      if ( v22 < v31 && !v47 )
        goto LABEL_50;
      return v6;
    }
    v16 = sub_6CF60(a2);
    if ( v16 )
    {
      if ( *(_BYTE *)(a1 + 452) || (*((_BYTE *)v16 + 36) & 4) != 0 )
      {
        v6 = 0;
        sub_61950(a1, 0, (unsigned __int16)(-13107 * ((unsigned int)((_DWORD)v16 - (_DWORD)off_154A28) >> 3)));
        return v6;
      }
      set_error_string(0, *v16);
      v17 = 143;
      return (unsigned int)set_qerrno(v17);
    }
    v24 = sub_6CBE0(*(_QWORD **)(a1 + 104), a2);
    if ( v24 == -1 )
    {
      v32 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
      if ( v32 && (v33 = (**v32)(v32, a2), v33 != -1) && (v34 = v33, (get_aflags() & 0x800) != 0) )
      {
        sub_61AC0(a1, v34);
        v42 = (_BYTE *)(a1 + 212);
        v35 = (__int64 *)(a1 + 200);
      }
      else
      {
        sub_61790(a1, a2, 0);
        *(_BYTE *)(a1 + 212) = -82;
        v35 = (__int64 *)(a1 + 200);
        v36 = *(_QWORD *)(a1 + 200);
        v37 = *(_QWORD *)(v36 + 8);
        if ( *(_QWORD *)(v36 + 16) >= (unsigned __int64)(v37 + 1) )
        {
          v38 = *(char **)v36;
        }
        else
        {
          v38 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v36, v37 + 1, 1u);
          *(_QWORD *)v36 = v38;
          v37 = *(_QWORD *)(v36 + 8);
        }
        v38[v37] = -82;
        ++*(_QWORD *)(v36 + 8);
        v42 = (_BYTE *)(a1 + 212);
        ++*(_DWORD *)(a1 + 208);
      }
      *v42 = -92;
      v43 = *v35;
      v44 = *(_QWORD *)(v43 + 8);
      if ( *(_QWORD *)(v43 + 16) >= (unsigned __int64)(v44 + 1) )
      {
        v45 = *(char **)v43;
      }
      else
      {
        v45 = (char *)qvector_reserve(v43, *(char **)v43, v44 + 1, 1u);
        *(_QWORD *)v43 = v45;
        v44 = *(_QWORD *)(v43 + 8);
      }
      v45[v44] = -92;
      ++*(_QWORD *)(v43 + 8);
      goto LABEL_15;
    }
    v25 = *(_QWORD **)(a1 + 104);
    v48 = 0;
    if ( v24 < 0 )
    {
      v39 = -v24;
      if ( (unsigned __int64)off_154A20 > v39 )
      {
        v40 = 5 * v39;
        v28 = (int)off_154A28[v40 + 4];
        v27 = sub_6E3B0(off_154A28[v40 + 2], &v48);
        goto LABEL_47;
      }
    }
    else if ( v24 != 0x7FFFFFFF && v25[1] > (unsigned __int64)v24 )
    {
      v26 = *(_QWORD *)(*v25 + 8LL * v24);
      v27 = *(_DWORD *)(v26 + 24);
      v28 = *(_DWORD *)(v26 + 72);
LABEL_47:
      if ( a3 + v28 >= v27 && (v27 >= a3 || v48) )
      {
        sub_61950(a1, 0x10u, (unsigned __int16)v24);
        return 0;
      }
    }
LABEL_50:
    set_error_string(0, a2);
    v17 = 56;
    return (unsigned int)set_qerrno(v17);
  }
  v6 = sub_664D0(a1, a2, 0, 0);
  if ( !v6 )
  {
    *(_BYTE *)(a1 + 212) = -92;
    v7 = *(_QWORD *)(a1 + 200);
    v8 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 16) >= (unsigned __int64)(v8 + 1) )
    {
      v9 = *(char **)v7;
    }
    else
    {
      v9 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v7, v8 + 1, 1u);
      *(_QWORD *)v7 = v9;
      v8 = *(_QWORD *)(v7 + 8);
    }
    v9[v8] = -92;
    ++*(_QWORD *)(v7 + 8);
LABEL_15:
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
  return v6;
}
// 154A20: using guessed type int *off_154A20;
// 154A28: using guessed type char **off_154A28;
// 158B40: using guessed type __int64 under_debugger;
