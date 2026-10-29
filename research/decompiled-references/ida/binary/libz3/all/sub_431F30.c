_BYTE *__fastcall sub_431F30(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r12
  __int64 (__fastcall *v3)(int, int); // rax
  _QWORD *v4; // r13
  __int64 (__fastcall *v5)(int, int); // rdx
  _QWORD *v6; // r14
  __int64 (__fastcall *v7)(int, int); // rax
  _QWORD *v8; // r15
  __int64 (__fastcall *v9)(int, int); // rdx
  _QWORD *v10; // rax
  __int64 (__fastcall *v11)(int, int); // rcx
  _QWORD *v12; // rdx
  __int64 (__fastcall *v13)(int, int); // r8
  _QWORD *v14; // rcx
  __int64 (__fastcall *v15)(int, int); // r9
  _QWORD **v16; // r8
  __int64 (__fastcall *v17)(int, int); // r10
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+0h] [rbp-58h]
  __int64 v27; // [rsp+0h] [rbp-58h]
  __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+0h] [rbp-58h]
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+8h] [rbp-50h]
  int v35[2]; // [rsp+10h] [rbp-48h]
  int v36[2]; // [rsp+10h] [rbp-48h]
  __int64 v37; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD **)(a1 + 96);
  v3 = *(__int64 (__fastcall **)(int, int))(*v2 + 24LL);
  if ( v3 == sub_431F30 )
  {
    v4 = (_QWORD *)v2[12];
    v5 = *(__int64 (__fastcall **)(int, int))(*v4 + 24LL);
    if ( v5 == v3 )
    {
      v6 = (_QWORD *)v4[12];
      v7 = *(__int64 (__fastcall **)(int, int))(*v6 + 24LL);
      if ( v7 == v5 )
      {
        v8 = (_QWORD *)v6[12];
        v9 = *(__int64 (__fastcall **)(int, int))(*v8 + 24LL);
        if ( v9 == v7 )
        {
          v10 = (_QWORD *)v8[12];
          v11 = *(__int64 (__fastcall **)(int, int))(*v10 + 24LL);
          if ( v11 == v9 )
          {
            v12 = (_QWORD *)v10[12];
            v13 = *(__int64 (__fastcall **)(int, int))(*v12 + 24LL);
            if ( v13 == v11 )
            {
              v14 = (_QWORD *)v12[12];
              v15 = *(__int64 (__fastcall **)(int, int))(*v14 + 24LL);
              if ( v15 == v13 )
              {
                v16 = (_QWORD **)v14[12];
                v17 = (__int64 (__fastcall *)(int, int))(*v16)[3];
                if ( v17 == v15 )
                {
                  v37 = v12[12];
                  *(_QWORD *)v35 = v10[12];
                  v31 = v8[12];
                  v25 = v14[12];
                  (*(void (__fastcall **)(_QWORD *, __int64 *))(*v16[12] + 24LL))(v16[12], a2);
                  sub_431B80(v25, a2);
                  v18 = v31;
                  v19 = *(_QWORD *)v35;
                  v20 = v37;
                }
                else
                {
                  *(_QWORD *)v36 = v12[12];
                  v34 = v10[12];
                  v30 = v8[12];
                  v17((int)v16, (int)a2);
                  v20 = *(_QWORD *)v36;
                  v19 = v34;
                  v18 = v30;
                }
                v32 = v19;
                v26 = v18;
                sub_431B80(v20, a2);
                v21 = v26;
                v22 = v32;
              }
              else
              {
                v33 = v10[12];
                v29 = v8[12];
                v15((int)v14, (int)a2);
                v22 = v33;
                v21 = v29;
              }
              v27 = v21;
              sub_431B80(v22, a2);
              v23 = v27;
            }
            else
            {
              v28 = v8[12];
              v13((int)v12, (int)a2);
              v23 = v28;
            }
            sub_431B80(v23, a2);
          }
          else
          {
            ((void (__fastcall *)(_QWORD))v11)(v8[12]);
          }
          sub_431B80((__int64)v8, a2);
        }
        else
        {
          ((void (__fastcall *)(_QWORD))v9)(v6[12]);
        }
        sub_431B80((__int64)v6, a2);
      }
      else
      {
        ((void (__fastcall *)(_QWORD))v7)(v4[12]);
      }
      sub_431B80((__int64)v4, a2);
    }
    else
    {
      ((void (__fastcall *)(_QWORD))v5)(v2[12]);
    }
    sub_431B80((__int64)v2, a2);
  }
  else
  {
    ((void (__fastcall *)(_QWORD))v3)(*(_QWORD *)(a1 + 96));
  }
  return sub_431B80(a1, a2);
}

