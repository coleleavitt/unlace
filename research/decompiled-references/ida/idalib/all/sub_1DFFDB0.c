__int64 __fastcall sub_1DFFDB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 *v15; // rcx
  bool v16; // zf
  __int64 *v17; // rax
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 *v20; // rax
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rdx

  v7 = *(unsigned __int16 *)(a2 + 36);
  if ( (_WORD)v7 == 334 )
  {
    v8 = (__int64 *)(**(_QWORD **)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*v8 + 17) & 4) == 0 && !(unsigned __int8)sub_B8E180(a1 + 64) )
    {
      v27 = sub_F63270(*v8, a2, v7, a4, a5, a6);
      if ( !v27 )
        return 0;
      if ( !a1 )
        return 0;
      if ( (_QWORD *)a1 != v27 )
      {
        v28 = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 32LL))(v27);
        if ( v28 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1) )
          return 0;
      }
    }
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
    {
      v9 = sub_B8C3D0(a1, a2, v7, a4, a5, a6);
      v13 = *((unsigned int *)v9 + 2);
      v14 = *v9 + 8 * v13;
      if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
        v15 = (__int64 *)*sub_B8C3D0(a1, a2, v13, v10, v11, v12);
      else
        v15 = nullptr;
      v16 = v15 == (__int64 *)v14;
      if ( (unsigned __int64)v15 >= v14 )
        goto LABEL_18;
LABEL_8:
      v17 = v15;
      while ( *(_WORD *)(*v17 + 36) != 334 )
      {
        if ( (__int64 *)v14 == ++v17 )
          return 1;
      }
      while ( 1 )
      {
LABEL_13:
        v19 = *v15;
        if ( *(_WORD *)(*v15 + 36) != 334 )
        {
          v20 = v15 + 1;
          do
          {
            v19 = *v20;
            v15 = v20++;
          }
          while ( *(_WORD *)(v19 + 36) != 334 );
        }
        v21 = *(_QWORD *)&byte_8[**(_QWORD **)(a2 + 40) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (*(_QWORD *)&byte_8[**(_QWORD **)(v19 + 40) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[**(_QWORD **)(v19 + 40) & 0xFFFFFFFFFFFFFFF0LL]
             | (unsigned __int8)**(_QWORD **)(v19 + 40))
            & 7) == (v21 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v21 | (unsigned __int8)**(_QWORD **)(a2 + 40)) & 7) )
          return 0;
        v16 = ++v15 == (__int64 *)v14;
        if ( (unsigned __int64)v15 < v14 )
          goto LABEL_8;
LABEL_18:
        if ( v16 )
          return 1;
        if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 334 )
        {
          v22 = (__int64 *)(v14 + 8);
          while ( v15 != v22 )
          {
            v23 = *v22++;
            if ( *(_WORD *)(v23 + 36) == 334 )
              goto LABEL_13;
          }
          return 1;
        }
      }
    }
    return 1;
  }
  result = 1;
  if ( (_WORD)v7 == 149 )
  {
    v24 = *(unsigned int *)(a2 + 40);
    if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 34 <= 5 )
    {
      if ( (_DWORD)v24 == 637 )
      {
        if ( (unsigned int)sub_B76070(a1, a2, v24, a4)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 120) + 48LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 44
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1D490(a1, a2, v29, a4) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 43 )
        {
          return 0;
        }
        goto LABEL_29;
      }
      if ( (unsigned int)v24 >= 0x27D && (unsigned int)(v24 - 965) <= 1 )
      {
LABEL_29:
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v26 = (unsigned int)*(unsigned __int8 *)(v25 + 16) - 25;
        if ( (unsigned int)v26 > 1 )
          v25 = sub_F63050(v25, a2, v26, a4);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 24)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 > 1 )
          return 0;
      }
    }
    return 1;
  }
  return result;
}
