__int64 __fastcall sub_1941E0(__int64 a1, signed int a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rcx
  int v6; // r15d
  unsigned __int64 *v7; // rbp
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __m128i *v14; // r12
  __int64 v15; // rax
  unsigned __int64 v17; // r13
  char v18; // al
  __int64 v19; // rdx
  unsigned int **v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rsi
  unsigned int **v26; // [rsp+10h] [rbp-88h]
  unsigned int v27; // [rsp+1Ch] [rbp-7Ch]
  __int64 v28; // [rsp+20h] [rbp-78h] BYREF
  __int128 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+38h] [rbp-60h]
  char v31; // [rsp+40h] [rbp-58h]
  unsigned __int64 v32; // [rsp+48h] [rbp-50h]
  char v33; // [rsp+50h] [rbp-48h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD **)a1;
  v34 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 208) = a2;
  v6 = *(_DWORD *)(*(_QWORD *)(v3 + 1504) + 84LL);
  v7 = (unsigned __int64 *)(*v4 + 24LL * a2);
  v8 = *v7;
  if ( *v7 )
  {
    v9 = (_QWORD *)*v7;
    if ( v7[1] )
      v9 = *(_QWORD **)(v8 + 8);
LABEL_4:
    if ( (_QWORD *)v8 == v9 )
      return 0;
    while ( v9[4] <= 1u || *((_DWORD *)v9 + 16) != v6 )
    {
      if ( (*v9 & 2) == 0 )
      {
        v10 = (_QWORD *)v9[2];
        if ( (*(_BYTE *)v10 & 2) != 0 )
        {
          v11 = (_QWORD *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
          v12 = *v11;
          if ( (*v11 & 2) == 0 )
          {
            while ( (_QWORD *)v11[2] == v9 )
            {
              v9 = v11;
              v13 = v12 & 0xFFFFFFFFFFFFFFFCLL;
              v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v12 & 2) != 0 )
              {
                v9 = (_QWORD *)v13;
                goto LABEL_4;
              }
              v11 = (_QWORD *)v13;
            }
          }
          v9 = v11;
        }
        else
        {
          do
          {
            v9 = v10;
            v10 = (_QWORD *)v10[1];
          }
          while ( (*(_BYTE *)v10 & 2) == 0 );
        }
        goto LABEL_4;
      }
    }
    LOBYTE(v29) = 0;
    v28 = -1;
    v14 = sub_193220((_QWORD *)(a1 + 16), a2, &v28);
    v15 = v14->m128i_i64[0];
    if ( v14->m128i_i64[0] )
    {
      if ( v14->m128i_i64[1] )
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( v15 != v17 )
        {
          v27 = 0;
          while ( 1 )
          {
            v18 = *(_BYTE *)(v17 + 32);
            v19 = *(_QWORD *)(v17 + 24);
            v33 = 1;
            v31 = v18;
            v28 = 0;
            v30 = v19;
            v32 = 0xFFFFFFFF00000001LL;
            v29 = 0;
            v20 = (unsigned int **)sub_104DF0(v7, (__int64)&v28);
            if ( v28 )
            {
              v26 = v20;
              *(_QWORD *)&v29 = 0;
              qfree(v28);
              v20 = v26;
            }
            if ( v20 && (unsigned __int64)v20[1] > 1 && *((_DWORD *)v20 + 10) == v6 )
              v27 += sub_194030(a1, v17 + 40, v20, v21);
            if ( (*(_QWORD *)v17 & 2) != 0 )
              goto LABEL_33;
            v22 = *(_QWORD *)(v17 + 16);
            if ( (*(_BYTE *)v22 & 2) != 0 )
            {
              v23 = (_QWORD *)(*(_QWORD *)v17 & 0xFFFFFFFFFFFFFFFCLL);
              v24 = *v23;
              if ( (*v23 & 2) == 0 )
              {
                while ( v23[2] == v17 )
                {
                  v17 = v24 & 0xFFFFFFFFFFFFFFFCLL;
                  v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v24 & 2) != 0 )
                    goto LABEL_33;
                  v25 = v23;
                  v23 = (_QWORD *)v17;
                  v17 = (unsigned __int64)v25;
                }
              }
              v17 = (unsigned __int64)v23;
              if ( (_QWORD *)v14->m128i_i64[0] == v23 )
                return v27;
            }
            else
            {
              while ( (**(_BYTE **)(v22 + 8) & 2) == 0 )
                v22 = *(_QWORD *)(v22 + 8);
              v17 = v22;
LABEL_33:
              if ( v14->m128i_i64[0] == v17 )
                return v27;
            }
          }
        }
      }
    }
  }
  return 0;
}
