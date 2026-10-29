__int64 __fastcall sub_82E1B0(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, _QWORD *a5)
{
  __int64 v10; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // r15
  _QWORD *v16; // rax
  int v17; // edx
  __int64 result; // rax
  _QWORD *v19; // rax
  unsigned __int8 **v20; // rbx
  _QWORD *v21; // rax
  unsigned __int8 *v22; // rbp
  _BOOL8 v23; // r15
  unsigned __int8 *v24; // rdx
  __int64 v25; // rax
  unsigned __int8 *v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // r13
  void *v32; // rdi
  __int64 v33; // [rsp+8h] [rbp-40h]
  __int64 v34; // [rsp+8h] [rbp-40h]
  __int64 v35; // [rsp+8h] [rbp-40h]
  __int64 v36; // [rsp+8h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)(v10 + 2160);
  v14 = ((unsigned int)sub_8175F0(a2, v12) >> 3) & 7;
  if ( (_BYTE)v14 == 7 )
    v14 = 1;
  if ( a4 == 5 )
  {
    v35 = *a3;
    v15 = sub_2575D20(a2, v12, v13);
    if ( v35 == v15 )
      v17 = sub_257DC20(a3, a5, v14);
    else
      v17 = sub_257BF20(a3, a5, v14);
    goto LABEL_22;
  }
  if ( a4 > 5 )
  {
    if ( a4 == 6 )
    {
      v34 = *a3;
      v15 = sub_2575D20(a2, v12, v13);
      if ( v34 == v15 )
        v17 = sub_257DC40(a3, a5, v14);
      else
        v17 = sub_257BF10(a3, a5, v14);
      goto LABEL_22;
    }
LABEL_16:
    sub_A2E130(a1, a2, 110, 0);
    return 0;
  }
  if ( a4 == 2 )
  {
    v36 = *a3;
    v15 = sub_2575D20(a2, v12, v13);
    if ( v36 == v15 )
      v17 = sub_2581E80(a3, a5, v14);
    else
      v17 = sub_257BC30(a3, a5, v14);
    goto LABEL_22;
  }
  if ( a4 != 3 )
    goto LABEL_16;
  v33 = *a5;
  v15 = sub_2575D20(a2, v12, *a5);
  v16 = a5;
  if ( v15 == v33 )
    v16 = (_QWORD *)a5[1];
  if ( (*((_BYTE *)v16 + 20) & 7) == 3 )
    sub_A2E240(a1, a2, 2306, 0);
  if ( v15 == *a3 )
    v17 = sub_2581790(a3, a5, v14);
  else
    v17 = sub_257C2B0(a3, a5, v14);
LABEL_22:
  v19 = a3;
  if ( *a3 == v15 )
    v19 = (_QWORD *)a3[1];
  if ( (*((_BYTE *)v19 + 20) & 7) != 1 )
    return sub_81FBE0(a1, a2, v17);
  v20 = (unsigned __int8 **)sub_A2E240(a1, a2, 2209, 0);
  v21 = a3;
  if ( *a3 == v15 )
    v21 = (_QWORD *)a3[1];
  if ( v20 )
  {
    v22 = *v20;
    v23 = (*((_BYTE *)v21 + 20) & 7) == 1;
    if ( !*v20 )
    {
      v26 = v20[1];
      v27 = *((_DWORD *)v26 + 3744);
      if ( v27 )
      {
        v28 = (unsigned int)(v27 - 1);
        *((_DWORD *)v26 + 3744) = v28;
        v22 = *(unsigned __int8 **)&v26[8 * v28 + 14848];
        v29 = *((unsigned int *)v22 + 134);
        *v22 = 0;
        v30 = *((_QWORD *)v22 + 66);
        *((_DWORD *)v22 + 106) = 0;
        v31 = v30 + (v29 << 6);
        while ( v30 != v31 )
        {
          while ( 1 )
          {
            v31 -= 64;
            v32 = *(void **)(v31 + 24);
            if ( v32 == (void *)(v31 + 40) )
              break;
            operator delete(v32, *(_QWORD *)(v31 + 40) + 1LL);
            if ( v30 == v31 )
              goto LABEL_42;
          }
        }
LABEL_42:
        *((_DWORD *)v22 + 134) = 0;
      }
      else
      {
        v22 = (unsigned __int8 *)operator new(0x3A0u);
        *v22 = 0;
        *((_QWORD *)v22 + 12) = v22 + 112;
        *((_QWORD *)v22 + 16) = v22 + 144;
        *((_QWORD *)v22 + 20) = v22 + 176;
        *((_QWORD *)v22 + 24) = v22 + 208;
        *((_QWORD *)v22 + 28) = v22 + 240;
        *((_QWORD *)v22 + 32) = v22 + 272;
        *((_QWORD *)v22 + 36) = v22 + 304;
        *((_QWORD *)v22 + 40) = v22 + 336;
        *((_QWORD *)v22 + 44) = v22 + 368;
        *((_QWORD *)v22 + 48) = v22 + 400;
        *((_QWORD *)v22 + 13) = 0;
        v22[112] = 0;
        *((_QWORD *)v22 + 17) = 0;
        v22[144] = 0;
        *((_QWORD *)v22 + 21) = 0;
        v22[176] = 0;
        *((_QWORD *)v22 + 25) = 0;
        v22[208] = 0;
        *((_QWORD *)v22 + 29) = 0;
        v22[240] = 0;
        *((_QWORD *)v22 + 33) = 0;
        v22[272] = 0;
        *((_QWORD *)v22 + 37) = 0;
        v22[304] = 0;
        *((_QWORD *)v22 + 41) = 0;
        v22[336] = 0;
        *((_QWORD *)v22 + 45) = 0;
        v22[368] = 0;
        *((_QWORD *)v22 + 49) = 0;
        v22[400] = 0;
        *((_QWORD *)v22 + 52) = v22 + 432;
        *((_QWORD *)v22 + 53) = 0x800000000LL;
        *((_QWORD *)v22 + 66) = v22 + 544;
        *((_QWORD *)v22 + 67) = 0x600000000LL;
      }
      *v20 = v22;
    }
    v22[*v22 + 1] = 2;
    v24 = *v20;
    v25 = **v20;
    *v24 = v25 + 1;
    *(_QWORD *)&v24[8 * v25 + 16] = v23;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1LL) = 1;
  result = 1;
  if ( *(_DWORD *)(a1 + 964) <= 1u )
    return *(unsigned __int8 *)(a1 + 963);
  return result;
}

