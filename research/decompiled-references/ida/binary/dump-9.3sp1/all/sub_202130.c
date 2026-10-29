__int64 __fastcall sub_202130(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  int v9; // r8d
  int v10; // r9d
  __int64 v12; // rcx
  unsigned int *v13; // rdx
  unsigned int *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __m128i *v17; // r13
  _QWORD *v18; // r8
  unsigned __int8 v19; // r10
  __int64 v20; // r12
  unsigned __int8 v21; // al
  __int64 *v22; // rbp
  __int64 v23; // rcx
  unsigned int *v24; // rdx
  unsigned int *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // [rsp+10h] [rbp-A8h]
  _QWORD *v36; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v37; // [rsp+1Fh] [rbp-99h]
  unsigned __int8 v38; // [rsp+1Fh] [rbp-99h]
  __int64 v39[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v40; // [rsp+30h] [rbp-88h] BYREF
  __int128 v41; // [rsp+38h] [rbp-80h]
  __int64 v42[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v43[11]; // [rsp+60h] [rbp-58h] BYREF

  v43[3] = __readfsqword(0x28u);
  if ( a2 && (*(_BYTE *)(a3 + 48) & 0x10) == 0 && *(_BYTE *)(a3 + 32) != 5 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( a2 >= *(_DWORD *)(v4 + 64) )
      sub_201380();
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * a2);
    if ( *(_DWORD *)(v6 + 76) != 1 )
    {
      v7 = sub_201E10((_QWORD *)v6, a3, 1);
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 16);
        v41 = 0;
        v39[0] = 0;
        v39[1] = 0;
        v40 = 0;
        sub_103D60(a3, v8, (__int64)v39);
        sub_127A20((__int64)v42, v6, v7, 385, v9, v10);
        if ( !(unsigned __int8)sub_64780(v42, v39)
          && !(unsigned __int8)sub_318470(v43, &v40)
          && !sub_A9AA0(v6, v39, *(_QWORD *)(v6 + 48), v7, 1u) )
        {
          *(_BYTE *)(a3 + 48) |= 0x10u;
          *(_BYTE *)(a1 + 40) = 1;
          v12 = *(_QWORD *)(a3 + 8);
          v13 = (unsigned int *)(*(_QWORD *)a3 + 4 * v12);
          if ( *(unsigned int **)a3 == v13 )
            goto LABEL_21;
          v14 = *(unsigned int **)a3;
          while ( *v14 != a2 )
          {
            if ( v13 == ++v14 )
              goto LABEL_21;
          }
          if ( v13 == v14 )
          {
LABEL_21:
            if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v12 + 1) )
            {
              v32 = qvector_reserve(a3, *(_QWORD *)a3, v12 + 1, 4);
              v33 = *(_QWORD *)(a3 + 8);
              *(_QWORD *)a3 = v32;
              v13 = (unsigned int *)(v32 + 4 * v33);
            }
            *v13 = a2;
            v15 = *(_QWORD *)(a3 + 24);
            ++*(_QWORD *)(a3 + 8);
            v16 = *(int *)(a3 + 40);
            v35 = v15;
            v37 = *(_BYTE *)(a3 + 32);
            v17 = (__m128i *)(**(_QWORD **)(a1 + 32) + 24LL * (int)a2);
            v18 = sub_1041A0((unsigned __int64 *)v17, a3);
            if ( (_QWORD *)v17->m128i_i64[0] == v18 )
            {
              v34 = sub_107A10(v17, (const __m128i *)(a3 + 24), *(_DWORD *)(a3 + 40), a2);
              if ( (*(_BYTE *)(a3 + 48) & 4) != 0 )
                *(_BYTE *)(v34 + 72) |= 4u;
            }
            else
            {
              v19 = v37;
              v20 = v35 + v16;
              do
              {
                v21 = *((_BYTE *)v18 + 56);
                v22 = v18 + 3;
                if ( v21 >= v19 && (v19 < v21 || v20 <= v18[6]) )
                  break;
                v23 = v18[4];
                v24 = (unsigned int *)(*v22 + 4 * v23);
                if ( (unsigned int *)*v22 == v24 )
                  goto LABEL_38;
                v25 = (unsigned int *)*v22;
                while ( *v25 != a2 )
                {
                  if ( v24 == ++v25 )
                    goto LABEL_38;
                }
                if ( v24 == v25 )
                {
LABEL_38:
                  if ( v18[5] < (unsigned __int64)(v23 + 1) )
                  {
                    v38 = v19;
                    v36 = v18;
                    v30 = qvector_reserve((__int64)(v18 + 3), *v22, v23 + 1, 4);
                    v31 = v22[1];
                    v19 = v38;
                    *v22 = v30;
                    v18 = v36;
                    v24 = (unsigned int *)(v30 + 4 * v31);
                  }
                  *v24 = a2;
                  ++v22[1];
                }
                if ( (*v18 & 2) == 0 )
                {
                  v26 = (_QWORD *)v18[2];
                  if ( (*(_BYTE *)v26 & 2) != 0 )
                  {
                    v27 = (_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFFCLL);
                    v28 = *v27;
                    if ( (*v27 & 2) == 0 )
                    {
                      while ( (_QWORD *)v27[2] == v18 )
                      {
                        v18 = v27;
                        v29 = v28 & 0xFFFFFFFFFFFFFFFCLL;
                        v28 = *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v28 & 2) != 0 )
                        {
                          v18 = (_QWORD *)v29;
                          goto LABEL_36;
                        }
                        v27 = (_QWORD *)v29;
                      }
                    }
                    v18 = v27;
                  }
                  else
                  {
                    do
                    {
                      v18 = v26;
                      v26 = (_QWORD *)v26[1];
                    }
                    while ( (*(_BYTE *)v26 & 2) == 0 );
                  }
                }
LABEL_36:
                ;
              }
              while ( v18 != (_QWORD *)v17->m128i_i64[0] );
            }
          }
        }
        if ( v43[0] )
        {
          v43[1] = 0;
          qfree(v43[0]);
        }
        qfree(v42[0]);
        if ( v40 )
        {
          *(_QWORD *)&v41 = 0;
          qfree(v40);
        }
        qfree(v39[0]);
      }
    }
  }
  return 0;
}
