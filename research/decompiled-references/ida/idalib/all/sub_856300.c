__int64 __fastcall sub_856300(
        unsigned __int8 **a1,
        unsigned __int8 *a2,
        int *a3,
        int *a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  unsigned __int8 *v6; // r10
  unsigned __int8 *v7; // r11
  unsigned __int8 *v8; // r15
  unsigned __int8 *v9; // rax
  bool v14; // dl
  bool v15; // di
  int v16; // edi
  unsigned __int8 v17; // dl
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // dl
  __int64 result; // rax
  unsigned __int8 *v21; // rdx
  unsigned __int8 *v22; // r11
  bool v23; // al
  unsigned __int8 *v24; // r10
  bool v25; // r9
  unsigned __int8 *v26; // rdx
  bool v27; // al
  bool v28; // cl
  int v29; // eax
  unsigned __int8 *v30; // rcx
  unsigned __int8 v31; // dl
  unsigned __int8 *v32; // rax
  bool v33; // dl
  bool v34; // cl
  unsigned __int8 *v35; // rax
  unsigned __int8 *v36; // rdx
  unsigned __int8 v37; // cl
  unsigned __int8 v38; // cl
  unsigned __int8 *v39; // [rsp+10h] [rbp-68h]
  unsigned __int8 *v40; // [rsp+18h] [rbp-60h]
  int v41; // [rsp+28h] [rbp-50h] BYREF
  int v42; // [rsp+2Ch] [rbp-4Ch] BYREF
  unsigned __int8 *v43[9]; // [rsp+30h] [rbp-48h] BYREF

  v43[1] = (unsigned __int8 *)__readfsqword(0x28u);
  v9 = *a1;
  v41 = 0;
  v42 = (int)&stru_10000;
  *a5 = 0;
  v43[0] = v9;
  if ( v9 < a2 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v14;
      v14 = *v9 == 9 || *v9 == 32;
      if ( !v14 )
        break;
      if ( ++v9 == a2 )
        return 0;
      a6 = v9;
    }
    if ( v15 )
      v43[0] = a6;
    if ( v9 < a2 )
    {
      if ( (unsigned __int8)(*v9 - 48) > 9u )
      {
        v16 = 0;
        goto LABEL_12;
      }
      do
      {
        if ( a2 == ++v9 )
          return 0;
      }
      while ( (unsigned __int8)(*v9 - 48) <= 9u );
      if ( v9 < a2 )
      {
        v16 = 1;
LABEL_12:
        while ( 1 )
        {
          v17 = *v9;
          if ( v17 != 9 && v17 != 32 )
            break;
          if ( ++v9 >= a2 )
            return 0;
        }
        if ( v9 < a2 )
        {
          if ( v17 == 125 )
          {
            if ( !v16 )
              return 0;
LABEL_31:
            v39 = v7;
            v40 = v6;
            result = sub_856140(v43, a2, -1, 0xFFFFu, 105, (unsigned int *)&v41, a5);
            v21 = v43[0];
            v22 = v39;
            if ( (_DWORD)result )
            {
              v23 = 0;
              v24 = v40;
              if ( v43[0] < a2 )
              {
                while ( 1 )
                {
                  v38 = *v21;
                  v25 = v23;
                  v23 = v38 == 9 || v38 == 32;
                  if ( !v23 )
                    break;
                  v8 = v21 + 1;
                  if ( v21 + 1 == a2 )
                  {
                    v38 = v21[1];
                    v43[0] = a2;
                    v21 = a2;
                    goto LABEL_39;
                  }
                  ++v21;
                }
                if ( v25 )
                  v43[0] = v8;
              }
              else
              {
                v38 = *v43[0];
              }
LABEL_39:
              if ( v38 == 125 )
              {
                v30 = v43[0];
                v42 = v41;
              }
              else
              {
                v26 = v21 + 1;
                v27 = 0;
                v43[0] = v26;
                if ( v26 < a2 )
                {
                  while ( 1 )
                  {
                    v28 = v27;
                    v27 = *v26 == 9 || *v26 == 32;
                    if ( !v27 )
                      break;
                    if ( ++v26 == a2 )
                    {
                      v43[0] = a2;
                      goto LABEL_47;
                    }
                    v24 = v26;
                  }
                  if ( v28 )
                    v43[0] = v24;
                }
LABEL_47:
                v29 = sub_856140(v43, a2, -1, 0xFFFFu, 105, (unsigned int *)&v42, a5);
                v30 = v43[0];
                v21 = v43[0];
                if ( !v29 && *a5 )
                  goto LABEL_51;
                if ( v42 < v41 )
                {
                  *a5 = 104;
LABEL_51:
                  result = 0;
LABEL_52:
                  *a1 = v21;
                  return result;
                }
              }
            }
            else
            {
              if ( *a5 )
                goto LABEL_52;
              v32 = v43[0] + 1;
              v33 = 0;
              v43[0] = v32;
              if ( v32 < a2 )
              {
                while ( 1 )
                {
                  v34 = v33;
                  v33 = *v32 == 9 || *v32 == 32;
                  if ( !v33 )
                    break;
                  if ( ++v32 == a2 )
                  {
                    v43[0] = a2;
                    goto LABEL_70;
                  }
                  v22 = v32;
                }
                if ( v34 )
                  v43[0] = v22;
              }
LABEL_70:
              result = sub_856140(v43, a2, -1, 0xFFFFu, 105, (unsigned int *)&v42, a5);
              v30 = v43[0];
              if ( !(_DWORD)result )
              {
                v21 = v43[0];
                if ( *a5 )
                  goto LABEL_52;
              }
            }
            v35 = v30;
            v36 = v30;
            if ( v30 < a2 )
            {
              while ( 1 )
              {
                v37 = *v35;
                v36 = v35++;
                if ( v37 != 32 && v37 != 9 )
                  break;
                if ( a2 == v35 )
                {
                  v36 = a2;
                  break;
                }
              }
            }
            if ( a3 )
              *a3 = v41;
            if ( a4 )
              *a4 = v42;
            v21 = v36 + 1;
            result = 1;
            goto LABEL_52;
          }
          if ( v17 == 44 )
          {
            v18 = v9 + 1;
            if ( v18 < a2 )
            {
              while ( 1 )
              {
                v19 = *v18;
                if ( *v18 != 32 && v19 != 9 )
                  break;
                if ( a2 == ++v18 )
                  return 0;
              }
              if ( v18 < a2 )
              {
                if ( (unsigned __int8)(v19 - 48) <= 9u )
                {
                  while ( a2 != ++v18 )
                  {
                    if ( (unsigned __int8)(*v18 - 48) > 9u )
                    {
                      if ( v18 < a2 )
                        goto LABEL_54;
                      return 0;
                    }
                  }
                }
                else
                {
                  if ( !v16 )
                    return 0;
LABEL_54:
                  while ( 1 )
                  {
                    v31 = *v18;
                    if ( *v18 != 32 && v31 != 9 )
                      break;
                    if ( a2 == ++v18 )
                      return 0;
                  }
                  if ( v18 < a2 && v31 == 125 )
                    goto LABEL_31;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
