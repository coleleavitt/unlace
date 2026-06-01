/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4576C0
// Address: 0x00000000004576C0

//----- (00000000004576C0) ----------------------------------------------------
bool __fastcall sub_4576C0(unsigned __int64 **a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, double a5)
{
  char v8; // r12
  bool result; // al
  unsigned __int64 *v10; // rsi
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 *v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  __int64 (*v16)(); // rax
  char *v17; // rdi
  int v18; // r14d
  unsigned __int64 v19; // rax
  char *v20; // rdx
  void *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  unsigned __int64 *v24; // rax
  char *v25; // rax
  unsigned __int64 *v26; // rdx
  __int64 v27; // rsi
  unsigned int v28; // r15d
  __int64 (__fastcall *v29)(__int64, __int64); // rcx
  __int64 v30; // rsi
  __int64 (*v31)(); // rax
  int v32; // eax
  char *v33; // rdi
  char *v34; // rax
  int v35; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+8h] [rbp-60h]
  __int128 v37; // [rsp+10h] [rbp-58h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v8 = a4;
  if ( ((_BYTE)a1[100] & 0x10) != 0
    && (*((_DWORD *)a2 + 8) == 4 || a1 + 77 == (unsigned __int64 **)sub_4575C0(a1, *a2, *((_DWORD *)a2 + 107), a4)) )
  {
LABEL_3:
    result = 1;
    if ( (v8 & 2) == 0 )
      return ((int (__fastcall *)(unsigned __int64 **, __int64))(*a1)[21])(a1, a3) > 0;
    return result;
  }
  v10 = a1[54];
  v11 = a1[55];
  v12 = *a2;
  v13 = &v10[(_QWORD)v11];
  v14 = v10;
  if ( v10 != v13 )
  {
    while ( v12 != *v14 )
    {
      if ( v13 == ++v14 )
        goto LABEL_12;
    }
    if ( v13 != v14 )
    {
      if ( !byte_4C94E1 )
        sub_481AC0(616);
      BUG();
    }
  }
