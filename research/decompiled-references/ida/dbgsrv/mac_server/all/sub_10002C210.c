/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002C210
// Address: 0x000000010002C210

//----- (000000010002C210) ----------------------------------------------------
__int64 __fastcall sub_10002C210(__int64 a1, char *a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // r14
  void *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // r15d
  __int64 v12; // r13
  void *v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // r15d
  char **v17; // rax
  unsigned __int16 v18; // dx
  unsigned __int8 v19; // si
  int v20; // eax
  _QWORD *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // r15d
  _QWORD *v26; // rcx
  __int64 v27; // rax
  int v28; // ecx
  int v29; // ebx
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r15d
  __int64 (__fastcall ***v33)(_QWORD, char *); // rdi
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int16 v38; // r12
  int v39; // [rsp+4h] [rbp-3Ch]
  int v40; // [rsp+8h] [rbp-38h] BYREF
  char v41; // [rsp+Eh] [rbp-32h] BYREF
  char v42; // [rsp+Fh] [rbp-31h] BYREF

  sub_10002A980((__int64 *)a1, a2, &v40);
  if ( (unsigned int)(v40 - 1) >= 3 )
  {
    if ( v40 == 5 )
    {
      v39 = a3;
      v9 = sub_100034160(*(_QWORD *)(a1 + 104), a2);
      if ( !v9 )
      {
        if ( under_debugger == 1 )
          BUG();
        interr(0x110u);
        JUMPOUT(0x10002C5D0LL);
      }
      v10 = v9;
      v11 = *(_DWORD *)(v9 + 28);
      *(_BYTE *)(a1 + 212) = -16;
      v12 = *(_QWORD *)(a1 + 200);
      v13 = *(void **)v12;
      v14 = *(_QWORD *)(v12 + 8);
      if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v14 + 1) )
      {
        v13 = qvector_reserve(*(_QWORD *)(a1 + 200), v13, v14 + 1, 1u);
        *(_QWORD *)v12 = v13;
        v14 = *(_QWORD *)(v12 + 8);
      }
      *((_BYTE *)v13 + v14) = -16;
      ++*(_QWORD *)(v12 + 8);
      ++*(_DWORD *)(a1 + 208);
      sub_100026A20(a1, v11);
      v15 = sub_10003B410(v10, v10 + 32);
      if ( v15 == -1 )
      {
        v16 = v39;
        while ( *(_DWORD *)(v10 + 24) )
        {
          v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL * *(int *)(v10 + 24));
          v15 = sub_10003B410(v10, v10 + 32);
          if ( v15 != -1 )
            goto LABEL_27;
        }
        if ( !v39 )
          return 0;
      }
      else
      {
        v16 = v39;
LABEL_27:
        v26 = *(_QWORD **)(a1 + 104);
        v41 = 0;
        if ( v15 < 0 )
        {
          v30 = -v15;
          if ( qword_1000AC0E0 > v30 )
          {
            v31 = 5 * v30;
            v29 = (int)off_1000AC0E8[v31 + 4];
            v28 = sub_1000348C0(off_1000AC0E8[v31 + 2], &v41);
            goto LABEL_33;
          }
        }
        else if ( v15 != 0x7FFFFFFF && v26[1] > (unsigned __int64)(unsigned int)v15 )
        {
          v27 = *(_QWORD *)(*v26 + 8LL * (unsigned int)v15);
          v28 = *(_DWORD *)(v27 + 24);
          v29 = *(_DWORD *)(v27 + 72);
LABEL_33:
          v32 = v16 + 1;
          if ( v32 + v29 >= v28 )
          {
            result = 0;
            if ( v28 >= v32 || v41 )
              return result;
          }
        }
      }
LABEL_48:
      set_error_string(0, a2);
      return set_qerrno();
    }
    v17 = sub_100033D90(a2);
    if ( v17 )
    {
      if ( !*(_BYTE *)(a1 + 452) && (*((_BYTE *)v17 + 36) & 4) == 0 )
      {
        set_error_string(0, *v17);
        return set_qerrno();
      }
      v18 = -13107 * ((unsigned int)((_DWORD)v17 - (_DWORD)off_1000AC0E8) >> 3);
      v19 = 0;
    }
    else
    {
      v20 = sub_100033A60(*(_QWORD **)(a1 + 104), a2);
      if ( v20 == -1 )
      {
        v33 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
        if ( v33 && (v34 = (**v33)(v33, a2), v34 != -1) && (v35 = v34, (get_aflags() & 0x800) != 0) )
        {
          sub_100026E20(a1, v35);
        }
        else
        {
          sub_100026AC0(a1, a2, 0);
          sub_100026B70(a1, 174);
        }
        goto LABEL_3;
      }
      v21 = *(_QWORD **)(a1 + 104);
      v42 = 0;
      if ( v20 < 0 )
      {
        v36 = -v20;
        if ( qword_1000AC0E0 <= v36 )
          goto LABEL_48;
        v37 = 5 * v36;
        v25 = (int)off_1000AC0E8[v37 + 4];
        v38 = v20;
        v24 = sub_1000348C0(off_1000AC0E8[v37 + 2], &v42);
        LOWORD(v20) = v38;
      }
      else
      {
        if ( v20 == 0x7FFFFFFF )
          goto LABEL_48;
        v22 = v20 & 0x7FFFFFFF;
        if ( v21[1] <= v22 )
          goto LABEL_48;
        v23 = *(_QWORD *)(*v21 + 8 * v22);
        v24 = *(_DWORD *)(v23 + 24);
        v25 = *(_DWORD *)(v23 + 72);
      }
      if ( a3 + v25 < v24 || v24 < a3 && !v42 )
        goto LABEL_48;
      v18 = v20;
      v19 = 16;
    }
    sub_100026CF0(a1, v19, v18);
    return 0;
  }
  result = ((__int64 (__fastcall *)(__int64, char *, _QWORD, _QWORD))loc_10002BED0)(a1, a2, 0, 0);
  if ( !(_DWORD)result )
  {
LABEL_3:
    *(_BYTE *)(a1 + 212) = -92;
    v6 = *(_QWORD *)(a1 + 200);
    v7 = *(void **)v6;
    v8 = *(_QWORD *)(v6 + 8);
    if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
    {
      v7 = qvector_reserve(*(_QWORD *)(a1 + 200), v7, v8 + 1, 1u);
      *(_QWORD *)v6 = v7;
      v8 = *(_QWORD *)(v6 + 8);
    }
    *((_BYTE *)v7 + v8) = -92;
    ++*(_QWORD *)(v6 + 8);
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
  return result;
}
// 10002C5CC: control flows out of bounds to 10002C5D0
// 1000AC0E0: using guessed type __int64 qword_1000AC0E0;
// 1000AC0E8: using guessed type char **off_1000AC0E8;
// 1000AE23D: using guessed type char under_debugger;
