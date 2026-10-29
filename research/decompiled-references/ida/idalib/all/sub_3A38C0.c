__int64 __fastcall sub_3A38C0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int *a4, int a5)
{
  int v5; // eax
  int v6; // r13d
  __int64 v8; // rbp
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r11
  char *v18; // r15
  int v19; // eax
  const char *v21; // rsi
  signed int v22; // r14d
  char v23; // al
  __int64 v24; // r11
  unsigned __int64 v25; // r10
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // r11
  unsigned __int64 v29; // r10
  __int64 v30; // r8
  void *v31; // rax
  __int64 v32; // [rsp+8h] [rbp-80h]
  __int64 v33; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+10h] [rbp-78h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  unsigned __int64 v39; // [rsp+18h] [rbp-70h]
  unsigned __int64 v40; // [rsp+18h] [rbp-70h]
  unsigned __int64 v41; // [rsp+18h] [rbp-70h]
  bool v42; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+20h] [rbp-68h]
  void *v46; // [rsp+30h] [rbp-58h] BYREF
  __int128 v47; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 148);
  v48 = __readfsqword(0x28u);
  v6 = *a4;
  if ( _bittest(&v5, *a4) )
    return -1;
  v8 = v6;
  v42 = a3 == -1 && a2 == 0 && a5 != 0;
  v10 = 104LL * v6;
  v11 = a1 + v10 + 168;
  v12 = a1 + v10 + 184;
  v13 = *(_QWORD **)(v11 + 24);
  if ( !v13 )
  {
LABEL_11:
    if ( v42 )
    {
      while ( ((unsigned int)getinf(10) & *(_DWORD *)&asc_23AD760[4 * v8]) != 0 )
      {
        LODWORD(v46) = *(_DWORD *)(a1 + 148) | (1 << v6);
        sub_3A2DF0((unsigned int *)(a1 + 148), (unsigned int *)&v46, 0x74u);
        sub_3792E0(0x46u, (unsigned int)dword_23AD7A0[v8]);
        if ( (a5 & 2) == 0 )
          goto LABEL_14;
        if ( v6 > 0 )
        {
          v19 = *(_DWORD *)(a1 + 148);
          v21 = " ";
          v22 = 0;
          while ( 1 )
          {
            if ( !_bittest(&v19, v22) )
            {
              if ( ((unsigned int)getinf(10) & *(_DWORD *)v21) != 0 )
                goto LABEL_27;
              v19 = *(_DWORD *)(a1 + 148);
            }
            ++v22;
            v21 += 4;
            if ( v6 == v22 )
              goto LABEL_15;
          }
        }
        v22 = 0;
LABEL_27:
        if ( v6 == v22 )
        {
LABEL_14:
          v19 = *(_DWORD *)(a1 + 148);
LABEL_15:
          if ( _bittest(&v19, v6) )
            return -1;
        }
        else
        {
          v8 = v22;
          v6 = v22;
          *a4 = v22;
        }
        v10 = 104 * v8;
        v13 = *(_QWORD **)(a1 + 104 * v8 + 192);
        if ( v13 )
        {
          v12 = a1 + 104 * v8 + 184;
          goto LABEL_3;
        }
      }
    }
    return -1;
  }
LABEL_3:
  v14 = (_QWORD *)v12;
  do
  {
    while ( 1 )
    {
      v15 = v13[2];
      v16 = v13[3];
      if ( a2 >= v13[4] )
        break;
      v14 = v13;
      v13 = (_QWORD *)v13[2];
      if ( !v15 )
        goto LABEL_7;
    }
    v13 = (_QWORD *)v13[3];
  }
  while ( v16 );
LABEL_7:
  if ( (_QWORD *)v12 == v14 )
    goto LABEL_11;
  v17 = v14[5];
  v18 = (char *)a2;
  if ( v17 - 1 >= a2 )
    v18 = (char *)(v17 - 1);
  if ( (unsigned __int64)v18 >= a3 )
    goto LABEL_11;
  if ( a5 )
  {
    if ( v18 + 1 == (char *)v14[4] || v18 == (char *)-2LL )
    {
      v40 = v17 - 1;
      v36 = v14[5];
      v33 = v10;
      sub_3A3560(a1 + v10 + 176, v14, *(_DWORD *)(a1 + 104 * v8 + 232));
      v25 = v40;
      v24 = v36;
      v26 = v33;
    }
    else
    {
      v43 = v10;
      v39 = v17 - 1;
      v35 = v14[5];
      v32 = (__int64)(v18 + 2);
      v23 = must_journal(v12, v15, v16);
      v24 = v35;
      v25 = v39;
      v26 = v43;
      if ( v23 )
      {
        v46 = nullptr;
        v47 = 0;
        sub_3A0A80((__int64 *)&v46, v14[4]);
        v27 = v47;
        v28 = v35;
        v29 = v39;
        v30 = v43;
        if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v47 + 1) )
        {
          v31 = (void *)qvector_reserve(&v46, v46, v47 + 1, 1);
          v30 = v43;
          v29 = v39;
          v46 = v31;
          v28 = v35;
          v27 = v47;
        }
        v44 = v30;
        v41 = v29;
        *((_BYTE *)v46 + v27) = 1;
        *(_QWORD *)&v47 = v47 + 1;
        v37 = v28;
        sub_3A0A80((__int64 *)&v46, v14[5]);
        sub_3A0A80((__int64 *)&v46, v32);
        add_undo_record(*(unsigned int *)(a1 + 104 * v8 + 240), v46, v47);
        v24 = v37;
        v25 = v41;
        v26 = v44;
        if ( v46 )
        {
          *(_QWORD *)&v47 = 0;
          qfree(v46);
          v26 = v44;
          v25 = v41;
          v24 = v37;
        }
      }
      v14[5] = v32;
    }
    if ( v25 < a2 )
    {
      v46 = v18;
      *(_QWORD *)&v47 = v24;
      sub_3A3720((_QWORD *)(a1 + v26 + 176), (__int64 *)&v46, (__int64 *)&v47, *(_DWORD *)(a1 + 104 * v8 + 224));
    }
  }
  return (__int64)v18;
}
