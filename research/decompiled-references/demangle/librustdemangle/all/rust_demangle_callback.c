_BOOL8 __fastcall rust_demangle_callback(
        _BYTE *a1,
        int a2,
        __int64 (__fastcall *a3)(__int64, __int64, __int64),
        __int64 a4)
{
  int v4; // ebp
  bool v5; // zf
  char v7; // al
  char v8; // al
  unsigned __int8 *v9; // rsi
  int v10; // r8d
  unsigned __int8 *v11; // rdx
  __int64 v12; // r10
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned __int64 v15; // rax
  _BOOL4 v16; // edx
  unsigned __int64 v17; // rcx
  unsigned __int8 v18; // al
  __int64 v19; // rcx
  int v20; // edx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // r12
  unsigned __int8 *v25; // rsi
  char *v26; // rdi
  int v27; // edx
  char v28; // cl
  char v29; // cl
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char *v35; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+8h] [rbp-90h]
  __int64 v37; // [rsp+10h] [rbp-88h]
  unsigned __int64 v38; // [rsp+18h] [rbp-80h]
  _BYTE *v39; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-70h]
  __int64 v41; // [rsp+30h] [rbp-68h]
  __int64 (__fastcall *v42)(__int64, __int64, __int64); // [rsp+38h] [rbp-60h]
  unsigned __int64 v43; // [rsp+40h] [rbp-58h]
  __int64 v44; // [rsp+48h] [rbp-50h]
  _BOOL4 v45; // [rsp+50h] [rbp-48h]
  int v46; // [rsp+54h] [rbp-44h]
  int v47; // [rsp+58h] [rbp-40h]
  __int64 v48; // [rsp+60h] [rbp-38h]
  unsigned __int64 v49; // [rsp+68h] [rbp-30h]

  v49 = __readfsqword(0x28u);
  v4 = a2 & 8;
  v40 = 0;
  v41 = a4;
  v5 = *a1 == 95;
  v42 = a3;
  v43 = 0;
  v44 = 0;
  v45 = v4 != 0;
  v46 = 0;
  v47 = a2 << 13 >> 31;
  v48 = 0;
  if ( !v5 )
    return 0;
  v7 = a1[1];
  if ( v7 != 82 )
  {
    if ( v7 == 90 && a1[2] == 78 )
    {
      v8 = a1[3];
      v9 = a1 + 3;
      v46 = -1;
      v10 = -1;
      v39 = a1 + 3;
      if ( v8 )
      {
LABEL_7:
        v11 = v9;
        v12 = 272630785;
        while ( v8 != 46 || v10 )
        {
          v13 = ++v40;
          v14 = *v11;
          if ( (_BYTE)v14 != 95 && (byte_4220[2 * (unsigned __int8)v14] & 0x8C) == 0 )
          {
            if ( v10 != -1 )
              return 0;
            v15 = (unsigned int)(v14 - 36);
            if ( (unsigned __int8)v15 > 0x1Cu || !_bittest64(&v12, v15) )
              return 0;
          }
          v8 = *++v11;
          if ( !v8 )
          {
            if ( v10 != -1 )
              goto LABEL_26;
            if ( v13 )
            {
              v16 = 1;
              while ( 1 )
              {
                v17 = v13--;
                v18 = v9[v13];
                if ( v16 && v18 == 69 )
                  break;
                v40 = v13;
                v16 = v18 == 46;
                if ( !v13 )
                  return 0;
              }
              v40 = v13;
              if ( v13 > 0x13 )
              {
                v24 = v17 - 20;
                v25 = &v9[v17 - 20];
                if ( *(_WORD *)v25 == 14129 && v25[2] == 104 )
                {
                  while ( 1 )
                  {
                    sub_1530((unsigned __int64 *)&v35, (__int64 *)&v39);
                    if ( (_DWORD)v44 || !v35 )
                      break;
                    if ( v43 >= v13 )
                    {
                      if ( v36 == 17 && *v35 == 104 )
                      {
                        v26 = v35 + 1;
                        v27 = 0;
                        do
                        {
                          v29 = *v26;
                          if ( (unsigned __int8)(*v26 - 48) > 9u )
                          {
                            if ( (unsigned __int8)(*v26 - 97) > 5u )
                              return 0;
                            v28 = v29 - 87;
                          }
                          else
                          {
                            v28 = v29 - 48;
                          }
                          ++v26;
                          v27 |= 1 << v28;
                        }
                        while ( v35 + 17 != v26 );
                        v30 = 0;
                        do
                        {
                          v30 -= ((v27 & 1) == 0) - 1LL;
                          LOWORD(v27) = (unsigned __int16)v27 >> 1;
                        }
                        while ( (_WORD)v27 );
                        if ( v30 > 4 )
                        {
                          v43 = 0;
                          if ( !v4 )
                            v40 = v24;
                          while ( 1 )
                          {
                            sub_1530((unsigned __int64 *)&v35, (__int64 *)&v39);
                            sub_1A50((__int64)&v39, (__int64)&v39, v31, v32, v33, v34, v35, v36, v37, v38);
                            if ( v43 >= v40 )
                              break;
                            if ( v43 )
                            {
                              if ( !v44 )
                                sub_1350(v41, v42, (__int64)"::", 2);
                            }
                          }
                          v23 = v44;
                          return v23 == 0;
                        }
                      }
                      return 0;
                    }
                  }
                }
              }
            }
            return 0;
          }
        }
        goto LABEL_26;
      }
    }
    return 0;
  }
  v19 = (unsigned __int8)a1[2];
  v9 = a1 + 2;
  v39 = a1 + 2;
  v8 = v19;
  if ( (char)byte_4220[2 * v19] >= 0 )
    return 0;
  if ( (_BYTE)v19 )
  {
    v10 = 0;
    goto LABEL_7;
  }
LABEL_26:
  sub_3070((__int64)&v39, 1u);
  v20 = v44;
  v21 = v43;
  v22 = v40;
  if ( !(_DWORD)v44 && v43 < v40 )
  {
    HIDWORD(v44) = 1;
    sub_3070((__int64)&v39, 0);
    v20 = v44;
    v21 = v43;
    v22 = v40;
  }
  v23 = v20 | (v21 != v22);
  return v23 == 0;
}
