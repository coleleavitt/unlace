__int64 __fastcall sub_676E40(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, const char *a5, int a6)
{
  const char *v9; // r14
  int v11; // eax
  int v12; // eax
  unsigned __int64 *v13; // rax
  void **p_ptr; // rsi
  char *v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  char v20; // al
  int v21; // edi
  char *v22; // rax
  unsigned __int64 v23; // r10
  void *v24; // r9
  char *v26; // rdx
  int v27; // eax
  int v28; // eax
  __int16 v29; // ax
  int v31; // [rsp+20h] [rbp-1E8h]
  bool v32; // [rsp+27h] [rbp-1E1h]
  unsigned __int64 v33; // [rsp+28h] [rbp-1E0h]
  __int64 v34; // [rsp+38h] [rbp-1D0h]
  void *ptr; // [rsp+40h] [rbp-1C8h] BYREF
  __int128 v36; // [rsp+48h] [rbp-1C0h]
  __int128 v37; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v38; // [rsp+70h] [rbp-198h]
  __int64 v39; // [rsp+78h] [rbp-190h]
  __int64 v40; // [rsp+80h] [rbp-188h]
  char v41; // [rsp+88h] [rbp-180h] BYREF
  unsigned __int64 v42; // [rsp+1C8h] [rbp-40h] BYREF

  v42 = __readfsqword(0x28u);
  if ( !a2 )
    return -1;
  v9 = a5;
  v11 = sub_3792E0(0x3F0u, &ptr, a2 + 4, a5);
  if ( v11 )
  {
    if ( v11 == 1 )
    {
      v9 = (const char *)ptr;
      goto LABEL_5;
    }
    goto LABEL_39;
  }
  if ( (unsigned int)str2reg(v9) == -1 )
  {
LABEL_39:
    v9 = nullptr;
    goto LABEL_5;
  }
  *(_DWORD *)(a2 + 4) = 0;
LABEL_5:
  v12 = sub_674200((__int64)a1, v9);
  *(_DWORD *)a2 = v12;
  if ( v12 == -1 )
    return -1;
  if ( !*(_WORD *)(a2 + 6) )
  {
    v29 = sub_565920(a1);
    *(_WORD *)(a2 + 4) = 0;
    *(_WORD *)(a2 + 6) = 8 * v29;
  }
  v38 = -1;
  v39 = 0;
  v37 = -1;
  v40 = 0;
  *(_BYTE *)(a2 + 8) = (a6 >> 10) & 1 | BYTE1(a6) & 2;
  v13 = (unsigned __int64 *)&v41;
  do
  {
    *(_WORD *)v13 = 0;
    v13 += 5;
    *((_WORD *)v13 - 19) = 0;
    *((_WORD *)v13 - 18) = 0;
    *((_DWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 17) = 0;
    *((_OWORD *)v13 - 2) = 0;
    *(v13 - 2) = 0;
  }
  while ( v13 != &v42 );
  LODWORD(p_ptr) = 0;
  v36 = 0;
  ptr = nullptr;
  v34 = sub_3792E0(0x5Bu, 0, &v37, 0);
  v18 = a4 - 1;
  v19 = -1;
  if ( a4 != -1 )
    v19 = a4 - 1;
  v31 = a6 & 0x10;
  v33 = v19;
  if ( !*(_WORD *)(a2 + 6) )
    goto LABEL_41;
  v32 = v19 != -1;
  if ( (a6 & 0x10) == 0 )
LABEL_40:
    callui(27, (int)p_ptr, (int)&callui, (int)v15, v16, v17);
  v20 = a6 & 1;
  if ( (a6 & 2) != 0 )
    goto LABEL_37;
  if ( !v20 )
    goto LABEL_43;
LABEL_16:
  if ( a3 < a4 )
  {
    while ( 1 )
    {
      LODWORD(p_ptr) = a3;
      if ( !(unsigned int)decode_insn(&v37, a3, v18, v15, v16, v17, 0.0) )
      {
        LOWORD(v21) = *(_WORD *)(a2 + 6);
        goto LABEL_34;
      }
      *(_QWORD *)&v36 = 0;
      p_ptr = &ptr;
      if ( v34 == -1 )
        sub_3792E0(0x5Bu, &ptr, &v37, 0);
      else
        sub_676CC0(a1, (__int64 *)&ptr, (__int64)&v37);
      LODWORD(v17) = (_DWORD)ptr;
      v21 = *(unsigned __int16 *)(a2 + 6);
      v15 = (char *)ptr + 12 * v36;
      if ( v15 != ptr )
        break;
LABEL_34:
      LOBYTE(a6) = a6 | 2;
      if ( !(_WORD)v21 )
        goto LABEL_41;
      if ( !v31 )
        goto LABEL_40;
      v20 = a6 & 1;
LABEL_37:
      if ( v20 )
      {
        a3 = sub_3C1900(a1, a3, a4, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10, nullptr);
        goto LABEL_16;
      }
      a3 = sub_3C19F0(
             (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))a1,
             a3,
             a4,
             (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_39FD10,
             nullptr);
LABEL_43:
      if ( v33 >= a3 && v32 || a3 == -1 )
        goto LABEL_41;
    }
    LODWORD(p_ptr) = *(unsigned __int8 *)(a2 + 8);
    v22 = (char *)ptr;
    while ( 1 )
    {
      LODWORD(v16) = *(unsigned __int8 *)(a2 + 8);
      LOBYTE(v16) = v22[8] & (unsigned __int8)p_ptr;
      if ( (_BYTE)v16 )
      {
        if ( *(_DWORD *)a2 == *(_DWORD *)v22 )
        {
          v16 = *((unsigned __int16 *)v22 + 3);
          if ( *((_WORD *)v22 + 3) )
          {
            if ( (_WORD)v21 )
            {
              v17 = *(unsigned __int16 *)(a2 + 4);
              v23 = *((unsigned __int16 *)v22 + 2);
              if ( (unsigned __int16)v21 + v17 - 1 >= v23 )
              {
                v16 = v16 + v23 - 1;
                if ( v16 >= v17 )
                  break;
              }
            }
          }
        }
      }
      v22 += 12;
      if ( v15 == v22 )
      {
        v26 = (char *)ptr;
        do
        {
          if ( (v26[8] & 1) != 0 && *(_DWORD *)v26 == *(_DWORD *)a2 )
          {
            v27 = *((unsigned __int16 *)v26 + 2);
            LODWORD(p_ptr) = *(unsigned __int16 *)(a2 + 4);
            LODWORD(v16) = (_DWORD)p_ptr + v21;
            LODWORD(v17) = v27 + *((unsigned __int16 *)v26 + 3);
            if ( (unsigned __int16)p_ptr < (unsigned __int16)v27 )
            {
              if ( (unsigned __int16)v17 >= (unsigned __int16)v16 && (unsigned __int16)v27 < (unsigned __int16)v16 )
              {
                v28 = v27 - (_DWORD)p_ptr;
                *(_WORD *)(a2 + 6) = v28;
                v21 = v28;
              }
            }
            else if ( (unsigned __int16)v16 >= (unsigned __int16)v17 )
            {
              if ( (unsigned __int16)p_ptr < (unsigned __int16)v17 )
              {
                *(_WORD *)(a2 + 4) = v17;
                v21 = v16 - v17;
                *(_WORD *)(a2 + 6) = v16 - v17;
              }
            }
            else
            {
              *(_DWORD *)(a2 + 4) = 0;
              v21 = 0;
            }
          }
          v26 += 12;
        }
        while ( v15 != v26 );
        goto LABEL_34;
      }
    }
    v24 = ptr;
    *(_QWORD *)a2 = *(_QWORD *)v22;
    *(_WORD *)(a2 + 8) = *((_WORD *)v22 + 4);
  }
  else
  {
LABEL_41:
    v24 = ptr;
    a3 = -1;
  }
  if ( v24 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v24);
  }
  return a3;
}
