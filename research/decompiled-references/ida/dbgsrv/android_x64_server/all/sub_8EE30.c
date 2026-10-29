/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EE30
// Address: 0x000000000008EE30

//----- (000000000008EE30) ----------------------------------------------------
__int64 __fastcall sub_8EE30(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *v17; // rbp
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 v25; // rbp
  int v26; // edi
  __int64 v27; // rbx
  __int64 v28; // r13
  unsigned __int8 v29; // r15
  unsigned __int8 v30; // al
  int v31; // ebp
  _QWORD *v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rax
  __int64 v35; // rbx
  unsigned __int64 v36; // rbp
  char v37; // [rsp+0h] [rbp-B8h]
  _QWORD *ptr; // [rsp+8h] [rbp-B0h]
  char v39; // [rsp+14h] [rbp-A4h]
  __int64 v40; // [rsp+18h] [rbp-A0h]
  _QWORD *v42; // [rsp+28h] [rbp-90h]
  __int64 v44; // [rsp+38h] [rbp-80h]
  __int64 v45; // [rsp+40h] [rbp-78h]
  __int64 v46; // [rsp+48h] [rbp-70h]
  unsigned __int64 v47; // [rsp+50h] [rbp-68h]
  unsigned __int64 v48; // [rsp+58h] [rbp-60h]
  unsigned __int64 v49; // [rsp+60h] [rbp-58h]
  void (__fastcall __noreturn **v50)(); // [rsp+68h] [rbp-50h] BYREF
  __int128 v51; // [rsp+70h] [rbp-48h]
  unsigned __int64 v52; // [rsp+80h] [rbp-38h]

  v52 = __readfsqword(0x28u);
  v7 = a2 & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v7;
  result = 0xFFFFFFFFLL;
  if ( v7 >= a3 )
    return result;
  v9 = a1;
  v10 = a2 - v7;
  v44 = a1 + 48;
  v42 = (_QWORD *)(a1 + 4152);
  v11 = 0;
  while ( 1 )
  {
    v45 = v11;
    v40 = v10;
    if ( (*(_BYTE *)(v9 + 32) & 2) == 0 )
    {
      v51 = 0;
      v50 = (void (__fastcall __noreturn **)())&off_14E3E0;
      v12 = callui(86, (unsigned int)&v50, 0, (unsigned int)&callui, a5, a6, v37);
      v50 = &off_14E408;
      qsem_free(*((sem_t ***)&v51 + 1));
      if ( v12 )
        return 4294967289LL;
      v9 = a1;
      v7 = *(_QWORD *)(a1 + 4144);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v9 + 16) + 288LL))(
            *(_QWORD *)(v9 + 16),
            v7,
            v44,
            4096,
            *(_QWORD *)(v9 + 40));
    v14 = *(_QWORD *)(v9 + 4144);
    if ( v13 != 4096 )
    {
      *(_QWORD *)(v9 + 4176) = v14;
      return 4294967289LL;
    }
    v15 = a3 - v14;
    if ( a3 - v14 >= 0x1000 )
      v15 = 4096;
    *(_QWORD *)(v9 + 4240) = v15;
    v16 = v9;
    v17 = *(_QWORD **)(v9 + 4152);
    if ( v42 != v17 )
      break;
LABEL_37:
    v9 = v16;
    if ( sub_8F260(v16, v40) )
      return 1;
    v33 = v40;
    if ( *(_QWORD *)(v9 + 4216) )
    {
      while ( v33 < *(_QWORD *)(v9 + 4240) )
      {
        if ( sub_8F430(v9, v33) )
          return 1;
        ++v33;
      }
    }
    *(_QWORD *)(v9 + 4144) += 4096LL;
    v11 = v45 + 1;
    if ( (unsigned __int64)(v45 + 1) >= 0x3E8 )
    {
      v34 = qtime64();
      v35 = v9;
      v36 = HIDWORD(v34);
      if ( (unsigned int)(HIDWORD(v34) - *(_DWORD *)(v35 + 4232)) >= 5 )
      {
        sub_391F0(*(_QWORD *)(v35 + 16), (char *)&byte_EB522);
        *(_DWORD *)(v35 + 4232) = v36;
      }
      v11 = 0;
      v9 = v35;
    }
    v7 = *(_QWORD *)(v9 + 4144);
    v10 = 0;
    if ( v7 >= a3 )
      return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    v18 = v16;
    v19 = v17[4];
    v20 = **(_QWORD **)(v16 + 24);
    v21 = 80LL * v17[3];
    v22 = v15;
    if ( *(_QWORD *)(v20 + v21 + 8) - v19 < v15 )
      v22 = *(_QWORD *)(v20 + v21 + 8) - v19;
    v23 = v19 + *(_QWORD *)(v20 + v21);
    ptr = v17;
    v48 = v15;
    v46 = v17[4];
    v47 = *(_QWORD *)(v20 + v21 + 8) - v19;
    if ( *(_QWORD *)(v20 + v21 + 32) )
      v24 = v19 + *(_QWORD *)(v20 + v21 + 24);
    else
      v24 = 0;
    v25 = v18;
    if ( v22 )
    {
      v26 = *(_DWORD *)(v18 + 32);
      v27 = 0;
      v28 = 0;
      v49 = v22;
      v39 = v26;
      while ( 1 )
      {
        v29 = *(_BYTE *)(v25 + v27 + 48);
        v30 = *(_BYTE *)(v23 + v27);
        if ( (v26 & 1) == 0 )
        {
          v31 = v30;
          v29 = toupper(v29);
          v26 = v31;
          v25 = a1;
          v30 = toupper(v26);
          LOBYTE(v26) = v39;
          v22 = v49;
        }
        if ( !v24 )
          break;
        if ( (v26 & 0x20) != 0 )
        {
          if ( ((unsigned __int8)(v30 ^ v29) & *(_BYTE *)(v24 + v28)) != 0 )
            goto LABEL_36;
        }
        else if ( v24 == 255 )
        {
          if ( v30 != 0xFF )
            break;
        }
        else if ( v29 != v30 && *(_BYTE *)(v24 + v28) )
        {
          goto LABEL_36;
        }
LABEL_31:
        v28 = (int)++v27;
        if ( v22 <= (int)v27 )
          goto LABEL_32;
      }
      if ( v29 != v30 )
        goto LABEL_36;
      goto LABEL_31;
    }
LABEL_32:
    if ( v47 <= v48 )
      break;
    if ( v48 == 4096 )
    {
      v16 = v25;
      ptr[4] = v46 + 4096;
      v17 = (_QWORD *)*ptr;
      if ( v42 == (_QWORD *)*ptr )
        goto LABEL_37;
    }
    else
    {
LABEL_36:
      v32 = (_QWORD *)*ptr;
      *(_QWORD *)ptr[1] = *ptr;
      *(_QWORD *)(*ptr + 8LL) = ptr[1];
      qfree(ptr);
      v16 = v25;
      --*(_QWORD *)(v25 + 4168);
      v17 = v32;
      if ( v42 == v32 )
        goto LABEL_37;
    }
    v15 = *(_QWORD *)(v16 + 4240);
  }
  **(_QWORD **)(v25 + 8) = ptr[2];
  return 1;
}
// 8EED4: variable 'a5' is possibly undefined
// 8EED4: variable 'a6' is possibly undefined
// 8EED4: variable 'v37' is possibly undefined
// 14E3E0: using guessed type _UNKNOWN *off_14E3E0;
// 14E408: using guessed type void (__fastcall __noreturn *off_14E408)();
// 155620: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
