__int64 __fastcall sub_2C350(__int64 a1, __int64 a2, unsigned __int16 a3, bool *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 v9; // r14
  int v10; // eax
  int v11; // r13d
  int v12; // r14d
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // r9d
  int v16; // eax
  int v17; // r15d
  unsigned __int64 v18; // rax
  int v19; // eax
  int v20; // r9d
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // [rsp+8h] [rbp-80h]
  int v24; // [rsp+8h] [rbp-80h]
  int v26; // [rsp+10h] [rbp-78h]
  int v27; // [rsp+18h] [rbp-70h]
  unsigned __int16 v28; // [rsp+22h] [rbp-66h] BYREF
  int v29; // [rsp+24h] [rbp-64h] BYREF
  __int64 v30; // [rsp+28h] [rbp-60h] BYREF
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v33[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a3;
  v33[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(_QWORD *)(v5 + 88);
  LODWORD(v32) = 0;
  if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD *))(v6 + 112))(a2, a3, &v32, v33)
    && (_DWORD)v32 )
  {
    v9 = *(_QWORD *)(v5 + 88);
    v30 = 0;
    if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(v9 + 88))(a2, v4, &v31, &v30) )
    {
      if ( (*(unsigned int (__fastcall **)(__int64, unsigned __int16 *, __int64 *))(v9 + 200))(v31, &v28, &v30) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD *))(v9 + 544))(v4, v33);
        if ( (debug & 0x400000) != 0 )
        {
          v16 = (*(__int64 (__fastcall **)(__int64))(v9 + 464))(v30);
          v17 = v33[0];
          v23 = v16;
          v18 = sub_28270(a1, a2, 0);
          v19 = sub_817F0(
                  v18 & 0x7FFFFFFFFFFFFFFFLL,
                  *(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL,
                  *(unsigned int *)(a1 + 160));
          sub_88B80(
            (unsigned int)"Error DIE %s retrieving flag attribute format %s (0x%x) : %s\n",
            v19,
            v17,
            v4,
            v23,
            v20);
        }
      }
      else if ( v28 == 12 )
      {
        if ( !(*(unsigned int (__fastcall **)(__int64, int *, __int64 *))(v9 + 256))(v31, &v29, &v30) )
        {
          v7 = 1;
          *a4 = v29 != 0;
          goto LABEL_10;
        }
        (*(void (__fastcall **)(_QWORD, __int64 *))(v9 + 544))(v4, &v32);
        (*(void (__fastcall **)(_QWORD, _QWORD *))(v9 + 536))(v28, v33);
        if ( (debug & 0x400000) != 0 )
        {
          (*(void (__fastcall **)(__int64))(v9 + 464))(v30);
          v27 = v32;
          v26 = v28;
          v24 = v33[0];
          v21 = sub_28270(a1, a2, 0);
          v22 = sub_817F0(
                  v21 & 0x7FFFFFFFFFFFFFFFLL,
                  *(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL,
                  *(unsigned int *)(a1 + 160));
          sub_88B80(
            (unsigned int)"Error DIE %s retrieving flag attribute value %s (0x%x)/%s (0x%x): %s\n",
            v22,
            v24,
            v26,
            v27,
            v4);
        }
      }
      else if ( v28 == 25 )
      {
        v7 = 1;
        *a4 = 1;
        goto LABEL_10;
      }
      v7 = 0;
LABEL_10:
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(v9 + 480))(*(_QWORD *)(v5 + 160), v31, 10);
      return v7;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD *))(v9 + 544))(v4, v33);
    if ( (debug & 0x400000) != 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64))(v9 + 464))(v30);
      v11 = v33[0];
      v12 = v10;
      v13 = sub_28270(a1, a2, 0);
      v14 = sub_817F0(
              v13 & 0x7FFFFFFFFFFFFFFFLL,
              *(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL,
              *(unsigned int *)(a1 + 160));
      sub_88B80((unsigned int)"Error DIE %s retrieving flag attribute %s (0x%x) : %s\n", v14, v11, v4, v12, v15);
    }
  }
  return 0;
}
