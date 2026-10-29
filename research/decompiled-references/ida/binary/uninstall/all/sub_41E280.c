__int64 __fastcall sub_41E280(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 result; // rax
  __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rdi
  double v12; // xmm1_8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v24; // [rsp+10h] [rbp-58h] BYREF
  __int64 v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  __int64 v28; // [rsp+30h] [rbp-38h] BYREF
  __int64 v29; // [rsp+38h] [rbp-30h]
  __int64 v30; // [rsp+40h] [rbp-28h]
  __int64 v31; // [rsp+48h] [rbp-20h]

  v4 = a2;
  if ( (_DWORD)a3 == 2 )
  {
    v23 = 1;
LABEL_6:
    v7 = *(_QWORD *)(a4 + 8);
    v8 = v23;
    sub_4AD150(&v26, a2, a3);
    while ( 1 )
    {
      v10 = v8--;
      if ( v10 <= 0 )
        break;
      a2 = v7;
      result = sub_40BBC0(v4, v7, 0);
      if ( (_DWORD)result )
        return result;
    }
    v11 = (unsigned __int64)&v24;
    sub_4AD150(&v24, a2, v9);
    v12 = (double)((int)v24 - (int)v26) * 1000000.0 + (double)((int)v25 - (int)v27);
    if ( v23 <= 1 )
    {
      v11 = 0;
      if ( v23 > 0 )
        v11 = (unsigned int)(int)v12;
      v13 = sub_47BD00(v11);
    }
    else
    {
      v13 = sub_47B930(v12 / (double)v23);
    }
    v28 = v13;
    v14 = sub_496740(v11, a2);
    *(_DWORD *)v14 = 0;
    v29 = v14;
    *(_QWORD *)(v14 + 8) = sub_40FB00(13);
    strcpy(*(char **)(v29 + 8), "microseconds");
    v15 = v29;
    *(_DWORD *)(v29 + 16) = 12;
    *(_QWORD *)(v15 + 24) = 0;
    v16 = sub_496740(13, a2);
    *(_DWORD *)v16 = 0;
    v30 = v16;
    *(_QWORD *)(v16 + 8) = sub_40FB00(4);
    v17 = *(_QWORD *)(v30 + 8);
    *(_WORD *)v17 = 25968;
    *(_BYTE *)(v17 + 2) = 114;
    *(_BYTE *)(*(_QWORD *)(v30 + 8) + 3LL) = 0;
    v18 = v30;
    *(_DWORD *)(v30 + 16) = 3;
    *(_QWORD *)(v18 + 24) = 0;
    v19 = sub_496740(4, a2);
    *(_DWORD *)v19 = 0;
    v31 = v19;
    *(_QWORD *)(v19 + 8) = sub_40FB00(10);
    v20 = *(_QWORD *)(v31 + 8);
    *(_QWORD *)v20 = 0x6F69746172657469LL;
    *(_BYTE *)(v20 + 8) = 110;
    *(_BYTE *)(*(_QWORD *)(v31 + 8) + 9LL) = 0;
    v21 = v31;
    *(_DWORD *)(v31 + 16) = 9;
    *(_QWORD *)(v21 + 24) = 0;
    v22 = sub_46EEB0(4, &v28);
    sub_48AFD0(v4, v22);
    return 0;
  }
  if ( (_DWORD)a3 != 3 )
  {
    sub_458930(a2, 1, a4, "command ?count?");
    return 1;
  }
  a2 = *(_QWORD *)(a4 + 16);
  result = sub_47C180(v4, a2, &v23);
  if ( !(_DWORD)result )
    goto LABEL_6;
  return result;
}

