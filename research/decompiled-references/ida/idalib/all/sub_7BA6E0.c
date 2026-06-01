__int64 __fastcall sub_7BA6E0(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebp
  unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rbp
  __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rax
  __int64 v19; // r9
  char *v20; // rdx
  __int64 v21; // rax
  _BYTE *v22; // rsi
  unsigned __int64 v23; // rdi
  char v24; // dl
  void *v25; // rsi
  __int16 v26; // ax
  size_t v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdi
  char v30; // al
  __int64 v32; // rax
  _QWORD *v33; // rsi
  unsigned int v34; // [rsp+14h] [rbp-D4h]
  _WORD *v35; // [rsp+18h] [rbp-D0h]
  void *src; // [rsp+20h] [rbp-C8h]
  void *srca; // [rsp+20h] [rbp-C8h]
  size_t n; // [rsp+28h] [rbp-C0h]
  void *v39; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v40; // [rsp+38h] [rbp-B0h]
  void *v41; // [rsp+50h] [rbp-98h] BYREF
  __int128 v42; // [rsp+58h] [rbp-90h]
  void *dest; // [rsp+70h] [rbp-78h] BYREF
  __int128 v44; // [rsp+78h] [rbp-70h]
  void *ptr; // [rsp+90h] [rbp-58h] BYREF
  __int128 v46; // [rsp+98h] [rbp-50h]
  unsigned __int64 v47; // [rsp+A8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    v39 = nullptr;
    *(_WORD *)(a1 + 1091) = 1;
    v3 = *(unsigned __int8 *)(a1 + 1093);
    v41 = nullptr;
    v35 = (_WORD *)(a1 + 1091);
    v40 = 0;
    v42 = 0;
    sub_7443D0(v2, (unsigned __int16 *)(a1 + 1091));
LABEL_3:
    sub_741460(*(_QWORD *)a1);
    while ( v4 )
    {
      if ( v4 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      v5 = *v4;
      if ( *v4 <= 1u || *((char *)v4 + 2) != v3 )
        break;
      if ( !*((_BYTE *)v4 + 3) )
        goto LABEL_3;
      v6 = *(_QWORD *)((char *)v4 + v5 + 4);
      if ( *((_BYTE *)v4 + (int)v5 + 1) )
      {
        v32 = v40;
        v33 = v39;
        if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
        {
          v39 = (void *)qvector_reserve(&v39, v39, v40 + 1, 8);
          v33 = v39;
          v32 = v40;
        }
        v33[v32] = v6;
        *(_QWORD *)&v40 = v40 + 1;
        goto LABEL_3;
      }
      v7 = v42;
      v8 = v41;
      if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)(v42 + 1) )
      {
        v41 = (void *)qvector_reserve(&v41, v41, v42 + 1, 8);
        v8 = v41;
        v7 = v42;
      }
      v8[v7] = v6;
      v9 = *(_QWORD *)a1;
      *(_QWORD *)&v42 = v42 + 1;
      sub_741460(v9);
    }
    v10 = v42;
    v11 = v40 + v42;
    if ( (_QWORD)v40 + (_QWORD)v42 )
    {
      v34 = 0;
      v12 = 0;
      v13 = -8 * v42;
      while ( 1 )
      {
        if ( v12 >= v10 )
          v14 = *(_QWORD *)((char *)v39 + v13);
        else
          v14 = *((_QWORD *)v41 + v12);
        *(_WORD *)(a1 + 53) = 10;
        v15 = swap64(v14);
        v16 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 56) = v15;
        *(_BYTE *)(a1 + 64) = 78;
        v17 = (unsigned __int16 *)sub_7443D0(v16, (unsigned __int16 *)(a1 + 53));
        if ( v17 )
        {
          v18 = (unsigned __int16 *)((char *)v17 + *v17 + 2);
          if ( *((_BYTE *)v18 + 2) )
          {
            v19 = *v18;
            if ( !*((_BYTE *)v18 + v19 + 1) )
            {
              --v19;
LABEL_20:
              src = v18 + 1;
              dest = nullptr;
              v44 = 0;
              if ( v19 )
              {
                n = v19;
                dest = (void *)qvector_reserve(&dest, 0, v19, 1);
                memset((char *)dest + v44, 0, n - v44);
                *(_QWORD *)&v44 = n;
                memcpy(dest, src, n);
                v20 = (char *)dest;
                v19 = v44;
              }
              else
              {
                v20 = nullptr;
              }
              sub_7B32E0(a1, v14, v20, v19, 1);
              v21 = v44;
              v22 = dest;
              LOBYTE(ptr) = 0;
              v23 = v44 + 1;
              if ( &ptr >= dest && &ptr < (void **)((char *)dest + *((_QWORD *)&v44 + 1)) )
              {
                if ( *((_QWORD *)&v44 + 1) < v23 )
                {
                  dest = (void *)qvector_reserve(&dest, dest, v44 + 1, 1);
                  v22 = dest;
                  v21 = v44;
                }
                v22[v21] = 0;
              }
              else
              {
                if ( *((_QWORD *)&v44 + 1) < v23 )
                {
                  dest = (void *)qvector_reserve(&dest, dest, v44 + 1, 1);
                  v22 = dest;
                  v24 = (char)ptr;
                  v21 = v44;
                }
                else
                {
                  v24 = 0;
                }
                v22[v21] = v24;
              }
              v25 = dest;
              v26 = v44 + 2;
              *(_QWORD *)&v44 = v44 + 1;
              v27 = (int)v44;
              *(_WORD *)(a1 + 1091) = v26;
              memcpy((void *)(a1 + 1094), v25, v27);
              v29 = *(_QWORD *)a1;
              if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL)
                && (srca = *(void **)a1, v30 = must_journal(v29, v25, v28), v29 = (__int64)srca, v30) )
              {
                ptr = nullptr;
                v46 = 0;
                if ( (unsigned __int8)sub_73A6B0((__int64)srca, v35, (__int64)&ptr) )
                  add_undo_record(1, ptr, v46);
                if ( ptr )
                {
                  *(_QWORD *)&v46 = 0;
                  qfree(ptr);
                }
              }
              else
              {
                sub_73A6B0(v29, v35, 0);
              }
              ++v34;
              if ( dest )
              {
                *(_QWORD *)&v44 = 0;
                qfree(dest);
              }
              goto LABEL_32;
            }
            if ( v12 < v10 )
              goto LABEL_20;
          }
        }
LABEL_32:
        ++v12;
        v13 += 8;
        if ( v11 == v12 )
          goto LABEL_33;
      }
    }
    v34 = 0;
LABEL_33:
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
  }
  else
  {
    return 0;
  }
  return v34;
}
