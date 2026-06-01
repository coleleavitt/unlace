char *__fastcall sub_4C67E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  char **exception; // r12
  __int64 v7; // rdx
  char *v12; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned int *v17; // rsi
  unsigned int *v18; // rbp
  __int64 v19; // rcx
  unsigned int v20; // ebp
  _QWORD *v21; // rax
  unsigned int v22; // ecx
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  char *v27; // rax
  char v28; // al
  __int64 v29; // rax
  char *v30; // rdx
  char *v31; // rax
  __int64 v32; // rdi
  unsigned int v33; // [rsp+8h] [rbp-70h]
  unsigned int *v34; // [rsp+10h] [rbp-68h]
  __int64 v35; // [rsp+18h] [rbp-60h]
  __int64 v36[11]; // [rsp+20h] [rbp-58h] BYREF

  v12 = (char *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 184LL))(*(_QWORD *)(a2 + 8));
  if ( !v12 )
  {
    v14 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a2 + 8) != v14 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)v14 + 184LL))(
              v14,
              a2,
              a3,
              a4,
              a5,
              a6);
      if ( v15 )
        return (char *)v15;
    }
    v16 = sub_186B270(0x58u);
    *(_QWORD *)v16 = qword_1C65EC0;
    *(_DWORD *)(v16 + 8) = a4;
    *(_QWORD *)(v16 + 16) = 0;
    if ( a4 )
    {
      v35 = a4;
      v34 = &a5[v35];
      do
      {
        v17 = a5++;
        sub_4C54F0((_QWORD *)(v16 + 16), v17);
      }
      while ( v34 != a5 );
      *(_QWORD *)(v16 + 24) = 0;
      v18 = a6;
      do
        sub_4C54F0((_QWORD *)(v16 + 24), v18++);
      while ( &a6[v35] != v18 );
      v19 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(v16 + 40) = 0;
      if ( !v19 )
      {
        *(_BYTE *)(v16 + 33) = 0;
        v12 = nullptr;
        v20 = 0;
        goto LABEL_19;
      }
      v20 = *(_DWORD *)(v19 - 4);
      *(_BYTE *)(v16 + 33) = 0;
      if ( !v20 )
      {
LABEL_19:
        v26 = 0;
        do
        {
          while ( 1 )
          {
            v27 = &v12[a6[v26]];
            if ( !*v27 )
              break;
            ++v26;
            *(_BYTE *)(v16 + 33) = 1;
            *v27 = 1;
            if ( (unsigned int)v26 >= a4 )
              goto LABEL_22;
          }
          ++v26;
          *v27 = 1;
        }
        while ( (unsigned int)v26 < a4 );
LABEL_22:
        v28 = 0;
        if ( a4 < v20 )
          goto LABEL_32;
        if ( !v12 )
          goto LABEL_52;
        v29 = *((unsigned int *)v12 - 1);
        v30 = &v12[v29];
        if ( v29 >> 2 )
        {
          v31 = &v12[4 * (v29 >> 2)];
          while ( *v12 )
          {
            if ( !v12[1] )
            {
              ++v12;
              goto LABEL_31;
            }
            if ( !v12[2] )
            {
              v12 += 2;
              goto LABEL_31;
            }
            if ( !v12[3] )
            {
              v12 += 3;
              goto LABEL_31;
            }
            v12 += 4;
            if ( v31 == v12 )
            {
              v29 = v30 - v12;
              goto LABEL_44;
            }
          }
          goto LABEL_31;
        }
LABEL_44:
        if ( v29 != 2 )
        {
          if ( v29 != 3 )
          {
            if ( v29 == 1 )
              goto LABEL_47;
LABEL_52:
            v28 = 1;
            goto LABEL_32;
          }
          if ( !*v12 )
          {
LABEL_31:
            v28 = v30 == v12;
            goto LABEL_32;
          }
          ++v12;
        }
        if ( *v12 )
        {
          ++v12;
LABEL_47:
          v28 = *v12;
          if ( !*v12 )
            goto LABEL_31;
LABEL_32:
          *(_BYTE *)(v16 + 32) = v28;
          v32 = v16 + 80;
          *(_QWORD *)v16 = &off_1C4F1F0;
          *(_QWORD *)(v16 + 56) = 0;
          *(_QWORD *)(v16 + 64) = 0;
          *(_QWORD *)(v16 + 48) = off_1C4F220;
          *(_QWORD *)(v16 + 72) = 0;
          *(_QWORD *)(v16 + 80) = 0;
          if ( !v19 )
          {
            a4 = 0;
            goto LABEL_34;
          }
LABEL_33:
          a4 = *(_DWORD *)(v19 - 4);
LABEL_34:
          sub_4CED80(v32, a4);
          return (char *)v16;
        }
        goto LABEL_31;
      }
    }
    else
    {
      v19 = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(v16 + 24) = 0;
      *(_QWORD *)(v16 + 40) = 0;
      if ( !v19 )
      {
        *(_QWORD *)(v16 + 56) = 0;
        v32 = v16 + 80;
        *(_WORD *)(v16 + 32) = 1;
        *(_QWORD *)v16 = &off_1C4F1F0;
        *(_QWORD *)(v16 + 64) = 0;
        *(_QWORD *)(v16 + 48) = off_1C4F220;
        *(_QWORD *)(v16 + 72) = 0;
        *(_QWORD *)(v16 + 80) = 0;
        goto LABEL_34;
      }
      v20 = *(_DWORD *)(v19 - 4);
      *(_BYTE *)(v16 + 33) = 0;
      if ( !v20 )
      {
        *(_BYTE *)(v16 + 32) = 1;
        v32 = v16 + 80;
        *(_QWORD *)v16 = &off_1C4F1F0;
        *(_QWORD *)(v16 + 56) = 0;
        *(_QWORD *)(v16 + 64) = 0;
        *(_QWORD *)(v16 + 48) = off_1C4F220;
        *(_QWORD *)(v16 + 72) = 0;
        *(_QWORD *)(v16 + 80) = 0;
        goto LABEL_33;
      }
    }
    v21 = (_QWORD *)sub_186B270(0xAu);
    v12 = (char *)(v21 + 1);
    *v21 = 2;
    *(_QWORD *)(v16 + 40) = v21 + 1;
    while ( 1 )
    {
      v25 = *((_DWORD *)v12 - 2);
      if ( v25 >= v20 )
        break;
      v22 = (3 * v25 + 1) >> 1;
      v23 = v22 + 8;
      if ( v25 + 8 >= (unsigned int)v23 || v25 >= v22 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DFB18(v36, "Overflow encountered when expanding vector", v7);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v36);
        sub_233E40((__int64)v36);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (3 * v25 + 1) >> 1;
      v24 = (unsigned int *)sub_186B300(v12 - 8, v23);
      v12 = (char *)(v24 + 2);
      *(_QWORD *)(v16 + 40) = v24 + 2;
      *v24 = v33;
    }
    *((_DWORD *)v12 - 1) = v20;
    memset(v12, 0, v20);
    v19 = *(_QWORD *)(a3 + 16);
    if ( !a4 )
    {
      v28 = 0;
      goto LABEL_32;
    }
    goto LABEL_19;
  }
  return v12;
}

