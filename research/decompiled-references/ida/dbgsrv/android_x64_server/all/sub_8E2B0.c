/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8E2B0
// Address: 0x000000000008E2B0

//----- (000000000008E2B0) ----------------------------------------------------
__int64 __fastcall sub_8E2B0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  _QWORD *v17; // r10
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  int v25; // edi
  __int64 v26; // r12
  __int64 v27; // r14
  __int64 v28; // r13
  unsigned __int8 v29; // r15
  unsigned __int8 v30; // al
  _QWORD *v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rbx
  char v35; // [rsp+0h] [rbp-C8h]
  _QWORD *ptr; // [rsp+10h] [rbp-B8h]
  char v38; // [rsp+18h] [rbp-B0h]
  int c; // [rsp+1Ch] [rbp-ACh]
  __int64 v40; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+28h] [rbp-A0h]
  _QWORD *v42; // [rsp+30h] [rbp-98h]
  __int64 v43; // [rsp+38h] [rbp-90h]
  __int64 v44; // [rsp+40h] [rbp-88h]
  __int64 v45; // [rsp+48h] [rbp-80h]
  __int64 v46; // [rsp+50h] [rbp-78h]
  unsigned __int64 v47; // [rsp+58h] [rbp-70h]
  unsigned __int64 v48; // [rsp+60h] [rbp-68h]
  unsigned __int64 v49; // [rsp+70h] [rbp-58h]
  void (__fastcall __noreturn **v50)(); // [rsp+78h] [rbp-50h] BYREF
  __int128 v51; // [rsp+80h] [rbp-48h]
  unsigned __int64 v52; // [rsp+90h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  v7 = (a3 - 1) & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v7;
  result = 0xFFFFFFFFLL;
  v41 = a2;
  if ( v7 + 4096 <= a2 )
    return result;
  v9 = a1;
  v10 = a3 - v7;
  v43 = a1 + 48;
  v42 = (_QWORD *)(a1 + 4152);
  v45 = a1 + 4145;
  v11 = 0;
  while ( 1 )
  {
    v44 = v11;
    v40 = v10;
    if ( (*(_BYTE *)(v9 + 32) & 2) == 0 )
    {
      v51 = 0;
      v50 = (void (__fastcall __noreturn **)())&off_14E3E0;
      v12 = callui(86, (unsigned int)&v50, 0, (unsigned int)&callui, a5, a6, v35);
      v50 = &off_14E408;
      qsem_free(*((sem_t ***)&v51 + 1));
      if ( v12 )
        return 4294967289LL;
      v7 = *(_QWORD *)(v9 + 4144);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v9 + 16) + 288LL))(
            *(_QWORD *)(v9 + 16),
            v7,
            v43,
            4096,
            *(_QWORD *)(v9 + 40));
    v14 = *(_QWORD *)(v9 + 4144);
    if ( v13 != 4096 )
    {
      *(_QWORD *)(v9 + 4176) = v14;
      return 4294967289LL;
    }
    v15 = *(_QWORD *)(v9 + 4144);
    if ( v14 < v41 )
      v15 = v41;
    v16 = v15 - v14;
    *(_QWORD *)(v9 + 4240) = v16;
    v17 = *(_QWORD **)(v9 + 4152);
    if ( v42 != v17 )
      break;
LABEL_37:
    if ( sub_8E740((_QWORD *)v9, v40) )
      return 1;
    v32 = v40;
    if ( *(_QWORD *)(v9 + 4216) )
    {
      while ( *(_QWORD *)(v9 + 4240) < v32 )
      {
        if ( sub_8E940(v9, v32) )
          return 1;
        --v32;
      }
    }
    *(_QWORD *)(v9 + 4144) -= 4096LL;
    v11 = v44 + 1;
    if ( (unsigned __int64)(v44 + 1) >= 0x3E8 )
    {
      v33 = qtime64();
      v34 = HIDWORD(v33);
      if ( (unsigned int)(HIDWORD(v33) - *(_DWORD *)(v9 + 4232)) >= 5 )
      {
        sub_391F0(*(_QWORD *)(v9 + 16), (char *)&byte_EB522);
        *(_DWORD *)(v9 + 4232) = v34;
      }
      v11 = 0;
    }
    v7 = *(_QWORD *)(v9 + 4144);
    v10 = 4096;
    if ( v7 + 4096 <= v41 )
      return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    v18 = v17[4];
    v19 = **(_QWORD **)(v9 + 24);
    v20 = 80LL * v17[3];
    v21 = *(_QWORD *)(v19 + v20 + 8) - v18;
    v22 = 4096 - v16;
    if ( v21 < 4096 - v16 )
      v22 = *(_QWORD *)(v19 + v20 + 8) - v18;
    v23 = v21 - v22 + *(_QWORD *)(v19 + v20);
    ptr = v17;
    v47 = v16;
    v46 = v17[4];
    v48 = 4096 - v16;
    if ( !*(_QWORD *)(v19 + v20 + 32) )
    {
      v24 = 0;
      if ( !v22 )
        goto LABEL_32;
LABEL_18:
      v25 = *(_DWORD *)(a1 + 32);
      v26 = v45 - v22 - 1;
      v27 = 0;
      v28 = 0;
      v38 = v25;
      v49 = v22;
      while ( 1 )
      {
        v29 = *(_BYTE *)(v26 + v27);
        v30 = *(_BYTE *)(v23 + v27);
        if ( (v25 & 1) == 0 )
        {
          c = v30;
          v29 = toupper(v29);
          v30 = toupper(c);
          LOBYTE(v25) = v38;
          v22 = v49;
        }
        if ( !v24 )
          break;
        if ( (v25 & 0x20) != 0 )
        {
          if ( ((unsigned __int8)(v30 ^ v29) & *(_BYTE *)(v24 + v28)) != 0 )
            goto LABEL_34;
        }
        else if ( v24 == 255 )
        {
          if ( v30 != 0xFF )
            break;
        }
        else if ( v29 != v30 && *(_BYTE *)(v24 + v28) )
        {
          goto LABEL_34;
        }
LABEL_31:
        v28 = (int)++v27;
        if ( v22 <= (int)v27 )
          goto LABEL_32;
      }
      if ( v29 != v30 )
        goto LABEL_34;
      goto LABEL_31;
    }
    v24 = *(_QWORD *)(v19 + v20 + 24) + v21 - v22;
    if ( v22 )
      goto LABEL_18;
LABEL_32:
    if ( v21 <= v48 )
      break;
    if ( v47 )
    {
LABEL_34:
      v31 = (_QWORD *)*ptr;
      *(_QWORD *)ptr[1] = *ptr;
      *(_QWORD *)(*ptr + 8LL) = ptr[1];
      qfree(ptr);
      v9 = a1;
      --*(_QWORD *)(a1 + 4168);
      v17 = v31;
      if ( v42 == v31 )
        goto LABEL_37;
    }
    else
    {
      ptr[4] = v46 + 4096;
      v17 = (_QWORD *)*ptr;
      v9 = a1;
      if ( v42 == (_QWORD *)*ptr )
        goto LABEL_37;
    }
    v16 = *(_QWORD *)(v9 + 4240);
  }
  **(_QWORD **)(a1 + 8) = ptr[2];
  return 1;
}
// 8E36E: variable 'a5' is possibly undefined
// 8E36E: variable 'a6' is possibly undefined
// 8E36E: variable 'v35' is possibly undefined
// 14E3E0: using guessed type _UNKNOWN *off_14E3E0;
// 14E408: using guessed type void (__fastcall __noreturn *off_14E408)();
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
