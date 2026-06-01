/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_sub
// Address: 0x00000000000C42D0

//----- (00000000000C42D0) ----------------------------------------------------
__int64 __fastcall rangeset_t_sub(__int64 a1, unsigned __int64 *a2)
{
  int v2; // w8
  char v5; // w0
  unsigned int v6; // w19
  unsigned __int64 v7; // x9
  char *v8; // x23
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x21
  unsigned __int64 v11; // x24
  unsigned __int64 v12; // x9
  __int128 v13; // q0
  __int128 v14; // q0
  __int128 v16; // q0
  __int128 v17; // q0
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x24
  int v20; // w23
  char *v21; // x10
  unsigned __int64 v22; // x9
  unsigned __int64 *v23; // x11
  __int128 v24; // q0
  const void *v25; // x20
  void *v26; // x21
  __int128 v27; // q0
  __int128 v28; // q0
  void *ptr; // [xsp+0h] [xbp-80h] BYREF
  __int64 v30; // [xsp+8h] [xbp-78h]
  __int64 v31; // [xsp+10h] [xbp-70h]
  int v32; // [xsp+18h] [xbp-68h]
  char v33; // [xsp+1Ch] [xbp-64h]
  __int128 v34; // [xsp+20h] [xbp-60h] BYREF
  char v35; // [xsp+30h] [xbp-50h]
  __int64 v36; // [xsp+38h] [xbp-48h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *a2 >= a2[1] )
  {
    return 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 32);
    ptr = nullptr;
    v30 = 0;
    v31 = 0;
    v32 = v2;
    if ( v2 == -1 )
      v5 = 0;
    else
      v5 = must_journal();
    v33 = v5 & 1;
    v7 = *(_QWORD *)(a1 + 8);
    if ( !v7 )
      return 0;
    v8 = *(char **)a1;
    v9 = *a2;
    v10 = 0;
    while ( 1 )
    {
      v11 = *((_QWORD *)v8 + 1);
      if ( v11 > v9 )
        break;
      ++v10;
      v8 += 16;
      if ( v10 >= v7 )
        return 0;
    }
    v12 = a2[1];
    if ( *(_QWORD *)v8 < v12 )
    {
      if ( *(_QWORD *)v8 >= v9 )
      {
        if ( v11 <= v12 )
        {
          LODWORD(v10) = v10 - 1;
        }
        else
        {
          if ( (v5 & 1) != 0 )
          {
            v16 = *(_OWORD *)v8;
            v35 = 1;
            v34 = v16;
            sub_C5A18((char **)&ptr, (unsigned __int64)&v34);
            v12 = a2[1];
          }
          *(_QWORD *)v8 = v12;
          if ( v33 )
          {
            v17 = *(_OWORD *)v8;
            v35 = 0;
            v34 = v17;
            sub_C5A18((char **)&ptr, (unsigned __int64)&v34);
          }
        }
      }
      else
      {
        if ( (v5 & 1) != 0 )
        {
          v13 = *(_OWORD *)v8;
          v35 = 1;
          v34 = v13;
          sub_C5A18((char **)&ptr, (unsigned __int64)&v34);
          v9 = *a2;
        }
        *((_QWORD *)v8 + 1) = v9;
        if ( v33 )
        {
          v14 = *(_OWORD *)v8;
          v35 = 0;
          v34 = v14;
          sub_C5A18((char **)&ptr, (unsigned __int64)&v34);
        }
        if ( a2[1] < v11 )
        {
          *(_QWORD *)&v34 = a2[1];
          *((_QWORD *)&v34 + 1) = v11;
          sub_C3D98((char **)a1, (unsigned __int64 *)&v34, (__int64)&ptr);
          LODWORD(v10) = v10 + 1;
        }
      }
      v18 = *(_QWORD *)(a1 + 8);
      v19 = (int)v10 + 1;
      if ( v18 <= v19 )
      {
        v20 = v10;
      }
      else
      {
        v20 = v10;
        do
        {
          v21 = *(char **)a1;
          v22 = a2[1];
          v23 = (unsigned __int64 *)(*(_QWORD *)a1 + 16 * v19);
          if ( v22 <= *v23 )
            break;
          if ( v22 < v23[1] )
          {
            if ( v33 )
            {
              v27 = *(_OWORD *)v23;
              v35 = 1;
              v34 = v27;
              sub_C5A18((char **)&ptr, (unsigned __int64)&v34);
              v22 = a2[1];
              v21 = *(char **)a1;
            }
            *(_QWORD *)&v21[16 * v19] = v22;
            if ( v33 )
            {
              v28 = *(_OWORD *)(*(_QWORD *)a1 + 16 * v19);
              v35 = 0;
              v34 = v28;
              sub_C5A18((char **)&ptr, (unsigned __int64)&v34);
            }
            break;
          }
          if ( v33 )
          {
            v24 = *(_OWORD *)v23;
            v35 = 1;
            v34 = v24;
            sub_C5A18((char **)&ptr, (unsigned __int64)&v34);
            v18 = *(_QWORD *)(a1 + 8);
          }
          v19 = v20 + 2;
          ++v20;
        }
        while ( v18 > v19 );
      }
      if ( (_DWORD)v10 != v20 )
      {
        v25 = (const void *)(*(_QWORD *)a1 + 16 * v19);
        v26 = (void *)(*(_QWORD *)a1 + 16LL * (int)v10 + 16);
        memmove(v26, v25, *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8) - (_QWORD)v25);
        *(_QWORD *)(a1 + 8) -= ((_BYTE *)v25 - (_BYTE *)v26) >> 4;
      }
      *(_QWORD *)(a1 + 24) = 0;
      sub_C4214((__int64)&ptr);
      v6 = 1;
      if ( ptr )
      {
        v30 = 0;
        qfree(ptr);
        ptr = nullptr;
        v31 = 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
// C43FC: conditional instruction was optimized away because %ptr.8==0
