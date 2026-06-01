__int64 __fastcall sub_4332C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  __int64 result; // rax
  int v7; // r13d
  int v8; // ebp
  _BYTE *v9; // rcx
  _BYTE *v10; // rcx
  _BYTE *v11; // rcx
  _BYTE *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // edx
  int v16; // eax
  int v17; // r15d
  __int64 v18; // rbp
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // rcx
  _BYTE *v24; // rcx
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  _BYTE *v29; // rcx
  bool v30; // zf
  int v31; // eax
  int v32; // edx
  int v33; // eax
  int v34; // ebp
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  int v37; // edx
  int v38; // eax
  _BYTE *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // r13d
  _BYTE *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  int v46; // edx
  int v47; // eax
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  _BYTE *v50; // rcx
  _BYTE *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  _BYTE *v54; // rcx
  _BYTE *v55; // rcx
  _BYTE *v56; // rcx
  _BYTE *v57; // rcx
  _BYTE *v58; // rcx
  __int64 v59; // [rsp+0h] [rbp-48h]
  __int64 v60; // [rsp+8h] [rbp-40h]

  v5 = *(_DWORD *)(a2 + 28);
  v60 = *(_QWORD *)(a4 + 3264);
  result = 1;
  v7 = *(_DWORD *)(v60 + 28) - 1;
  if ( v5 > 1 && *(_QWORD *)(a4 + 24) )
  {
    v8 = sub_471010(a4, "::", 2, 0);
    if ( v8 <= 255 )
    {
      v39 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v39 + 2) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v39 = *(_BYTE **)(a4 + 120);
      }
      *v39 = 1;
      v40 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v40 + 1;
      *(_BYTE *)(v40 + 1) = v8;
      v41 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v15 = dword_65442C;
      *(_QWORD *)(a4 + 120) = v41 + 1;
    }
    else
    {
      v9 = *(_BYTE **)(a4 + 120);
      if ( (unsigned __int64)(v9 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v9 = *(_BYTE **)(a4 + 120);
      }
      *v9 = 2;
      v10 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v10;
      *v10 = HIBYTE(v8);
      v11 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v11;
      *v11 = BYTE2(v8);
      v12 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v12;
      *v12 = BYTE1(v8);
      v13 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v13 + 1;
      *(_BYTE *)(v13 + 1) = v8;
      v14 = *(_QWORD *)(a4 + 120);
      *(_DWORD *)(a4 + 3276) = 0;
      v15 = dword_65444C;
      *(_QWORD *)(a4 + 120) = v14 + 1;
    }
    if ( v15 )
    {
      if ( v15 == 0x80000000 )
        v15 = 1 - v8;
      if ( v15 < 0 )
      {
        v16 = *(_DWORD *)(a4 + 48);
        if ( *(_DWORD *)(a4 + 44) < v16 )
          *(_DWORD *)(a4 + 44) = v16;
      }
      else
      {
        v16 = *(_DWORD *)(a4 + 48);
      }
      *(_DWORD *)(a4 + 48) = v15 + v16;
    }
    v17 = 1;
    v18 = *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24;
    v59 = 24LL * v7;
    while ( 1 )
    {
      v19 = sub_432100(a1, v18, a4);
      if ( v19 < 0 )
        return 1;
      if ( *(_DWORD *)v18 == 2 )
      {
        v42 = sub_471010(a4, *(_QWORD *)(v18 + 32), *(unsigned int *)(v18 + 40), 0);
        if ( v42 > 255 )
        {
          v48 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v48 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v48 = *(_BYTE **)(a4 + 120);
          }
          *v48 = 2;
          v49 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v49;
          *v49 = HIBYTE(v42);
          v50 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v50;
          *v50 = BYTE2(v42);
          v51 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v51;
          *v51 = BYTE1(v42);
          v52 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v52 + 1;
          *(_BYTE *)(v52 + 1) = v42;
          v53 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v46 = dword_65444C;
          v23 = (_BYTE *)(v53 + 1);
          *(_QWORD *)(a4 + 120) = v23;
        }
        else
        {
          v43 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v43 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v43 = *(_BYTE **)(a4 + 120);
          }
          *v43 = 1;
          v44 = *(_QWORD *)(a4 + 120);
          *(_QWORD *)(a4 + 120) = v44 + 1;
          *(_BYTE *)(v44 + 1) = v42;
          v45 = *(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v46 = dword_65442C;
          v23 = (_BYTE *)(v45 + 1);
          *(_QWORD *)(a4 + 120) = v23;
        }
        if ( !v46 )
          goto LABEL_18;
        if ( v46 == 0x80000000 )
          v46 = 1 - v42;
        if ( v46 < 0 )
        {
          v47 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v47 )
          {
            *(_DWORD *)(a4 + 44) = v47;
            *(_DWORD *)(a4 + 48) = v46 + v47;
            goto LABEL_18;
          }
        }
        else
        {
          v47 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v46 + v47;
      }
      else
      {
        v20 = *(_QWORD *)(v60 + 16);
        *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(v59 + v20 + 8) + 4LL * v17);
        v21 = *(_QWORD *)(v59 + v20 + 16);
        v22 = *(unsigned int *)(v18 + 20);
        *(_QWORD *)(a4 + 3288) = *(_QWORD *)(v21 + 8LL * v17);
        sub_4399D0(a1, v18 + 24, v22, a4);
        v23 = *(_BYTE **)(a4 + 120);
      }
