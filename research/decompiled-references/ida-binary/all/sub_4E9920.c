unsigned __int64 __fastcall sub_4E9920(
        char *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8,
        double a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rbp
  char *v17; // rax
  char *v18; // r10
  char *v19; // r11
  __int64 v20; // r12
  int v21; // r9d
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  double v30; // xmm4_8
  __int64 v31; // rax
  char *v33; // rax
  char *v34; // [rsp+8h] [rbp-90h]
  char *v35; // [rsp+8h] [rbp-90h]
  char *v36; // [rsp+18h] [rbp-80h]
  int v37; // [rsp+18h] [rbp-80h]
  char *src; // [rsp+20h] [rbp-78h]
  _QWORD v40[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v41[3]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( a5 )
  {
    v14 = a4;
    if ( a4 )
    {
      v15 = a5;
      if ( a5 + a4 == 2 )
      {
LABEL_9:
        v35 = a2;
        v22 = *(_QWORD *)a1;
        v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a12 + 48LL))(a12, a11, *(_QWORD *)a2);
        v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a12 + 48LL))(a12, a11, v22);
        v25 = v24;
        if ( v23 )
        {
          if ( v24 )
          {
            v41[0] = sub_4D89F0(a11, *(_DWORD *)(*(_QWORD *)v24 + 24LL * *(int *)(v24 + 96)), 0);
            v26 = *(int *)(v23 + 96);
            v41[1] = v27;
            v28 = sub_4D89F0(a11, *(_DWORD *)(*(_QWORD *)v23 + 24 * v26), 0);
            v40[1] = v29;
            v40[0] = v28;
            if ( sub_4D9280(v23 + 48, (__int64)v40, v25 + 48, v41, a6, a7, a8, a9, v30) )
            {
              v31 = *(_QWORD *)a1;
              *(_QWORD *)a1 = *(_QWORD *)v35;
              *(_QWORD *)v35 = v31;
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v36 = a2;
          if ( v15 >= v14 )
          {
            v20 = v15 / 2;
            v34 = &a2[8 * (v15 / 2)];
            v33 = (char *)sub_4E97C0(a1, (__int64)a2, v34, a11, a12, a6, a7, a8, a9);
            v18 = v36;
            v19 = v33;
            v16 = (v33 - a1) >> 3;
          }
          else
          {
            v16 = v14 / 2;
            v17 = (char *)sub_4E9650(a2, a3, (__int64 *)&a1[8 * (v14 / 2)], a11, a12, a6, a7, a8, a9);
            v18 = v36;
            v19 = &a1[8 * (v14 / 2)];
            v34 = v17;
            v20 = (v17 - v36) >> 3;
          }
          v37 = (int)v19;
          v15 -= v20;
          src = sub_4DD840(v19, v18, v34);
          sub_4E9920((_DWORD)a1, v37, (_DWORD)src, v16, v20, v21, a11, a12);
          v14 -= v16;
          if ( !v14 || !v15 )
            break;
          a1 = src;
          a2 = v34;
          if ( v15 + v14 == 2 )
            goto LABEL_9;
        }
      }
    }
  }
  return v42 - __readfsqword(0x28u);
}
