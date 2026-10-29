/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52750
// Address: 0x0000000000052750

//----- (0000000000052750) ----------------------------------------------------
__int64 __fastcall sub_52750(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x0
  __int64 v7; // x9
  __int64 v8; // x23
  void *v9; // x0
  int v10; // w0
  __int64 v11; // x8
  void *v12; // x1
  __int64 v13; // x9
  size_t v14; // x21
  __int64 v15; // x26
  unsigned __int64 v16; // x22
  unsigned int v17; // w20
  __int64 v18; // x0
  void *v19; // x1
  __int64 v20; // x8
  size_t v21; // x21
  __int64 v22; // x25
  __int64 v23; // x26
  unsigned __int64 v24; // x22
  _BYTE src[28]; // [xsp+B4h] [xbp-BCh] BYREF
  __int64 v27; // [xsp+118h] [xbp-58h]

  v27 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
  v7 = *(_QWORD *)(a1 + 480);
  v8 = v6 - v7;
  if ( qlseek(*(_QWORD *)(a1 + 472), v7 + a3, 0) == -1 )
  {
    sub_3C748(a2, "bad offset %08x", a3);
  }
  else
  {
    v9 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v9);
      *(_QWORD *)a2 = 0;
      *(_QWORD *)(a2 + 16) = 0;
    }
    while ( 1 )
    {
      v10 = qlread(*(_QWORD *)(a1 + 472), src, 0x64u);
      if ( v10 < 0 )
        break;
      if ( v10 )
      {
        v11 = 0;
        do
        {
          if ( !src[v11] )
            break;
          ++v11;
        }
        while ( (int)v11 < v10 );
      }
      else
      {
        LODWORD(v11) = 0;
      }
      v12 = *(void **)a2;
      v13 = *(_QWORD *)(a2 + 8);
      v14 = (int)v11;
      if ( v13 )
        v15 = v13 - 1;
      else
        v15 = 0;
      v16 = v15 + (int)v11 + 1;
      if ( *(_QWORD *)(a2 + 16) < v16 )
      {
        v12 = qvector_reserve((pthread_mutex_t *)a2, v12, v15 + (int)v11 + 1, 1u);
        *(_QWORD *)a2 = v12;
      }
      *(_QWORD *)(a2 + 8) = v16;
      *((_BYTE *)v12 + v15 + v14) = 0;
      memmove((void *)(*(_QWORD *)a2 + v15), src, v14);
      if ( (unsigned int)v14 < 0x64 )
      {
        v17 = 1;
        goto LABEL_26;
      }
    }
    v18 = __strlen_chk("{truncated name}", 17);
    v19 = *(void **)a2;
    v20 = *(_QWORD *)(a2 + 8);
    v21 = v18;
    if ( v20 )
      v22 = v20 - 1;
    else
      v22 = 0;
    v23 = v22 + v18;
    v24 = v22 + v18 + 1;
    if ( *(_QWORD *)(a2 + 16) < v24 )
    {
      v19 = qvector_reserve((pthread_mutex_t *)a2, v19, v24, 1u);
      *(_QWORD *)a2 = v19;
    }
    *(_QWORD *)(a2 + 8) = v24;
    *((_BYTE *)v19 + v23) = 0;
    memmove((void *)(*(_QWORD *)a2 + v22), "{truncated name}", v21);
  }
  v17 = 0;
LABEL_26:
  qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v8, 0);
  return v17;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
