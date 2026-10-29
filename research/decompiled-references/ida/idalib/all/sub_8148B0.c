__int64 __fastcall sub_8148B0(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, int a6)
{
  char byte; // al
  unsigned __int64 v12; // rcx
  __int64 *v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // r13
  char *v19; // rsi
  char v20; // dl
  unsigned __int8 v21; // r11
  unsigned __int8 v22; // r9
  int v23; // eax
  __int64 *v24; // rax
  __int64 v25; // r13
  int v26; // eax
  __int64 v27; // r13
  char *v28; // rdi
  void *v29; // rdi
  __int64 v30; // r12
  __int64 i; // rbx
  __int64 v32; // rax
  void *ptr[2]; // [rsp+18h] [rbp-60h] BYREF
  __int128 v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 )
    return sub_813F40(a1, *(_QWORD *)(a2 + 8), a4, a5, a5, a6);
  *(_OWORD *)ptr = 0;
  v35 = 0;
  ptr[1] = (void *)qvector_reserve(&ptr[1], 0, 1, 2);
  memset((char *)ptr[1] + 2 * v35, 0, 2 * (1 - v35));
  *(_QWORD *)&v35 = 1;
  *(_BYTE *)ptr[1] = 1;
  byte = get_byte(a3);
  v12 = 0;
  *((_BYTE *)ptr[1] + 1) = byte;
  v13 = *(__int64 **)(a2 + 8);
  v14 = v13[1];
  v15 = *v13;
  v16 = v14;
  while ( v12 < v16 )
  {
    v17 = (v16 + v12) >> 1;
    v18 = v15 + 40 * v17;
    v19 = *(char **)(v18 + 16);
    v20 = *v19;
    if ( *(_BYTE *)ptr[1] )
    {
      v21 = *((_BYTE *)ptr[1] + 1);
      v22 = v19[1];
      while ( 1 )
      {
        if ( v20 )
        {
          if ( v22 < v21 )
            goto LABEL_5;
          if ( v21 >= v22 )
            break;
        }
        if ( v12 >= v17 )
          goto LABEL_15;
        v18 = v15 + 40 * ((v12 + v17) >> 1);
        v28 = *(char **)(v18 + 16);
        v20 = *v28;
        v22 = v28[1];
        v16 = v17;
        v17 = (v12 + v17) >> 1;
      }
LABEL_12:
      if ( v18 )
      {
        v23 = sub_813490((__int64)a1, v18, a3);
        if ( v23 >= 0 )
        {
          v27 = sub_8148B0(
                  a1,
                  v18,
                  *(_QWORD *)(*a1 + 1504LL) & (a3 + *(_QWORD *)(v18 + 24)),
                  a4,
                  (unsigned int)(v23 + a5));
          if ( v27 )
            goto LABEL_21;
        }
        v24 = *(__int64 **)(a2 + 8);
        v14 = v24[1];
        v15 = *v24;
      }
      break;
    }
    if ( !v20 )
      goto LABEL_12;
LABEL_5:
    v12 = v17 + 1;
  }
LABEL_15:
  v25 = v15 + 40 * v14 - 40;
  if ( **(_BYTE **)(v25 + 16) || (v26 = sub_813490((__int64)a1, v15 + 40 * v14 - 40, a3), v26 < 0) )
    v27 = 0;
  else
    v27 = sub_8148B0(a1, v25, *(_QWORD *)(*a1 + 1504LL) & (a3 + *(_QWORD *)(v25 + 24)), a4, (unsigned int)(a5 + v26));
LABEL_21:
  if ( ptr[1] )
  {
    *(_QWORD *)&v35 = 0;
    qfree(ptr[1]);
  }
  if ( ptr[0] )
  {
    v29 = *(void **)ptr[0];
    if ( *(_QWORD *)ptr[0] )
    {
      v30 = *((_QWORD *)ptr[0] + 1);
      if ( v30 )
      {
        for ( i = 0; i != v30; ++i )
        {
          v32 = 5 * i;
          sub_814730((__int64)v29 + 8 * v32);
          v29 = *(void **)ptr[0];
        }
      }
      *((_QWORD *)ptr[0] + 1) = 0;
      qfree(v29);
    }
    qfree(ptr[0]);
  }
  return v27;
}
