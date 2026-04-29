__int64 __fastcall sub_93EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v9; // r14
  unsigned int v10; // r14d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  int v19; // ebx
  __int64 v20; // rdi
  __int64 v21; // rdi
  char v22; // al
  char v23; // bp
  unsigned __int8 v24; // r12
  char v25; // al
  char v26; // al
  unsigned __int8 v27; // [rsp+Fh] [rbp-149h]
  __int64 v28; // [rsp+10h] [rbp-148h]
  __int64 v29[2]; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v30[4]; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v31[2]; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v33; // [rsp+78h] [rbp-E0h]
  _QWORD v34[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-B8h]
  __int64 v36; // [rsp+A8h] [rbp-B0h]
  _QWORD v37[2]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-88h]
  __int64 v39; // [rsp+D8h] [rbp-80h]
  __int64 v40[2]; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v41; // [rsp+100h] [rbp-58h] BYREF
  __int64 v42; // [rsp+108h] [rbp-50h]
  unsigned __int64 v43; // [rsp+118h] [rbp-40h]

  v27 = a5;
  v43 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a1 + 64);
  if ( !(unsigned __int8)sub_A23C0(v9) || !(unsigned __int8)sub_A23C0(v9) )
    return 0;
  sub_127460(v29, a1, a3, 1);
  if ( a2 != sub_122440(*(_QWORD *)(a3 + 8)) )
  {
    sub_127460(v31, a1, a2, 1);
    if ( a5 )
    {
      v27 = 0;
      if ( (unsigned int)(*(_DWORD *)a4 - 12) <= 2 )
        v27 = sub_131C00(a1, *(_QWORD *)(a2 + 8), a2 + 64, *(_QWORD *)(a4 + 8), a4 + 64);
    }
    if ( a3 != sub_122440(*(_QWORD *)(a2 + 8)) )
    {
LABEL_10:
      if ( a2 )
      {
        if ( (unsigned __int8)sub_121C80(a3, *(_QWORD *)(a2 + 8), 0) )
        {
          v28 = a3;
          v12 = a2;
        }
        else
        {
          v28 = a2;
          v12 = a3;
        }
      }
      else
      {
        v28 = 0;
        v12 = a3;
      }
      v13 = *(_QWORD *)(v12 + 8);
      sub_1240C0(v34, a1, a2, 1);
      if ( sub_A94E0(a1, v34, v13, v28, 1) || !v27 && (unsigned __int8)sub_AFC70(a1, v31, v13, v28, 3, 1) )
        goto LABEL_14;
      if ( a3 == v28 )
      {
        sub_1240C0(v37, a1, a4, 1);
        if ( (unsigned int)sub_122670(v37, v34) && sub_A94E0(a1, v37, v13, v28, 1) )
        {
          if ( v38 )
          {
            v39 = 0;
            qfree(v38);
          }
          qfree(v37[0]);
          goto LABEL_14;
        }
        sub_1240C0(v40, a1, a3, 0);
        v23 = v27;
        v24 = 0;
        if ( !(unsigned __int8)sub_64180(v31, v40) )
        {
          v26 = sub_318830(&v32, &v41);
          v23 = v26 & v27;
          v24 = v26 ^ 1;
        }
        if ( v41 )
        {
          v42 = 0;
          qfree(v41);
        }
        qfree(v40[0]);
        if ( v38 )
        {
          v39 = 0;
          qfree(v38);
        }
        qfree(v37[0]);
        if ( v23 )
        {
LABEL_14:
          if ( v35 )
          {
            v36 = 0;
            qfree(v35);
          }
          qfree(v34[0]);
          if ( v32 )
          {
            v33 = 0;
            qfree(v32);
          }
          qfree(v31[0]);
          goto LABEL_19;
        }
        v19 = 2 * v24;
      }
      else
      {
        sub_127460(v40, a1, a4, 0);
        sub_64040(v40, v29, v15, v16, v17, v18);
        sub_318020(&v41, v30);
        if ( (unsigned int)sub_122670(v40, v31) && (unsigned __int8)sub_AFC70(a1, v40, v13, v28, 3, 1) )
        {
          if ( v41 )
          {
            v42 = 0;
            qfree(v41);
          }
          qfree(v40[0]);
          goto LABEL_14;
        }
        if ( v41 )
        {
          v42 = 0;
          qfree(v41);
        }
        v19 = 2;
        qfree(v40[0]);
      }
      if ( v35 )
      {
        v36 = 0;
        qfree(v35);
      }
      qfree(v34[0]);
      v20 = v32;
      if ( !v32 )
      {
LABEL_42:
        qfree(v31[0]);
        v10 = v19 | (4 * v27) | 1;
        goto LABEL_20;
      }
LABEL_41:
      v33 = 0;
      qfree(v20);
      goto LABEL_42;
    }
    sub_1240C0(v40, a1, a3, 0);
    if ( (unsigned __int8)sub_64180(v31, v40) )
    {
      v21 = v41;
      if ( !v41 )
      {
LABEL_46:
        qfree(v40[0]);
        goto LABEL_10;
      }
    }
    else
    {
      v25 = sub_318830(&v32, &v41);
      v21 = v41;
      if ( !v25 )
      {
        if ( v41 )
        {
          v42 = 0;
          qfree(v41);
        }
        v19 = 2;
        qfree(v40[0]);
        v20 = v32;
        if ( !v32 )
          goto LABEL_42;
        goto LABEL_41;
      }
      if ( !v41 )
        goto LABEL_46;
    }
    v42 = 0;
    qfree(v21);
    goto LABEL_46;
  }
  sub_1240C0(v40, a1, a2, 0);
  if ( !(unsigned __int8)sub_64180(v29, v40) )
  {
    v22 = sub_318830(v30, &v41);
    v14 = v41;
    if ( !v22 )
    {
      if ( v41 )
      {
        v42 = 0;
        qfree(v41);
      }
      qfree(v40[0]);
      v10 = 3;
      goto LABEL_20;
    }
    if ( !v41 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v14 = v41;
  if ( v41 )
  {
LABEL_26:
    v42 = 0;
    qfree(v14);
  }
LABEL_27:
  qfree(v40[0]);
LABEL_19:
  v10 = 0;
LABEL_20:
  if ( v30[0] )
  {
    v30[1] = 0;
    qfree(v30[0]);
  }
  qfree(v29[0]);
  return v10;
}
