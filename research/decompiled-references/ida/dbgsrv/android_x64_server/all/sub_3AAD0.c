/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AAD0
// Address: 0x000000000003AAD0

//----- (000000000003AAD0) ----------------------------------------------------
__int64 __fastcall sub_3AAD0(unsigned __int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  void **v4; // r15
  void **v5; // r13
  unsigned int v7; // r12d
  int v8; // eax
  int v9; // r12d
  void *v10; // rcx
  void *v11; // rax
  _QWORD *v12; // r12
  void *v13; // rax
  void *v14; // r8
  char *v15; // rdx
  int v16; // r12d
  char *v17; // rax
  void **v18; // rcx
  void **v19; // rax
  __int64 v20; // r15
  bool v21; // zf
  char *v22; // rcx
  void *v23; // rax
  signed int v24; // eax
  __int64 v25; // rdx
  _QWORD *v26; // rbp
  _DWORD *v27; // rsi
  _DWORD *v28; // rdi
  int v29; // ebp
  void *v30; // rax
  _DWORD *v32; // [rsp+8h] [rbp-90h]
  int *v33; // [rsp+10h] [rbp-88h]
  _QWORD *v34; // [rsp+18h] [rbp-80h] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-78h] BYREF
  char *v36; // [rsp+30h] [rbp-68h]
  void *dest[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-48h]
  unsigned __int64 v39; // [rsp+60h] [rbp-38h]

  v3 = a1;
  v39 = __readfsqword(0x28u);
  *(_OWORD *)dest = 0;
  v38 = 0;
  *(_OWORD *)ptr = 0;
  v36 = nullptr;
  v4 = *(void ***)(a1 + 1032);
  v5 = (void **)(a1 + 1040);
  if ( v4 == (void **)(a1 + 1040) )
    goto LABEL_49;
  do
  {
    if ( a3 != (*((_DWORD *)v4 + 8) != a2) )
      goto LABEL_28;
    if ( *((_DWORD *)v4 + 15) || *((_BYTE *)v4 + 64) || *((_BYTE *)v4 + 65) )
      goto LABEL_27;
    v33 = (int *)(v4 + 5);
    v7 = *((_DWORD *)v4 + 10);
    v32 = (_DWORD *)__errno(a1);
    *v32 = 0;
    if ( !byte_155770 )
    {
      v8 = syscall(200, v7, 19);
      if ( v8 && *v32 == 38 )
      {
        *v32 = 0;
        byte_155770 = 1;
      }
      else if ( byte_155770 != 1 )
      {
        goto LABEL_9;
      }
    }
    v8 = kill(v7, 19);
LABEL_9:
    if ( !v8 )
    {
      v12 = v4 + 5;
      v34 = v4 + 5;
      v13 = dest[0];
      v14 = dest[1];
      a1 = (unsigned __int64)&v34;
      v15 = (char *)dest[1] + 1;
      if ( dest[0] > &v34 || (char *)dest[0] + 8 * v38 <= (char *)&v34 )
      {
        if ( v38 < (unsigned __int64)v15 )
        {
          a1 = (unsigned __int64)dest;
          v13 = qvector_reserve((__int64)dest, (char *)dest[0], (unsigned __int64)v15, 8u);
          dest[0] = v13;
          v14 = dest[1];
          v12 = v34;
        }
      }
      else if ( v38 < (unsigned __int64)v15 )
      {
        a1 = (unsigned __int64)dest;
        v13 = qvector_reserve((__int64)dest, (char *)dest[0], (unsigned __int64)v15, 8u);
        dest[0] = v13;
        v14 = dest[1];
      }
      *((_QWORD *)v13 + (_QWORD)v14) = v12;
      ++dest[1];
      *((_BYTE *)v4 + 64) = 1;
LABEL_27:
      ++*((_DWORD *)v4 + 11);
      goto LABEL_28;
    }
    a1 = (unsigned int)*v32;
    if ( (_DWORD)a1 == 3 )
    {
      v9 = *v33;
      v10 = ptr[1];
      if ( v36 >= (char *)ptr[1] + 1 )
      {
        v11 = ptr[0];
      }
      else
      {
        a1 = (unsigned __int64)ptr;
        v11 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)ptr[1] + 1, 4u);
        ptr[0] = v11;
        v10 = ptr[1];
      }
      *((_DWORD *)v11 + (_QWORD)v10) = v9;
      ++ptr[1];
    }
    else
    {
      v16 = *v33;
      v17 = strerror(a1);
      a1 = v3;
      sub_391F0(v3, "failed to send SIGSTOP to thread %d: %s\n", v16, v17);
    }
LABEL_28:
    v18 = (void **)v4[1];
    if ( v18 )
    {
      do
      {
        v19 = v18;
        v18 = (void **)*v18;
      }
      while ( v18 );
    }
    else
    {
      v19 = (void **)v4[2];
      if ( *v19 != v4 )
      {
        v20 = (__int64)(v4 + 2);
        do
        {
          v19 = *(void ***)(*(_QWORD *)v20 + 16LL);
          v21 = *v19 == *(void **)v20;
          v20 = *(_QWORD *)v20 + 16LL;
        }
        while ( !v21 );
      }
    }
    v4 = v19;
  }
  while ( v19 != v5 );
  if ( dest[1] )
  {
    do
    {
      LODWORD(v34) = 0;
      v24 = sub_4C880(v3, &v34, 0xFFFFFFFF, (char)-*(_BYTE *)(v3 + 1149));
      if ( v24 > 0 )
      {
        v25 = 8 * (__int64)dest[1];
        if ( 8 * (__int64)dest[1] )
        {
          v26 = dest[0];
          v22 = (char *)dest[0] + 8 * (__int64)dest[1];
          while ( 1 )
          {
            v27 = (_DWORD *)*v26;
            if ( *(_DWORD *)*v26 == v24 )
              break;
            ++v26;
            v25 -= 8;
            if ( !v25 )
              goto LABEL_46;
          }
          if ( ((unsigned __int16)v34 & 0xFF7F) == 0x137F )
          {
            *((_BYTE *)v27 + 24) = 0;
            v27[5] = 1;
          }
          else
          {
            sub_3C8D0((_QWORD *)v3, v24, (unsigned int)v34);
            v22 = (char *)dest[0] + 8 * (__int64)dest[1];
          }
          memmove(v26, v26 + 1, (unsigned __int64)&v22[-8LL - (_QWORD)v26] & 0xFFFFFFFFFFFFFFF8LL);
          v23 = --dest[1];
          continue;
        }
LABEL_46:
        sub_3C8D0((_QWORD *)v3, v24, (unsigned int)v34);
      }
      v23 = dest[1];
    }
    while ( v23 );
  }
LABEL_49:
  v28 = ptr[0];
  if ( ptr[1] )
  {
    v29 = 1;
    v30 = nullptr;
    do
    {
      sub_3A390(v3, v28[(_QWORD)v30], 3);
      v30 = (void *)v29;
      v28 = ptr[0];
      ++v29;
    }
    while ( ptr[1] > v30 );
  }
  if ( v28 )
  {
    ptr[1] = nullptr;
    qfree(v28);
    ptr[0] = nullptr;
    v36 = nullptr;
  }
  if ( dest[0] )
  {
    dest[1] = nullptr;
    qfree(dest[0]);
    dest[0] = nullptr;
    v38 = 0;
  }
  return 1;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 155770: using guessed type char byte_155770;
