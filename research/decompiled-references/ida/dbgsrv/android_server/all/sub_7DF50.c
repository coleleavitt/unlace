/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DF50
// Address: 0x000000000007DF50

//----- (000000000007DF50) ----------------------------------------------------
void __fastcall sub_7DF50(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // x28
  __int64 *v5; // x25
  unsigned __int64 v6; // x8
  __int64 *v7; // x1
  unsigned __int64 v8; // x2
  unsigned __int64 v9; // x0
  unsigned __int64 v10; // x27
  unsigned __int64 v11; // x20
  unsigned __int64 v12; // x29
  __int64 ***v13; // x8
  __int64 **v14; // x26
  unsigned __int64 v15; // x8
  size_t v16; // x22
  unsigned __int8 *v17; // x23
  unsigned __int64 v18; // x8
  unsigned __int64 v19; // x10
  unsigned __int64 v20; // x11
  __int64 *v21; // x0
  unsigned __int8 *v22; // x8
  __int64 v23; // x9
  unsigned __int8 *v24; // x10
  size_t *v25; // x22
  float v26; // s0
  float v27; // s1
  _BOOL8 v28; // x9
  unsigned __int64 v29; // x8
  unsigned __int64 v30; // x9
  unsigned __int64 v31; // x1
  __int64 v32; // x9
  size_t **v33; // x8
  unsigned __int64 v34; // x8
  size_t **v35; // [xsp+8h] [xbp-78h]
  char v36[8]; // [xsp+10h] [xbp-70h] BYREF
  __int64 v37; // [xsp+18h] [xbp-68h]

  v37 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_OWORD *)a1 = 0u;
  *(_OWORD *)(a1 + 16) = 0u;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  sub_87044(a1, *(_QWORD *)(a2 + 8));
  v5 = *(__int64 **)(a2 + 16);
  if ( v5 )
  {
    v35 = (size_t **)(a1 + 16);
    do
    {
      v6 = *((unsigned __int8 *)v5 + 16);
      if ( (v6 & 1) != 0 )
        v7 = (__int64 *)v5[4];
      else
        v7 = (__int64 *)((char *)v5 + 17);
      if ( (v6 & 1) != 0 )
        v8 = v5[3];
      else
        v8 = v6 >> 1;
      v9 = sub_86778((__int64)v36, v7, v8);
      v10 = *(_QWORD *)(a1 + 8);
      v11 = v9;
      if ( v10 )
      {
        v12 = v10 - 1;
        if ( ((v10 - 1) & v10) != 0 )
        {
          v2 = v9;
          if ( v9 >= v10 )
            v2 = v9 % v10;
        }
        else
        {
          v2 = v12 & v9;
        }
        v13 = *(__int64 ****)(*(_QWORD *)a1 + 8 * v2);
        if ( v13 )
        {
          v14 = *v13;
          if ( *v13 )
          {
            v15 = *((unsigned __int8 *)v5 + 16);
            if ( (v15 & 1) != 0 )
              v16 = v5[3];
            else
              v16 = v15 >> 1;
            if ( (v15 & 1) != 0 )
              v17 = (unsigned __int8 *)v5[4];
            else
              v17 = (unsigned __int8 *)v5 + 17;
            do
            {
              v18 = (unsigned __int64)v14[1];
              if ( v18 == v11 )
                goto LABEL_29;
              if ( ((v10 - 1) & v10) != 0 )
              {
                if ( v18 >= v10 )
                {
                  if ( v18 % v10 != v2 )
                    break;
                  goto LABEL_29;
                }
              }
              else
              {
                v18 &= v12;
              }
              if ( v18 != v2 )
                break;
LABEL_29:
              v19 = *((unsigned __int8 *)v14 + 16);
              v20 = (unsigned __int64)v14[3];
              if ( (v19 & 1) == 0 )
                v20 = v19 >> 1;
              if ( v20 == v16 )
              {
                if ( (v19 & 1) != 0 )
                  v21 = v14[4];
                else
                  v21 = (__int64 *)((char *)v14 + 17);
                if ( (v19 & 1) != 0 )
                {
                  if ( !v16 || !memcmp(v21, v17, v16) )
                    goto LABEL_67;
                }
                else
                {
                  if ( !v16 )
                    goto LABEL_67;
                  v22 = (unsigned __int8 *)v14 + 17;
                  v23 = -(__int64)(v19 >> 1);
                  v24 = v17;
                  while ( *v22 == *v24 )
                  {
                    ++v22;
                    ++v23;
                    ++v24;
                    if ( !v23 )
                      goto LABEL_67;
                  }
                }
              }
              v14 = (__int64 **)*v14;
            }
            while ( v14 );
          }
        }
      }
      v25 = (size_t *)operator new(0x48u);
      sub_873A8(v25 + 2, (__int128 *)v5 + 1);
      *v25 = 0;
      v25[1] = v11;
      v26 = *(float *)(a1 + 32);
      v27 = (float)(unsigned __int64)(*(_QWORD *)(a1 + 24) + 1LL);
      if ( !v10 || (float)(v26 * (float)v10) < v27 )
      {
        v28 = v10 < 3 || ((v10 - 1) & v10) != 0;
        v29 = v28 | (2 * v10);
        v30 = vcvtps_u32_f32(v27 / v26);
        if ( v29 >= v30 )
          v31 = v29;
        else
          v31 = v30;
        sub_87044(a1, v31);
        v10 = *(_QWORD *)(a1 + 8);
        if ( ((v10 - 1) & v10) != 0 )
        {
          if ( v11 >= v10 )
            v2 = v11 % v10;
          else
            v2 = v11;
        }
        else
        {
          v2 = (v10 - 1) & v11;
        }
      }
      v32 = *(_QWORD *)a1;
      v33 = *(size_t ***)(*(_QWORD *)a1 + 8 * v2);
      if ( v33 )
      {
        *v25 = (size_t)*v33;
      }
      else
      {
        *v25 = (size_t)*v35;
        *v35 = v25;
        *(_QWORD *)(v32 + 8 * v2) = v35;
        if ( !*v25 )
          goto LABEL_66;
        v34 = *(_QWORD *)(*v25 + 8);
        if ( ((v10 - 1) & v10) != 0 )
        {
          if ( v34 >= v10 )
            v34 %= v10;
        }
        else
        {
          v34 &= v10 - 1;
        }
        v33 = (size_t **)(*(_QWORD *)a1 + 8 * v34);
      }
      *v33 = v25;
LABEL_66:
      ++*(_QWORD *)(a1 + 24);
LABEL_67:
      v5 = (__int64 *)*v5;
    }
    while ( v5 );
  }
}
// 7E1A0: variable 'v2' is possibly undefined
