__int64 __fastcall sub_E4D310(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 (__fastcall *v3)(); // rax
  __int64 v4; // r14
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // r15
  __int64 (__fastcall *v7)(); // rax
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(); // rdx
  _QWORD *v10; // rdx
  __int64 (__fastcall *v11)(); // rcx
  _QWORD *v12; // rcx
  __int64 (__fastcall *v13)(); // r8
  _QWORD *v14; // r8
  __int64 (__fastcall *v15)(); // r9
  _QWORD **v16; // r9
  __int64 (__fastcall *v17)(); // r10
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD **v22; // rax
  __int64 (__fastcall *v23)(); // rdx
  __int64 v24; // r15
  __int64 (__fastcall *v25)(); // rax
  _QWORD **v26; // rax
  __int64 (__fastcall *v27)(); // rdx
  __int64 v28; // r12
  __int64 (__fastcall *v29)(); // rax
  __int64 v30; // r13
  __int64 (__fastcall *v31)(); // rax
  __int64 v32; // r14
  __int64 (__fastcall *v33)(); // rax
  __int64 v34; // r15
  __int64 (__fastcall *v35)(); // rax
  __int64 v36; // r14
  __int64 (__fastcall *v37)(); // rax
  __int64 v38; // r15
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+8h] [rbp-60h]
  __int64 v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+8h] [rbp-60h]
  __int64 v44; // [rsp+8h] [rbp-60h]
  __int64 v45; // [rsp+8h] [rbp-60h]
  __int64 v46; // [rsp+8h] [rbp-60h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  __int64 v48; // [rsp+8h] [rbp-60h]
  __int64 v49; // [rsp+8h] [rbp-60h]
  __int64 v50; // [rsp+10h] [rbp-58h]
  __int64 v51; // [rsp+10h] [rbp-58h]
  __int64 v52; // [rsp+10h] [rbp-58h]
  __int64 v53; // [rsp+10h] [rbp-58h]
  __int64 v54; // [rsp+10h] [rbp-58h]
  __int64 v55; // [rsp+10h] [rbp-58h]
  __int64 v56; // [rsp+18h] [rbp-50h]
  __int64 v57; // [rsp+18h] [rbp-50h]
  __int64 v58; // [rsp+18h] [rbp-50h]
  __int64 v59; // [rsp+18h] [rbp-50h]
  __int64 v60; // [rsp+20h] [rbp-48h]
  __int64 v61; // [rsp+20h] [rbp-48h]
  __int64 v62; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 112);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 16LL);
  if ( v3 != sub_E4D310 )
    goto LABEL_36;
  v4 = *(_QWORD *)(v2 + 112);
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 16LL);
  if ( v5 != sub_E4D310 )
  {
LABEL_51:
    result = ((__int64 (__fastcall *)(__int64, __int64))v5)(v4, a2);
    goto LABEL_52;
  }
  v6 = *(_QWORD *)(v4 + 112);
  v7 = *(__int64 (__fastcall **)())(*(_QWORD *)v6 + 16LL);
  if ( v7 != sub_E4D310 )
    goto LABEL_63;
  v8 = *(_QWORD **)(v6 + 112);
  v9 = *(__int64 (__fastcall **)())(*v8 + 16LL);
  if ( v9 == sub_E4D310 )
  {
    v10 = (_QWORD *)v8[14];
    v11 = *(__int64 (__fastcall **)())(*v10 + 16LL);
    if ( v11 == sub_E4D310 )
    {
      v12 = (_QWORD *)v10[14];
      v13 = *(__int64 (__fastcall **)())(*v12 + 16LL);
      if ( v13 == sub_E4D310 )
      {
        v14 = (_QWORD *)v12[14];
        v15 = *(__int64 (__fastcall **)())(*v14 + 16LL);
        if ( v15 == sub_E4D310 )
        {
          v16 = (_QWORD **)v14[14];
          v17 = (__int64 (__fastcall *)())(*v16)[2];
          if ( v17 == sub_E4D310 )
          {
            v62 = v12[14];
            v60 = v10[14];
            v56 = v8[14];
            v50 = *(_QWORD *)(v6 + 112);
            v40 = v14[14];
            (*(void (__fastcall **)(_QWORD *, __int64))(*v16[14] + 16LL))(v16[14], a2);
            result = v50;
            v19 = v56;
            v20 = v60;
            v21 = v62;
            if ( *(_BYTE *)(v40 + 98) )
            {
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v40 + 104) + 16LL))(*(_QWORD *)(v40 + 104), a2);
              result = v50;
              v19 = v56;
              v20 = v60;
              v21 = v62;
            }
          }
          else
          {
            v61 = v12[14];
            v59 = v10[14];
            v55 = v8[14];
            v49 = *(_QWORD *)(v6 + 112);
            ((void (__fastcall *)(_QWORD **, __int64))v17)(v16, a2);
            v21 = v61;
            v20 = v59;
            v19 = v55;
            result = v49;
          }
          if ( *(_BYTE *)(v21 + 98) )
          {
            v57 = v20;
            v51 = v19;
            v41 = result;
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v21 + 104) + 16LL))(*(_QWORD *)(v21 + 104), a2);
            result = v41;
            v19 = v51;
            v20 = v57;
          }
        }
        else
        {
          v58 = v10[14];
          v54 = v8[14];
          v48 = *(_QWORD *)(v6 + 112);
          ((void (__fastcall *)(_QWORD *, __int64))v15)(v14, a2);
          v20 = v58;
          v19 = v54;
          result = v48;
        }
        if ( *(_BYTE *)(v20 + 98) )
        {
          v52 = v19;
          v42 = result;
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v20 + 104) + 16LL))(*(_QWORD *)(v20 + 104), a2);
          result = v42;
          v19 = v52;
        }
      }
      else
      {
        v53 = v8[14];
        v47 = *(_QWORD *)(v6 + 112);
        ((void (__fastcall *)(_QWORD *, __int64))v13)(v12, a2);
        v19 = v53;
        result = v47;
      }
      if ( *(_BYTE *)(v19 + 98) )
      {
        v43 = result;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 104) + 16LL))(*(_QWORD *)(v19 + 104), a2);
        result = v43;
      }
    }
    else
    {
      v46 = *(_QWORD *)(v6 + 112);
      ((void (__fastcall *)(_QWORD *))v11)(v10);
      result = v46;
    }
    if ( *(_BYTE *)(result + 98) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(result + 104) + 16LL))(
                 *(_QWORD *)(result + 104),
                 a2);
  }
  else
  {
    result = ((__int64 (__fastcall *)(_QWORD))v9)(*(_QWORD *)(v6 + 112));
  }
  if ( *(_BYTE *)(v6 + 98) )
  {
    v6 = *(_QWORD *)(v6 + 104);
    v7 = *(__int64 (__fastcall **)())(*(_QWORD *)v6 + 16LL);
    if ( v7 == sub_E4D310 )
    {
      v22 = *(_QWORD ***)(v6 + 112);
      v23 = (__int64 (__fastcall *)())(*v22)[2];
      if ( v23 == sub_E4D310 )
      {
        v44 = *(_QWORD *)(v6 + 112);
        (*(void (__fastcall **)(_QWORD *, __int64))(*v22[14] + 16LL))(v22[14], a2);
        result = v44;
        if ( *(_BYTE *)(v44 + 98) )
          result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v44 + 104) + 16LL))(
                     *(_QWORD *)(v44 + 104),
                     a2);
      }
      else
      {
        result = ((__int64 (__fastcall *)(_QWORD, __int64))v23)(*(_QWORD *)(v6 + 112), a2);
      }
      if ( *(_BYTE *)(v6 + 98) )
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v6 + 104) + 16LL))(
                   *(_QWORD *)(v6 + 104),
                   a2);
      goto LABEL_26;
    }
