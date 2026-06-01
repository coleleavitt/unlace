void __fastcall sub_22208E0(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 *v7; // rbp
  __int64 **v8; // rbx
  __int64 **v9; // r13
  __int64 *v10; // r14
  __int64 *v11; // rax
  char v12; // al
  __int64 *v13; // rdi
  char v14; // al
  char *v15; // rsi
  __int64 v16; // rax
  char *v17; // rsi
  char *v18; // rsi
  char *v19; // rsi
  __int64 *v20; // rax
  char *v21; // rsi
  __int64 *v22; // r15
  __int64 *v23; // rbp
  __int64 *v24; // r14
  __int64 *v25; // rbx
  __int64 v26; // rdx
  char *v27; // rsi
  char *v28; // rsi
  __int64 *v29; // rdx
  __int64 v30; // [rsp+20h] [rbp-88h]
  __int64 *v31; // [rsp+28h] [rbp-80h]
  __int64 **v32; // [rsp+30h] [rbp-78h]
  __int64 v33; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v34; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v35; // [rsp+58h] [rbp-50h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-48h] BYREF
  __int64 *v37[8]; // [rsp+68h] [rbp-40h] BYREF

  if ( *a1 )
  {
    sub_2254180(&a7, a2);
    v33 = a2;
    v7 = *a1;
    *a1 = nullptr;
    if ( v7 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, void *))(*v7 + 48))(v7, &unk_2D0AA9B) )
      {
        v8 = (__int64 **)v7[1];
        v9 = (__int64 **)v7[2];
        v10 = nullptr;
        if ( v8 != v9 )
        {
          while ( 1 )
          {
            v11 = *v8;
            *v8 = nullptr;
            v34 = v11;
            sub_2220070(&v35, &v34, &v33);
            if ( !v10 )
              goto LABEL_12;
            if ( v35 )
              break;
LABEL_13:
            if ( v34 )
            {
              ++v8;
              (*(void (__fastcall **)(__int64 *))(*v34 + 8))(v34);
              if ( v9 == v8 )
                goto LABEL_15;
            }
            else if ( v9 == ++v8 )
            {
              goto LABEL_15;
            }
          }
          v12 = (*(__int64 (__fastcall **)(__int64 *, void *))(*v10 + 48))(v10, &unk_2D0AA9B);
          v13 = v35;
          if ( v12 )
          {
            if ( v35 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, void *))(*v35 + 48))(v35, &unk_2D0AA9B) )
              {
                v22 = v35;
                v35 = nullptr;
                v30 = (__int64)(v10 + 1);
                if ( v22[1] != v22[2] )
                {
                  v31 = v7;
                  v23 = v10;
                  v24 = (__int64 *)v22[1];
                  v32 = v8;
                  v25 = (__int64 *)v22[2];
                  do
                  {
                    while ( 1 )
                    {
                      v28 = (char *)v23[2];
                      if ( v28 == (char *)v23[3] )
                        break;
                      v26 = *v24;
                      v27 = v28 + 8;
                      *v24++ = 0;
                      *((_QWORD *)v27 - 1) = v26;
                      v23[2] = (__int64)v27;
                      if ( v25 == v24 )
                        goto LABEL_38;
                    }
                    v29 = v24++;
                    sub_A054C0(v30, v28, v29);
                  }
                  while ( v25 != v24 );
LABEL_38:
                  v10 = v23;
                  v8 = v32;
                  v7 = v31;
                }
                (*(void (__fastcall **)(__int64 *))(*v22 + 8))(v22);
                goto LABEL_26;
              }
              v13 = v35;
            }
            v37[0] = v13;
            v17 = (char *)v10[2];
            v35 = nullptr;
            if ( v17 == (char *)v10[3] )
            {
              sub_A054C0((__int64)(v10 + 1), v17, v37);
            }
            else
            {
              v37[0] = nullptr;
              v18 = v17 + 8;
              *((_QWORD *)v18 - 1) = v13;
              v10[2] = (__int64)v18;
            }
            goto LABEL_24;
          }
          if ( !v35
            || (v14 = (*(__int64 (__fastcall **)(__int64 *, void *))(*v35 + 48))(v35, &unk_2D0AA9B), v13 = v35, !v14) )
          {
            v36 = v13;
            v37[0] = v10;
            v35 = nullptr;
            v10 = (__int64 *)operator new(0x20u);
            v10[1] = 0;
            v10[2] = 0;
            *v10 = (__int64)&off_2BEADB8;
            v10[3] = 0;
            sub_A054C0((__int64)(v10 + 1), nullptr, v37);
            v19 = (char *)v10[2];
            if ( (char *)v10[3] == v19 )
            {
              sub_A054C0((__int64)(v10 + 1), v19, &v36);
            }
            else
            {
              v20 = v36;
              v21 = v19 + 8;
              v36 = nullptr;
              *((_QWORD *)v21 - 1) = v20;
              v10[2] = (__int64)v21;
            }
            if ( v36 )
              (*(void (__fastcall **)(__int64 *))(*v36 + 8))(v36);
LABEL_24:
            if ( v37[0] )
              (*(void (__fastcall **)(__int64 *))(*v37[0] + 8))(v37[0]);
LABEL_26:
            if ( v35 )
              (*(void (__fastcall **)(__int64 *))(*v35 + 8))(v35);
            goto LABEL_13;
          }
          v15 = (char *)v35[1];
          v37[0] = v10;
          sub_AEA3D0(v35 + 1, v15, (__int64 *)v37);
          if ( v37[0] )
            (*(void (__fastcall **)(__int64 *))(*v37[0] + 8))(v37[0]);
LABEL_12:
          v10 = v35;
          goto LABEL_13;
        }
LABEL_15:
        v16 = *v7;
        v36 = v10;
        (*(void (__fastcall **)(__int64 *))(v16 + 8))(v7);
      }
      else
      {
        v37[0] = v7;
        sub_2220070(&v36, v37, &v33);
        if ( v37[0] )
          (*(void (__fastcall **)(__int64 *))(*v37[0] + 8))(v37[0]);
      }
    }
  }
}
