_QWORD *__fastcall sub_2229C00(unsigned int a1, _QWORD *a2)
{
  size_t v2; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // r15
  char v5; // r13
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rbp
  _QWORD *v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  size_t v19; // rbp
  _QWORD *v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rdx
  _QWORD *result; // rax
  __int64 v24; // r12
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // r12
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rax
  __int64 v31; // r13
  _QWORD *v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rbp
  _QWORD *v36; // rax
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rbp
  _QWORD *v41; // rax
  unsigned __int64 v42; // r12
  unsigned __int64 v43; // rdx
  size_t v44; // [rsp+0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+8h] [rbp-40h]

  if ( a1 <= 0x7F )
  {
    v28 = a2[1];
    v29 = v28 + 1;
    if ( (_QWORD *)*a2 == a2 + 2 )
      v30 = 15;
    else
      v30 = a2[2];
    if ( v29 > v30 )
      sub_998B30((__int64)a2, a2[1], 0, nullptr, 1u);
    *(_BYTE *)(*a2 + v28) = a1;
    result = (_QWORD *)*a2;
    a2[1] = v29;
    *((_BYTE *)result + v28 + 1) = 0;
  }
  else
  {
    if ( a1 <= 0x7FF )
    {
      v24 = a2[1];
      v5 = a1 & 0x3F | 0x80;
      v25 = v24 + 1;
      if ( (_QWORD *)*a2 == a2 + 2 )
        v26 = 15;
      else
        v26 = a2[2];
      if ( v25 > v26 )
        sub_998B30((__int64)a2, a2[1], 0, nullptr, 1u);
      *(_BYTE *)(*a2 + v24) = (a1 >> 6) | 0xC0;
      v27 = (_QWORD *)*a2;
      a2[1] = v25;
      *((_BYTE *)v27 + v24 + 1) = 0;
      v19 = a2[1];
      v20 = (_QWORD *)*a2;
      v21 = v19 + 1;
      if ( (_QWORD *)*a2 != a2 + 2 )
        goto LABEL_17;
      goto LABEL_26;
    }
    if ( a1 > 0xFFFF )
    {
      v2 = a2[1];
      v3 = (_QWORD *)*a2;
      v4 = a2 + 2;
      v5 = a1 & 0x3F | 0x80;
      v6 = v2 + 1;
      if ( (_QWORD *)*a2 == a2 + 2 )
        v7 = 15;
      else
        v7 = a2[2];
      if ( v6 > v7 )
      {
        v45 = v2 + 1;
        v44 = a2[1];
        sub_998B30((__int64)a2, v44, 0, nullptr, 1u);
        v3 = (_QWORD *)*a2;
        v6 = v45;
        v2 = v44;
      }
      *((_BYTE *)v3 + v2) = (a1 >> 18) | 0xF0;
      v8 = (_QWORD *)*a2;
      a2[1] = v6;
      *((_BYTE *)v8 + v2 + 1) = 0;
      v9 = a2[1];
      v10 = (_QWORD *)*a2;
      v11 = v9 + 1;
      if ( (_QWORD *)*a2 == v4 )
        v12 = 15;
      else
        v12 = a2[2];
      if ( v11 > v12 )
      {
        sub_998B30((__int64)a2, a2[1], 0, nullptr, 1u);
        v10 = (_QWORD *)*a2;
        v11 = v9 + 1;
      }
      *((_BYTE *)v10 + v9) = (a1 >> 12) & 0x3F | 0x80;
      v13 = (_QWORD *)*a2;
      a2[1] = v11;
      *((_BYTE *)v13 + v9 + 1) = 0;
      v14 = a2[1];
      v15 = (_QWORD *)*a2;
      v16 = v14 + 1;
      if ( (_QWORD *)*a2 == v4 )
        v17 = 15;
      else
        v17 = a2[2];
      if ( v16 > v17 )
      {
        sub_998B30((__int64)a2, a2[1], 0, nullptr, 1u);
        v15 = (_QWORD *)*a2;
      }
      *((_BYTE *)v15 + v14) = (a1 >> 6) & 0x3F | 0x80;
      v18 = (_QWORD *)*a2;
      a2[1] = v16;
      *((_BYTE *)v18 + v14 + 1) = 0;
      v19 = a2[1];
      v20 = (_QWORD *)*a2;
      v21 = v19 + 1;
      if ( (_QWORD *)*a2 != v4 )
      {
LABEL_17:
        v22 = a2[2];
LABEL_18:
        if ( v21 > v22 )
        {
          sub_998B30((__int64)a2, v19, 0, nullptr, 1u);
          v20 = (_QWORD *)*a2;
        }
        *((_BYTE *)v20 + v19) = v5;
        result = (_QWORD *)*a2;
        a2[1] = v21;
        *((_BYTE *)result + v19 + 1) = 0;
        return result;
      }
LABEL_26:
      v22 = 15;
      goto LABEL_18;
    }
    v31 = a2[1];
    v32 = a2 + 2;
    v33 = v31 + 1;
    if ( (_QWORD *)*a2 == a2 + 2 )
      v34 = 15;
    else
      v34 = a2[2];
    if ( v33 > v34 )
    {
      sub_998B30((__int64)a2, a2[1], 0, nullptr, 1u);
      v33 = v31 + 1;
    }
    *(_BYTE *)(*a2 + v31) = (a1 >> 12) | 0xE0;
    a2[1] = v33;
    *(_BYTE *)(*a2 + v31 + 1) = 0;
    v35 = a2[1];
    v36 = (_QWORD *)*a2;
    v37 = v35 + 1;
    if ( (_QWORD *)*a2 == v32 )
      v38 = 15;
    else
      v38 = a2[2];
    if ( v37 > v38 )
    {
      sub_998B30((__int64)a2, a2[1], 0, nullptr, 1u);
      v36 = (_QWORD *)*a2;
    }
    *((_BYTE *)v36 + v35) = (a1 >> 6) & 0x3F | 0x80;
    v39 = (_QWORD *)*a2;
    a2[1] = v37;
    *((_BYTE *)v39 + v35 + 1) = 0;
    v40 = a2[1];
    v41 = (_QWORD *)*a2;
    v42 = v40 + 1;
    if ( (_QWORD *)*a2 == v32 )
      v43 = 15;
    else
      v43 = a2[2];
    if ( v42 > v43 )
    {
      sub_998B30((__int64)a2, a2[1], 0, nullptr, 1u);
      v41 = (_QWORD *)*a2;
    }
    *((_BYTE *)v41 + v40) = a1 & 0x3F | 0x80;
    result = (_QWORD *)*a2;
    a2[1] = v42;
    *((_BYTE *)result + v40 + 1) = 0;
  }
  return result;
}
