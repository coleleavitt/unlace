unsigned __int64 __fastcall sub_793770(__int64 a1, __int64 a2, int a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 (*v8)(); // rax
  size_t v9; // r8
  __int64 v10; // rdx
  __int16 v11; // ax
  size_t v12; // rdx
  __int8 *v13; // rsi
  __int64 v14; // rdx
  char v15; // al
  size_t v16; // r8
  __int64 v17; // rdi
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  char v21; // cl
  __int64 v22; // r14
  char v23; // al
  char v24; // r12
  __int64 v25; // r15
  __int8 *v26; // r12
  unsigned int v27; // r14d
  int v28; // eax
  unsigned int v29; // r9d
  unsigned int v30; // r14d
  __int64 (*v31)(); // rax
  __int64 v32; // r9
  __int64 v33; // rcx
  char v35; // al
  char v36; // al
  char v37; // al
  void *v38; // rdi
  size_t v39; // r14
  _QWORD *v41; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  size_t na; // [rsp+10h] [rbp-78h]
  unsigned int nb; // [rsp+10h] [rbp-78h]
  unsigned int nd; // [rsp+10h] [rbp-78h]
  char ne; // [rsp+10h] [rbp-78h]
  char nc; // [rsp+10h] [rbp-78h]
  size_t nf; // [rsp+10h] [rbp-78h]
  int v49; // [rsp+18h] [rbp-70h]
  unsigned int v50; // [rsp+1Ch] [rbp-6Ch]
  __int64 v51; // [rsp+28h] [rbp-60h] BYREF
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int128 v53; // [rsp+38h] [rbp-50h]
  unsigned __int64 v54; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD **)a2;
  v54 = __readfsqword(0x28u);
  v50 = a4 & 3;
  v49 = a4 & 2;
  v41 = &v5[6 * *(_QWORD *)(a2 + 8)];
  if ( v5 != v41 )
  {
    v6 = a1;
    do
    {
      while ( 1 )
      {
        v25 = *v5;
        v26 = (__int8 *)v5[3];
        v27 = *(_DWORD *)(*v5 + 4LL);
        v19 = a3 + _byteswap_ulong(v27);
        LODWORD(v51) = v19;
        *(_DWORD *)(v25 + 4) = _byteswap_ulong(v19);
        v28 = *(unsigned __int16 *)(v25 + 1);
        if ( (unsigned __int16)v28 <= 5u )
        {
          if ( !under_debugger )
            interr(2095);
LABEL_65:
          BUG();
        }
        v29 = *(unsigned __int8 *)(v25 + 8);
        if ( v28 == 7 )
          break;
        if ( v28 == 10 )
        {
          if ( a5 )
          {
            v30 = _byteswap_ulong(*(_DWORD *)(v25 + 9));
            goto LABEL_28;
          }
        }
        else
        {
          if ( a5 )
          {
            v8 = *(__int64 (**)())(*a5 + 40LL);
            if ( v8 != sub_792890 )
            {
              ne = *(_BYTE *)(v25 + 8);
              a1 = (__int64)a5;
              v36 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, _QWORD *))v8)(a5, v19, (unsigned __int8)v29, v5);
              LOBYTE(v29) = ne;
              if ( !v36 )
                goto LABEL_23;
            }
          }
          v9 = v5[4];
          LODWORD(v10) = v9;
          if ( (_BYTE)v29 != 78 )
            goto LABEL_19;
          if ( v9 != 5 || *v26 )
          {
            if ( v26[v9 - 1] )
            {
              v11 = v9 + 1;
              v12 = (int)v9;
            }
            else
            {
              v11 = v5[4];
              --v9;
              v12 = (int)v10 - 1;
            }
          }
          else
          {
            v12 = 5;
            v11 = 6;
          }
          *(_WORD *)(v6 + 1083) = v11;
          v13 = v26;
          n = v9;
          memcpy((void *)(v6 + 1086), v26, v12);
          if ( v49 )
          {
            if ( !a5 )
            {
              if ( !under_debugger )
                interr(2864);
              goto LABEL_65;
            }
            v13 = (__int8 *)a5[1];
            v15 = sub_790A40(*(_BYTE **)v6, v13, (__int64 *)((char *)&v51 + 4), v26, n, 0, nullptr);
            v16 = n;
            if ( v15 )
            {
              ptr = nullptr;
              v53 = 0;
              if ( n )
              {
                v38 = nullptr;
                v39 = n + 1;
                if ( n != -1 )
                {
                  ptr = (void *)qvector_reserve(&ptr, 0, n + 1, 1);
                  v16 = n;
                  v38 = ptr;
                }
                nf = v16;
                *(_QWORD *)&v53 = v39;
                memmove(v38, v26, v16);
                *((_BYTE *)ptr + nf) = 0;
              }
              sub_365330();
            }
          }
          v17 = *(_QWORD *)v6;
          if ( *(_BYTE *)(*(_QWORD *)v6 + 5988LL)
            && (na = *(_QWORD *)v6, v18 = must_journal(v17, v13, v14), v17 = na, v18) )
          {
            v53 = 0;
            ptr = nullptr;
            v37 = sub_71CD80(na, (unsigned __int16 *)(v6 + 1083), 4, &v51, (__int64)&ptr);
            v19 = (__int64)ptr;
            nc = v37;
            add_undo_record(1, ptr, v53);
            v21 = nc;
            if ( ptr )
            {
              *(_QWORD *)&v53 = 0;
              qfree(ptr);
              v21 = nc;
            }
          }
          else
          {
            v19 = v6 + 1083;
            v21 = sub_71CD80(v17, (unsigned __int16 *)(v6 + 1083), 4, &v51, 0);
          }
          if ( !v21 )
LABEL_62:
            sub_722BF0();
          a1 = v50;
          if ( v50 )
            goto LABEL_18;
          a1 = *(_QWORD *)v6;
          *(_DWORD *)(v6 + 48) = v27;
          *(_WORD *)(v6 + 45) = 6;
          *(_BYTE *)(v6 + 52) = 78;
          if ( !*(_BYTE *)(a1 + 5988) || !(unsigned __int8)must_journal(a1, 6, v20) )
          {
            v19 = v6 + 45;
            sub_71A170(a1, (_WORD *)(v6 + 45), 0);
            v10 = v5[4];
            goto LABEL_19;
          }
          v19 = v6 + 45;
          ptr = nullptr;
          v53 = 0;
          if ( (unsigned __int8)sub_71A170(a1, (_WORD *)(v6 + 45), (__int64)&ptr) )
          {
            v19 = (__int64)ptr;
            add_undo_record(1, ptr, v53);
            a1 = (__int64)ptr;
            if ( !ptr )
              goto LABEL_18;
LABEL_54:
            *(_QWORD *)&v53 = 0;
            qfree((void *)a1);
            goto LABEL_18;
          }
          a1 = (__int64)ptr;
          if ( ptr )
            goto LABEL_54;
        }
