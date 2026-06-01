unsigned __int64 __fastcall sub_5F7210(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rax
  __int64 *v3; // r15
  _QWORD *v4; // r14
  int v5; // ebx
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 idati; // rax
  __int64 v10; // rdi
  _QWORD *v12; // r12
  __int64 v13; // rbx
  _QWORD *v14; // rbp
  void *v15; // rdi
  int v16; // ecx
  __int64 *v17; // rbx
  __int64 *i; // rbp
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // r13d
  __int64 j; // rdx
  char v23; // al
  char v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+18h] [rbp-60h] BYREF
  __int64 v26; // [rsp+20h] [rbp-58h] BYREF
  __int64 v27; // [rsp+28h] [rbp-50h]
  __int16 v28; // [rsp+30h] [rbp-48h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v2 = (_QWORD *)*a1;
  if ( *(_QWORD *)(*a1 + 8) )
  {
    v24 = 0;
    v3 = a1;
    v4 = a2;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*v2 + 8 * v7);
      v25 = 0;
      if ( *(_QWORD *)(v8 + 72) )
      {
        v27 = *(_QWORD *)(v8 + 72);
        idati = (__int64)v4;
        v28 = 0;
        if ( !v4 )
          idati = get_idati(a1, a2);
        v26 = idati;
        create_tinfo(&v25, 61, 61, &v26);
        v10 = v25;
      }
      else
      {
        v10 = 0;
      }
      a2 = &qword_118 + 4;
      if ( get_tinfo_property(v10, 284) )
      {
        if ( v6 < v5 )
        {
          a2 = (_QWORD *)(*(_QWORD *)*v3 + 8LL * v6);
          memmove(a2 + 1, a2, 8LL * (v5 - v6));
          *a2 = v8;
          if ( (getinf(57) & 0xF) == 6 )
          {
            clear_tinfo_t(&v25);
            goto LABEL_17;
          }
          v24 = 1;
        }
        ++v6;
      }
      a1 = &v25;
      ++v5;
      clear_tinfo_t(&v25);
      v2 = (_QWORD *)*v3;
      v7 = v5;
    }
    while ( (unsigned __int64)v5 < *(_QWORD *)(*v3 + 8) );
    if ( !v24 )
      return v29 - __readfsqword(0x28u);
LABEL_17:
    v12 = (_QWORD *)v3[2];
    v13 = v12[2];
    while ( v13 )
    {
      v14 = (_QWORD *)v13;
      sub_5E3BF0(*(_QWORD **)(v13 + 24));
      v15 = *(void **)(v13 + 32);
      v13 = *(_QWORD *)(v13 + 16);
      if ( v15 )
      {
        v14[5] = 0;
        qfree(v15);
      }
      operator delete(v14, 0x40u);
    }
    v12[2] = 0;
    v16 = 0;
    v12[3] = v12 + 1;
    v12[4] = v12 + 1;
    v12[5] = 0;
    v17 = *(__int64 **)*v3;
    for ( i = &v17[*(_QWORD *)(*v3 + 8)]; i != v17; ++v17 )
    {
      for ( j = *v17; ; j = *(_QWORD *)(j + 48) )
      {
        v23 = *(_BYTE *)(j + 186) & 0xF;
        if ( v23 != 11 && v23 != 12 && v23 != 10 )
          break;
      }
      v19 = *(_QWORD *)j;
      if ( *(_QWORD *)j )
      {
        v20 = v3[2];
        v21 = v16 + 1;
        LODWORD(v27) = v16;
        v26 = v19;
        sub_5F7060(v20, (__int64)&v26);
        v16 = v21;
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}
