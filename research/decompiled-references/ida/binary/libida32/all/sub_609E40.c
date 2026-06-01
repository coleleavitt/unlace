__int64 __fastcall sub_609E40(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 *v7; // rax
  __int64 (__fastcall *v9)(unsigned __int64 *, unsigned __int64, int); // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  _QWORD *v12; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  char *v23; // rsi
  unsigned __int64 v24; // rbx
  size_t v25; // r13
  __int64 v26; // r12
  size_t v27; // r14
  char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  void *src; // [rsp+0h] [rbp-48h] BYREF
  __int128 v32; // [rsp+8h] [rbp-40h]
  unsigned __int64 v33; // [rsp+18h] [rbp-30h]

  v33 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *(__int64 (__fastcall **)(__int64))(*a2 + 32);
  if ( v6 == sub_3D58E0 )
    v7 = a2 + 2;
  else
    v7 = (unsigned __int64 *)v6((__int64)a2);
  if ( a3 >= *v7 && a3 < v7[1] )
  {
    v9 = *(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, int))(*a2 + 40);
    if ( v9 == sub_605FC0 )
    {
      if ( a2[10] )
      {
        v10 = (_QWORD *)a2[7];
        v11 = a2 + 6;
        v12 = v10;
        if ( v10 )
        {
          v13 = a2 + 6;
          do
          {
            while ( 1 )
            {
              v14 = v12[2];
              v15 = v12[3];
              if ( v12[4] >= a3 )
                break;
              v12 = (_QWORD *)v12[3];
              if ( !v15 )
                goto LABEL_13;
            }
            v13 = v12;
            v12 = (_QWORD *)v12[2];
          }
          while ( v14 );
LABEL_13:
          if ( v11 != v13 && a3 == v13[4] )
          {
            a3 = (unsigned int)a3;
            v16 = a2 + 6;
            goto LABEL_21;
          }
        }
      }
    }
    else if ( a3 == v9(a2, a3, 0) )
    {
      v10 = (_QWORD *)a2[7];
      a3 = (unsigned int)a3;
      v11 = a2 + 6;
      if ( !v10 )
        goto LABEL_25;
      v16 = a2 + 6;
      do
      {
LABEL_21:
        while ( 1 )
        {
          v17 = v10[2];
          v18 = v10[3];
          if ( v10[4] >= a3 )
            break;
          v10 = (_QWORD *)v10[3];
          if ( !v18 )
            goto LABEL_23;
        }
        v11 = v10;
        v10 = (_QWORD *)v10[2];
      }
      while ( v17 );
LABEL_23:
      if ( v16 == v11 || a3 < v11[4] )
LABEL_25:
        sub_606130();
      if ( *((_DWORD *)v11 + 10) != -1 )
        sub_3573A0((char **)a1);
      v19 = (const char *)v11[6];
      if ( v19 )
      {
        v20 = v11[7];
        src = nullptr;
        v32 = 0;
        v21 = (unsigned int)(v20 - 1);
        if ( !v20 )
        {
          v21 = 0;
          v19 = haystack;
        }
        qstr2user(&src, v19, v21);
        v22 = *(_QWORD *)(a1 + 8);
        if ( v22 > 1 )
        {
          v23 = *(char **)a1;
          if ( *(_QWORD *)(a1 + 16) < v22 + 1 )
          {
            v29 = qvector_reserve(a1, v23, v22 + 1, 1);
            *(_QWORD *)a1 = v29;
            v23 = (char *)v29;
          }
          *(_QWORD *)(a1 + 8) = v22 + 1;
          v23[v22] = 0;
          *(_BYTE *)(*(_QWORD *)a1 + v22 - 1) = 32;
        }
        v24 = v32;
        if ( (_QWORD)v32 )
        {
          v25 = v32 - 1;
          if ( (_QWORD)v32 != 1 )
          {
            v26 = *(_QWORD *)(a1 + 8);
            v27 = v32 - 1;
            if ( v26 )
            {
              --v26;
              v27 = v25 + v26;
              v24 = v32 + v26;
            }
            v28 = *(char **)a1;
            if ( *(_QWORD *)(a1 + 16) < v24 )
            {
              v30 = qvector_reserve(a1, v28, v24, 1);
              *(_QWORD *)a1 = v30;
              v28 = (char *)v30;
            }
            *(_QWORD *)(a1 + 8) = v24;
            v28[v27] = 0;
            memcpy((void *)(v26 + *(_QWORD *)a1), src, v25);
          }
        }
        if ( src )
        {
          *(_QWORD *)&v32 = 0;
          qfree(src);
        }
      }
    }
  }
  return a1;
}

