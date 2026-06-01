__int64 __fastcall sub_DDDFF0(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v8; // r12
  unsigned int v9; // r12d
  __int64 v11; // rax
  __int64 (*v12)(); // rdx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 (*v15)(); // rdx
  __int64 v16; // rax
  __int64 *v17; // rdi
  unsigned __int64 v18; // r12
  unsigned __int8 **v19; // rax
  unsigned __int8 **v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v25; // [rsp+10h] [rbp-A8h]
  _DWORD v26[6]; // [rsp+20h] [rbp-98h] BYREF
  int v27; // [rsp+38h] [rbp-80h]
  __int64 v28; // [rsp+40h] [rbp-78h]
  _QWORD v29[13]; // [rsp+50h] [rbp-68h] BYREF

  v8 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v8, 48);
  sub_DFF520(v26);
  sub_DFDA50(v8, 48);
  if ( a4 )
  {
    if ( !v27 )
    {
LABEL_3:
      if ( (unsigned __int8)sub_DA5370(a1, a2, (__int64)v26, 1) )
      {
        v9 = sub_DA59D0(a1, a2, (__int64)v26, a3);
        if ( (_BYTE)v9 )
        {
          sub_DFF4E0(v29, v28, v26[0] - a3, v26[0] - a3);
          v25 = *(_QWORD *)(sub_CDA220((__int64)v29) + 32);
          sub_DFF560(v29);
          v11 = sub_F3F530(*(_QWORD *)(*(_QWORD *)v25 + 48LL));
          v12 = *(__int64 (**)())(*(_QWORD *)v11 + 32LL);
          if ( v12 == sub_9DD400 )
            v13 = sub_B4CD20(v11);
          else
            v13 = ((__int64 (__fastcall *)(__int64))v12)(v11);
          v14 = sub_F3F530(a5);
          v15 = *(__int64 (**)())(*(_QWORD *)v14 + 32LL);
          if ( v15 == sub_9DD400 )
            v16 = sub_B4CD20(v14);
          else
            v16 = ((__int64 (__fastcall *)(__int64))v15)(v14);
          if ( v13 == v16 )
          {
            v22 = *(_QWORD *)(a1 + 176);
            sub_DFF4E0(v29, v28, v26[0] - a3, v26[0] - a3);
            v23 = sub_DFD980(v22, 48);
            sub_DFF520(v23);
            sub_DFF560(v29);
            goto LABEL_5;
          }
          v17 = (__int64 *)v28;
          if ( v27 != 1 )
          {
            if ( (unsigned int)(v27 - 2) <= 1 )
              v17 = nullptr;
            else
              v17 = *(__int64 **)(v28 + 32);
          }
          v18 = sub_CCB860(v17);
          v29[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
          v19 = (unsigned __int8 **)sub_E0FFE0(a1, v29, 2418, 0);
          v20 = v19;
          if ( v19 )
          {
            sub_AC60B0(v19, v18, 8u);
            sub_AC60B0(v20, a5 & 0xFFFFFFFFFFFFFFF0LL, 8u);
          }
        }
      }
      goto LABEL_4;
    }
LABEL_19:
    v9 = 1;
    v21 = sub_DFD980(*(_QWORD *)(a1 + 176), 48);
    sub_DFF4A0(v21, v26);
    goto LABEL_5;
  }
  if ( (unsigned __int8)sub_DA4BF0(a1, a2, (__int64)v26, 1) )
  {
    if ( !v27 )
      goto LABEL_3;
    goto LABEL_19;
  }
LABEL_4:
  v9 = 0;
LABEL_5:
  sub_DFF560(v26);
  return v9;
}

