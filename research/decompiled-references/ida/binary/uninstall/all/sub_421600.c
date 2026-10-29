__int64 __fastcall sub_421600(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 result; // rax
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  int v25; // eax
  int v26; // edx
  int v27; // ebp
  _BYTE *v28; // rcx
  _BYTE *v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // edx
  int v33; // ebp
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  int v36; // eax
  int v37; // edx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  __int64 v41; // rdx
  _BYTE *v42; // rcx
  _BYTE *v43; // rcx
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  __int64 v46; // rdx
  _BYTE *v47; // rcx
  __int64 v48; // rcx
  int v49; // [rsp+Ch] [rbp-3Ch]
  __int64 v50; // [rsp+10h] [rbp-38h]

  v6 = *(_QWORD *)(a4 + 3264);
  result = 1;
  v8 = *(_DWORD *)(v6 + 28) - 1;
  if ( *(_DWORD *)(a2 + 28) == 4 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    v10 = v9 + 24LL * *(int *)(v9 + 20) + 24;
    v11 = v10 + 24LL * *(int *)(v9 + 24LL * *(int *)(v9 + 20) + 44);
    v50 = v11 + 24 + 24LL * *(int *)(v11 + 44) + 24;
    v49 = sub_41FD20(v10, a4);
    result = 1;
    if ( v49 >= 0 )
    {
      if ( *(_DWORD *)(v11 + 24) != 2 )
      {
        v12 = *(_QWORD *)(v6 + 16);
        v13 = 24LL * v8;
        v14 = *(_QWORD *)(v13 + v12 + 8);
        v15 = *(_QWORD *)(*(_QWORD *)(v13 + v12 + 16) + 16LL);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(v14 + 8);
        v16 = *(unsigned int *)(v11 + 44);
        *(_QWORD *)(a4 + 3288) = v15;
        sub_4399D0(a1, v11 + 48, v16, a4);
        goto LABEL_6;
      }
      v33 = sub_471010(a4, *(_QWORD *)(v11 + 56), *(unsigned int *)(v11 + 64), 0);
      if ( v33 > 255 )
      {
        v38 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v38 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v38 = *(_BYTE **)(a4 + 120);
        }
        *v38 = 2;
        v39 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v39;
        *v39 = HIBYTE(v33);
        v40 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v40;
        *v40 = BYTE2(v33);
        v41 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v41 + 1;
        *(_BYTE *)(v41 + 1) = BYTE1(v33);
        v42 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v42;
        *v42 = v33;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v36 = dword_65444C;
      }
      else
      {
        v34 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v34 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v34 = *(_BYTE **)(a4 + 120);
        }
        *v34 = 1;
        v35 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v35;
        *v35 = v33;
        ++*(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v36 = dword_65442C;
      }
      if ( v36 )
      {
        if ( v36 == 0x80000000 )
          v36 = 1 - v33;
        if ( v36 >= 0 )
        {
          v37 = *(_DWORD *)(a4 + 48);
LABEL_36:
          *(_DWORD *)(a4 + 48) = v36 + v37;
          goto LABEL_6;
        }
        v37 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) >= v37 )
          goto LABEL_36;
        *(_DWORD *)(a4 + 44) = v37;
        *(_DWORD *)(a4 + 48) = v36 + v37;
      }
LABEL_6:
      if ( *(_DWORD *)v50 != 2 )
      {
        v17 = *(_QWORD *)(v6 + 16);
        v18 = 24LL * v8;
        v19 = *(_DWORD *)(*(_QWORD *)(v18 + v17 + 8) + 12LL);
        *(_QWORD *)(a4 + 3288) = *(_QWORD *)(*(_QWORD *)(v18 + v17 + 16) + 24LL);
        *(_DWORD *)(a4 + 3272) = v19;
        sub_4399D0(a1, v50 + 24, *(unsigned int *)(v50 + 20), a4);
        v20 = *(_BYTE **)(a4 + 120);
        goto LABEL_8;
      }
      v27 = sub_471010(a4, *(_QWORD *)(v50 + 32), *(unsigned int *)(v50 + 40), 0);
      if ( v27 > 255 )
      {
        v43 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v43 + 5) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v43 = *(_BYTE **)(a4 + 120);
        }
        *v43 = 2;
        v44 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v44;
        *v44 = HIBYTE(v27);
        v45 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v45;
        *v45 = BYTE2(v27);
        v46 = *(_QWORD *)(a4 + 120);
        *(_QWORD *)(a4 + 120) = v46 + 1;
        *(_BYTE *)(v46 + 1) = BYTE1(v27);
        v47 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v47;
        *v47 = v27;
        v48 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v31 = dword_65444C;
        v20 = (_BYTE *)(v48 + 1);
        *(_QWORD *)(a4 + 120) = v20;
      }
      else
      {
        v28 = *(_BYTE **)(a4 + 120);
        if ( (unsigned __int64)(v28 + 2) > *(_QWORD *)(a4 + 128) )
        {
          sub_439150(a4);
          v28 = *(_BYTE **)(a4 + 120);
        }
        *v28 = 1;
        v29 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
        *(_QWORD *)(a4 + 120) = v29;
        *v29 = v27;
        v30 = *(_QWORD *)(a4 + 120);
        *(_DWORD *)(a4 + 3276) = 0;
        v31 = dword_65442C;
        v20 = (_BYTE *)(v30 + 1);
        *(_QWORD *)(a4 + 120) = v20;
      }
      if ( v31 )
      {
        if ( v31 == 0x80000000 )
          v31 = 1 - v27;
        if ( v31 >= 0 )
        {
          v32 = *(_DWORD *)(a4 + 48);
LABEL_26:
          *(_DWORD *)(a4 + 48) = v31 + v32;
          goto LABEL_8;
        }
        v32 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) >= v32 )
          goto LABEL_26;
        *(_DWORD *)(a4 + 44) = v32;
        *(_DWORD *)(a4 + 48) = v31 + v32;
      }
LABEL_8:
      if ( (unsigned __int64)(v20 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v20 = *(_BYTE **)(a4 + 120);
      }
      *v20 = 115;
      v21 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v21;
      *v21 = HIBYTE(v49);
      v22 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v22;
      *v22 = BYTE2(v49);
      v23 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v23;
      *v23 = BYTE1(v49);
      v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v24;
      *v24 = v49;
      *(_DWORD *)(a4 + 3276) = 0;
      v25 = dword_65526C;
      ++*(_QWORD *)(a4 + 120);
      if ( !v25 )
        return 0;
      if ( v25 == 0x80000000 )
        v25 = 1 - v49;
      if ( v25 < 0 )
      {
        v26 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v26 )
        {
          *(_DWORD *)(a4 + 44) = v26;
          *(_DWORD *)(a4 + 48) = v26 + v25;
          return 0;
        }
      }
      else
      {
        v26 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v26 + v25;
      return 0;
    }
  }
  return result;
}