LABEL_18:
        v10 = v5[4];
LABEL_19:
        v22 = *(_QWORD *)v6;
        v10 = (unsigned __int16)v10;
        if ( *(_BYTE *)(*(_QWORD *)v6 + 5988LL)
          && (nb = (unsigned __int16)v10, v23 = must_journal(a1, v19, (unsigned __int16)v10), v10 = nb, v23) )
        {
          v53 = 0;
          ptr = nullptr;
          v24 = sub_71CD80(v22, (unsigned __int16 *)(v25 + 1), nb, v26, (__int64)&ptr);
          add_undo_record(1, ptr, v53);
          a1 = (__int64)ptr;
          if ( ptr )
          {
            *(_QWORD *)&v53 = 0;
            qfree(ptr);
          }
        }
        else
        {
          a1 = v22;
          v24 = sub_71CD80(v22, (unsigned __int16 *)(v25 + 1), v10, v26, 0);
        }
        if ( !v24 )
          goto LABEL_62;
LABEL_23:
        v5 += 6;
        if ( v41 == v5 )
          return v54 - __readfsqword(0x28u);
      }
      if ( !a5 )
        goto LABEL_18;
      v30 = *(unsigned __int8 *)(v25 + 9);
LABEL_28:
      v31 = *(__int64 (**)())(*a5 + 32LL);
      if ( v31 != sub_417510 )
      {
        nd = *(unsigned __int8 *)(v25 + 8);
        a1 = (__int64)a5;
        v35 = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD, _QWORD, _QWORD *))v31)(
                a5,
                v19,
                *(unsigned __int8 *)(v25 + 8),
                v30,
                v5 + 3);
        v29 = nd;
        if ( !v35 )
          goto LABEL_23;
      }
      v19 = v29;
      a1 = (__int64)a5;
      v26 = (__int8 *)v5[3];
      if ( !(unsigned __int8)sub_792D30((__int64)a5, v29, v30) )
        goto LABEL_18;
      if ( *(_WORD *)(v25 + 1) == 7 )
        v32 = (unsigned int)v32 | 0x800;
      v33 = v5[4];
      a1 = v6;
      v5 += 6;
      sub_796B30(v6, (unsigned int)v51, v26, v33, v30, v32);
    }
    while ( v41 != v5 );
  }
  return v54 - __readfsqword(0x28u);
}

