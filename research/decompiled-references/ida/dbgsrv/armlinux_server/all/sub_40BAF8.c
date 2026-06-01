/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BAF8
// Address: 0x000000000040BAF8

//----- (000000000040BAF8) ----------------------------------------------------
__int64 __fastcall sub_40BAF8(__int64 a1, __int64 a2)
{
  char **v4; // x22
  void **v5; // x19
  char **v6; // x20
  __int64 v7; // x0
  char *v8; // x28
  __int64 v9; // x23
  void **v10; // x21
  const char *v11; // x26
  const char *v12; // t1
  size_t v13; // x0
  void *v14; // x23
  size_t v15; // x27
  __int64 v16; // x1
  __int64 v17; // x21
  char *v18; // x0
  unsigned __int64 v19; // x2
  unsigned __int64 v20; // x3
  __int64 v21; // x3
  char *v22; // x0
  unsigned __int64 v23; // x2
  unsigned __int64 v24; // x1
  __int64 v25; // x1
  unsigned __int64 v27; // x28
  _QWORD *v28; // x0
  __int64 v29; // [xsp+88h] [xbp-18h] BYREF
  _QWORD v30[2]; // [xsp+90h] [xbp-10h] BYREF

  *(_QWORD *)(a1 + 40) = a1 + 88;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)a1 = off_519960;
  *(_QWORD *)(a1 + 96) = 0;
  *(_BYTE *)(a1 + 912) = 0;
  *(_BYTE *)(a1 + 913) = 0;
  *(float *)(a1 + 72) = 1.0;
  memset((void *)(a1 + 104), 0, 0x110u);
  memset((void *)(a1 + 384), 0, 0x210u);
  v4 = off_520890;
  if ( off_520890[0] )
  {
    v5 = (void **)(a2 + 24);
    v6 = (char **)(a2 + 48);
    while ( 1 )
    {
      v8 = (char *)*v5;
      v7 = *(_QWORD *)(a2 + 32);
      if ( (unsigned __int64)(v7 + 1) > *(_QWORD *)(a2 + 40) )
      {
        v8 = (char *)sub_491288(a2 + 24, *v5, v7 + 1, 0x18u);
        v7 = *(_QWORD *)(a2 + 32);
        *v5 = v8;
      }
      v9 = 3 * v7;
      v10 = (void **)&v8[24 * v7];
      *v10 = nullptr;
      v10[1] = nullptr;
      v10[2] = nullptr;
      ++*(_QWORD *)(a2 + 32);
      v12 = *v4++;
      v11 = v12;
      if ( v12 )
      {
        v13 = strlen(v11);
        v14 = *(void **)&v8[8 * v9];
        v15 = v13;
        if ( v13 )
        {
          v27 = v13 + 1;
          if ( v13 + 1 > (unsigned __int64)v10[2] )
          {
            v14 = sub_491288((__int64)v10, v14, v27, 1u);
            *v10 = v14;
          }
          v10[1] = (void *)v27;
          memmove(v14, v11, v15);
          *((_BYTE *)*v10 + v15) = 0;
          v14 = *v10;
          goto LABEL_8;
        }
      }
      else
      {
        v14 = *(void **)&v8[24 * v7];
      }
      v10[1] = nullptr;
LABEL_8:
      v16 = *(_QWORD *)(a2 + 56);
      v17 = a2 + 48;
      v18 = *(char **)(a2 + 48);
      v19 = v16 + 1;
      v30[0] = v14;
      v20 = *(_QWORD *)(a2 + 64);
      if ( v18 > (char *)v30 || v30 >= (_QWORD *)&v18[8 * v20] )
      {
        if ( v20 < v19 )
        {
          v18 = (char *)sub_491288(a2 + 48, v18, v19, 8u);
          v16 = *(_QWORD *)(a2 + 56);
          v14 = (void *)v30[0];
          *v6 = v18;
        }
      }
      else if ( v20 < v19 )
      {
        v18 = (char *)sub_491288(a2 + 48, v18, v19, 8u);
        v16 = *(_QWORD *)(a2 + 56);
        *v6 = v18;
      }
      *(_QWORD *)&v18[8 * v16] = v14;
      v21 = *(_QWORD *)(a2 + 56) + 1LL;
      *(_QWORD *)(a2 + 56) = v21;
      if ( !*v4 )
        goto LABEL_13;
    }
  }
  v17 = a2 + 48;
  v21 = *(_QWORD *)(a2 + 56);
LABEL_13:
  v22 = *(char **)(a2 + 48);
  v23 = v21 + 1;
  v24 = *(_QWORD *)(a2 + 64);
  v29 = 0;
  if ( v22 <= (char *)&v29 && &v29 < (__int64 *)&v22[8 * v24] )
  {
    if ( v24 < v23 )
    {
      v28 = sub_491288(v17, v22, v23, 8u);
      *(_QWORD *)(a2 + 48) = v28;
      v28[*(_QWORD *)(v17 + 8)] = 0;
    }
    else
    {
      *(_QWORD *)&v22[8 * v21] = 0;
    }
  }
  else
  {
    if ( v24 < v23 )
    {
      v22 = (char *)sub_491288(v17, v22, v23, 8u);
      *(_QWORD *)(a2 + 48) = v22;
      v25 = v29;
      v21 = *(_QWORD *)(v17 + 8);
    }
    else
    {
      v25 = 0;
    }
    *(_QWORD *)&v22[8 * v21] = v25;
  }
  ++*(_QWORD *)(v17 + 8);
  *(_DWORD *)(a2 + 96) = 1;
  return v30[1] ^ _stack_chk_guard;
}
// 519960: using guessed type __int64 (__fastcall *off_519960[5])();
// 520890: using guessed type char *off_520890[3];
