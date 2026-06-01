char *__fastcall sub_226F160(__int64 *a1, char *a2, __int64 a3, _QWORD *a4)
{
  _BOOL8 v5; // rax
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  __int64 v9; // rax
  __int64 ***v10; // rax
  __int64 **v11; // rax
  __int64 *v12; // rax
  _BYTE *v13; // rdi
  char *result; // rax
  size_t v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  unsigned __int64 v21; // rax
  char *v22; // rdx
  __int64 v23; // rax
  __int64 ***v24; // rax
  __int64 **v25; // rax
  __int64 *v26; // rax
  _QWORD v27[4]; // [rsp+10h] [rbp-98h] BYREF
  __int16 v28; // [rsp+30h] [rbp-78h]
  char *v29; // [rsp+40h] [rbp-68h] BYREF
  char *v30; // [rsp+48h] [rbp-60h]
  _BOOL8 v31; // [rsp+50h] [rbp-58h]
  void *v32; // [rsp+58h] [rbp-50h]
  __int64 v33; // [rsp+60h] [rbp-48h]
  _BYTE v34[64]; // [rsp+68h] [rbp-40h] BYREF

  if ( a3 == 1 )
  {
    v9 = *a1;
    v34[0] = 0;
    v30 = a2;
    v10 = *(__int64 ****)(v9 + 8);
    v27[0] = "Unrecognized escape code";
    v28 = 259;
    v11 = *v10;
    v32 = v34;
    LODWORD(v29) = 0;
    v33 = 0;
    v12 = *v11;
    v31 = 1;
    sub_226E270(*v12, (__int64)v27, a2);
    v13 = v32;
    result = nullptr;
    a4[1] = 0;
    if ( v13 != v34 )
    {
LABEL_4:
      operator delete(v13);
      return nullptr;
    }
  }
  else
  {
    v5 = a3 != 0;
    v6 = &a2[v5];
    v7 = a3 - v5;
    v8 = v7;
    switch ( a2[v5] )
    {
      case 9:
      case 116:
        sub_FC8050(a4, 9);
        goto LABEL_12;
      case 10:
        goto LABEL_6;
      case 13:
        if ( v7 <= 1 )
        {
LABEL_6:
          if ( v7 )
          {
            v8 = v7 - 1;
            ++v6;
          }
        }
        else
        {
          v21 = v7 - 1;
          v22 = v6 + 1;
          if ( v6[1] == 10 )
          {
            v21 = v8 - 2;
            v22 = v6 + 2;
          }
          v6 = v22;
          v8 = v21;
        }
        v29 = v6;
        v30 = (char *)v8;
        v15 = j__strlen(" \t");
        v16 = sub_2246FB0((__int64 *)&v29, (unsigned __int8 *)" \t", v15, 0);
        v17 = (unsigned __int64)v30;
        if ( v16 < (unsigned __int64)v30 )
          v17 = v16;
        return &v29[v17];
      case 32:
        sub_FC8050(a4, 32);
        goto LABEL_12;
      case 34:
        sub_FC8050(a4, 34);
        goto LABEL_12;
      case 47:
        sub_FC8050(a4, 47);
        goto LABEL_12;
      case 48:
        sub_FC8050(a4, 0);
        goto LABEL_12;
      case 76:
        sub_FC8050(a4, -30);
        sub_FC8050(a4, -128);
        sub_FC8050(a4, -88);
        goto LABEL_12;
      case 78:
        sub_226EFA0(0x85u, a4);
        goto LABEL_12;
      case 80:
        sub_FC8050(a4, -30);
        sub_FC8050(a4, -128);
        sub_FC8050(a4, -87);
        goto LABEL_12;
      case 85:
        if ( v7 <= 8 )
          goto LABEL_12;
        if ( sub_2247970(v6 + 1, 8, 0x10u, &v29) || (v18 = (unsigned int)v29, v29 != (char *)(unsigned int)v29) )
          v18 = 65533;
        sub_226EFA0(v18, a4);
        result = v6 + 9;
        break;
      case 92:
        sub_FC8050(a4, 92);
        goto LABEL_12;
      case 95:
        sub_226EFA0(0xA0u, a4);
        goto LABEL_12;
      case 97:
        sub_FC8050(a4, 7);
        goto LABEL_12;
      case 98:
        sub_FC8050(a4, 8);
        goto LABEL_12;
      case 101:
        sub_FC8050(a4, 27);
        goto LABEL_12;
      case 102:
        sub_FC8050(a4, 12);
        goto LABEL_12;
      case 110:
        sub_FC8050(a4, 10);
        goto LABEL_12;
      case 114:
        sub_FC8050(a4, 13);
        goto LABEL_12;
      case 117:
        if ( v7 <= 4 )
          goto LABEL_12;
        if ( sub_2247970(v6 + 1, 4, 0x10u, &v29) || (v19 = (unsigned int)v29, v29 != (char *)(unsigned int)v29) )
          v19 = 65533;
        sub_226EFA0(v19, a4);
        result = v6 + 5;
        break;
      case 118:
        sub_FC8050(a4, 11);
        goto LABEL_12;
      case 120:
        if ( v7 <= 2 )
        {
LABEL_12:
          if ( v8 )
            ++v6;
          result = v6;
        }
        else
        {
          if ( sub_2247970(v6 + 1, 2, 0x10u, &v29) || (v20 = (unsigned int)v29, v29 != (char *)(unsigned int)v29) )
            v20 = 65533;
          sub_226EFA0(v20, a4);
          result = v6 + 3;
        }
        break;
      default:
        v23 = *a1;
        v34[0] = 0;
        LODWORD(v29) = 0;
        v24 = *(__int64 ****)(v23 + 8);
        v32 = v34;
        v31 = v7 != 0;
        v25 = *v24;
        v28 = 259;
        v33 = 0;
        v26 = *v25;
        v30 = v6;
        v27[0] = "Unrecognized escape code";
        sub_226E270(*v26, (__int64)v27, v6);
        v13 = v32;
        result = nullptr;
        a4[1] = 0;
        if ( v13 != v34 )
          goto LABEL_4;
        break;
    }
  }
  return result;
}
