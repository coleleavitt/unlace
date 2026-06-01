/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003DE00
// Address: 0x000000010003DE00

//----- (000000010003DE00) ----------------------------------------------------
__int64 __fastcall sub_10003DE00(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 **v2; // r15
  unsigned __int8 *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // rcx
  unsigned __int8 *v9; // r12
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int8 *v15; // r14
  __int128 v17; // [rsp+0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+10h] [rbp-60h]
  __int128 *v19; // [rsp+28h] [rbp-48h] BYREF
  void *__p[2]; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-30h]

  v1 = (__int64 *)a1;
  v17 = 0;
  v18 = 0;
  v2 = (__int64 **)sub_10003CD00(a1, (__int64 *)&v17);
  if ( v2 )
  {
    v3 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32LL * *(_QWORD *)(a1 + 32) - 32);
    LOBYTE(v19) = 2;
    *(_OWORD *)__p = 0;
    v21 = 0;
    copy_idcv((unsigned __int8 *)&v19, v3);
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v5 = v4 - 1;
      v1[4] = v5;
      sub_100039BA0((unsigned __int8 *)(v1[3] + 32 * v5));
    }
    if ( (unsigned __int8)v19 == 5 )
    {
      sub_1000380B0((unsigned __int8 **)__p[0], (unsigned __int8 *)&v19);
    }
    else if ( (unsigned __int8)v19 == 7 && __p[0] )
    {
      __p[1] = nullptr;
      qfree(__p[0]);
    }
    v9 = (unsigned __int8 *)(v1[3] + 32 * v1[4] - 32);
    v10 = *((_DWORD *)v2 + 7);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = sub_100033FB0(v1[1], v10);
        v12 = *(_DWORD *)(v11 + 60);
        if ( v12 != -1 )
          break;
        v10 = *(_DWORD *)(v11 + 24);
        if ( !v10 )
          goto LABEL_15;
      }
      LODWORD(v1) = sub_10003CF30((__int64)v1, v2, v12, (__int64)&v17, v9, 0);
    }
    else
    {
LABEL_15:
      v19 = &v17;
      v13 = sub_100044870(v2, (__int64)&v17, (__int64)&byte_10009086F, (__int64 *)&v19);
      LOBYTE(v1) = 1;
      copy_idcv((unsigned __int8 *)v13 + 56, v9);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( !v6 )
    {
      v7 = *(_BYTE **)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) )
      {
        v8 = 0;
      }
      else
      {
        v7 = qvector_reserve(a1 + 24, *(void **)(a1 + 24), 1u, 0x20u);
        *(_QWORD *)(a1 + 24) = v7;
        v8 = *(_QWORD *)(a1 + 32);
      }
      v14 = 32 * v8;
      v7[v14] = 2;
      *(_OWORD *)&v7[v14 + 8] = 0;
      *(_QWORD *)&v7[v14 + 24] = 0;
      v6 = *(_QWORD *)(a1 + 32) + 1LL;
      *(_QWORD *)(a1 + 32) = v6;
    }
    v15 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 32 * v6 - 32);
    sub_10003BC00(v15);
    sub_10003B860(a1, (__int64)v15);
    LODWORD(v1) = 0;
  }
  if ( (_QWORD)v17 )
  {
    *((_QWORD *)&v17 + 1) = 0;
    qfree((void *)v17);
  }
  return (unsigned int)v1;
}
// 10009086F: using guessed type char byte_10009086F;
