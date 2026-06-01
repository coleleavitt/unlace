__int64 __fastcall sub_E4CE10(__int64 a1)
{
  _QWORD *v1; // r12
  __int64 (__fastcall *v2)(); // rax
  _QWORD *v3; // r13
  __int64 (__fastcall *v4)(); // rax
  _QWORD *v5; // r14
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // r15
  __int64 (__fastcall *v8)(); // rax
  _QWORD *v9; // rdx
  __int64 (__fastcall *v10)(); // rax
  _QWORD *v11; // rcx
  __int64 (__fastcall *v12)(); // rax
  _QWORD *v13; // rsi
  __int64 (__fastcall *v14)(); // rax
  _QWORD **v15; // r8
  __int64 (__fastcall *v16)(); // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(); // rax
  __int64 v26; // r12
  __int64 (__fastcall *v27)(); // rax
  __int64 v28; // r13
  __int64 (__fastcall *v29)(); // rax
  _QWORD **v30; // r14
  __int64 (__fastcall *v31)(); // rax
  __int64 v32; // r13
  __int64 (__fastcall *v33)(); // rax
  _QWORD **v34; // r14
  __int64 (__fastcall *v35)(); // rax
  _QWORD **v36; // r14
  __int64 (__fastcall *v37)(); // rax
  __int64 v38; // [rsp+0h] [rbp-58h]
  __int64 v39; // [rsp+0h] [rbp-58h]
  __int64 v40; // [rsp+0h] [rbp-58h]
  __int64 v41; // [rsp+0h] [rbp-58h]
  __int64 v42; // [rsp+0h] [rbp-58h]
  __int64 v43; // [rsp+0h] [rbp-58h]
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+8h] [rbp-50h]
  __int64 v46; // [rsp+8h] [rbp-50h]
  __int64 v47; // [rsp+8h] [rbp-50h]
  __int64 v48; // [rsp+10h] [rbp-48h]
  __int64 v49; // [rsp+10h] [rbp-48h]
  __int64 v50; // [rsp+18h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 104);
  v2 = *(__int64 (__fastcall **)())(*v1 + 168LL);
  if ( v2 != sub_E4CE10 )
    goto LABEL_23;
  v3 = (_QWORD *)v1[13];
  v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
  if ( v4 != sub_E4CE10 )
    goto LABEL_36;
  v5 = (_QWORD *)v3[13];
  v6 = *(__int64 (__fastcall **)())(*v5 + 168LL);
  if ( v6 != sub_E4CE10 )
    goto LABEL_47;
  v7 = v5[13];
  v8 = *(__int64 (__fastcall **)())(*(_QWORD *)v7 + 168LL);
  if ( v8 == sub_E4CE10 )
  {
    v9 = *(_QWORD **)(v7 + 104);
    v10 = *(__int64 (__fastcall **)())(*v9 + 168LL);
    if ( v10 == sub_E4CE10 )
    {
      v11 = (_QWORD *)v9[13];
      v12 = *(__int64 (__fastcall **)())(*v11 + 168LL);
      if ( v12 == sub_E4CE10 )
      {
        v13 = (_QWORD *)v11[13];
        v14 = *(__int64 (__fastcall **)())(*v13 + 168LL);
        if ( v14 == sub_E4CE10 )
        {
          v15 = (_QWORD **)v13[13];
          v16 = (__int64 (__fastcall *)())(*v15)[21];
          if ( v16 == sub_E4CE10 )
          {
            v50 = v11[13];
            v48 = v9[13];
            v44 = *(_QWORD *)(v7 + 104);
            v38 = v13[13];
            result = (*(__int64 (__fastcall **)(_QWORD *))(*v15[13] + 168LL))(v15[13]);
            if ( result )
              return result;
            result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v38 + 112) + 168LL))(*(_QWORD *)(v38 + 112));
            v18 = v44;
            v19 = v48;
            v20 = v50;
          }
          else
          {
            v49 = v11[13];
            v47 = v9[13];
            v43 = *(_QWORD *)(v7 + 104);
            result = ((__int64 (__fastcall *)(_QWORD **))v16)(v15);
            v20 = v49;
            v19 = v47;
            v18 = v43;
          }
          v45 = v19;
          v39 = v18;
          if ( result )
            return result;
          result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v20 + 112) + 168LL))(*(_QWORD *)(v20 + 112));
          v21 = v39;
          v22 = v45;
        }
        else
        {
          v46 = v9[13];
          v42 = *(_QWORD *)(v7 + 104);
          result = ((__int64 (__fastcall *)(_QWORD *))v14)(v13);
          v22 = v46;
          v21 = v42;
        }
        v40 = v21;
        if ( result )
          return result;
        result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v22 + 112) + 168LL))(*(_QWORD *)(v22 + 112));
        v23 = v40;
      }
      else
      {
        v41 = *(_QWORD *)(v7 + 104);
        result = ((__int64 (__fastcall *)(_QWORD *))v12)(v11);
        v23 = v41;
      }
      if ( result )
        return result;
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 112) + 168LL))(*(_QWORD *)(v23 + 112));
    }
    else
    {
      result = ((__int64 (__fastcall *)(_QWORD))v10)(*(_QWORD *)(v7 + 104));
    }
    if ( result )
      return result;
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 112) + 168LL))(*(_QWORD *)(v7 + 112));
  }
  else
  {
    result = ((__int64 (__fastcall *)(_QWORD))v8)(v5[13]);
  }
  if ( result )
    return result;
  v5 = (_QWORD *)v5[14];
  v6 = *(__int64 (__fastcall **)())(*v5 + 168LL);
  if ( v6 == sub_E4CE10 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5[13] + 168LL))(v5[13]);
    if ( result )
      return result;
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v5[14] + 168LL))(v5[14]);
  }
  else
  {
LABEL_47:
    result = ((__int64 (__fastcall *)(_QWORD *))v6)(v5);
  }
  if ( result )
    return result;
  v3 = (_QWORD *)v3[14];
  v4 = *(__int64 (__fastcall **)())(*v3 + 168LL);
  if ( v4 == sub_E4CE10 )
  {
    v36 = (_QWORD **)v3[13];
    v37 = (__int64 (__fastcall *)())(*v36)[21];
    if ( v37 == sub_E4CE10 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v36[13] + 168LL))(v36[13]);
      if ( result )
        return result;
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v36[14] + 168LL))(v36[14]);
    }
    else
    {
      result = ((__int64 (__fastcall *)(_QWORD))v37)(v3[13]);
    }
    if ( result )
      return result;
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v3[14] + 168LL))(v3[14]);
  }
  else
  {
LABEL_36:
    result = ((__int64 (__fastcall *)(_QWORD *))v4)(v3);
  }
  if ( result )
    return result;
  v1 = (_QWORD *)v1[14];
  v2 = *(__int64 (__fastcall **)())(*v1 + 168LL);
  if ( v2 == sub_E4CE10 )
  {
    v32 = v1[13];
    v33 = *(__int64 (__fastcall **)())(*(_QWORD *)v32 + 168LL);
    if ( v33 == sub_E4CE10 )
    {
      v34 = *(_QWORD ***)(v32 + 104);
      v35 = (__int64 (__fastcall *)())(*v34)[21];
      if ( v35 == sub_E4CE10 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v34[13] + 168LL))(v34[13]);
        if ( result )
          return result;
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v34[14] + 168LL))(v34[14]);
      }
      else
      {
        result = ((__int64 (__fastcall *)(_QWORD))v35)(*(_QWORD *)(v32 + 104));
      }
      if ( result )
        return result;
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v32 + 112) + 168LL))(*(_QWORD *)(v32 + 112));
    }
    else
    {
      result = ((__int64 (__fastcall *)(_QWORD))v33)(v1[13]);
    }
    if ( result )
      return result;
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v1[14] + 168LL))(v1[14]);
  }
  else
  {
LABEL_23:
    result = ((__int64 (__fastcall *)(_QWORD *))v2)(v1);
  }
  if ( result )
    return result;
  v24 = *(_QWORD *)(a1 + 112);
  v25 = *(__int64 (__fastcall **)())(*(_QWORD *)v24 + 168LL);
  if ( v25 != sub_E4CE10 )
    return ((__int64 (__fastcall *)(__int64))v25)(v24);
  v26 = *(_QWORD *)(v24 + 104);
  v27 = *(__int64 (__fastcall **)())(*(_QWORD *)v26 + 168LL);
  if ( v27 != sub_E4CE10 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))v27)(*(_QWORD *)(v24 + 104));
LABEL_61:
    if ( !result )
      return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v24 + 112) + 168LL))(*(_QWORD *)(v24 + 112));
    return result;
  }
  v28 = *(_QWORD *)(v26 + 104);
  v29 = *(__int64 (__fastcall **)())(*(_QWORD *)v28 + 168LL);
  if ( v29 != sub_E4CE10 )
  {
    result = ((__int64 (__fastcall *)(_QWORD))v29)(*(_QWORD *)(v26 + 104));
    goto LABEL_33;
  }
  v30 = *(_QWORD ***)(v28 + 104);
  v31 = (__int64 (__fastcall *)())(*v30)[21];
  if ( v31 == sub_E4CE10 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v30[13] + 168LL))(v30[13]);
    if ( result )
      return result;
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v30[14] + 168LL))(v30[14]);
  }
  else
  {
    result = ((__int64 (__fastcall *)(_QWORD))v31)(*(_QWORD *)(v28 + 104));
  }
  if ( !result )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v28 + 112) + 168LL))(*(_QWORD *)(v28 + 112));
LABEL_33:
    if ( result )
      return result;
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v26 + 112) + 168LL))(*(_QWORD *)(v26 + 112));
    goto LABEL_61;
  }
  return result;
}

