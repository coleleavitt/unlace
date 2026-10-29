__int64 __fastcall sub_7F1590(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 a4, int a5, int a6)
{
  __int64 *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r13
  char *v18; // rcx
  char v19; // si
  unsigned __int8 v20; // r11
  unsigned __int8 v21; // r9
  int v22; // eax
  __int64 *v23; // rax
  __int64 v24; // r13
  int v25; // eax
  __int64 v26; // r13
  char *v27; // rdi
  void *v28; // rdi
  __int64 v29; // r12
  __int64 i; // rbx
  __int64 v31; // rax
  void *ptr[2]; // [rsp+18h] [rbp-60h] BYREF
  __int128 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35; // [rsp+38h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 )
    return sub_7F0C80(a1, *(_QWORD *)(a2 + 8), a4, a5, a5, a6);
  *(_OWORD *)ptr = 0;
  v34 = 0;
  ptr[1] = (void *)qvector_reserve(&ptr[1], 0, 1, 2);
  memset((char *)ptr[1] + 2 * v34, 0, 2 * (1 - v34));
  *(_QWORD *)&v34 = 1;
  *(_BYTE *)ptr[1] = 1;
  *((_BYTE *)ptr[1] + 1) = get_byte(a3);
  v11 = *(__int64 **)(a2 + 8);
  v12 = 0;
  v13 = v11[1];
  v14 = *v11;
  v15 = v13;
  while ( v12 < v15 )
  {
    v16 = (v15 + v12) >> 1;
    v17 = v14 + 40 * v16;
    v18 = *(char **)(v17 + 16);
    v19 = *v18;
    if ( *(_BYTE *)ptr[1] )
    {
      v20 = *((_BYTE *)ptr[1] + 1);
      v21 = v18[1];
      while ( 1 )
      {
        if ( v19 )
        {
          if ( v21 < v20 )
            goto LABEL_5;
          if ( v20 >= v21 )
            break;
        }
        if ( v12 >= v16 )
          goto LABEL_15;
        v17 = v14 + 40 * ((v12 + v16) >> 1);
        v27 = *(char **)(v17 + 16);
        v19 = *v27;
        v21 = v27[1];
        v15 = v16;
        v16 = (v12 + v16) >> 1;
      }
LABEL_12:
      if ( v17 )
      {
        v22 = sub_7F02D0(a1, v17, a3);
        if ( v22 >= 0 )
        {
          v26 = sub_7F1590(a1, v17, a3 + *(_DWORD *)(v17 + 24), a4, (unsigned int)(v22 + a5));
          if ( v26 )
            goto LABEL_21;
        }
        v23 = *(__int64 **)(a2 + 8);
        v13 = v23[1];
        v14 = *v23;
      }
      break;
    }
    if ( !v19 )
      goto LABEL_12;
LABEL_5:
    v12 = v16 + 1;
  }
LABEL_15:
  v24 = v14 + 40 * v13 - 40;
  if ( **(_BYTE **)(v24 + 16) || (v25 = sub_7F02D0(a1, v14 + 40 * v13 - 40, a3), v25 < 0) )
    v26 = 0;
  else
    v26 = sub_7F1590(a1, v24, a3 + *(_DWORD *)(v24 + 24), a4, (unsigned int)(a5 + v25));
LABEL_21:
  if ( ptr[1] )
  {
    *(_QWORD *)&v34 = 0;
    qfree(ptr[1]);
  }
  if ( ptr[0] )
  {
    v28 = *(void **)ptr[0];
    if ( *(_QWORD *)ptr[0] )
    {
      v29 = *((_QWORD *)ptr[0] + 1);
      if ( v29 )
      {
        for ( i = 0; i != v29; ++i )
        {
          v31 = 5 * i;
          sub_7F1410((__int64)v28 + 8 * v31);
          v28 = *(void **)ptr[0];
        }
      }
      *((_QWORD *)ptr[0] + 1) = 0;
      qfree(v28);
    }
    qfree(ptr[0]);
  }
  return v26;
}

