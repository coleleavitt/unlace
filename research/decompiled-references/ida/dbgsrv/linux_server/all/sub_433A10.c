/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433A10
// Address: 0x0000000000433A10

//----- (0000000000433A10) ----------------------------------------------------
__int64 __fastcall sub_433A10(__int64 a1, char *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  void **v8; // r14
  int v9; // r15d
  _BYTE *v10; // rax
  void *v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  void **v17; // r12
  _BYTE *v18; // rax
  void *v19; // rsi
  int v20; // ebx
  __int64 (__fastcall ***v21)(_QWORD, char *); // rdi
  unsigned __int64 v22; // rbx
  void **v23; // rbx
  _BYTE *v24; // rax
  void *v25; // rsi
  void **v26; // rbx
  _BYTE *v27; // rax
  void *v28; // rsi
  void *v29; // rax
  void *v30; // rax
  void *v31; // rax
  void *v32; // rax
  unsigned int v33; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v34; // [rsp+8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  sub_432EE0((_QWORD *)a1, a2, (int *)&v33);
  if ( v33 <= 3 )
  {
    if ( v33 )
    {
      result = sub_433670(a1, a2, 0, 0);
      if ( (_DWORD)result )
        return result;
      goto LABEL_34;
    }
LABEL_12:
    v15 = sub_439950(a2);
    if ( v15 )
    {
      if ( *(_BYTE *)(a1 + 452) || (*(_BYTE *)(v15 + 36) & 4) != 0 )
      {
        v16 = 0xCCCCCCCCCCCCCCCDLL * ((v15 - qword_4C56E0[1]) >> 3);
        if ( (unsigned __int16)v16 <= 0xFu )
        {
          v17 = *(void ***)(a1 + 200);
          *(_BYTE *)(a1 + 212) = v16;
          v18 = v17[1];
          v19 = *v17;
          if ( v17[2] < v18 + 1 )
          {
            v30 = sub_481540((__int64)v17, v19, (unsigned __int64)(v18 + 1), 1u);
            *v17 = v30;
            v19 = v30;
            v18 = v17[1];
          }
          v18[(_QWORD)v19] = v16;
          v17[1] = (char *)v17[1] + 1;
          ++*(_DWORD *)(a1 + 208);
          return 0;
        }
        else
        {
          sub_431490(a1, 0, v16);
          return 0;
        }
      }
      else
      {
        sub_479F30(0, *(const char **)v15);
        return sub_479EB0(0x8Fu);
      }
    }
    v20 = sub_439670(*(__int64 **)(a1 + 104), a2);
    if ( v20 != -1 )
    {
      if ( sub_433960(*(_QWORD **)(a1 + 104), v20, a3) )
      {
        sub_4325D0(a1, 0x10u, v20);
        return 0;
      }
      else
      {
LABEL_11:
        sub_479F30(0, a2);
        return sub_479EB0(0x38u);
      }
    }
    v21 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
    if ( v21 && (v22 = (**v21)(v21, a2), v22 != -1) && (sub_475DF0() & 0x800) != 0 )
    {
      sub_432650(a1, v22);
    }
    else
    {
      sub_432270(a1, a2, 0);
      v23 = *(void ***)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -82;
      v24 = v23[1];
      v25 = *v23;
      if ( v23[2] < v24 + 1 )
      {
        v32 = sub_481540((__int64)v23, v25, (unsigned __int64)(v24 + 1), 1u);
        *v23 = v32;
        v25 = v32;
        v24 = v23[1];
      }
      v24[(_QWORD)v25] = -82;
      v23[1] = (char *)v23[1] + 1;
      ++*(_DWORD *)(a1 + 208);
    }
LABEL_34:
    v26 = *(void ***)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -92;
    v27 = v26[1];
    v28 = *v26;
    if ( v26[2] < v27 + 1 )
    {
      v31 = sub_481540((__int64)v26, v28, (unsigned __int64)(v27 + 1), 1u);
      *v26 = v31;
      v28 = v31;
      v27 = v26[1];
    }
    v27[(_QWORD)v28] = -92;
    v26[1] = (char *)v26[1] + 1;
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
  if ( v33 != 5 )
    goto LABEL_12;
  v6 = sub_439CF0(*(_QWORD *)(a1 + 104), a2);
  v7 = v6;
  if ( !v6 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(272);
    BUG();
  }
  v8 = *(void ***)(a1 + 200);
  v9 = *(_DWORD *)(v6 + 52);
  *(_BYTE *)(a1 + 212) = -16;
  v10 = v8[1];
  v11 = *v8;
  if ( v8[2] < v10 + 1 )
  {
    v29 = sub_481540((__int64)v8, v11, (unsigned __int64)(v10 + 1), 1u);
    *v8 = v29;
    v11 = v29;
    v10 = v8[1];
  }
  v10[(_QWORD)v11] = -16;
  v8[1] = (char *)v8[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  sub_4313E0(a1, v9);
  while ( 1 )
  {
    v13 = sub_43D490(v7, v7 + 56);
    if ( v13 != -1 )
    {
      if ( sub_433960(*(_QWORD **)(a1 + 104), v13, a3 + 1) )
        return 0;
      goto LABEL_11;
    }
    v12 = *(int *)(v7 + 48);
    if ( !(_DWORD)v12 )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v12);
  }
  if ( a3 )
    goto LABEL_11;
  return 0;
}
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
// 4C94E1: using guessed type char byte_4C94E1;
