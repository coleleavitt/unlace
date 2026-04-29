_DWORD *__fastcall sub_30D610(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int8 *a4)
{
  int v8; // eax
  __int128 v9; // rdi
  __int64 v10; // rax
  _DWORD *v11; // r14
  unsigned __int8 *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int128 v16; // rdi
  int *v17; // rcx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  int v21; // r8d
  int v22; // r9d
  char v23; // al
  __int64 v24; // rdi
  char v25; // al
  _DWORD *v26; // rax
  _DWORD *v27; // rax
  int *v28; // [rsp+0h] [rbp-B8h]
  int v29; // [rsp+0h] [rbp-B8h]
  int v30; // [rsp+8h] [rbp-B0h]
  _QWORD *v31; // [rsp+8h] [rbp-B0h]
  _DWORD *v32; // [rsp+8h] [rbp-B0h]
  _DWORD *v33; // [rsp+8h] [rbp-B0h]
  int v34; // [rsp+10h] [rbp-A8h] BYREF
  int v35; // [rsp+18h] [rbp-A0h]
  __int64 v36[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v37; // [rsp+30h] [rbp-88h] BYREF
  __int128 v38; // [rsp+38h] [rbp-80h]
  __int64 v39[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v40; // [rsp+60h] [rbp-58h] BYREF
  __int128 v41; // [rsp+68h] [rbp-50h]
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  while ( 1 )
  {
    *((_QWORD *)&v9 + 1) = a4;
    *(_QWORD *)&v9 = a2;
    v10 = sub_129440(v9, (__int64)a3, 0);
    v11 = (_DWORD *)v10;
    if ( !v10 )
      return nullptr;
    if ( *(_BYTE *)(v10 + 64) )
    {
      v12 = (unsigned __int8 *)(v10 + 64);
      if ( !sub_1255D0(a4, a1, v10 + 64, 0) )
        break;
    }
    v8 = *v11;
    if ( *v11 != 4 )
      goto LABEL_9;
    a4 = (unsigned __int8 *)(v11 + 8);
  }
  if ( *v11 == 8 )
  {
    sub_123A40((__int64)&v34, v12, v13, v14);
    v28 = &v34;
    if ( (unsigned __int8)sub_126F10((unsigned __int64)&v34, a1, v11[9], v18) )
    {
      v36[1] = 0;
      v37 = 0;
      v38 = 0;
      sub_127FE0(a2, (__int64)v36, (__int64)&v34, 0, v19, v20, (int)&v34, v30, v34, v35, 0);
      v39[0] = 0;
      v39[1] = 0;
      v40 = 0;
      v41 = 0;
      sub_127FE0(a2, (__int64)v39, (__int64)a4, 0, v21, v22, v29, (int)v39, v34, v35, v36[0]);
      v23 = sub_64820(v31, v36);
      v24 = v40;
      if ( v23 )
      {
        v25 = sub_317F40(&v37, &v40);
        v24 = v40;
        if ( v25 )
        {
          v26 = v11 + 8;
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree(v40);
            v26 = v11 + 8;
          }
          v32 = v26;
          qfree(v39[0]);
          v27 = v32;
          if ( v37 )
          {
            *(_QWORD *)&v38 = 0;
            qfree(v37);
            v27 = v32;
          }
          v33 = v27;
          qfree(v36[0]);
          sub_11CDA0((__int64)v28);
          return v33;
        }
      }
      if ( v24 )
      {
        *(_QWORD *)&v41 = 0;
        qfree(v24);
      }
      qfree(v39[0]);
      if ( v37 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(v37);
      }
      qfree(v36[0]);
    }
    sub_11CDA0((__int64)v28);
  }
  v8 = *v11;
LABEL_9:
  if ( v8 != 5 )
    return sub_30D1C0((__int64)v11);
  *((_QWORD *)&v16 + 1) = v11 + 8;
  *(_QWORD *)&v16 = a2;
  v17 = (int *)sub_129440(v16, (__int64)a3, 0);
  if ( !v17 )
    return nullptr;
  return sub_30D340(a1, a2, a3, v17);
}
