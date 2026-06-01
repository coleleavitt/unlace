__int64 *__fastcall sub_75D480(__int64 a1, __int64 a2, __int64 *a3)
{
  int *v5; // rax
  int v6; // r15d
  _QWORD *v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // ecx
  char *v11; // rax
  char *v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rdi
  bool v19; // zf
  __int64 *result; // rax
  _BYTE *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdi
  _BYTE *v26; // rdi
  _QWORD *v27; // [rsp+0h] [rbp-4A0h]
  int v29; // [rsp+2Ch] [rbp-474h]
  __int64 v30; // [rsp+38h] [rbp-468h] BYREF
  int v31; // [rsp+40h] [rbp-460h] BYREF
  char v32; // [rsp+48h] [rbp-458h]
  int v33; // [rsp+50h] [rbp-450h] BYREF
  char v34; // [rsp+58h] [rbp-448h]
  void *ptr; // [rsp+60h] [rbp-440h]
  __int64 v36; // [rsp+68h] [rbp-438h]
  _BYTE v37[1072]; // [rsp+70h] [rbp-430h] BYREF

  ptr = v37;
  v36 = 0x8000000000LL;
  v5 = *(int **)(*(_QWORD *)(sub_15D1F10(a2) + 24) + 8LL);
  if ( *((_BYTE *)v5 + 8) )
    sub_DBF6E(0);
  v6 = *v5;
  if ( *v5 == 1 )
  {
    ++*(_DWORD *)(a2 + 8);
    v24 = *a3;
    if ( *a3 )
    {
      v25 = a3[1];
      v19 = (*(_DWORD *)(v24 + 8))-- == 1;
      if ( v19 )
        sub_15D7BC0(v25, v24);
    }
    v26 = ptr;
    *a3 = a2;
    result = (__int64 *)v37;
    if ( v26 != v37 && v26 )
      return (__int64 *)sub_186B220(v26);
  }
  else
  {
    for ( ; v6; LODWORD(v36) = v10 + 1 )
    {
      --v6;
      v30 = a2;
      v31 = v6;
      v8 = *(_QWORD *)(a1 + 16);
      v32 = 0;
      v33 = v6;
      v34 = 0;
      v9 = sub_15DCAD0(v8, (int)&v30, 0);
      sub_15D0DF0(&v33);
      sub_15D0DF0(&v31);
      v10 = v36;
      if ( (unsigned int)v36 < HIDWORD(v36) )
      {
        v7 = ptr;
      }
      else
      {
        v29 = 2 * HIDWORD(v36);
        v11 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v36)));
        v10 = v36;
        v12 = (char *)ptr;
        v7 = v11;
        if ( (_DWORD)v36 )
        {
          if ( (unsigned int)(v36 - 1) <= 2 || v11 == (char *)ptr + 8 )
          {
            v22 = 0;
            v23 = 8LL * (unsigned int)v36;
            do
            {
              v7[v22 / 8] = *(_QWORD *)&v12[v22];
              v22 += 8LL;
            }
            while ( v23 != v22 );
          }
          else
          {
            v13 = 0;
            v14 = 16LL * ((unsigned int)v36 >> 1);
            do
            {
              *(__m128i *)&v7[v13 / 8] = _mm_loadu_si128((const __m128i *)&v12[v13]);
              v13 += 16LL;
            }
            while ( v14 != v13 );
            if ( (v10 & 1) != 0 )
              v7[v10 & 0xFFFFFFFE] = *(_QWORD *)&v12[8 * (v10 & 0xFFFFFFFE)];
          }
        }
        if ( v12 && v12 != v37 )
        {
          v27 = v7;
          sub_186B220(v12);
          v10 = v36;
          v7 = v27;
        }
        ptr = v7;
        HIDWORD(v36) = v29;
      }
      v7[v10] = v9;
    }
    v15 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
    v16 = v15;
    if ( v15 )
      ++*(_DWORD *)(v15 + 8);
    v17 = *a3;
    if ( *a3 )
    {
      v18 = a3[1];
      v19 = (*(_DWORD *)(v17 + 8))-- == 1;
      if ( v19 )
        sub_15D7BC0(v18, v17);
    }
    result = a3;
    v21 = ptr;
    *a3 = v16;
    if ( v21 )
    {
      result = (__int64 *)v37;
      if ( v21 != v37 )
        return (__int64 *)sub_186B220(v21);
    }
  }
  return result;
}