LABEL_12:
  v15 = (unsigned __int64)v11 + 1;
  if ( (unsigned __int64)a1[56] < v15 )
  {
    v25 = (char *)sub_481540((__int64)(a1 + 54), v10, v15, 8u);
    v26 = a1[55];
    a1[54] = (unsigned __int64 *)v25;
    v13 = (unsigned __int64 *)&v25[8 * (_QWORD)v26];
  }
  *v13 = v12;
  a1[55] = (unsigned __int64 *)((char *)a1[55] + 1);
  if ( (v8 & 1) != 0 )
  {
LABEL_15:
    v16 = (__int64 (*)())(*a1)[1];
    if ( v16 == sub_40BF50 )
      goto LABEL_16;
    v18 = ((__int64 (__fastcall *)(unsigned __int64 **, _QWORD))v16)(a1, *(unsigned int *)(a3 + 4));
    if ( v18 <= 0 )
    {
      v17 = (char *)a1[54];
      v19 = *a2;
      v20 = &v17[8 * (_QWORD)a1[55]];
      if ( v20 == v17 )
        return 0;
LABEL_19:
      while ( v19 != *(_QWORD *)v17 )
      {
        v17 += 8;
        if ( v20 == v17 )
          goto LABEL_22;
      }
      if ( v17 != v20 )
      {
        memmove(v17, v17 + 8, v20 - v17 - 8);
        a1[55] = (unsigned __int64 *)((char *)a1[55] - 1);
      }
      goto LABEL_22;
    }
    v27 = *((unsigned int *)a2 + 8);
    if ( (_DWORD)v27 == 4 )
      v28 = *((_DWORD *)a2 + 12);
    else
      v28 = *((_DWORD *)a2 + 107);
    v18 = ((__int64 (__fastcall *)(unsigned __int64 **, __int64, _QWORD, _QWORD, _QWORD))(*a1)[40])(
            a1,
            v27,
            *a2,
            a2[5],
            v28);
    if ( v18 <= 0 )
    {
LABEL_38:
      v30 = *(unsigned int *)(a3 + 4);
      v31 = (__int64 (*)())(*a1)[2];
      if ( v31 == sub_40BF60 )
      {
LABEL_39:
        sub_411BD0((__int64)a1, "%d: could not resume suspended threads\n", v30);
LABEL_16:
        v17 = (char *)a1[54];
        v18 = 0;
        v19 = *a2;
        v20 = &v17[8 * (_QWORD)a1[55]];
        if ( v17 != v20 )
          goto LABEL_19;
        return 0;
      }
      if ( ((int (__fastcall *)(unsigned __int64 **, __int64))v31)(a1, v30) <= 0 )
      {
        LODWORD(v30) = *(_DWORD *)(a3 + 4);
        goto LABEL_39;
      }
      v17 = (char *)a1[54];
      v19 = *a2;
      v20 = &v17[8 * (_QWORD)a1[55]];
      if ( v17 != v20 )
        goto LABEL_19;
LABEL_22:
      if ( v18 <= 0 )
        return 0;
      if ( (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) != 6 )
        return 0;
      goto LABEL_3;
    }
    v29 = (__int64 (__fastcall *)(__int64, __int64))**a1;
    if ( v29 == sub_457190 )
    {
      if ( ((int (__fastcall *)(unsigned __int64 **, _QWORD, __int64))(*a1)[27])(a1, *(unsigned int *)(a3 + 4), 1) <= 0 )
        goto LABEL_35;
      v32 = sub_457100((__int64)a1, a3);
    }
    else
    {
      v32 = ((__int64 (__fastcall *)(unsigned __int64 **, __int64, _QWORD *))v29)(a1, a3, a2 + 8);
    }
    if ( v32 > 0 )
    {
LABEL_36:
      if ( ((int (__fastcall *)(unsigned __int64 **, _QWORD, _QWORD, _QWORD, _QWORD))(*a1)[39])(
             a1,
             0,
             *((unsigned int *)a2 + 8),
             *a2,
             v28) <= 0 )
      {
        v18 = 0;
        sub_411BD0((__int64)a1, "%a: could not restore deleted bpt\n", a5);
      }
      goto LABEL_38;
    }
LABEL_35:
    v18 = 0;
    sub_411B10((__int64)a1, "%a: failed to single step\n", a5);
    goto LABEL_36;
  }
  v21 = (void *)*a2;
  a5 = 0.0;
  v22 = *(unsigned int *)(a3 + 4);
  v35 = -2;
  v23 = *((unsigned int *)a1 + 196);
  ptr = v21;
  v24 = *a1;
  v37 = 0;
  if ( ((int (__fastcall *)(unsigned __int64 **, __int64, __int64, int *, _QWORD))v24[29])(a1, v22, v23, &v35, 0) > 0 )
  {
    if ( v35 >= -1 && ptr )
    {
      *(_QWORD *)&v37 = 0;
      j__free(ptr);
    }
    goto LABEL_15;
  }
  v33 = (char *)a1[54];
  v34 = &v33[8 * (_QWORD)a1[55]];
  if ( v33 != v34 )
  {
    while ( *a2 != *(_QWORD *)v33 )
    {
      v33 += 8;
      if ( v34 == v33 )
        goto LABEL_53;
    }
    if ( v33 != v34 )
    {
      memmove(v33, v33 + 8, v34 - v33 - 8);
      a1[55] = (unsigned __int64 *)((char *)a1[55] - 1);
    }
  }
LABEL_53:
  if ( v35 < -1 || !ptr )
    return 0;
  *(_QWORD *)&v37 = 0;
  j__free(ptr);
  return 0;
}
// 40BF50: using guessed type __int64 sub_40BF50();
// 40BF60: using guessed type __int64 sub_40BF60();
// 4C94E1: using guessed type char byte_4C94E1;