LABEL_18:
      if ( (unsigned __int64)(v23 + 5) > *(_QWORD *)(a4 + 128) )
      {
        sub_439150(a4);
        v23 = *(_BYTE **)(a4 + 120);
      }
      *v23 = 123;
      v24 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v24;
      *v24 = HIBYTE(v19);
      v25 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v25;
      *v25 = BYTE2(v19);
      v26 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      *(_QWORD *)(a4 + 120) = v26;
      *v26 = BYTE1(v19);
      v27 = *(_QWORD *)(a4 + 120);
      *(_QWORD *)(a4 + 120) = v27 + 1;
      *(_BYTE *)(v27 + 1) = v19;
      *(_DWORD *)(a4 + 3276) = 0;
      v28 = dword_65536C;
      v29 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
      v30 = dword_65536C == 0;
      *(_QWORD *)(a4 + 120) = v29;
      if ( !v30 )
      {
        if ( v28 == 0x80000000 )
          v28 = 1 - v19;
        if ( v28 < 0 )
        {
          v31 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) < v31 )
            *(_DWORD *)(a4 + 44) = v31;
        }
        else
        {
          v31 = *(_DWORD *)(a4 + 48);
        }
        *(_DWORD *)(a4 + 48) = v28 + v31;
      }
      ++v17;
      v18 += 24LL * *(int *)(v18 + 20) + 24;
      if ( v17 >= v5 )
      {
        if ( v29 == *(_BYTE **)(a4 + 128) )
        {
          sub_439150(a4);
          v29 = *(_BYTE **)(a4 + 120);
        }
        *v29 = 3;
        *(_DWORD *)(a4 + 3276) = 0;
        v32 = dword_65446C;
        ++*(_QWORD *)(a4 + 120);
        if ( v32 )
        {
          if ( v32 == 0x80000000 )
          {
            v33 = *(_DWORD *)(a4 + 48);
            v32 = 1;
          }
          else if ( v32 < 0 )
          {
            v33 = *(_DWORD *)(a4 + 48);
            if ( *(_DWORD *)(a4 + 44) < v33 )
              *(_DWORD *)(a4 + 44) = v33;
          }
          else
          {
            v33 = *(_DWORD *)(a4 + 48);
          }
          *(_DWORD *)(a4 + 48) = v32 + v33;
        }
        v34 = sub_471010(a4, "", 0, 0);
        if ( v34 > 255 )
        {
          v54 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v54 + 5) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v54 = *(_BYTE **)(a4 + 120);
          }
          *v54 = 2;
          v55 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v55;
          *v55 = HIBYTE(v34);
          v56 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v56;
          *v56 = BYTE2(v34);
          v57 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v57;
          *v57 = BYTE1(v34);
          v58 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v58;
          *v58 = v34;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v37 = dword_65444C;
        }
        else
        {
          v35 = *(_BYTE **)(a4 + 120);
          if ( (unsigned __int64)(v35 + 2) > *(_QWORD *)(a4 + 128) )
          {
            sub_439150(a4);
            v35 = *(_BYTE **)(a4 + 120);
          }
          *v35 = 1;
          v36 = (_BYTE *)(*(_QWORD *)(a4 + 120) + 1LL);
          *(_QWORD *)(a4 + 120) = v36;
          *v36 = v34;
          ++*(_QWORD *)(a4 + 120);
          *(_DWORD *)(a4 + 3276) = 0;
          v37 = dword_65442C;
        }
        if ( v37 )
        {
          if ( v37 == 0x80000000 )
            v37 = 1 - v34;
          if ( v37 >= 0 )
          {
            v38 = *(_DWORD *)(a4 + 48);
            goto LABEL_43;
          }
          v38 = *(_DWORD *)(a4 + 48);
          if ( *(_DWORD *)(a4 + 44) >= v38 )
          {
LABEL_43:
            *(_DWORD *)(a4 + 48) = v37 + v38;
          }
          else
          {
            *(_DWORD *)(a4 + 44) = v38;
            *(_DWORD *)(a4 + 48) = v37 + v38;
          }
        }
        return 0;
      }
    }
  }
  return result;
}

