__int64 __fastcall sub_797660(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  unsigned __int16 *v4; // rax
  __int64 v5; // rdx
  int v6; // ebp
  __int64 v7; // rax
  _DWORD *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // r13
  unsigned __int64 v12; // rbx
  __int64 v13; // rbp
  unsigned int v14; // r15d
  __int64 v15; // rdi
  unsigned __int16 *v16; // rax
  unsigned __int16 *v17; // rax
  signed __int64 v18; // r10
  char *v19; // rdx
  __int64 v20; // rax
  _BYTE *v21; // rsi
  unsigned __int64 v22; // rdi
  char v23; // dl
  void *v24; // rsi
  __int16 v25; // ax
  size_t v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdi
  char v29; // al
  __int64 v31; // rax
  _DWORD *v32; // rsi
  unsigned int v33; // [rsp+14h] [rbp-D4h]
  _WORD *v34; // [rsp+18h] [rbp-D0h]
  void *src; // [rsp+20h] [rbp-C8h]
  void *srca; // [rsp+20h] [rbp-C8h]
  size_t n; // [rsp+28h] [rbp-C0h]
  void *v38; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v39; // [rsp+38h] [rbp-B0h]
  void *v40; // [rsp+50h] [rbp-98h] BYREF
  __int128 v41; // [rsp+58h] [rbp-90h]
  void *dest; // [rsp+70h] [rbp-78h] BYREF
  __int128 v43; // [rsp+78h] [rbp-70h]
  void *ptr; // [rsp+90h] [rbp-58h] BYREF
  __int128 v45; // [rsp+98h] [rbp-50h]
  unsigned __int64 v46; // [rsp+A8h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    v38 = nullptr;
    *(_WORD *)(a1 + 1083) = 1;
    v3 = *(unsigned __int8 *)(a1 + 1085);
    v40 = nullptr;
    v34 = (_WORD *)(a1 + 1083);
    v39 = 0;
    v41 = 0;
    sub_723E90(v2, (unsigned __int16 *)(a1 + 1083));
LABEL_3:
    sub_720F20(*(_QWORD *)a1);
    while ( v4 )
    {
      if ( v4 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      v5 = *v4;
      if ( *v4 <= 1u || *((char *)v4 + 2) != v3 )
        break;
      if ( !*((_BYTE *)v4 + 3) )
        goto LABEL_3;
      v6 = *(_DWORD *)((char *)v4 + v5 + 4);
      if ( *((_BYTE *)v4 + (int)v5 + 1) )
      {
        v31 = v39;
        v32 = v38;
        if ( *((_QWORD *)&v39 + 1) < (unsigned __int64)(v39 + 1) )
        {
          v38 = (void *)qvector_reserve(&v38, v38, v39 + 1, 4);
          v32 = v38;
          v31 = v39;
        }
        v32[v31] = v6;
        *(_QWORD *)&v39 = v39 + 1;
        goto LABEL_3;
      }
      v7 = v41;
      v8 = v40;
      if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 1) )
      {
        v40 = (void *)qvector_reserve(&v40, v40, v41 + 1, 4);
        v8 = v40;
        v7 = v41;
      }
      v8[v7] = v6;
      v9 = *(_QWORD *)a1;
      *(_QWORD *)&v41 = v41 + 1;
      sub_720F20(v9);
    }
    v10 = v41;
    v11 = v39 + v41;
    if ( (_QWORD)v39 + (_QWORD)v41 )
    {
      v33 = 0;
      v12 = 0;
      v13 = -4 * v41;
      while ( 1 )
      {
        if ( v12 >= v10 )
          v14 = *(_DWORD *)((char *)v38 + v13);
        else
          v14 = *((_DWORD *)v40 + v12);
        *(_BYTE *)(a1 + 52) = 78;
        *(_WORD *)(a1 + 45) = 6;
        v15 = *(_QWORD *)a1;
        *(_DWORD *)(a1 + 48) = _byteswap_ulong(v14);
        v16 = (unsigned __int16 *)sub_723E90(v15, (unsigned __int16 *)(a1 + 45));
        if ( v16 )
        {
          v17 = (unsigned __int16 *)((char *)v16 + *v16 + 2);
          if ( *((_BYTE *)v17 + 2) )
          {
            v18 = *v17;
            if ( !*((_BYTE *)v17 + v18 + 1) )
            {
              --v18;
LABEL_20:
              src = v17 + 1;
              dest = nullptr;
              v43 = 0;
              if ( v18 )
              {
                n = v18;
                dest = (void *)qvector_reserve(&dest, 0, v18, 1);
                memset((char *)dest + v43, 0, n - v43);
                *(_QWORD *)&v43 = n;
                memcpy(dest, src, n);
                v19 = (char *)dest;
                v18 = v43;
              }
              else
              {
                v19 = nullptr;
              }
              sub_791030((__int64 *)a1, v14, v19, v18, 1);
              v20 = v43;
              v21 = dest;
              LOBYTE(ptr) = 0;
              v22 = v43 + 1;
              if ( &ptr >= dest && &ptr < (void **)((char *)dest + *((_QWORD *)&v43 + 1)) )
              {
                if ( *((_QWORD *)&v43 + 1) < v22 )
                {
                  dest = (void *)qvector_reserve(&dest, dest, v43 + 1, 1);
                  v21 = dest;
                  v20 = v43;
                }
                v21[v20] = 0;
              }
              else
              {
                if ( *((_QWORD *)&v43 + 1) < v22 )
                {
                  dest = (void *)qvector_reserve(&dest, dest, v43 + 1, 1);
                  v21 = dest;
                  v23 = (char)ptr;
                  v20 = v43;
                }
                else
                {
                  v23 = 0;
                }
                v21[v20] = v23;
              }
              v24 = dest;
              v25 = v43 + 2;
              *(_QWORD *)&v43 = v43 + 1;
              v26 = (int)v43;
              *(_WORD *)(a1 + 1083) = v25;
              memcpy((void *)(a1 + 1086), v24, v26);
              v28 = *(_QWORD *)a1;
              if ( *(_BYTE *)(*(_QWORD *)a1 + 5988LL)
                && (srca = *(void **)a1, v29 = must_journal(v28, v24, v27), v28 = (__int64)srca, v29) )
              {
                ptr = nullptr;
                v45 = 0;
                if ( (unsigned __int8)sub_71A170((__int64)srca, v34, (__int64)&ptr) )
                  add_undo_record(1, ptr, v45);
                if ( ptr )
                {
                  *(_QWORD *)&v45 = 0;
                  qfree(ptr);
                }
              }
              else
              {
                sub_71A170(v28, v34, 0);
              }
              ++v33;
              if ( dest )
              {
                *(_QWORD *)&v43 = 0;
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
        v13 += 4;
        if ( v11 == v12 )
          goto LABEL_33;
      }
    }
    v33 = 0;
LABEL_33:
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40);
    }
    if ( v38 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v38);
    }
  }
  else
  {
    return 0;
  }
  return v33;
}

