__int64 __fastcall sub_42BE50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 result; // rax
  int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  int v21; // eax
  int v22; // edx
  int v23; // ebp
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  __int64 v27; // rdx
  _BYTE *v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // edx
  int v32; // r13d
  _BYTE *v33; // rcx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  __int64 v36; // rdx
  _BYTE *v37; // rcx
  int v38; // eax
  int v39; // edx
  _BYTE *v40; // rcx
  _BYTE *v41; // rcx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  __int64 v44; // rcx

  v5 = *(_QWORD *)(a4 + 3264);
  result = 1;
  v7 = *(_DWORD *)(v5 + 28) - 1;
  if ( *(_DWORD *)(a2 + 28) == 3 )
  {
    v8 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL);
    if ( *(_DWORD *)(v8 + 24) != 2 )
    {
      v9 = *(_QWORD *)(v5 + 16);
      v10 = 24LL * v7;
      v11 = *(_QWORD *)(v10 + v9 + 8);
      v12 = *(_QWORD *)(*(_QWORD *)(v10 + v9 + 16) + 8LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v11 + 4);
      v13 = *(unsigned int *)(v8 + 44);
      *(_QWORD *)(a4 + 3288) = v12;
      sub_4399D0(a1, v8 + 48, v13, a4);
      goto LABEL_4;
    }
    v32 = sub_471010(a4, *(_QWORD *)(v8 + 56), *(unsigned int *)(v8 + 64), 0);
    if ( v32 <= 255 )
    {
      v40 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v40 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v40 = *(_BYTE **)(a4 + 120);
      }
      *v40 = 1;
      v41 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v41;
      *v41 = v32;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v38 = dword_65442C;
    }
    else
    {
      v33 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v33 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v33 = *(_BYTE **)(a4 + 120);
      }
      *v33 = 2;
      v34 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v34;
      *v34 = HIBYTE(v32);
      v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v35;
      *v35 = BYTE2(v32);
      v36 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v36 + 1;
      *(_BYTE *)(v36 + 1) = BYTE1(v32);
      v37 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v37;
      *v37 = v32;
      ++*(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v38 = dword_65444C;
    }
    if ( v38 )
    {
      if ( v38 == 0x80000000 )
        v38 = 1 - v32;
      if ( v38 >= 0 )
      {
        v39 = *(_DWORD *)(a4 + 48);
LABEL_33:
        *(_DWORD *)(a4 + 48) = v38 + v39;
        goto LABEL_4;
      }
      v39 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v39 )
        goto LABEL_33;
      *(_DWORD *)(a4 + 44) = v39;
      *(_DWORD *)(a4 + 48) = v38 + v39;
    }
LABEL_4:
    v14 = v8 + 24 + 24LL * *(int *)(v8 + 44);
    if ( *(_DWORD *)(v14 + 24) != 2 )
    {
      v15 = *(_QWORD *)(v5 + 16);
      v16 = 24LL * v7;
      v17 = *(_QWORD *)(v16 + v15 + 8);
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + v15 + 16) + 16LL);
      *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v17 + 8);
      v19 = *(unsigned int *)(v14 + 44);
      *(_QWORD *)(a4 + 3288) = v18;
      sub_4399D0(a1, v14 + 48, v19, a4);
      v20 = *(_BYTE **)(a4 + 120);
      goto LABEL_6;
    }
    v23 = sub_471010(a4, *(_QWORD *)(v14 + 56), *(unsigned int *)(v14 + 64), 0);
    if ( v23 <= 255 )
    {
      v42 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v42 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v42 = *(_BYTE **)(a4 + 120);
      }
      *v42 = 1;
      v43 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v43;
      *v43 = v23;
      v44 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v30 = dword_65442C;
      v20 = (_BYTE *)(v44 + 1);
      *(_QWORD *)(a4 + 120) = v20;
    }
    else
    {
      v24 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v24 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v24 = *(_BYTE **)(a4 + 120);
      }
      *v24 = 2;
      v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v25;
      *v25 = HIBYTE(v23);
      v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v26;
      *v26 = BYTE2(v23);
      v27 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v27 + 1;
      *(_BYTE *)(v27 + 1) = BYTE1(v23);
      v28 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v28;
      *v28 = v23;
      v29 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v30 = dword_65444C;
      v20 = (_BYTE *)(v29 + 1);
      *(_QWORD *)(a4 + 120) = v20;
    }
    if ( v30 )
    {
      if ( v30 == 0x80000000 )
        v30 = 1 - v23;
      if ( v30 >= 0 )
      {
        v31 = *(_DWORD *)(a4 + 48);
LABEL_23:
        *(_DWORD *)(a4 + 48) = v30 + v31;
        goto LABEL_6;
      }
      v31 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) >= v31 )
        goto LABEL_23;
      *(_DWORD *)(a4 + 44) = v31;
      *(_DWORD *)(a4 + 48) = v30 + v31;
    }
LABEL_6:
    if ( v20 == *(_BYTE **)(a4 + 128) )
    {
      sub_439150(a4);
      v20 = *(_BYTE **)(a4 + 120);
    }
    *v20 = 75;
    *(_DWORD *)(a4 + 3276) = 0;
    v21 = dword_654D6C;
    ++*(_QWORD *)(a4 + 120);
    if ( !v21 )
      return 0;
    if ( v21 == 0x80000000 )
    {
      v22 = *(_DWORD *)(a4 + 48);
      v21 = 1;
    }
    else if ( v21 < 0 )
    {
      v22 = *(_DWORD *)(a4 + 48);
      if ( *(_DWORD *)(a4 + 44) < v22 )
      {
        *(_DWORD *)(a4 + 44) = v22;
        *(_DWORD *)(a4 + 48) = v22 + v21;
        return 0;
      }
    }
    else
    {
      v22 = *(_DWORD *)(a4 + 48);
    }
    *(_DWORD *)(a4 + 48) = v22 + v21;
    return 0;
  }
  return result;
}

