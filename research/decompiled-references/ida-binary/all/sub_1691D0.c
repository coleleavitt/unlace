__int64 __fastcall sub_1691D0(__int64 a1, unsigned __int8 **a2, __int64 a3, __int64 a4, char a5, double a6)
{
  int v6; // ebx
  unsigned __int8 *v7; // rbp
  int v8; // r12d
  __int64 v9; // r13
  char *v10; // r14
  int v11; // r15d
  int v12; // r12d
  int v13; // kr00_4
  __int64 v14; // kr08_8
  int v15; // kr18_4
  int v17; // r15d
  const char *v18; // rdx
  const char *v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  const char *v22; // rcx
  char *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  const char *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  char *v31; // rax
  const char *v32; // [rsp+0h] [rbp-498h]
  char *v33; // [rsp+8h] [rbp-490h]
  unsigned int v34; // [rsp+18h] [rbp-480h]
  unsigned __int8 v36; // [rsp+27h] [rbp-471h] BYREF
  unsigned __int8 *v37; // [rsp+28h] [rbp-470h] BYREF
  const char *v38; // [rsp+30h] [rbp-468h] BYREF
  __int128 v39; // [rsp+38h] [rbp-460h]
  _BYTE v40[8]; // [rsp+48h] [rbp-450h] BYREF
  char v41; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v42; // [rsp+458h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v13 = v11;
  v14 = v9;
  v15 = v8;
  v12 = a3;
  v17 = a4;
  switch ( (int)a4 )
  {
    case 0:
      v33 = (char *)&unk_5C2F25;
      v32 = "%s%02X%s";
      goto LABEL_3;
    case 1:
      v33 = " ";
      v32 = "%s%02X%s";
      goto LABEL_3;
    case 2:
      v33 = (char *)&unk_5C2F25;
      v32 = "%s%s%s";
      goto LABEL_3;
    case 3:
      v33 = ", ";
      v32 = "%s0x%02X%s";
      goto LABEL_3;
    case 4:
      if ( (int)a3 > 20 )
      {
        v7 = *a2;
        v33 = ", ";
        v32 = "%s%3d%s";
      }
      else
      {
        v33 = ", ";
        v32 = "%s%d%s";
LABEL_3:
        v7 = *a2;
        if ( !(_DWORD)a3 )
          return 1;
      }
      v6 = 0;
      v10 = &v41;
      v34 = a4 - 3;
      break;
    default:
      v12 = v15;
      a1 = v14;
      v17 = v13;
      if ( under_debugger )
        BUG();
      interr(30447, a2, a3, a4, a6);
      goto LABEL_50;
  }
  while ( 1 )
  {
    v20 = *v7++;
    ++v6;
    v21 = dword_8C80C4 + 1;
    v36 = v20;
    ++dword_8C80C4;
    if ( v17 == 2 )
    {
      v38 = nullptr;
      v37 = &v36;
      v39 = 0;
      if ( (unsigned __int8)format_charlit(&v38, &v37, 1, 5, 0) )
      {
        v27 = &s1;
        if ( (_QWORD)v39 )
          v27 = v38;
        qstrncpy(v40, v27, 8);
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38, v27, v28, v29, v40);
          if ( v12 != v6 )
            goto LABEL_30;
        }
        else if ( v12 != v6 )
        {
LABEL_30:
          sub_169120((__int64)v10, 1024, (__int64)v32, &unk_5C2F25, v40, v33, v32);
          goto LABEL_8;
        }
        v33 = (char *)&unk_5C2F25;
        sub_169120((__int64)v10, 1024, (__int64)v32, &unk_5C2F25, v40, &unk_5C2F25, v32);
      }
      else
      {
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v38, &v37, v24, v25, v26);
          if ( v12 == v6 )
LABEL_47:
            v33 = (char *)&unk_5C2F25;
          v18 = "%s\\x%02X%s";
LABEL_23:
          v20 = v36;
          v19 = (const char *)&unk_5C2F25;
LABEL_7:
          sub_169120((__int64)v10, 1024, (__int64)v18, v19, v20, v33, v32);
          goto LABEL_8;
        }
        if ( v12 == v6 )
          goto LABEL_47;
        sub_169120((__int64)v10, 1024, (__int64)"%s\\x%02X%s", &unk_5C2F25, v36, v33);
      }
    }
    else if ( v34 > 1 )
    {
      if ( v12 != v6 )
        goto LABEL_6;
      v18 = v32;
      if ( v17 == 1 )
      {
        v31 = (char *)&unk_5C2F25;
        if ( a5 )
          v31 = " ";
        v33 = v31;
        goto LABEL_23;
      }
LABEL_50:
      v33 = (char *)&unk_5C2F25;
      sub_169120((__int64)v10, 1024, (__int64)v18, &unk_5C2F25, v20, &unk_5C2F25, v32);
    }
    else
    {
      if ( v21 % 10 == 1 )
      {
        if ( v12 != v6 )
        {
          v18 = v32;
          v19 = "\n  ";
          goto LABEL_7;
        }
        v22 = "\n  ";
      }
      else
      {
        if ( v12 != v6 )
        {
LABEL_6:
          v18 = v32;
          v19 = (const char *)&unk_5C2F25;
          goto LABEL_7;
        }
        v22 = (const char *)&unk_5C2F25;
      }
      v23 = ", ";
      if ( !a5 )
        v23 = (char *)&unk_5C2F25;
      v33 = v23;
      sub_169120((__int64)v10, 1024, (__int64)v32, v22, v20, v23, v32);
    }
LABEL_8:
    if ( (*(unsigned int (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 16LL))(a1, v10) )
      return 0;
    if ( v12 <= v6 )
      return 1;
  }
}
