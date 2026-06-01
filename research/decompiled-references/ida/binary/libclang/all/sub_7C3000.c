_BYTE *__fastcall sub_7C3000(__int64 *a1, _QWORD *a2, char a3, unsigned __int64 a4)
{
  __int64 v7; // rdi
  _BYTE *v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  _BYTE *result; // rax
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // r13
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  const void *v24; // rax
  size_t v25; // rdx
  size_t v26; // r13
  unsigned __int64 v27; // rdx
  _BYTE *v28; // rdi
  __int64 v29; // rdi
  _DWORD *v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rdi
  _DWORD *v34; // rdx
  __int64 v35; // rdi
  _DWORD *v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v43; // [rsp+18h] [rbp-50h] BYREF
  void *v44[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v45; // [rsp+30h] [rbp-38h] BYREF

  v7 = *a1;
  v42 = a4;
  v8 = *(_BYTE **)(v7 + 32);
  if ( (unsigned __int64)v8 >= *(_QWORD *)(v7 + 24) )
  {
    sub_26239D0(v7, 40);
  }
  else
  {
    *(_QWORD *)(v7 + 32) = v8 + 1;
    *v8 = 40;
  }
  if ( (a3 & 1) != 0 )
  {
    v39 = *a1;
    v40 = *(_QWORD *)(*a1 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24) - v40) <= 2 )
    {
      sub_26240F0(v39, "in ", 3);
    }
    else
    {
      *(_BYTE *)(v40 + 2) = 32;
      *(_WORD *)v40 = 28265;
      *(_QWORD *)(v39 + 32) += 3LL;
    }
  }
  if ( (a3 & 2) != 0 )
  {
    v37 = *a1;
    v38 = *(_QWORD *)(*a1 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24) - v38) <= 5 )
    {
      sub_26240F0(v37, "inout ", 6);
    }
    else
    {
      *(_DWORD *)v38 = 1970237033;
      *(_WORD *)(v38 + 4) = 8308;
      *(_QWORD *)(v37 + 32) += 6LL;
    }
  }
  if ( (a3 & 4) != 0 )
  {
    v35 = *a1;
    v36 = *(_DWORD **)(*a1 + 32);
    if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v36 <= 3u )
    {
      sub_26240F0(v35, "out ", 4);
    }
    else
    {
      *v36 = 544503151;
      *(_QWORD *)(v35 + 32) += 4LL;
    }
  }
  if ( (a3 & 8) != 0 )
  {
    v33 = *a1;
    v34 = *(_DWORD **)(*a1 + 32);
    if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v34 <= 6u )
    {
      sub_26240F0(v33, "bycopy ", 7);
    }
    else
    {
      *v34 = 1868790114;
      *(_DWORD *)((char *)v34 + 3) = 544829551;
      *(_QWORD *)(v33 + 32) += 7LL;
    }
  }
  if ( (a3 & 0x10) != 0 )
  {
    v31 = *a1;
    v32 = *(_QWORD *)(*a1 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(*a1 + 24) - v32) <= 5 )
    {
      sub_26240F0(v31, "byref ", 6);
    }
    else
    {
      *(_DWORD *)v32 = 1702000994;
      *(_WORD *)(v32 + 4) = 8294;
      *(_QWORD *)(v31 + 32) += 6LL;
    }
  }
  if ( (a3 & 0x20) != 0 )
  {
    v29 = *a1;
    v30 = *(_DWORD **)(*a1 + 32);
    if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v30 <= 6u )
    {
      sub_26240F0(v29, "oneway ", 7);
    }
    else
    {
      *v30 = 2003136111;
      *(_DWORD *)((char *)v30 + 3) = 544825719;
      *(_QWORD *)(v29 + 32) += 7LL;
    }
  }
  if ( (a3 & 0x40) != 0 )
  {
    v20 = sub_B16750(&v42);
    v22 = v20;
    if ( BYTE1(v20) )
    {
      v23 = *a1;
      LOWORD(v22) = BYTE1(v20);
      v24 = (const void *)sub_C88A60(v20, 1, v21, v22);
      v26 = v25;
      v27 = *(_QWORD *)(v23 + 24);
      v28 = *(_BYTE **)(v23 + 32);
      if ( v27 - (unsigned __int64)v28 < v26 )
      {
        v41 = sub_26240F0(v23, v24, v26);
        v28 = *(_BYTE **)(v41 + 32);
        v27 = *(_QWORD *)(v41 + 24);
        v23 = v41;
      }
      else if ( v26 )
      {
        memcpy(v28, v24, v26);
        v27 = *(_QWORD *)(v23 + 24);
        v28 = (_BYTE *)(v26 + *(_QWORD *)(v23 + 32));
        *(_QWORD *)(v23 + 32) = v28;
      }
      if ( (unsigned __int64)v28 >= v27 )
      {
        sub_26239D0(v23, 32);
      }
      else
      {
        *(_QWORD *)(v23 + 32) = v28 + 1;
        *v28 = 32;
      }
    }
  }
  v9 = v42;
  v10 = *a1;
  v11 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)(v11 + 8);
  if ( *(_BYTE *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    v15 = *(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v15 & 8) != 0 )
    {
      v16 = v42 | v15;
      v17 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          | v16 & 7;
      if ( (*(_DWORD *)((_BYTE *)&qword_18 + (*(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
          & 0x1C0) != 0 )
      {
        v18 = *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
            & 0xFFFFFFFFFFFFFE3FLL
            | v16 & 7;
        if ( (v12 & 7) != 0 || (v12 & 8) != 0 )
        {
          v19 = sub_B0CF30(v42, *(_QWORD *)&byte_8[v42 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL)
              & 0xFFFFFFFFFFFFFFF0LL;
          if ( v18 <= 7 )
            goto LABEL_20;
        }
        else
        {
          v19 = v11 & 0xFFFFFFFFFFFFFFF0LL;
          if ( v18 <= 7 )
          {
LABEL_20:
            v9 = v19 | (unsigned int)v17 & 0xFFFFFE3F;
            goto LABEL_11;
          }
        }
        v9 = sub_6C3980(a2, v19, v17 & 0xFFFFFFFFFFFFFE3FLL);
      }
    }
  }
LABEL_11:
  v43 = v9;
  sub_B2AE60(v44, &v43, a1 + 1);
  sub_26240F0(v10, v44[0], v44[1]);
  if ( v44[0] != &v45 )
    operator delete(v44[0], v45 + 1);
  v13 = *a1;
  result = *(_BYTE **)(*a1 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(*a1 + 24) )
    return (_BYTE *)sub_26239D0(v13, 41);
  *(_QWORD *)(v13 + 32) = result + 1;
  *result = 41;
  return result;
}

