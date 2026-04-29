__int64 __fastcall sub_1FD530(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v10; // rcx
  unsigned int *v11; // rdx
  unsigned int *v12; // rax
  __int64 v13; // rax
  __int64 v14; // r12
  __m128i *v15; // r13
  _QWORD *v16; // r8
  unsigned __int8 v17; // r10
  __int64 v18; // r12
  unsigned __int8 v19; // al
  __int64 *v20; // rbp
  __int64 v21; // rcx
  unsigned int *v22; // rdx
  unsigned int *v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // [rsp+10h] [rbp-A8h]
  _QWORD *v34; // [rsp+10h] [rbp-A8h]
  unsigned __int8 v35; // [rsp+1Fh] [rbp-99h]
  unsigned __int8 v36; // [rsp+1Fh] [rbp-99h]
  _QWORD v37[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v38; // [rsp+30h] [rbp-88h] BYREF
  __int128 v39; // [rsp+38h] [rbp-80h]
  _QWORD v40[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v41[11]; // [rsp+60h] [rbp-58h] BYREF

  v41[3] = __readfsqword(0x28u);
  if ( a2 && (*(_BYTE *)(a3 + 48) & 0x10) == 0 && *(_BYTE *)(a3 + 32) != 5 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( a2 >= *(_DWORD *)(v4 + 64) )
      sub_1FC780();
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 528) + 8LL * a2);
    if ( *(_DWORD *)(v6 + 76) != 1 )
    {
      v7 = sub_1FD210((_QWORD *)v6, a3, 1);
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 16);
        v39 = 0;
        v37[0] = 0;
        v37[1] = 0;
        v38 = 0;
        sub_FF8A0(a3, v8, (__int64)v37);
        sub_123560((__int64)v40, v6, v7, 0x181u);
        if ( !(unsigned __int8)sub_60400(v40, v37)
          && !(unsigned __int8)sub_313370(v41, &v38)
          && !sub_A55E0(v6, v37, *(_QWORD *)(v6 + 48), v7, 1u) )
        {
          *(_BYTE *)(a3 + 48) |= 0x10u;
          *(_BYTE *)(a1 + 40) = 1;
          v10 = *(_QWORD *)(a3 + 8);
          v11 = (unsigned int *)(*(_QWORD *)a3 + 4 * v10);
          if ( *(unsigned int **)a3 == v11 )
            goto LABEL_21;
          v12 = *(unsigned int **)a3;
          while ( *v12 != a2 )
          {
            if ( v11 == ++v12 )
              goto LABEL_21;
          }
          if ( v11 == v12 )
          {
LABEL_21:
            if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v10 + 1) )
            {
              v30 = qvector_reserve(a3, *(_QWORD *)a3, v10 + 1, 4);
              v31 = *(_QWORD *)(a3 + 8);
              *(_QWORD *)a3 = v30;
              v11 = (unsigned int *)(v30 + 4 * v31);
            }
            *v11 = a2;
            v13 = *(_QWORD *)(a3 + 24);
            ++*(_QWORD *)(a3 + 8);
            v14 = *(int *)(a3 + 40);
            v33 = v13;
            v35 = *(_BYTE *)(a3 + 32);
            v15 = (__m128i *)(**(_QWORD **)(a1 + 32) + 24LL * (int)a2);
            v16 = sub_FFCE0((unsigned __int64 *)v15, a3);
            if ( (_QWORD *)v15->m128i_i64[0] == v16 )
            {
              v32 = sub_103550(v15, (const __m128i *)(a3 + 24), *(_DWORD *)(a3 + 40), a2);
              if ( (*(_BYTE *)(a3 + 48) & 4) != 0 )
                *(_BYTE *)(v32 + 72) |= 4u;
            }
            else
            {
              v17 = v35;
              v18 = v33 + v14;
              do
              {
                v19 = *((_BYTE *)v16 + 56);
                v20 = v16 + 3;
                if ( v19 >= v17 && (v17 < v19 || v18 <= v16[6]) )
                  break;
                v21 = v16[4];
                v22 = (unsigned int *)(*v20 + 4 * v21);
                if ( (unsigned int *)*v20 == v22 )
                  goto LABEL_38;
                v23 = (unsigned int *)*v20;
                while ( *v23 != a2 )
                {
                  if ( v22 == ++v23 )
                    goto LABEL_38;
                }
                if ( v22 == v23 )
                {
LABEL_38:
                  if ( v16[5] < (unsigned __int64)(v21 + 1) )
                  {
                    v36 = v17;
                    v34 = v16;
                    v28 = qvector_reserve(v16 + 3, *v20, v21 + 1, 4);
                    v29 = v20[1];
                    v17 = v36;
                    *v20 = v28;
                    v16 = v34;
                    v22 = (unsigned int *)(v28 + 4 * v29);
                  }
                  *v22 = a2;
                  ++v20[1];
                }
                if ( (*v16 & 2) == 0 )
                {
                  v24 = (_QWORD *)v16[2];
                  if ( (*(_BYTE *)v24 & 2) != 0 )
                  {
                    v25 = (_QWORD *)(*v16 & 0xFFFFFFFFFFFFFFFCLL);
                    v26 = *v25;
                    if ( (*v25 & 2) == 0 )
                    {
                      while ( (_QWORD *)v25[2] == v16 )
                      {
                        v16 = v25;
                        v27 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                        v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                        if ( (v26 & 2) != 0 )
                        {
                          v16 = (_QWORD *)v27;
                          goto LABEL_36;
                        }
                        v25 = (_QWORD *)v27;
                      }
                    }
                    v16 = v25;
                  }
                  else
                  {
                    do
                    {
                      v16 = v24;
                      v24 = (_QWORD *)v24[1];
                    }
                    while ( (*(_BYTE *)v24 & 2) == 0 );
                  }
                }
LABEL_36:
                ;
              }
              while ( v16 != (_QWORD *)v15->m128i_i64[0] );
            }
          }
        }
        if ( v41[0] )
        {
          v41[1] = 0;
          qfree(v41[0]);
        }
        qfree(v40[0]);
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38);
        }
        qfree(v37[0]);
      }
    }
  }
  return 0;
}