LABEL_63:
    result = ((__int64 (__fastcall *)(__int64, __int64))v7)(v6, a2);
  }
LABEL_26:
  if ( !*(_BYTE *)(v4 + 98) )
    goto LABEL_52;
  v4 = *(_QWORD *)(v4 + 104);
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)v4 + 16LL);
  if ( v5 != sub_E4D310 )
    goto LABEL_51;
  v24 = *(_QWORD *)(v4 + 112);
  v25 = *(__int64 (__fastcall **)())(*(_QWORD *)v24 + 16LL);
  if ( v25 == sub_E4D310 )
  {
    v26 = *(_QWORD ***)(v24 + 112);
    v27 = (__int64 (__fastcall *)())(*v26)[2];
    if ( v27 == sub_E4D310 )
    {
      v45 = *(_QWORD *)(v24 + 112);
      (*(void (__fastcall **)(_QWORD *, __int64))(*v26[14] + 16LL))(v26[14], a2);
      result = v45;
      if ( *(_BYTE *)(v45 + 98) )
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v45 + 104) + 16LL))(
                   *(_QWORD *)(v45 + 104),
                   a2);
    }
    else
    {
      result = ((__int64 (__fastcall *)(_QWORD, __int64))v27)(*(_QWORD *)(v24 + 112), a2);
    }
    if ( *(_BYTE *)(v24 + 98) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v24 + 104) + 16LL))(
                 *(_QWORD *)(v24 + 104),
                 a2);
  }
  else
  {
    result = ((__int64 (__fastcall *)(_QWORD, __int64))v25)(*(_QWORD *)(v4 + 112), a2);
  }
  if ( *(_BYTE *)(v4 + 98) )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 104) + 16LL))(*(_QWORD *)(v4 + 104), a2);
