__int64 __fastcall sub_39F0C0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4, int a5)
{
  int v5; // eax
  int v6; // r13d
  __int64 v7; // rbx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // r11
  __int64 v16; // rdx
  unsigned int v17; // r14d
  unsigned int v18; // r15d
  int v19; // eax
  const char *v21; // rsi
  signed int v22; // r14d
  unsigned int v23; // r11d
  __int64 v24; // r8
  unsigned int v25; // [rsp+0h] [rbp-68h]
  __int64 v26; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  unsigned int v29; // [rsp+8h] [rbp-60h]
  bool v31; // [rsp+17h] [rbp-51h]
  int v33; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v34; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v5 = *(_DWORD *)(a1 + 116);
  v35 = __readfsqword(0x28u);
  v6 = *a4;
  if ( _bittest(&v5, *a4) )
    return (unsigned int)-1;
  v7 = v6;
  v31 = a3 == -1 && a2 == 0 && a5 != 0;
  v10 = 104LL * v6;
  v11 = a1 + v10 + 136;
  v12 = *(_QWORD *)(v11 + 24);
  v13 = v11 + 16;
  if ( !v12 )
  {
LABEL_11:
    if ( v31 )
    {
      while ( ((unsigned int)getinf(10) & *(_DWORD *)&asc_2389740[4 * v7]) != 0 )
      {
        v33 = *(_DWORD *)(a1 + 116) | (1 << v6);
        sub_39DF60((_DWORD *)(a1 + 116), &v33, 0x74u);
        sub_375980(0x46u, (unsigned int)dword_2389780[v7]);
        if ( (a5 & 2) == 0 )
          goto LABEL_14;
        if ( v6 > 0 )
        {
          v19 = *(_DWORD *)(a1 + 116);
          v21 = " ";
          v22 = 0;
          while ( 1 )
          {
            if ( !_bittest(&v19, v22) )
            {
              if ( ((unsigned int)getinf(10) & *(_DWORD *)v21) != 0 )
                goto LABEL_27;
              v19 = *(_DWORD *)(a1 + 116);
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
          v19 = *(_DWORD *)(a1 + 116);
LABEL_15:
          if ( _bittest(&v19, v6) )
            return (unsigned int)-1;
        }
        else
        {
          v7 = v22;
          v6 = v22;
          *a4 = v22;
        }
        v10 = 104 * v7;
        v11 = a1 + 104 * v7 + 136;
        v12 = *(_QWORD *)(a1 + 104 * v7 + 160);
        if ( v12 )
        {
          v13 = a1 + 104 * v7 + 152;
          goto LABEL_3;
        }
      }
    }
    return (unsigned int)-1;
  }
LABEL_3:
  v14 = v13;
  do
  {
    while ( 1 )
    {
      v15 = *(_QWORD *)(v12 + 16);
      v16 = *(_QWORD *)(v12 + 24);
      if ( a2 >= *(_DWORD *)(v12 + 32) )
        break;
      v14 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v15 )
        goto LABEL_7;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v16 );
LABEL_7:
  if ( v13 == v14 )
    goto LABEL_11;
  v17 = a2;
  v18 = *(_DWORD *)(v14 + 36) - 1;
  if ( v18 >= a2 )
    v17 = *(_DWORD *)(v14 + 36) - 1;
  if ( v17 >= a3 )
    goto LABEL_11;
  if ( a5 )
  {
    if ( v17 + 1 == *(_DWORD *)(v14 + 32) || v17 == -2 )
    {
      v29 = *(_DWORD *)(v14 + 36);
      v26 = v10;
      sub_39E9A0(a1 + v10 + 144, v14, *(_DWORD *)(a1 + 104 * v7 + 200));
      v23 = v29;
      v24 = v26;
    }
    else
    {
      v28 = v10;
      v25 = *(_DWORD *)(v14 + 36);
      sub_39BBF0(v11, v14, v17 + 2);
      v23 = v25;
      v24 = v28;
    }
    if ( v18 < a2 )
    {
      v33 = v17;
      v34 = v23;
      sub_39ED20((_QWORD *)(a1 + v24 + 144), (unsigned int *)&v33, &v34, *(_DWORD *)(a1 + 104 * v7 + 192));
    }
  }
  return v17;
}

