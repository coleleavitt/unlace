unsigned __int64 __fastcall sub_1912470(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 i; // rbx
  __int64 v13; // r9
  _WORD *v14; // rsi
  _QWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  _QWORD *v21; // rax

  v6 = *(_QWORD *)(a2 + 16);
  v7 = sub_C94450(a2);
  sub_1910D40(a1[1], v7, v6, 1, v8, v9, a3, a4);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = sub_B98F20(v10) + 8LL * (unsigned __int16)(*(_DWORD *)(v10 + 84) >> 13);
  for ( i = sub_B98F20(v10); v11 != i; i += 8 )
  {
    while ( 1 )
    {
      v14 = *(_WORD **)(*(_QWORD *)i + 8LL);
      if ( (*v14 & 0x1FF) != 0x6F )
        goto LABEL_3;
      v15 = (_QWORD *)a1[3];
      v16 = 8 * a1[4];
      v17 = (__int64)&v15[(unsigned __int64)v16 / 8];
      v18 = v16 >> 5;
      v19 = v16 >> 3;
      if ( v18 <= 0 )
        break;
      if ( v14 == (_WORD *)*v15 )
      {
        v20 = (_QWORD *)a1[3];
      }
      else
      {
        v20 = v15 + 1;
        if ( v14 != (_WORD *)v15[1] )
        {
          v20 = v15 + 2;
          if ( v14 != (_WORD *)v15[2] )
          {
            v20 = v15 + 3;
            v21 = &v15[4 * v18];
            if ( v14 != (_WORD *)v15[3] )
            {
              while ( 1 )
              {
                v20 = v15 + 4;
                if ( v21 == v15 + 4 )
                {
                  v19 = (v17 - (__int64)v20) >> 3;
                  goto LABEL_18;
                }
                if ( v14 == (_WORD *)v15[4] )
                  goto LABEL_24;
                if ( v14 == (_WORD *)v15[5] )
                {
                  v20 = v15 + 5;
                  goto LABEL_24;
                }
                if ( v14 == (_WORD *)v15[6] )
                {
                  v20 = v15 + 6;
                  if ( (_QWORD *)v17 != v15 + 6 )
                    goto LABEL_3;
                  goto LABEL_21;
                }
                if ( v14 == (_WORD *)v15[7] )
                  break;
                v15 += 4;
              }
              v20 = v15 + 7;
              if ( (_QWORD *)v17 != v15 + 7 )
                goto LABEL_3;
              goto LABEL_21;
            }
          }
        }
      }
LABEL_24:
      if ( (_QWORD *)v17 == v20 )
        goto LABEL_21;
LABEL_3:
      i += 8;
      if ( v11 == i )
        return sub_19120F0((__int64)a1, a2, *(double *)a3.m128_u64, a4);
    }
    v20 = (_QWORD *)a1[3];
LABEL_18:
    if ( v19 != 2 )
    {
      if ( v19 != 3 )
      {
        if ( v19 != 1 )
          goto LABEL_21;
        goto LABEL_34;
      }
      if ( v14 == (_WORD *)*v20 )
        goto LABEL_24;
      ++v20;
    }
    if ( v14 == (_WORD *)*v20 )
      goto LABEL_24;
    ++v20;
LABEL_34:
    if ( v14 == (_WORD *)*v20 )
      goto LABEL_24;
LABEL_21:
    sub_1911C50((__int64)a1, (__int64)v14, (__int64)v20, (__int64)v15, v17, v13, a3, a4);
  }
  return sub_19120F0((__int64)a1, a2, *(double *)a3.m128_u64, a4);
}