LABEL_52:
  if ( !*(_BYTE *)(v2 + 98) )
    goto LABEL_37;
  v2 = *(_QWORD *)(v2 + 104);
  v3 = *(__int64 (__fastcall **)())(*(_QWORD *)v2 + 16LL);
  if ( v3 != sub_E4D310 )
  {
LABEL_36:
    result = ((__int64 (__fastcall *)(__int64, __int64))v3)(v2, a2);
    goto LABEL_37;
  }
  v36 = *(_QWORD *)(v2 + 112);
  v37 = *(__int64 (__fastcall **)())(*(_QWORD *)v36 + 16LL);
  if ( v37 == sub_E4D310 )
  {
    v38 = *(_QWORD *)(v36 + 112);
    v39 = *(__int64 (__fastcall **)())(*(_QWORD *)v38 + 16LL);
    if ( v39 == sub_E4D310 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v38 + 112) + 16LL))(
                 *(_QWORD *)(v38 + 112),
                 a2);
      if ( *(_BYTE *)(v38 + 98) )
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v38 + 104) + 16LL))(
                   *(_QWORD *)(v38 + 104),
                   a2);
    }
    else
    {
      result = ((__int64 (__fastcall *)(_QWORD, __int64))v39)(*(_QWORD *)(v36 + 112), a2);
    }
    if ( *(_BYTE *)(v36 + 98) )
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v36 + 104) + 16LL))(
                 *(_QWORD *)(v36 + 104),
                 a2);
  }
  else
  {
    result = ((__int64 (__fastcall *)(_QWORD, __int64))v37)(*(_QWORD *)(v2 + 112), a2);
  }
  if ( *(_BYTE *)(v2 + 98) )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 104) + 16LL))(*(_QWORD *)(v2 + 104), a2);
LABEL_37:
  if ( *(_BYTE *)(a1 + 98) )
  {
    v28 = *(_QWORD *)(a1 + 104);
    v29 = *(__int64 (__fastcall **)())(*(_QWORD *)v28 + 16LL);
    if ( v29 == sub_E4D310 )
    {
      v30 = *(_QWORD *)(v28 + 112);
      v31 = *(__int64 (__fastcall **)())(*(_QWORD *)v30 + 16LL);
      if ( v31 == sub_E4D310 )
      {
        v32 = *(_QWORD *)(v30 + 112);
        v33 = *(__int64 (__fastcall **)())(*(_QWORD *)v32 + 16LL);
        if ( v33 == sub_E4D310 )
        {
          v34 = *(_QWORD *)(v32 + 112);
          v35 = *(__int64 (__fastcall **)())(*(_QWORD *)v34 + 16LL);
          if ( v35 == sub_E4D310 )
          {
            result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v34 + 112) + 16LL))(
                       *(_QWORD *)(v34 + 112),
                       a2);
            if ( *(_BYTE *)(v34 + 98) )
              result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v34 + 104) + 16LL))(
                         *(_QWORD *)(v34 + 104),
                         a2);
          }
          else
          {
            result = ((__int64 (__fastcall *)(_QWORD, __int64))v35)(*(_QWORD *)(v32 + 112), a2);
          }
          if ( *(_BYTE *)(v32 + 98) )
            result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v32 + 104) + 16LL))(
                       *(_QWORD *)(v32 + 104),
                       a2);
        }
        else
        {
          result = ((__int64 (__fastcall *)(_QWORD, __int64))v33)(*(_QWORD *)(v30 + 112), a2);
        }
        if ( *(_BYTE *)(v30 + 98) )
          result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v30 + 104) + 16LL))(
                     *(_QWORD *)(v30 + 104),
                     a2);
      }
      else
      {
        result = ((__int64 (__fastcall *)(_QWORD, __int64))v31)(*(_QWORD *)(v28 + 112), a2);
      }
      if ( *(_BYTE *)(v28 + 98) )
        return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v28 + 104) + 16LL))(
                 *(_QWORD *)(v28 + 104),
                 a2);
    }
    else
    {
      return ((__int64 (__fastcall *)(__int64, __int64))v29)(v28, a2);
    }
  }
  return result;
}

