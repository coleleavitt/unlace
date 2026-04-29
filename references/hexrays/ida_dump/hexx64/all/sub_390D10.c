__int64 __fastcall sub_390D10(__int64 a1, __int64 *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v5; // rbp
  char v6; // al
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r14
  _QWORD *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v14; // r12
  __int64 v15; // r14
  _QWORD *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbp
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int8 v24; // [rsp+7h] [rbp-81h]
  __int64 v26; // [rsp+10h] [rbp-78h] BYREF
  __int128 v27; // [rsp+18h] [rbp-70h]
  __int128 v28; // [rsp+28h] [rbp-60h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  int v30; // [rsp+40h] [rbp-48h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  v24 = *((_BYTE *)a2 + 51);
  if ( v24 )
    return 1;
  v3 = *a2;
  v5 = *a2 + 144 * a2[1];
  if ( v5 != *a2 )
  {
    do
    {
      if ( (get_tinfo_property(*(_QWORD *)(v3 + 64), 2) & 0x2F) == 0xD )
      {
        if ( !a3 )
          return 1;
        v30 = 1;
        v26 = 0;
        v29 = 0;
        v27 = 0;
        v28 = 0;
        if ( !(unsigned __int8)get_tinfo_details(*(_QWORD *)(v3 + 64), 13, &v26) )
        {
          v7 = v26;
          if ( !v26 )
            goto LABEL_16;
          v14 = v27;
          if ( (_QWORD)v27 )
          {
            v15 = 0;
            do
            {
              v16 = (_QWORD *)(v7 + 144 * v15);
              clear_tinfo_t(v16 + 8);
              v17 = v16[5];
              if ( v17 )
              {
                v16[6] = 0;
                qfree(v17);
              }
              v18 = v16[2];
              if ( v18 )
              {
                v16[3] = 0;
                qfree(v18);
              }
              ++v15;
              v7 = v26;
            }
            while ( v14 != v15 );
          }
          goto LABEL_15;
        }
        v6 = sub_390D10(a1, &v26, 1);
        v7 = v26;
        if ( v6 )
        {
          if ( v26 )
          {
            v19 = v27;
            if ( (_QWORD)v27 )
            {
              v20 = 0;
              do
              {
                v21 = (_QWORD *)(v7 + 144 * v20);
                clear_tinfo_t(v21 + 8);
                v22 = v21[5];
                if ( v22 )
                {
                  v21[6] = 0;
                  qfree(v22);
                }
                v23 = v21[2];
                if ( v23 )
                {
                  v21[3] = 0;
                  qfree(v23);
                }
                ++v20;
                v7 = v26;
              }
              while ( v19 != v20 );
            }
            *(_QWORD *)&v27 = 0;
            qfree(v7);
          }
          return 1;
        }
        if ( v26 )
        {
          v8 = v27;
          if ( (_QWORD)v27 )
          {
            v9 = 0;
            do
            {
              v10 = (_QWORD *)(v7 + 144 * v9);
              clear_tinfo_t(v10 + 8);
              v11 = v10[5];
              if ( v11 )
              {
                v10[6] = 0;
                qfree(v11);
              }
              v12 = v10[2];
              if ( v12 )
              {
                v10[3] = 0;
                qfree(v12);
              }
              ++v9;
              v7 = v26;
            }
            while ( v8 != v9 );
          }
LABEL_15:
          *(_QWORD *)&v27 = 0;
          qfree(v7);
        }
      }
LABEL_16:
      v3 += 144;
    }
    while ( v3 != v5 );
  }
  return v24;
}
