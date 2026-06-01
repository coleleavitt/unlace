_QWORD *__fastcall sub_923CD0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rbp
  int v4; // edx
  __int64 v5; // r12
  _QWORD *v6; // r13
  __int64 v7; // rax
  int *v9; // rbp
  void *v10; // r14
  char v11[32]; // [rsp+0h] [rbp-B8h] BYREF
  int v12; // [rsp+20h] [rbp-98h] BYREF
  char v13; // [rsp+24h] [rbp-94h]
  __int64 v14; // [rsp+28h] [rbp-90h]
  int v15; // [rsp+30h] [rbp-88h]
  char v16; // [rsp+34h] [rbp-84h]
  __int64 v17; // [rsp+38h] [rbp-80h]
  int v18; // [rsp+40h] [rbp-78h] BYREF
  char v19; // [rsp+44h] [rbp-74h]
  __int64 v20; // [rsp+48h] [rbp-70h]
  int v21; // [rsp+50h] [rbp-68h] BYREF
  char v22; // [rsp+54h] [rbp-64h]
  __int64 v23; // [rsp+58h] [rbp-60h]
  int v24[22]; // [rsp+60h] [rbp-58h] BYREF

  v2 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v3 = *(_QWORD *)(a1 + 336);
  if ( v3 )
    v4 = *(_DWORD *)(v3 - 4);
  else
    v4 = 0;
  v5 = v2;
  if ( (int)v2 < v4 )
  {
    v19 &= 0xFCu;
    v22 &= 0xFCu;
    v9 = (int *)(32LL * v2 + v3);
    v18 = 0;
    v20 = 0;
    v21 = 1;
    v10 = qword_1C7F2C0;
    v23 = 0;
    if ( (*(_BYTE *)(&qword_1C7F2A0 + 1) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v18, &qword_1C7F2A0);
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
        goto LABEL_8;
    }
    else
    {
      v18 = qword_1C7F2A0;
      if ( (qword_1C7F2B0 & 0x100000000LL) == 0 )
      {
LABEL_8:
        v22 &= ~1u;
        v21 = qword_1C7F2B0;
LABEL_9:
        sub_3EBE30((__int64)v24, a1 + 392, (__int64)&v18);
        v13 &= 0xFCu;
        v16 &= 0xFCu;
        v12 = 0;
        v14 = 0;
        v15 = 1;
        v17 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&v12, v9);
        sub_27B340((__int64)v11, (__int64)&v12, v24);
        sub_25A130((char *)&v12);
        sub_25A130((char *)v24);
        sub_25A130((char *)&v18);
        v6 = (_QWORD *)sub_186B270(0x10u);
        v6[1] = sub_1343270(*(_QWORD *)(a1 + 384), v11, *(unsigned __int8 *)(*(_QWORD *)(a1 + 256) + v5));
        *v6 = off_1C559A8;
        sub_25A130(v11);
        return v6;
      }
    }
    sub_182C690(v10, &v21, &qword_1C7F2B0);
    goto LABEL_9;
  }
  v6 = (_QWORD *)sub_186B270(0x10u);
  v7 = sub_1343270(*(_QWORD *)(a1 + 384), &qword_1C7F2A0, *(unsigned __int8 *)(*(_QWORD *)(a1 + 256) + v5));
  *v6 = off_1C559A8;
  v6[1] = v7;
  return v6;
}

