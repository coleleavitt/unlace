__int64 __fastcall sub_269140(__int64 a1, __int64 a2, int a3)
{
  double v3; // xmm0_8
  const char *v6; // rsi
  unsigned int v7; // r13d
  unsigned int *v9; // r13
  __int64 *v10; // rax
  int v11; // eax
  int v12; // r14d
  _DWORD *v13; // rax
  __int64 *v14; // rsi
  unsigned int *v15; // [rsp+0h] [rbp-100h]
  _QWORD v16[2]; // [rsp+8h] [rbp-F8h] BYREF
  char v17; // [rsp+18h] [rbp-E8h]
  _QWORD v18[2]; // [rsp+28h] [rbp-D8h] BYREF
  char v19; // [rsp+38h] [rbp-C8h]
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  _DWORD *v25; // [rsp+88h] [rbp-78h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h]
  char v27; // [rsp+A0h] [rbp-60h]
  char v28; // [rsp+A1h] [rbp-5Fh]
  __int64 v29; // [rsp+A8h] [rbp-58h]
  __int128 v30; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v31; // [rsp+C0h] [rbp-40h]

  v3 = 0.0;
  v31 = __readfsqword(0x28u);
  v6 = (const char *)a1;
  v16[0] = 0;
  v16[1] = 0;
  v17 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v21 = 0;
  v24 = 0;
  v7 = sub_268E90((__int64)v16, a1, a2, (__int64)&v20, 0.0);
  if ( (_BYTE)v7 )
  {
    v9 = (unsigned int *)sub_4B7580(v16);
    if ( (unsigned __int8)sub_1CD4E0((__int64)v9, 0.0) )
    {
      v10 = (__int64 *)sub_4B76C0(v16, "Local Types", 1);
      sub_1CD740(v9, v10, 0.0);
    }
    v11 = reg_int_op("Desktops84Fixed", 0, 0, 0);
    if ( !v11 )
    {
      do
      {
        v19 = 0;
        v12 = v11 + 1;
        v18[0] = 0;
        v18[1] = 0;
        v25 = nullptr;
        v26 = 0;
        v13 = (_DWORD *)qvector_reserve(&v25, 0, 8, 1);
        v25 = v13;
        v14 = (__int64 *)&v25;
        *(_QWORD *)&v26 = 8;
        *v13 = 1634100548;
        *(_DWORD *)((char *)v13 + 3) = 1953264993;
        *((_BYTE *)v25 + 7) = 0;
        v27 = 0;
        v28 = v12;
        v29 = 0;
        v30 = 0;
        if ( (unsigned __int8)sub_268E90((__int64)v18, (__int64)&v25, 1, 0, v3) )
        {
          v15 = (unsigned int *)sub_4B7580(v18);
          if ( (unsigned __int8)sub_1CD4E0((__int64)v15, v3) )
          {
            v14 = (__int64 *)sub_4B76C0(v18, "Local Types", 1);
            if ( (unsigned __int8)sub_1CD740(v15, v14, v3) )
            {
              v14 = (__int64 *)&v25;
              sub_268730((__int64)v18, (__int64)&v25, 0);
            }
          }
        }
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          v3 = qfree(v29, (const char *)v14);
        }
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          v3 = qfree(v25, (const char *)v14, v3);
        }
        jvalue_t_clear(v18);
        v11 = 1;
      }
      while ( v12 != 2 );
      reg_int_op("Desktops84Fixed", 1, 1, 0);
    }
    v6 = (const char *)v16;
    v7 = sub_268DF0((__int64)&v20, (__int64)v16, a3);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    qfree(v23, v6);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20, v6);
  }
  jvalue_t_clear(v16);
  return v7;
}
