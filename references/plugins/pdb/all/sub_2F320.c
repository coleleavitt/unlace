__int64 __fastcall sub_2F320(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, double a5, double a6, double a7)
{
  int v8; // edx
  __int64 v11; // rax
  size_t v12; // r15
  size_t v13; // r14
  unsigned __int64 v14; // r9
  __int64 v15; // rsi
  size_t v16; // rax
  unsigned int v17; // eax
  const void *v18; // rdi
  void *v20; // r8
  unsigned __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 *v24; // [rsp+0h] [rbp-98h]
  void *v25; // [rsp+8h] [rbp-90h]
  const void *v26; // [rsp+18h] [rbp-80h] BYREF
  signed __int64 v27; // [rsp+20h] [rbp-78h] BYREF
  const void *v28; // [rsp+28h] [rbp-70h] BYREF
  __int64 v29; // [rsp+30h] [rbp-68h] BYREF
  __int128 v30; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v32[8]; // [rsp+58h] [rbp-40h] BYREF

  v8 = *(_DWORD *)(a1 + 1148);
  v24 = a4;
  v32[0] = __readfsqword(0x28u);
  v30 = 0;
  v26 = nullptr;
  v27 = 0;
  v29 = 0;
  if ( v8 <= 0 )
  {
    if ( !under_debugger )
    {
      interr(30494);
LABEL_38:
      if ( !under_debugger )
        interr(30207);
    }
LABEL_40:
    BUG();
  }
  v11 = pack_dd(src, v32) - (_QWORD)src;
  v12 = v11;
  if ( v11 )
  {
    v13 = v30;
    v14 = v30 + v11;
    if ( __CFADD__((_QWORD)v30, v11) )
    {
      if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_10;
      }
LABEL_35:
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v15 = v29;
    v16 = v13;
    if ( *((_QWORD *)&v30 + 1) < v14 )
    {
      v25 = (void *)v14;
      v29 = qvector_reserve(&v29, v29, v14, 1);
      v15 = v29;
      v14 = (unsigned __int64)v25;
      v16 = v30;
    }
    v25 = (void *)v14;
    memset((void *)(v15 + v16), 0, v14 - v16);
    *(_QWORD *)&v30 = v25;
LABEL_10:
    memcpy((void *)(v13 + v29), src, v12);
  }
  v13 = *(_QWORD *)(a3 + 8);
  if ( !v13 )
    goto LABEL_12;
  v12 = v30;
  v20 = *(void **)a3;
  v21 = v30 + v13;
  if ( __CFADD__((_QWORD)v30, v13) )
  {
    if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_31;
    }
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v22 = v29;
  v23 = v30;
  if ( *((_QWORD *)&v30 + 1) < v21 )
  {
    v25 = v20;
    v29 = qvector_reserve(&v29, v29, v21, 1);
    v22 = v29;
    v20 = v25;
    v23 = v30;
  }
  v25 = v20;
  memset((void *)(v22 + v23), 0, v21 - v23);
  *(_QWORD *)&v30 = v21;
  v20 = v25;
LABEL_31:
  memcpy((void *)(v12 + v29), v20, v13);
LABEL_12:
  v17 = sub_2EC00(a1, a2, v29, v30, &v26, &v27);
  v18 = v26;
  a3 = v17;
  if ( v17 == 1 )
  {
    a2 -= 4;
    v28 = v26;
    switch ( a2 )
    {
      case 0u:
        goto LABEL_17;
      case 1u:
      case 2u:
      case 6u:
      case 7u:
        if ( v27 <= 3 )
          goto LABEL_38;
        sub_2F250((_QWORD *)a1, (unsigned __int64 *)&v28, (unsigned __int64)v26 + v27, v24, 0.0, a6, a7);
        goto LABEL_16;
      case 4u:
      case 5u:
      case 8u:
      case 9u:
      case 0xAu:
        if ( !v27 )
          goto LABEL_17;
        sub_25460(v24, v26, v27);
LABEL_16:
        v18 = v26;
LABEL_17:
        qfree(v18);
        goto LABEL_18;
      default:
        if ( under_debugger )
          goto LABEL_40;
        interr(30208);
        goto LABEL_35;
    }
  }
  qfree(v26);
  qstrncpy(a1 + 96, "PDB symbol extraction is not supported by the remote server", 1024);
LABEL_18:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  return (unsigned int)a3;
}
