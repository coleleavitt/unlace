/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140005BC0
// Address: 0x0000000140005BC0

//----- (0000000140005BC0) ----------------------------------------------------
__int64 __fastcall sub_140005BC0(__int64 a1, __int64 a2, int a3)
{
  double v3; // xmm2_8
  __int64 v6; // r15
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  int *v10; // r14
  int v11; // r8d
  __int64 v12; // rax
  __int64 v13; // rax
  int *v14; // rax
  const char *v15; // rcx
  __int64 v16; // rdx
  const char *v17; // r9
  const wchar_t *v18; // r8
  const wchar_t *v19; // rdx
  int *v20; // r8
  const char *v21; // rax
  void *Block; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-78h]
  _QWORD v25[3]; // [rsp+40h] [rbp-68h] BYREF
  int v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h]
  _QWORD *v28; // [rsp+68h] [rbp-40h]
  __int64 v29; // [rsp+70h] [rbp-38h]
  __int64 v30; // [rsp+78h] [rbp-30h]
  __int64 v31; // [rsp+80h] [rbp-28h]

  v6 = -1;
  if ( ((a3 - 1) & 0xFFFFFFFD) == 0 )
  {
    v6 = *(_QWORD *)(a2 + 96);
    if ( v6 == -1 )
      return 2147500037LL;
  }
  v8 = nullptr;
  LODWORD(v9) = -2147467259;
  v10 = &dword_140092834;
  if ( !a3 )
  {
    v8 = operator new(0x18u);
    if ( v8 )
    {
      v14 = &dword_140092834;
      if ( *(_QWORD *)(a1 + 40) )
        v14 = *(int **)(a1 + 32);
      v8[2] = -1;
      v8[1] = v14;
      *v8 = &off_140092150;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v11 = a3 - 2;
  if ( !v11 )
  {
    v8 = operator new(0x18u);
    if ( v8 )
    {
      v13 = *(_QWORD *)(a2 + 104);
      *((_DWORD *)v8 + 4) = 1;
      v8[1] = v13;
      *v8 = &off_140092168;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( v11 == 1 )
  {
    v8 = operator new(0x18u);
    if ( v8 )
    {
      v12 = *(_QWORD *)(a2 + 104);
      *((_DWORD *)v8 + 4) = 2;
      v8[1] = v12;
      *v8 = &off_140092168;
      goto LABEL_16;
    }
LABEL_15:
    v8 = nullptr;
  }
LABEL_16:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8) )
  {
    v15 = nullptr;
    Block = nullptr;
    v16 = 0;
    v23 = 0;
    v24 = 0;
    if ( v6 != -1 )
    {
      sub_140002FB0((__int64)&Block, " with load address %a", v3);
      v16 = v23;
      v15 = (const char *)Block;
    }
    if ( (dword_1400CB618 & 0x10000) != 0 )
    {
      v17 = Str1;
      if ( v16 )
        v17 = v15;
      v18 = (const wchar_t *)&dword_140092834;
      if ( *(_QWORD *)(a1 + 64) )
        v18 = *(const wchar_t **)(a1 + 56);
      v19 = (const wchar_t *)&dword_140092834;
      if ( *(_QWORD *)(a1 + 40) )
        v19 = *(const wchar_t **)(a1 + 32);
      sub_140002CE0((struct __crt_locale_pointers *)"PDB: Trying loadDataForExe(\"%S\", \"%S\")%s\n", v19, v18, v17);
    }
    v25[0] = off_140092180;
    v25[1] = off_1400921E0;
    v25[2] = off_140092200;
    v26 = 1;
    v27 = v6;
    v28 = v8;
    v29 = a1;
    v30 = 0;
    v31 = -1;
    v20 = &dword_140092834;
    if ( *(_QWORD *)(a1 + 64) )
      v20 = *(int **)(a1 + 56);
    if ( *(_QWORD *)(a1 + 40) )
      v10 = *(int **)(a1 + 32);
    v9 = (*(int (__fastcall **)(_QWORD, int *, int *, _QWORD *))(**(_QWORD **)(a1 + 24) + 48LL))(
           *(_QWORD *)(a1 + 24),
           v10,
           v20,
           v25);
    if ( (dword_1400CB618 & 0x10000) != 0 )
    {
      if ( (_DWORD)v9 == -2147418113 )
      {
        v21 = "Data source has already been prepared.";
      }
      else if ( (_DWORD)v9 == -2147024809 )
      {
        v21 = "Invalid parameter.";
      }
      else if ( (int)v9 < -2140340223 || (unsigned int)(v9 + 2140340223) >= 0x19 )
      {
        v21 = (const char *)sub_14005A890(v9);
      }
      else
      {
        v21 = off_140091880[v9 + 2140340223];
      }
      sub_140002CE0((struct __crt_locale_pointers *)"PDB: %s\n", v21);
    }
    if ( Block )
    {
      v23 = 0;
      j_free(Block);
    }
  }
  (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1);
  return (unsigned int)v9;
}
// 140005D13: variable 'v3' is possibly undefined
// 140091880: using guessed type char *off_140091880[25];
// 140092150: using guessed type __int64 (__fastcall *off_140092150)(void *Block);
// 140092168: using guessed type __int64 (__fastcall *off_140092168)();
// 140092180: using guessed type __int64 (__fastcall *off_140092180[4])();
// 1400921E0: using guessed type __int64 (__fastcall *off_1400921E0[3])();
// 140092200: using guessed type __int64 (__fastcall *off_140092200[3])();
// 140092834: using guessed type int dword_140092834;
// 1400CB618: using guessed type int dword_1400CB618;
