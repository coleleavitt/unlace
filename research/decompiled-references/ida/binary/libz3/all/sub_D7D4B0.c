void __fastcall sub_D7D4B0(__int64 a1, __int64 a2, int a3, void **a4, __int64 *a5)
{
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  __int64 v16; // r14
  int *v17; // rax
  int v18; // r12d
  int v19; // r15d
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r13
  __int64 v24; // rax
  _DWORD *v25; // rax
  int v26; // r9d
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  _DWORD *v29; // rax
  _DWORD *v30; // rax
  _DWORD *v31; // rax
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r14
  _DWORD *v38; // rax
  __int64 v39; // r13
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  _DWORD *v42; // rax
  __int64 v43; // rax
  int v44; // r9d
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  _DWORD *v47; // rax
  _QWORD *v48; // rax
  _DWORD *v49; // rax
  _QWORD *v50; // rax
  _DWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // [rsp+8h] [rbp-70h]
  __int64 v55; // [rsp+8h] [rbp-70h]
  __int64 v56; // [rsp+10h] [rbp-68h]
  __int64 v57; // [rsp+18h] [rbp-60h]
  _QWORD v58[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v59[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( a3 == 1 )
  {
    v8 = a1 + 232;
    v9 = sub_15D1F10(*a4);
    if ( (unsigned __int8)sub_1673B10(a1 + 232, v9) )
    {
      v10 = *(_QWORD *)(a2 + 40);
      sub_15C5560(a1 + 432, v10);
      v15 = sub_15C5540((int)a1 + 432, v10, v11, v12, v13, v14);
      v16 = (__int64)*a4;
      v54 = v15;
      v17 = *(int **)(*(_QWORD *)(sub_15D1F10(*a4) + 24) + 8LL);
      if ( *((_BYTE *)v17 + 8) )
        sub_DBF6E(0);
      v18 = *v17;
      v19 = *v17 - v54;
      sub_D50160(v8, v19 - 2, v16);
      sub_D81CD0(v8, (unsigned int)(v18 - 2), (unsigned int)(v19 - 1), v16);
      sub_D81CD0(v8, (unsigned int)(v18 - 1), (unsigned int)(v18 - 1), v16);
      v20 = *(_QWORD *)(a1 + 432);
      goto LABEL_8;
    }
    goto LABEL_4;
  }
  if ( a3 == 2 )
  {
    v40 = *(_DWORD **)(sub_15D1F10(*a4) + 24);
    if ( v40 )
    {
      if ( *(_DWORD *)(a1 + 448) == *v40 && v40[1] == 1 )
      {
        v45 = *(_DWORD **)(sub_15D1F10(a4[1]) + 24);
        if ( v45 )
        {
          if ( *(_DWORD *)(a1 + 448) == *v45 && !v45[1] )
          {
            sub_D78D90((_QWORD *)a1, *(struct _Unwind_Exception **)(a2 + 40), *((_QWORD *)*a4 + 4), a4[1], a5);
            return;
          }
        }
      }
    }
    v41 = *(_DWORD **)(sub_15D1F10(*a4) + 24);
    if ( v41
      && *(_DWORD *)(a1 + 448) == *v41
      && v41[1] == 1
      && ((v46 = *(_DWORD **)(sub_15D1F10(a4[1]) + 24)) != nullptr && *v46 == 5 && v46[1] == 1
       || (v47 = *(_DWORD **)(sub_15D1F10(a4[1]) + 24)) != nullptr && *v47 == 5 && !v47[1]) )
    {
      sub_D7A710(a1, a2, *(_QWORD *)(a2 + 40), (__int64)*a4, a4[1], a5);
      return;
    }
    v42 = *(_DWORD **)(sub_15D1F10(*a4) + 24);
    if ( v42 )
    {
      if ( *(_DWORD *)(a1 + 448) == *v42 && v42[1] == 1 )
      {
        v43 = sub_15D1F10(a4[1]);
        if ( (unsigned __int8)sub_1673B10(a1 + 232, v43) )
        {
          sub_D71FA0((_QWORD *)a1, a2, 2, a4, a5, v44);
          return;
        }
      }
    }
    goto LABEL_4;
  }
  if ( a3 != 3 )
    goto LABEL_4;
  v23 = a1 + 232;
  v24 = sub_15D1F10(*a4);
  if ( (unsigned __int8)sub_1673B10(a1 + 232, v24) )
  {
    v52 = sub_15D1F10(a4[1]);
    if ( (unsigned __int8)sub_1673B10(v23, v52) )
    {
      v53 = sub_15D1F10(a4[2]);
      if ( (unsigned __int8)sub_1673B10(v23, v53) )
      {
        v20 = *(_QWORD *)(a1 + 432);
LABEL_8:
        v21 = sub_15E1BF0(v20);
        v22 = v21;
        if ( v21 )
          ++*(_DWORD *)(v21 + 8);
        sub_D50200(*a5, a5[1]);
        *a5 = v22;
        return;
      }
    }
  }
  v25 = *(_DWORD **)(sub_15D1F10(*a4) + 24);
  if ( v25 )
  {
    if ( *(_DWORD *)(a1 + 448) == *v25 && v25[1] == 1 )
    {
      v48 = a4[1];
      if ( !*((_WORD *)v48 + 2) )
      {
        v49 = *(_DWORD **)(v48[2] + 24LL);
        if ( v49 )
        {
          if ( *v49 == 5 && !v49[1] )
          {
            v50 = a4[2];
            if ( !*((_WORD *)v50 + 2) )
            {
              v51 = *(_DWORD **)(v50[2] + 24LL);
              if ( v51 )
              {
                if ( *v51 == 5 && !v51[1] )
                {
                  sub_D66200((_QWORD *)a1, a2, 3, (__int64)a4, a5, v26);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  v27 = *(_DWORD **)(sub_15D1F10(*a4) + 24);
  if ( !v27
    || *(_DWORD *)(a1 + 448) != *v27
    || v27[1] != 1
    || (v28 = *(_DWORD **)(sub_15D1F10(a4[1]) + 24)) == nullptr
    || *v28 != 5
    || (v29 = *(_DWORD **)(sub_15D1F10(a4[2]) + 24)) == nullptr
    || *v29 != 5 )
  {
LABEL_4:
    sub_1872CE0("");
    sub_1873130(114, 2508);
  }
  v57 = *(_QWORD *)(a1 + 8);
  v30 = a4[1];
  v55 = (__int64)v30;
  if ( v30 )
    ++v30[2];
  v31 = a4[2];
  v56 = (__int64)v31;
  if ( v31 )
    ++v31[2];
  v58[0] = 2;
  v58[1] = 0;
  v59[0] = 1;
  v59[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v59);
  v35 = *(_QWORD *)(a1 + 264);
  BYTE4(v59[0]) &= ~1u;
  LODWORD(v59[0]) = 1;
  if ( !v35 )
  {
    sub_16669E0(a1 + 256);
    v35 = *(_QWORD *)(a1 + 264);
  }
  v36 = sub_166A700(v35, (unsigned int)v58, 1, v32, v33, v34);
  v37 = v36;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  sub_25A130((char *)v58);
  sub_15E1B70(*(_QWORD *)(a1 + 256));
  v38 = (_DWORD *)sub_15E1B70(*(_QWORD *)(a1 + 256));
  v39 = (__int64)v38;
  if ( v38 )
    ++v38[2];
  sub_D7A710(a1, a2, *(_QWORD *)(a2 + 40), (__int64)*a4, v38, a5);
  sub_D50200(v39, v57);
  sub_D50200(v37, v57);
  sub_D50200(v56, v57);
  sub_D50200(v55, v57);
}

