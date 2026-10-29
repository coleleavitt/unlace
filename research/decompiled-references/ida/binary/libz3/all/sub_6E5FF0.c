__int64 (__fastcall **__fastcall sub_6E5FF0(__int64 a1, __int64 a2, __int64 a3, unsigned int **a4))()
{
  __int64 (__fastcall **result)(); // rax
  unsigned int *v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r12
  __int16 v10; // ax
  bool v11; // zf
  char v12; // r14
  int *v13; // rax
  int v14; // eax
  _DWORD *v15; // rax
  int v16; // edx
  unsigned int v17; // r15d
  __int64 v18; // r14
  int v19; // eax
  int *v20; // rdx
  int v21; // ecx
  unsigned int v22; // r14d
  __int64 v23; // r15
  int v24; // eax
  _DWORD *v25; // rax
  unsigned int v26; // r14d
  __int64 v27; // r15
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdx
  _DWORD *v31; // rdx
  char v33; // [rsp+27h] [rbp-91h]
  __int64 v34; // [rsp+28h] [rbp-90h] BYREF
  unsigned int *v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v37[3]; // [rsp+40h] [rbp-78h] BYREF
  void *v38; // [rsp+58h] [rbp-60h]
  __int64 v39; // [rsp+68h] [rbp-50h]
  void *ptr; // [rsp+70h] [rbp-48h]

  v34 = a2;
  result = (__int64 (__fastcall **)())sub_15D37A0(a3, a2);
  if ( (_BYTE)result )
    return result;
  v37[2] = 0;
  v38 = nullptr;
  v37[0] = &off_1C62200;
  v39 = 0;
  ptr = nullptr;
  v35 = nullptr;
  sub_6DE920(&v35, &v34);
  v6 = v35;
  if ( !v35 )
    goto LABEL_6;
  while ( 1 )
  {
    v7 = *(v6 - 1);
    if ( !v7 )
      break;
    v8 = (unsigned int)(v7 - 1);
    v9 = *(_QWORD *)&v6[2 * v8];
    *(v6 - 1) = v8;
    v10 = *(_WORD *)(v9 + 4);
    v34 = v9;
    if ( v10 != 1 )
    {
      if ( v10 == 2 )
      {
        v9 = *(_QWORD *)(v9 + 24);
        v34 = v9;
        if ( !(unsigned __int8)sub_15D37A0(a3, v9) )
        {
          v35 = v6;
          sub_6DE920(&v35, &v34);
          v6 = v35;
        }
      }
      v11 = *(_BYTE *)(a1 + 24) == 0;
      v36 = v9;
      if ( !v11 || (v12 = sub_15D37A0(v37, v9)) != 0 )
      {
        v12 = 1;
LABEL_14:
        v13 = *(int **)(*(_QWORD *)(v9 + 16) + 24LL);
        if ( !v13 )
          goto LABEL_18;
        v14 = *v13;
LABEL_16:
        if ( v14 && v14 != 5 )
        {
LABEL_18:
          v15 = *(_DWORD **)(sub_15D1F10(v9) + 24);
          v16 = *(_DWORD *)(v9 + 24);
          if ( v15 )
          {
            if ( *v15 == 5 && !v15[1] )
            {
              v25 = *(_DWORD **)(*(_QWORD *)(v9 + 16) + 24LL);
              if ( !v25 || *v25 == -1 )
              {
                if ( !v16 )
                {
                  if ( v12 )
                    sub_6DE970(a4, &v36);
                  goto LABEL_35;
                }
                v17 = 0;
                do
                {
LABEL_24:
                  v18 = *(_QWORD *)(v9 + 8LL * v17 + 32);
                  if ( !(unsigned __int8)sub_15D37A0(a3, v18) || !(unsigned __int8)sub_15D37A0(v37, v18) )
                  {
                    if ( !v6 || (v19 = *(v6 - 1), v19 == *(v6 - 2)) )
                    {
                      v35 = v6;
                      sub_23A6F0(&v35);
                      v6 = v35;
                      v19 = *(v35 - 1);
                    }
                    *(_QWORD *)&v6[2 * v19] = v18;
                    *(v6 - 1) = v19 + 1;
                    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a3 + 16LL))(a3, v18, 1);
                    sub_15D0A90(v37, v18, 1);
                  }
                  ++v17;
                }
                while ( v17 < *(_DWORD *)(v9 + 24) );
                goto LABEL_35;
              }
            }
          }
          v17 = 0;
          if ( v16 )
            goto LABEL_24;
          goto LABEL_35;
        }
        goto LABEL_39;
      }
      if ( *(_WORD *)(v9 + 4) )
        goto LABEL_14;
      v20 = *(int **)(*(_QWORD *)(v9 + 16) + 24LL);
      if ( !v20 )
        goto LABEL_18;
      v14 = *v20;
      if ( *v20 != 5 )
        goto LABEL_16;
      if ( v20[1] != 9 )
      {
        if ( *(_DWORD *)(v9 + 24) )
          goto LABEL_41;
        goto LABEL_35;
      }
      v29 = v9;
      v21 = 0;
      while ( v9 + 8LL * *(unsigned int *)(v9 + 24) != v29 )
      {
        v30 = *(_QWORD *)(v29 + 32);
        if ( *(_WORD *)(v30 + 4) || (v31 = *(_DWORD **)(*(_QWORD *)(v30 + 16) + 24LL)) == nullptr || *v31 != 5 || v31[1] )
        {
          v29 += 8;
          if ( v21 == 1 )
          {
            v21 = 2;
            break;
          }
          v21 = 1;
        }
        else
        {
          v29 += 8;
        }
      }
      v12 = v21 == 2;
LABEL_39:
      if ( *(_DWORD *)(v9 + 24) )
      {
        if ( v12 )
        {
          v26 = 0;
          do
          {
            v27 = *(_QWORD *)(v9 + 8LL * v26 + 32);
            v33 = sub_15D37A0(v37, v27);
            if ( !(unsigned __int8)sub_15D37A0(a3, v27) || !v33 )
            {
              if ( !v6 || (v28 = *(v6 - 1), v28 == *(v6 - 2)) )
              {
                v35 = v6;
                sub_23A6F0(&v35);
                v6 = v35;
                v28 = *(v35 - 1);
              }
              *(_QWORD *)&v6[2 * v28] = v27;
              *(v6 - 1) = v28 + 1;
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a3 + 16LL))(a3, v27, 1);
              sub_15D0A90(v37, v27, 1);
            }
            ++v26;
          }
          while ( v26 < *(_DWORD *)(v9 + 24) );
          goto LABEL_35;
        }
LABEL_41:
        v22 = 0;
        do
        {
          v23 = *(_QWORD *)(v9 + 8LL * v22 + 32);
          sub_15D37A0(v37, v23);
          if ( !(unsigned __int8)sub_15D37A0(a3, v23) )
          {
            if ( !v6 || (v24 = *(v6 - 1), v24 == *(v6 - 2)) )
            {
              v35 = v6;
              sub_23A6F0(&v35);
              v6 = v35;
              v24 = *(v35 - 1);
            }
            *(_QWORD *)&v6[2 * v24] = v23;
            *(v6 - 1) = v24 + 1;
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a3 + 16LL))(a3, v23, 1);
          }
          ++v22;
        }
        while ( v22 < *(_DWORD *)(v9 + 24) );
      }
LABEL_35:
      if ( !v6 )
        goto LABEL_6;
    }
  }
  sub_186B220(v6 - 2);
LABEL_6:
  result = &off_1C62200;
  v37[0] = &off_1C62200;
  if ( ptr )
    result = (__int64 (__fastcall **)())sub_186B220(ptr);
  if ( v38 )
    return (__int64 (__fastcall **)())sub_186B220(v38);
  return result;
}

