/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140007AD0
// Address: 0x0000000140007AD0

//----- (0000000140007AD0) ----------------------------------------------------
bool __fastcall sub_140007AD0(__int64 a1)
{
  __int64 v2; // rax
  int v3; // esi
  int v4; // ecx
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // rax
  signed int v8; // r15d
  __int64 v9; // rdx
  _QWORD *v10; // rax
  int v11; // eax
  __int64 *v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r10
  unsigned int v17; // r13d
  unsigned int i; // r12d
  char *v19; // rbx
  void **v20; // r14
  char v21; // bl
  unsigned __int64 v22; // r8
  __int64 v23; // rax
  const char *v24; // r14
  size_t v25; // rax
  size_t v26; // rbx
  size_t v27; // r13
  unsigned __int64 v28; // rdx
  __int64 v29; // r14
  const char *v30; // r14
  unsigned int v31; // r14d
  unsigned int j; // ebx
  void *Block; // [rsp+38h] [rbp-50h] BYREF
  __int64 v35; // [rsp+40h] [rbp-48h]
  __int64 v36; // [rsp+48h] [rbp-40h]
  int v37; // [rsp+50h] [rbp-38h]
  char v38; // [rsp+90h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 120);
  if ( (!v2 || !*(_QWORD *)(v2 + 16)) && *(_DWORD *)(a1 + 48) != 1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(628);
  }
  if ( *(_DWORD *)(a1 + 52) == -1 && *(_DWORD *)(a1 + 48) != 1 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(629);
  }
  v3 = 0;
  *(_QWORD *)(a1 + 272) = 0;
  v4 = *(_DWORD *)(a1 + 48);
  if ( v4 == 3 || ((v4 - 2) & 0xFFFFFFFA) == 0 )
  {
    v38 = 1;
    sub_140002EF0(a1 + 264, 4u);
    **(_DWORD **)(a1 + 264) = 0;
  }
  else
  {
    v38 = 0;
  }
  v5 = *(_DWORD *)(a1 + 48);
  if ( v5 == 1 )
    v6 = 0;
  else
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
  switch ( v5 )
  {
    case 1:
      v7 = *(_QWORD *)(a1 + 120);
      if ( v7 && *(_QWORD *)(v7 + 16) )
      {
        v8 = 0;
        goto LABEL_78;
      }
      v9 = a1 + 144;
      *(_QWORD *)(a1 + 248) = a1;
      v10 = *(_QWORD **)(a1 + 120);
      if ( v10 )
      {
        if ( v10[2] )
        {
          v8 = 0;
LABEL_26:
          sub_140002CE0(
            (struct __crt_locale_pointers *)"PDB: successfully opened %s (%d)\n",
            *(const char **)(*(_QWORD *)(a1 + 120) + 80LL),
            *(_DWORD *)(a1 + 320));
          goto LABEL_78;
        }
      }
      else
      {
        v10 = operator new(0x68u);
        if ( v10 )
        {
          *v10 = 0;
          *((_DWORD *)v10 + 2) = 1;
          v10[2] = 0;
          v10[3] = 0;
          v10[4] = 0;
          v10[5] = 0;
          v10[6] = 0;
          v10[7] = 0;
          v10[8] = 0;
          v10[9] = 0;
          v10[10] = 0;
          v10[11] = 0;
          v10[12] = 0;
          ++dword_1400CADF0;
        }
        else
        {
          v10 = nullptr;
        }
        *(_QWORD *)(a1 + 120) = v10;
        v9 = a1 + 144;
      }
      v11 = sub_140006050((__int64)v10, v9);
      v8 = v11;
      if ( v11 >= 0 )
        goto LABEL_26;
      if ( v11 == -2147467262 )
      {
        sub_140002CE0((struct __crt_locale_pointers *)"<< It appears that MS DIA SDK is not installed.\n");
        sub_140002CE0((struct __crt_locale_pointers *)"Please try installing a recent \"Microsoft Visual C++ Redistributa"
                                                      "ble Package / x64\" >>\n");
      }
LABEL_78:
      if ( v38 )
        **(_DWORD **)(a1 + 264) = v3;
      return v8 == 0;
    case 2:
      v12 = (__int64 *)sub_140005140(v6, *(_DWORD *)(a1 + 52));
      if ( (*(unsigned int (__fastcall **)(__int64 *))(*v12 + 272))(v12) )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1552);
      }
      v13 = sub_140006960((_QWORD *)a1, v12[2]);
      v8 = v13 != 0 ? 0x80004005 : 0;
      LOBYTE(v3) = v13 == 0;
      if ( v12 )
        (*(void (__fastcall **)(__int64 *, __int64))(*v12 + 288))(v12, 1);
      goto LABEL_78;
    case 3:
      v14 = sub_140005140(v6, *(_DWORD *)(a1 + 52));
      v35 = 0;
      Block = off_1400927B8;
      v36 = a1;
      v37 = 0;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL);
      v35 = v14;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, void **))(*(_QWORD *)v15 + 8LL))(
             v15,
             v14,
             *(unsigned int *)(a1 + 84),
             &Block);
      if ( v8 >= 0 )
        v3 = v37;
      Block = &off_140091F70;
      if ( v14 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 288LL))(v14, 1);
      goto LABEL_78;
    case 4:
    case 5:
      Block = nullptr;
      v35 = 0;
      v36 = 0;
      LOBYTE(v37) = 0;
      v16 = *(_QWORD *)v6;
      if ( v5 == 4 )
        v8 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, _QWORD))(v16 + 32))(
               v6,
               &Block,
               *(_QWORD *)(a1 + 56),
               *(_QWORD *)(a1 + 64));
      else
        v8 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, _QWORD, _DWORD))(v16 + 40))(
               v6,
               &Block,
               *(unsigned int *)(a1 + 72),
               *(unsigned int *)(a1 + 76),
               *(_DWORD *)(a1 + 80));
      if ( v8 >= 0 )
      {
        v17 = v35;
        sub_140002D20((_QWORD *)(a1 + 264), v35);
        for ( i = 0; i < v17; ++i )
        {
          v19 = (char *)Block + 40 * i;
          sub_140002DC0((_QWORD *)(a1 + 264), *(_QWORD *)v19 + 1LL);
          sub_140002D20((_QWORD *)(a1 + 264), *((_DWORD *)v19 + 2));
          sub_140002D20((_QWORD *)(a1 + 264), *((_DWORD *)v19 + 3));
          sub_140002D20((_QWORD *)(a1 + 264), *((_DWORD *)v19 + 4));
          sub_140002D20((_QWORD *)(a1 + 264), *((_DWORD *)v19 + 5));
          sub_140002D20((_QWORD *)(a1 + 264), *((_DWORD *)v19 + 6));
          sub_140002D20((_QWORD *)(a1 + 264), *((_DWORD *)v19 + 7));
          v20 = (void **)(a1 + 264);
          v21 = v19[32];
          v22 = *(_QWORD *)(a1 + 272) + 1LL;
          if ( v22 > *(_QWORD *)(a1 + 280) )
            *v20 = sub_14005ABE0(a1 + 264, *v20, v22, 1u);
          *((_BYTE *)*v20 + (*(_QWORD *)(a1 + 272))++) = v21;
        }
      }
      if ( Block )
      {
        v35 = 0;
        j_free(Block);
      }
      goto LABEL_78;
    case 6:
    case 7:
      v35 = 0;
      Block = off_1400927B8;
      v36 = a1;
      v37 = 0;
      v23 = *(_QWORD *)v6;
      if ( v5 == 6 )
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, void **))(v23 + 48))(
               v6,
               *(_QWORD *)(a1 + 56),
               *(_QWORD *)(a1 + 64),
               *(unsigned int *)(a1 + 84),
               &Block);
      else
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(v23 + 56))(v6, *(unsigned int *)(a1 + 72), &Block);
      if ( v8 >= 0 )
        v3 = v37;
      goto LABEL_78;
    case 8:
      Block = nullptr;
      v35 = 0;
      v36 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD, _QWORD))(*(_QWORD *)v6 + 64LL))(
             v6,
             &Block,
             0,
             *(unsigned int *)(a1 + 72));
      if ( v8 >= 0 )
      {
        if ( v35 )
        {
          v24 = pNodeName;
          if ( Block )
            v24 = (const char *)Block;
        }
        else
        {
          v24 = Str1;
        }
        v25 = strlen(v24);
        v26 = v25 + 1;
        if ( v25 != -1 )
        {
          v27 = *(_QWORD *)(a1 + 272);
          v28 = v26 + v27;
          if ( v26 + v27 < v27 )
            v28 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0(a1 + 264, v28);
          memcpy((void *)(v27 + *(_QWORD *)(a1 + 264)), v24, v26);
        }
      }
      if ( Block )
      {
        v35 = 0;
        j_free(Block);
      }
      goto LABEL_78;
    case 9:
    case 10:
      Block = nullptr;
      v35 = 0;
      v36 = 0;
      if ( v5 == 9 )
      {
        v29 = sub_140005140(v6, *(_DWORD *)(a1 + 52));
        v8 = (*(__int64 (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v6 + 72LL))(v6, &Block, v29);
        if ( v29 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 288LL))(v29, 1);
      }
      else
      {
        v30 = Str1;
        if ( *(_QWORD *)(a1 + 96) )
          v30 = *(const char **)(a1 + 88);
        v8 = (*(__int64 (__fastcall **)(__int64, void **, const char *))(*(_QWORD *)v6 + 80LL))(v6, &Block, v30);
      }
      if ( v8 >= 0 )
      {
        v31 = v35;
        sub_140002D20((_QWORD *)(a1 + 264), v35);
        for ( j = 0; j < v31; ++j )
          sub_140002D20((_QWORD *)(a1 + 264), *((_DWORD *)Block + j));
      }
      if ( Block )
      {
        v35 = 0;
        j_free(Block);
      }
      goto LABEL_78;
    default:
      if ( byte_1400CB61C )
        __debugbreak();
      sub_14005A480(630);
  }
}
// 140007B32: conditional instruction was optimized away because ecx.4!=3
// 140007BD3: conditional instruction was optimized away because rax.8!=0
// 140091F70: using guessed type void (__fastcall __noreturn *off_140091F70)();
// 1400927B8: using guessed type __int64 (__fastcall *off_1400927B8[2])();
// 1400CADF0: using guessed type int dword_1400CADF0;
// 1400CB61C: using guessed type char byte_1400CB61C;
