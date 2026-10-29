__int64 __fastcall sub_E4C4D0(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r14
  __int64 (__fastcall *v3)(); // rax
  _QWORD *v4; // r15
  __int64 (__fastcall *v5)(); // rax
  _QWORD *v6; // rbx
  __int64 (__fastcall *v7)(); // rax
  _QWORD **v8; // rcx
  __int64 (__fastcall *v9)(); // rax
  int v10; // r13d
  int v11; // r13d
  _QWORD **v12; // rbx
  __int64 (__fastcall *v13)(); // rax
  int v14; // ebx
  int v15; // r13d
  _QWORD *v16; // r15
  __int64 (__fastcall *v17)(); // rax
  _QWORD **v18; // rcx
  __int64 (__fastcall *v19)(); // rax
  int v20; // ebx
  int v21; // ebx
  _QWORD **v22; // r15
  __int64 (__fastcall *v23)(); // rax
  int v24; // r15d
  int v25; // ebx
  int v26; // ebx
  _QWORD *v27; // r15
  __int64 (__fastcall *v28)(); // rax
  _QWORD *v29; // r13
  __int64 (__fastcall *v30)(); // rax
  _QWORD **v31; // rcx
  __int64 (__fastcall *v32)(); // rax
  int v33; // r14d
  int v34; // r14d
  _QWORD **v35; // r13
  __int64 (__fastcall *v36)(); // rax
  int v37; // r13d
  int v38; // r13d
  _QWORD *v39; // r15
  __int64 (__fastcall *v40)(); // rax
  _QWORD **v41; // r14
  __int64 (__fastcall *v42)(); // rax
  int v43; // r14d
  _QWORD **v44; // r15
  __int64 (__fastcall *v45)(); // rax
  int v46; // ebp
  int v47; // eax
  int v48; // eax
  int v49; // eax
  unsigned int v50; // eax
  __int64 v52; // [rsp+8h] [rbp-40h]
  int v53; // [rsp+8h] [rbp-40h]
  __int64 v54; // [rsp+8h] [rbp-40h]
  int v55; // [rsp+8h] [rbp-40h]
  __int64 v56; // [rsp+8h] [rbp-40h]
  int v57; // [rsp+8h] [rbp-40h]
  int v58; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD **)(a1 + 104);
  v3 = *(__int64 (__fastcall **)())(*v2 + 248LL);
  if ( v3 == sub_E4C8B0 )
  {
    v4 = (_QWORD *)v2[13];
    v5 = *(__int64 (__fastcall **)())(*v4 + 248LL);
    if ( v5 == sub_E4C8B0 )
    {
      v6 = (_QWORD *)v4[13];
      v7 = *(__int64 (__fastcall **)())(*v6 + 248LL);
      if ( v7 == sub_E4C8B0 )
      {
        v8 = (_QWORD **)v6[13];
        v9 = (__int64 (__fastcall *)())(*v8)[31];
        if ( v9 == sub_E4C8B0 )
        {
          v52 = v6[13];
          v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v8[13] + 248LL))(v8[13]);
          v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v52 + 112) + 248LL))(*(_QWORD *)(v52 + 112)) + v10;
        }
        else
        {
          v11 = ((__int64 (__fastcall *)(_QWORD))v9)(v6[13]);
        }
        v12 = (_QWORD **)v6[14];
        v13 = (__int64 (__fastcall *)())(*v12)[31];
        if ( v13 == sub_E4C8B0 )
        {
          v53 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[13] + 248LL))(v12[13]);
          v14 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[14] + 248LL))(v12[14]) + v53;
        }
        else
        {
          v14 = ((__int64 (__fastcall *)(_QWORD **))v13)(v12);
        }
        v15 = v14 + v11;
      }
      else
      {
        v15 = ((__int64 (__fastcall *)(_QWORD))v7)(v4[13]);
      }
      v16 = (_QWORD *)v4[14];
      v17 = *(__int64 (__fastcall **)())(*v16 + 248LL);
      if ( v17 == sub_E4C8B0 )
      {
        v18 = (_QWORD **)v16[13];
        v19 = (__int64 (__fastcall *)())(*v18)[31];
        if ( v19 == sub_E4C8B0 )
        {
          v54 = v16[13];
          v20 = (*(__int64 (__fastcall **)(_QWORD *))(*v18[13] + 248LL))(v18[13]);
          v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v54 + 112) + 248LL))(*(_QWORD *)(v54 + 112)) + v20;
        }
        else
        {
          v21 = ((__int64 (__fastcall *)(_QWORD))v19)(v16[13]);
        }
        v22 = (_QWORD **)v16[14];
        v23 = (__int64 (__fastcall *)())(*v22)[31];
        if ( v23 == sub_E4C8B0 )
        {
          v55 = (*(__int64 (__fastcall **)(_QWORD *))(*v22[13] + 248LL))(v22[13]);
          v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v22[14] + 248LL))(v22[14]) + v55;
        }
        else
        {
          v24 = ((__int64 (__fastcall *)(_QWORD **))v23)(v22);
        }
        v25 = v24 + v21;
      }
      else
      {
        v25 = ((__int64 (__fastcall *)(_QWORD *))v17)(v16);
      }
      v26 = v15 + v25;
    }
    else
    {
      v26 = ((__int64 (__fastcall *)(_QWORD))v5)(v2[13]);
    }
    v27 = (_QWORD *)v2[14];
    v28 = *(__int64 (__fastcall **)())(*v27 + 248LL);
    if ( v28 == sub_E4C8B0 )
    {
      v29 = (_QWORD *)v27[13];
      v30 = *(__int64 (__fastcall **)())(*v29 + 248LL);
      if ( v30 == sub_E4C8B0 )
      {
        v31 = (_QWORD **)v29[13];
        v32 = (__int64 (__fastcall *)())(*v31)[31];
        if ( v32 == sub_E4C8B0 )
        {
          v56 = v29[13];
          v33 = (*(__int64 (__fastcall **)(_QWORD *))(*v31[13] + 248LL))(v31[13]);
          v34 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v56 + 112) + 248LL))(*(_QWORD *)(v56 + 112)) + v33;
        }
        else
        {
          v34 = ((__int64 (__fastcall *)(_QWORD))v32)(v29[13]);
        }
        v35 = (_QWORD **)v29[14];
        v36 = (__int64 (__fastcall *)())(*v35)[31];
        if ( v36 == sub_E4C8B0 )
        {
          v57 = (*(__int64 (__fastcall **)(_QWORD *))(*v35[13] + 248LL))(v35[13]);
          v37 = (*(__int64 (__fastcall **)(_QWORD *))(*v35[14] + 248LL))(v35[14]) + v57;
        }
        else
        {
          v37 = ((__int64 (__fastcall *)(_QWORD **))v36)(v35);
        }
        v38 = v34 + v37;
      }
      else
      {
        v38 = ((__int64 (__fastcall *)(_QWORD))v30)(v27[13]);
      }
      v39 = (_QWORD *)v27[14];
      v40 = *(__int64 (__fastcall **)())(*v39 + 248LL);
      if ( v40 == sub_E4C8B0 )
      {
        v41 = (_QWORD **)v39[13];
        v42 = (__int64 (__fastcall *)())(*v41)[31];
        if ( v42 == sub_E4C8B0 )
        {
          v58 = (*(__int64 (__fastcall **)(_QWORD *))(*v41[13] + 248LL))(v41[13]);
          v43 = (*(__int64 (__fastcall **)(_QWORD *))(*v41[14] + 248LL))(v41[14]) + v58;
        }
        else
        {
          v43 = ((__int64 (__fastcall *)(_QWORD))v42)(v39[13]);
        }
        v44 = (_QWORD **)v39[14];
        v45 = (__int64 (__fastcall *)())(*v44)[31];
        if ( v45 == sub_E4C8B0 )
        {
          v46 = (*(__int64 (__fastcall **)(_QWORD *))(*v44[13] + 248LL))(v44[13]);
          v47 = v46 + (*(__int64 (__fastcall **)(_QWORD *))(*v44[14] + 248LL))(v44[14]);
        }
        else
        {
          v47 = ((__int64 (__fastcall *)(_QWORD **))v45)(v44);
        }
        v48 = v43 + v47;
      }
      else
      {
        v48 = ((__int64 (__fastcall *)(_QWORD *))v40)(v39);
      }
      v49 = v38 + v48;
    }
    else
    {
      v49 = ((__int64 (__fastcall *)(_QWORD))v28)(v2[14]);
    }
    v50 = v26 + v49;
  }
  else
  {
    v50 = ((__int64 (__fastcall *)(_QWORD *))v3)(v2);
  }
  if ( a2 >= v50 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 112) + 256LL))(*(_QWORD *)(a1 + 112));
  else
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 256LL))(*(_QWORD *)(a1 + 104));
}

