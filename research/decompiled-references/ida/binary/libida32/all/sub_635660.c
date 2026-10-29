__int64 __fastcall sub_635660(__int64 *a1, __int64 *a2, int a3, __int64 *a4, _DWORD *a5, char a6)
{
  unsigned int v6; // r14d
  __int64 v8; // rsi
  __int64 tinfo_pdata; // rax
  void *v14; // rdi
  void *v15; // rsi
  __int64 v16; // rdi
  unsigned int type_ordinal; // r14d
  __int64 idati; // rax
  int v19; // r9d
  _BYTE *v20; // r8
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE *v34; // [rsp+8h] [rbp-98h]
  int v35; // [rsp+8h] [rbp-98h]
  _BYTE *v36; // [rsp+10h] [rbp-90h]
  __int64 v37; // [rsp+20h] [rbp-80h] BYREF
  void *ptr; // [rsp+28h] [rbp-78h] BYREF
  __int128 v39; // [rsp+30h] [rbp-70h]
  __int64 v40; // [rsp+48h] [rbp-58h] BYREF
  void *v41; // [rsp+50h] [rbp-50h]
  __int16 v42; // [rsp+58h] [rbp-48h]
  unsigned __int64 v43; // [rsp+60h] [rbp-40h]

  v6 = 0;
  v8 = *a4;
  v43 = __readfsqword(0x28u);
  v39 = 0;
  ptr = nullptr;
  if ( (v8 & 0x100) != 0 )
  {
    tinfo_pdata = get_tinfo_pdata(&ptr, v8, 1);
    v14 = ptr;
    if ( tinfo_pdata )
    {
      v15 = ptr;
      v16 = *a1;
      v37 = 0;
      type_ordinal = get_type_ordinal(v16, ptr);
      idati = *a1;
      if ( type_ordinal )
      {
        v42 = 257;
        v41 = (void *)type_ordinal;
        if ( !idati )
          idati = get_idati(v16, v15);
        v40 = idati;
        create_tinfo(&v37, 61, 189, &v40);
      }
      else if ( ptr )
      {
        v41 = ptr;
        v42 = 256;
        if ( !idati )
          idati = get_idati(v16, v15);
        v40 = idati;
        create_tinfo(&v37, 61, 61, &v40);
      }
      *a5 |= 4u;
      v19 = sub_633350((__int64)a1, type_ordinal, &v37, a5);
      if ( v19 == 2 )
      {
        v24 = a2[1];
        v25 = *a2;
        if ( a2[2] < (unsigned __int64)(v24 + 1) )
        {
          v32 = qvector_reserve(a2, v25, v24 + 1, 4);
          *a2 = v32;
          v25 = v32;
          v24 = a2[1];
        }
        *(_DWORD *)(v25 + 4 * v24) = a3;
        v26 = a2[1];
        v27 = *a2;
        v28 = v26 + 1;
        v29 = v26 + 2;
        a2[1] = v28;
        if ( a2[2] < v29 )
        {
          v31 = qvector_reserve(a2, v27, v29, 4);
          *a2 = v31;
          v27 = v31;
          v28 = a2[1];
        }
        *(_DWORD *)(v27 + 4 * v28) = type_ordinal;
        ++a2[1];
      }
      else
      {
        v20 = (_BYTE *)(a1[4] + (unsigned int)(a3 - 1));
        if ( (*v20 & 1) == 0 && (*v20 & 2) == 0 )
        {
          v22 = a1[2];
          v23 = a1[1];
          if ( a1[3] < (unsigned __int64)(v22 + 1) )
          {
            v36 = (_BYTE *)(a1[4] + (unsigned int)(a3 - 1));
            v35 = v19;
            v30 = qvector_reserve(a1 + 1, v23, v22 + 1, 4);
            a1[1] = v30;
            v23 = v30;
            v20 = v36;
            v22 = a1[2];
            v19 = v35;
          }
          *(_DWORD *)(v23 + 4 * v22) = a3;
          ++a1[2];
        }
        if ( v19 == 1 )
        {
          v34 = v20;
          sub_6332D0((__int64)a1, a2, type_ordinal, a6);
          v20 = v34;
          v21 = *v34 | 2;
        }
        else
        {
          v21 = *v20 | 1;
        }
        *v20 = v21 & 0xF7;
        *a5 = 1;
      }
      v6 = 1;
      clear_tinfo_t(&v37);
      v14 = ptr;
    }
    else
    {
      v6 = 0;
    }
    if ( v14 )
    {
      *(_QWORD *)&v39 = 0;
      qfree(v14);
    }
  }
  return v6;
}

